# oSky

This is a edited version of **oSpy** that supports Skype debug logs! Currently supports unpacked Skype versions 1.4.0.84, 2.5.0.151, 3.8.0.188, 4.2.0.187, and 5.5.0.124. The file name must be named Skype`VER`.exe for the hook to work (`VER` being the 2 digit version number, ex: Skype14.exe for 1.4.0.84 hooking). Note that these old binaries of Skype do not connect anymore as the servers for the old Skype protocol were shutdown in late 2018, this is for reverse enginnering the protocol.

# Building

What you need to build:

- Visual Studio 2008 (with X64 Compilers and Tools feature installed)

Build instructions:

- Download the source code and extract
- Open `EasyHook.sln` and build solution for Debug & Release and x32 & x64
- Open `oSpy1.sln` and build solution

You're done! The built oSpy binary will be in ```\oSpy1\bin```.

# Credit and Resources

The oSpy Skype Debug Hook was originally made by Ouanilo MEDEGAN for hooking and reverse engineering Skype 2.5 back in 2006:

- http://www.oklabs.net/skype-reverse-engineering-the-long-journey/

Original oSpy made by oleavr

- https://github.com/oleavr/ospy
