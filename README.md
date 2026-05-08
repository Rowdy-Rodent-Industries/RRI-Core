## RRI

# General

- This is the AUX mod of Wolfpack eclipse company. Within this Read Me, you will find basic tutorials for functioning parts of the mod. If you have questions please reach out to Rat for more information

# Mod Structure

- This mod is split into a few different addons as well as subaddons. The intention of this is to create a modular mod that allows usage for many people. Below are the PBOs found within the mod 

## Equipment 

- This PBO houses all custom textures for uniforms, helmets, etc. There are multiple subaddons splitting up the equipment to ensure organization within the mod. 
- The Equipment PBO houses all macro's and information for the inputting of customs, to see any guides and infromation, please check out the read me found in the equipment PBO. 

## Requipments for each PBO
- To add a new PBO, you'll need a few basic things, below is what every PBO should include to for it to function

### $PBOPREFIX$
- This is a single file, that holds the PBOPREFIX used for the mod. It also tells `hemtt` and other macro's how the file path works. I'd suggest copying the file from another PBO and replacing the final name with the name for the PBO

### config.cpp
- For the most part this file is copy and paste between each one. Because of the structure of this mod, most of the work will be housed in HPPs included into a CPP.
- This file will mainly just #include the other hpps into it, as well as ensure a proper `Cfgpatches` has been set up.

### script_component.hpp
- This is needed for each addon and subaddon. This helps define the component and subcomponents used for the mod.
- Macro's like `GVAR` and `QPATHOF` use this file to define which PBO its looking in, and what it's called. 
- For this to properly work, you'll need to update a few lines to make sure it matches the exact name as the PBO folder name.

# HEMMT Information

- HEMTT is the building tool we use within the mod. Hemtt is developed and run by the ace team, and works very well to ensure code is proper and up to date. Below is the how to use

## Setup 

- Within the tools folder, you will find a `setup.bat`. Any time you need to download or update hemtt, run this bat and it will do it automatically. You will need to run this setup for every mod you work with. 

## How to use

- Before we get started, to use hemtt you need to use the terminal for VSC. Please make sure you have the proper terminal, and its opened into the proper file path.
- Hemtt has a few key commands, you will find them below.
    - `hemtt build` builds the mod. It's output is put in the `hemttout` folder, under the build folder. This is what you should be using to test and build your mod initially.
    - `hemtt release` builds your mod for release. It ensures that everything is bianrized, and creates keys for your mod. This is what you should be using when you are ready to push your mod to the workshop. This will build under the `release` folder.
    - `hemtt launch` builds your mod and launches your game with the modlist provided in the `project.tml` file. This isn't working right now for you but I will set it up later
    - `hemtt photoshoot` will create editor previews for any nonexistent editor preview currently in your code. All you have to do is add in the code for it, and have the file open, and when you run this script it will create them for you!

## Warnings VS errors

- Hemmt works in two ways, warnings and errors.
- Warnings are problems with the code that should be fixed, however isn't going to break the game if they're not. You can choose to ignore them if you wish but for the betterment of you and your players, fix them!
- Errors are probelms with the code that need to be fixed. It will be a big red error and show you what's wrong. These NEED to be fixed otherwise your mod will not build or run.
- ALl of this information will popup in the terminal when you run `hemtt build` or `hemtt release`

# Macro Usage

## Class Names
- Within the mod, rather than manually tpying out classnames we use macro'd classnames. Macro'd classnames help keep consistentcy within mods, as well avoids repeat classnames. Now if there are addon specific classnames, the information will be found in the `readme` of that addon, however common classnames will be found below.

### GVAR
- `GVAR` is the basic macro'd classname used among all pbos if a specific one isn't found. `GVAR` is a one variable macro, that pulls the prefix, addonname, and your variable into one classname. So if you do `GVAR(BASE)` inside of your `equipment` PBO, it will come out to `wps_equipment_base`
- To use the `GVAR`'d classnames among other pbos, use the next classname macro provided.
- To create a Quoted version of the classname, just do `QGVAR`. This would work in strings or arrays.

### EGVAR
- `EGVAR` is a two step macro used for classnames. When using `EGVAR` you are inputting two variables. 
- When calling a `GVAR`'d class name from one PBO to another, use this macro. This macro does NOT include the addon name, just the prefix, and then to two variables.
- So for example if you made `GVAR(Base)` in your equipment PBO, but need to reference it within your vehicle pbo, you won't do `GVAR(Base)`, you would instead of `EGVAR(equipment,base)`.
- You may also use `EGVAR` for classes that will be used among multiple PBOs, like the Editorsubcategories, which are just `EGVAR(edsubcat,trooper)` to make life easier.
- When working with subaddons, similarly to how your equipment PBO is set up, you'd simply just add the subaddon name to your PBO name, for example if you wish to get a helmet from your equipment PBO, you would do `EGVAR(equipment_helmets,base)`
- To create a Quoted version of the classname, just do `QEGVAR`. This would work in strings or arrays.

## File Paths
- Instead of manually filepathing to a file, we will now use macro'd filepaths to make life simplier. Below are the two macro's that can be used.

### QPATHOF
- `QPATHOF` is a macro'd filepath, that looks within the given pbo for your file. Most of the time it's working locally, so you would just type `QPATHOF(data\foldername\filename.paa)`
- `QPATHOF` already creates quotes around the file path, allowinge ease of access within strings and arrays
- To find the file path of a file outside of your PBO, use the following macro

### QPATHTOEF
- `QPATHOEF` is a macro'd filepath that uses a two step variable. Similar to `QEGVAR` you'd use this to reference files from a seperate PBO than you are currently working.
- As an example, if you wish to referene a file within equipment, you would put `QPATHOEF(equipment,data\folder\filename)`
- When working with subaddons, similarly to how your equipment PBO is set up, you'd simply just add the subaddon name to your PBO name, for example if you wish to get a helmet from your equipment PBO, you would do `QPATHOEF(equipment_helmets,data\folder\filename)`

# Github Usage

## General Overview
- Github is where you store the mod. If you are smart you will actively use github to work with your team to properly update, store, and distribute your mod. Below is what you need to know about github

## General Commands
- `Git pull` pulls the current version of the mod on the hub. If things were updated and pushed, you'll need to pull to download it on your local computer
- `Git status` shows your current status, if your behind, ahead, or in merge. 

## Branches
- Branches are how you maintain projects in github. Use them to be smart
- To open up a new branch, do `git checkout -b BRANCH_NAME` and this will open up a new branch based off of your current branch. Always open up new branches starting from master
- TO switch to a branch, do `git checkout BRANCH_NAME` which will switch to that branch
- To finish a project on a branch, go into github and open a `pull_request`
