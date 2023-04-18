@echo off

rem ## First, make sure the batch file exists in the folder we expect it to.  This is necessary in order to verify that our relative paths are correct
if not exist %~dp0..\..\..\..\..\Binaries\Win64 goto Error_BatchFileInWrongLocation

rem ## Change the CWD to /Engine/Binaries/Win64.
pushd %~dp0..\..\..\..\..\Binaries\Win64
if not exist ..\..\Plugins\Runtime\CriWare\CriWare\BatchFiles\GenerateGlobalizationFiles.bat goto Error_BatchFileInWrongLocation

SET GENERATED_CONFIG=Plugins/Runtime/CriWare/CriWare/Config/Localization/CriWare
if "%1" == "" (
    goto Error_NoConfigAction
) else if "%1" == "Help" (
    goto Help
)

SET GENERATED_CONFIG=%GENERATED_CONFIG%_%~1.ini

if not exist ../../%GENERATED_CONFIG% goto Error_ConfigFileGenFailed
echo %~1: Processing files... 

rem ## TODO: When -DisableSCCSubmit appears in a build we can pass in the following p4 flags to do auto checkout. -EnableSCC -DisableSCCSubmit.  For now files need to be checked out manually
@echo on
UE4Editor.exe -run=GatherText -config=%GENERATED_CONFIG% -unattended > %~dp0\GenerateGlobalizationLog.txt
@echo off
if not %ERRORLEVEL% == 0 goto Error_ResourceFileGenFailed

rem ## Success!
echo.
echo Success!
goto Exit


:Error_BatchFileInWrongLocation
echo GenerateGlobalizationFiles ERROR: The batch file does not appear to be located in the /Engine/Build/BatchFiles directory.  This script must be run from within that directory.
pause
goto Exit

:Error_ConfigFileGenFailed
echo GenerateGlobalizationFiles ERROR: Failed to find config file in the following location: "%GENERATED_CONFIG%"
pause
goto Exit

:Error_ResourceFileGenFailed
echo GenerateGlobalizationFiles ERROR: Failed to generate localization resource files.  See GenerateGlobalizationLog.txt for details.
pause
goto Exit

:Error_NoConfigAction
echo GenerateGlobalizationFiles ERROR: No Action selected. Use: Gather ^| Export ^| Import ^| Compile ^| GenerateReports ^| Clean ^| Repair. 
echo Or you can use 'Help' to show descriptions of different actions.
goto Exit

:Help
echo Usage: %~nx0 (Gather ^| Export ^| Import ^| Compile ^| GenerateReports ^| Clean ^| Repair ^| Help)
echo.
echo Call Unreal Engine localization system with predefined settings.
echo Each setting is defined as 'Action'. In order to generate the localized resources use first 'Gather'.
echo Use 'Export' to optain editable localized file (.po) in each local folder (en, ja...). Once Edited, use 'Import' to append changes. 
echo Finally use 'Compile' to create a binary resource file (.locres) consumable by Unreal Engine.
echo.
echo More information about localization in Unreal Engine can be found at this page:
echo    https://docs.unrealengine.com/latest/INT/Gameplay/Localization/Overview/index.html
echo.
echo Actions Descriptions:
echo.
echo    Gather: Scan and collect all localizable text form source files (.cpp, .h, .ini) in source folder.
echo            Then generates a manifest file (.manifest) and localized archive files (.archives).
echo.
echo    Export: Exports a human editable file (.po) to archive file (.archive). 
echo.
echo    Import: Imports a human editable file (.po) to archive file (.archive). 
echo.
echo    Compile: Transforms achive files (.archive) to resource files (.locres) usable by Unreal Engine.
echo.
echo    Clean: Will gather from source as 'Gather' does but entries in an existing archive file that lack a translation will be removed before the archive is updated with new entries from the manifest. The result is that entries no longer present in the manifest and not already translated are purged.
echo.
echo    Repair: Repairs and updates localization data between different versions. It repairs manifests and archives exclusively. Localization resources can be regenerated from repaired/updated manifests and archives as usual. (Repair is not available since UE 4.14.)
echo.
echo    GenerateReports: generates and updates reports such as word counts and text conflicts.
echo.
echo    Help: This is not an Action, it simply shows this message.
echo.
goto Exit

:Exit
rem ## Restore original CWD in case we change it
popd

