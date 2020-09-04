# Sonic4LaunchStub
Stub launcher for Sonic 4 on PC

This executable replaces your `SonicLauncher.exe` with a stub to launch the extracted `jar` file for the Sonic the Hedgehog 4 - Episode 1 launcher.

## Background Info
The Sonic 4 EP1 Launcher is a Java app wrapped into an `exe` with `Launch4j`. Unfortunately, it targets Java 6 and nothing else. Thus, we are unable to launch and configure the settings and controls. This stub aims to replace the `Launch4j` wrapper so as to ~~restore Steam status intergration and~~ allow usage of a modern version of Java.

## Prerequisites
- Sonic 4 Episode 1 (PC)
- [7-Zip](https://www.7-zip.org)
- A Java runtime of some sorts. Make sure that it has been added to PATH.
    - [AdoptOpenJDK](https://adoptopenjdk.net/) is recommended.
- Stub launcher downloaded from the [releases](https://github.com/JakeIsMeh/Sonic4LaunchStub/releases) page

## Instructions
### A. Repackaging the launcher
1. Navigate to the install folder: `[Steam Library Root]\steamapps\common\Sonic the Hedgehog 4 EP 1`
2. Select `SonicLauncher.exe` and right-click. `7-Zip > Open archive`
3. Select everything in 7-Zip and drag them to an empty folder.
4. Navigate to the folder you dragged the files to and select them all
5. Right-click. `7-Zip > Add to "[name].zip"`
6. Rename zip file to `SonicLauncher.jar`
7. Move jar file to install folder
8. Delete the folders created in step 3.

### B. 'Replacing' the Steam Launcher
1. Navigate to the install folder: `[Steam Library Root]\steamapps\common\Sonic the Hedgehog 4 EP 1`
2. Rename `SonicLauncher.exe` to `SonicLauncher.exe.bak`
3. Drag the stub launcher into the folder.
    - Ensure the stub launcher is still named `SonicLauncher.exe`

You're done! now go and play the game that you (hopefully) paid for.

### SmartScreen blocked this program from running
Right-click the stub launcher and click on properties. At the bottom of the window there should be a checkbox to unblock it. Hit Apply and OK.


## Self-building
`If you're self-building this stub you have trust issues, but I'll still document this for you. <3`

1. Make sure you have MinGW installed.
    - I used `MinGW-W64-builds-4.3.5`, specifically `gcc-x86_64-8.1.0-posix-seh`.
2. Add the MinGW `bin` folder to PATH
3. Clone the repository, navigate to it and execute `gcc main.c -Wl,-subsystem,windows -o main`
4. Follow install instructions

## "Issues"
- ~~Stub launcher does not run silently, thus creating a console window~~
  - Fixed in release v1.0
- This isn't a native rewrite and/or replacement for the launcher

## Licensing
Check in LICENSE.md
