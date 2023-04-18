/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Build Settings of CriWare Module
 * File     : CriWare.Build.cs
 *
 ****************************************************************************/
using System.IO;
namespace UnrealBuildTool.Rules
{
	public class CriWare : ModuleRules
	{
		public CriWare(ReadOnlyTargetRules Target) : base(Target)
		{
			Type = ModuleType.External;

			string CriWarePath = Path.Combine(ModuleDirectory, "cri/");

			if (Target.Platform == UnrealTargetPlatform.Win64) {
				PublicIncludePaths.Add(CriWarePath + "pc/include");
                PublicAdditionalLibraries.AddRange(
                    new string[] {
                            CriWarePath + "pc/libs/x64/cri_ware_pcx64_le_import.lib"
                    }
                );
                PublicDelayLoadDLLs.Add("cri_ware_pcx64_le.dll");
                //PrivateDependencyModuleNames.AddRange(new string[] { "CriWareRuntime" });
                RuntimeDependencies.Add(Path.Combine(CriWarePath, "pc/libs/x64/cri_ware_pcx64_le.dll"));
			}
		}

        public void AddPublicSystemLibraries(string LibName)
        {
            string TheObjectName = "PublicSystemLibraries";

            /* backward compatibility with 4.23 */
            BuildVersion Version;
            if (BuildVersion.TryRead(BuildVersion.GetDefaultFileName(), out Version) &&
                Version.MinorVersion < 24)
            {
                TheObjectName = "PublicAdditionalLibraries";
            }

            object TheObject = GetType().GetField(TheObjectName).GetValue(this);
            TheObject.GetType().GetMethod("Add").Invoke(TheObject, new object[] { LibName });
        }

        public void AddRangePublicSystemLibraries(string[] LibNameArray)
        {
            string TheObjectName = "PublicSystemLibraries";

            /* backward compatibility with 4.23 */
            BuildVersion Version;
            if (BuildVersion.TryRead(BuildVersion.GetDefaultFileName(), out Version) &&
                Version.MinorVersion < 24)
            {
                TheObjectName = "PublicAdditionalLibraries";
            }

            object TheObject = GetType().GetField(TheObjectName).GetValue(this);
            TheObject.GetType().GetMethod("AddRange").Invoke(TheObject, new object[] { LibNameArray });
        }

        public void AddCriLibrariesToPublicAdditionalLibraries(string LibraryPath, string[] Archs, string[] LibFilenames)
        {
            foreach (var Arch in Archs)
            {
                foreach (var LibFilename in LibFilenames)
                {
                    PublicAdditionalLibraries.Add(Path.Combine(LibraryPath, Arch, LibFilename));
                }
            }
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