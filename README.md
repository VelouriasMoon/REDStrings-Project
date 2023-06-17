# REDStrings-Project
REDStrings Project is a modding base uProject for Scarlet Nexus

## Navigation
- [Requirements](#requirements)
- [Info](#info)
- [Additional Tools](#additional-tools)
- [Engine Plugins](#engine-plugins)

## Requirements
[Custom Engine](https://drive.google.com/file/d/1OyycGgRADiiR6uM43pEU8WWtt7LvWHGQ/view?usp=share_link) - Scarlet Nexus requries a custom engine build since it mixes 2 different engines. Most files just use standard unreal 4.25+ but meshes are a mix of 4.25 and 4.25+.

## Info
This guide was made [narknon](https://github.com/narknon) for Hogwarts Legacy but the same logic applies for this game  
[Packaging mods for IO Store(utoc/ucas)](https://github.com/narknon/PhoenixUProj/wiki/Packaging-assets-as-IO-Store-(utoc-ucas)#to-pak-files-as-ucasutoc)

chunks used by the base game `0-29`, `42-67`, `71-74`, `81-84`, `99`

## Additional Tools
- [UTOC Signature Bypass patch](https://www.nexusmods.com/scarletnexus/mods/18) by [DeathChaos](https://github.com/DeathChaos25) required to load mods properly
- [ScarletNexus Blender Tools](https://github.com/VelouriasMoon/ScarletNexus-Blender-Tools) - Useful plugin to asist with model edits

## Engine Plugins
This game uses many plugins including some in house ones like "Action System" and "SAS Cable Anim" which have also been compiled from UHT dumps from [UE4SS-RE](https://github.com/UE4SS-RE/RE-UE4SS) However a few functional plugins have been included which I could find online for free.  
[Vertex Anim Toolset](https://github.com/Rexocrates/Vertex_Anim_Toolset)  
[Kawaii Physics](https://github.com/pafuhana1213/KawaiiPhysics)  
[Criware Runtime](https://archive.org/details/cri-sdk) - this plugin is incomplete and is missing things like uMana which have been included in the projects dummy code.  
[Data Table Editor Scripting Utilities](https://ue4resources.com/data-table-editor-utilities) - Not part of the game but provides useful tools for editing data tables which are used for many things in the game including string tables.  

Other Paid plugins from the marketplace, some of which have dummy code included if the plugin contained classes, that I could find are  
[CascadeExtensionPlugin](https://www.unrealengine.com/marketplace/en-US/product/particle-editor-extension)  
[PivotTool](https://www.unrealengine.com/marketplace/en-US/product/pivot-tool)  
[InstanceTool](https://www.unrealengine.com/marketplace/en-US/product/instance-tool)  
[MORT](https://www.unrealengine.com/marketplace/en-US/product/multi-objects-renaming-tool)  
[HorizonUIPlugin](https://www.unrealengine.com/marketplace/en-US/product/horizon-ui-plugin)  
[PTMTool](https://www.unrealengine.com/marketplace/en-US/product/property-transfer-tool)  
[DragonIK](https://www.unrealengine.com/marketplace/en-US/product/dragon-ik-animal-inverse-kinematics)  
[NotYetContentBrowser](https://www.unrealengine.com/marketplace/en-US/product/not-yet-unused-assets-filter)  
[RMAFoliageTools](https://www.unrealengine.com/marketplace/en-US/product/rmafoliagetools)  
[SimpleController](https://www.unrealengine.com/marketplace/en-US/product/simplecontroller)  
Any of these plugins can be bought and included in the plugins folder if you prefer functional plugins


