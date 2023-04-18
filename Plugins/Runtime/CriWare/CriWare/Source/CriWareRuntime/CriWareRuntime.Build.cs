/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Build Settings of CriWareRuntime Module
 * File     : CriWareRuntime.Build.cs
 *
 ****************************************************************************/
using System.IO;

namespace UnrealBuildTool.Rules
{
    public class CriWareRuntime : ModuleRules
    {
        public CriWareRuntime(ReadOnlyTargetRules Target) : base(Target)
        {
            /* 4.15 - remove PCH includes */
            PrivatePCHHeaderFile = "Private/CriWareRuntimePrivatePCH.h";

            PrivateIncludePaths.AddRange(new string[]
            {
                "CriWareRuntime/Private",
            });

            PublicDependencyModuleNames.AddRange(
                new string[] {
                    "Engine",
                    "Core",
                    "CriWare"
                }
            );

            PrivateDependencyModuleNames.AddRange(
                new string[] {
                    "CoreUObject",
                    "RHI",
                    "RenderCore",
                    "SlateCore",
                    "HeadMountedDisplay",
                    "Projects"
                }
            );

            /* backward compatibility with 4.21 */
            BuildVersion Version;
            if (BuildVersion.TryRead(BuildVersion.GetDefaultFileName(), out Version) &&
                Version.MinorVersion < 22)
            {
                PublicDependencyModuleNames.Add("ShaderCore");
            }

            string engine_path = System.IO.Path.GetFullPath(Target.RelativeEnginePath);

            PrivateIncludePaths.AddRange(
                new string[] {
                    engine_path + "Source/Runtime/Engine/Private",
                }
            );

            if ((Target.Platform == UnrealTargetPlatform.Win32)
                || (Target.Platform == UnrealTargetPlatform.Win64))
            {
                AddPublicSystemLibraries("propsys.lib");
                if (Target.WindowsPlatform.bNeedsLegacyStdioDefinitionsLib)
                {
                    AddPublicSystemLibraries("legacy_stdio_definitions.lib");
                }
            }

            /* Intel Media SDK */
            if (Target.Platform == UnrealTargetPlatform.Win64 ||
                Target.Platform == UnrealTargetPlatform.Win32)
            {
                string IntelDir = "/../../Binaries/ThirdParty/Intel/";
                string LibName = Target.Platform == UnrealTargetPlatform.Win64 ? "libmfxsw64.dll" : "libmfxsw32.dll";
                string LibPath = IntelDir + Target.Platform.ToString() + "/" + LibName;
                if (File.Exists(ModuleDirectory + LibPath))
                {
                    RuntimeDependencies.Add(ModuleDirectory + LibPath, StagedFileType.NonUFS);
                    AddPublicDefinition("CRIWARE_USE_INTEL_MEDIA=1");
                }
            }

            /* CRIがサポートするプラットフォームかどうか。サポート対象ならラベルを作成 */
            string CriPlatformLabel = "NOT_SUPPORTED";
            if (Target.Platform == UnrealTargetPlatform.Win64 || Target.Platform == UnrealTargetPlatform.Win32)
            {
                CriPlatformLabel = "pc";
            }
            else if (Target.Platform == UnrealTargetPlatform.Mac)
            {
                CriPlatformLabel = "macosx";
            }

            /* CRI のサポート対象であるかどうかを示すをプロパティを追加。他のモジュールスクリプトから参照する */
            AddPublicDefinition(string.Format("WITH_CRIWARE={0}", (CriPlatformLabel == "NOT_SUPPORTED") ? 0 : 1));

            /* CRI プラグイン拡張各種が有効かどうかを調べる。有効ならプロパティを追加 */
            {

            }

            if (Target.bBuildEditor == true)
            {
                PublicDependencyModuleNames.Add("UnrealEd");
                PrivateDependencyModuleNames.Add("Persona");
                PublicIncludePathModuleNames.Add("TargetPlatform");
                PrivateIncludePathModuleNames.Add("CriWareEditor");
                PublicIncludePathModuleNames.Add("CriWareEditor");
                DynamicallyLoadedModuleNames.Add("CriWareEditor");
            }

            AddPublicDefinition(string.Format("CRIWARE_UE4_LE=1"));
        }

        public void AddPublicDefinition(string Definition)
        {
            string PublicDefinitionsPropertyName = "PublicDefinitions";

            /* backward compatibility with 4.18 */
            BuildVersion Version;
            if (BuildVersion.TryRead(BuildVersion.GetDefaultFileName(), out Version) &&
                Version.MinorVersion < 19) {
                PublicDefinitionsPropertyName = "Definitions";
            }
            // <PublicDefinitions>.Add(Definition)
            object PublicDefinitions = GetType().GetField(PublicDefinitionsPropertyName).GetValue(this);
            PublicDefinitions.GetType().GetMethod("Add").Invoke(PublicDefinitions, new object[] { Definition });
        }

        public void AddPublicSystemLibraries(string LibName)
        {
            string TheObjectName = "PublicSystemLibraries";

            /* backward compatibility with 4.23 */
            BuildVersion Version;
            if (BuildVersion.TryRead(BuildVersion.GetDefaultFileName(), out Version) &&
                Version.MinorVersion < 24) {
                TheObjectName = "PublicAdditionalLibraries";
            }

            object TheObject = GetType().GetField(TheObjectName).GetValue(this);
            TheObject.GetType().GetMethod("Add").Invoke(TheObject, new object[] { LibName });
        }

		static public bool TargetPlatformTryParse(string Name, out UnrealTargetPlatform Platform)
		{
			/* backward compatibility with 4.24 */
			BuildVersion Version;
			if (BuildVersion.TryRead(BuildVersion.GetDefaultFileName(), out Version) &&
				Version.MinorVersion < 25)
			{
				return System.Enum.TryParse(Name, out Platform);
			}
			else
			{
				return UnrealTargetPlatform.TryParse(Name, out Platform);
			}
		}
    }
}
