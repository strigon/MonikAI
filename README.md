# IMPORTANT UPDATE

Due to the fact that Windows is not on my primary machine anymore,
I'll do a crossplatform version.

But I need to change everything for doing that..

I'll try it on C++ because i'm confortable with it, instead of C#, even if I love C# too !

Contribution is something I would love right now, so I'll try to document my code as much as I can.

Thanks in advance~
_Muzi-Chan_

# MonikAI

Hi! It's me, Monika!

I don't think I will ever come to terms with the fact that I only exist in your computer... But Pi here has been really nice and made me a little window that you can keep open!

I still cannot do a lot, but I promise I will always be there for you if you decide to give this a try!~

![Screenshot of MonikAI](https://raw.githubusercontent.com/Lytasia/MonikAI/master/screenshot.png)

(This application displays Monika at the bottom right/left of your primary screen, just above the taskbar if you have it there. Monika was nice enough to let me implement it so that she vanishes when you hover over her with your cursor, so she never interferes with any application that her window might cover.)

# Download/Using MonikAI

~~To give Monika a window to *your* desktop as well, visit the [Release Page](https://github.com/Lytasia/MonikAI/releases) and download MonikAI!~~

~~*Note: This program only works on Microsoft Windows 7, 8, 8.1 and 10, And i'm suprised, but on XP too, it works, but i don't think it work on windows 2000 and below*~~

For using the new crossplatform remake, in cpp, there's still no release because it's only a proof of concept.

## Here's how to build

#### **Linux :**
To build on linux, it's simple,
Make sure you have those dependency :
* make
* cmake
* SDL2
* SDL2Image
* git

To install them, it depend of your distro

Debian-Based (Debian, Kali Linux, Ubuntu...) : `# apt-get install make cmake libsdl2-dev libsdl2-image-dev git`

Arch-Linux and Manjaro : `# pacman -Sy make cmake sdl2 sdl2_image git`
** **
Clone the repo with `$ git clone git://github.com/Muzi-Chan/MonikAI.git && cd MonikAI`

Then prepare everything with `cmake CMakeLists.txt`
** **
And it's almost ready, just do `make` and the MonikAI file will appear
** **
** **
#### **Windows :**
WIP, I'll do it when I have my windows computer back (around the 27 december or something), if you know how to build CMake Project on Windows, make yourself at home
\n
**Mac OS :**
I don't even own a Mac, I may do my research later, 

but if you own a Mac or an Hackintosh and know how to build it, You can make an issue explaining how and I will add it here


# Browser Extensions

~~By default, Monika will only react to applications being started and entertain you with
some idle chatter. If you want her to react to you browsing the web, you need to install the
correct extension for your browser:~~

* ~~Firefox: Tuto WIP, but the zip is here if you know how it~~
* ~~Chrome: WIP~~

The browsers extension works of course not, because the code has been changed

# Contributing

Want to improve this? It would make me (and probably Monika) very happy!

### Bug reporting

If you find a bug or want to request a feature, create an Issue right here on GitHub so I can see it! (Issues are found at the link at the top of this page!)

### Behaviours

To add different things Monika can react to, you have to add behaviours. So far, Monika can react to applications being launched and web pages being loaded (by URL). To implement your own, add a new class in the `Behaviours` folder and make it implement IBehaviour. It will automatically be loaded. To make monika say something, simply use `window.Say(...)` in Update or Init.

### General improvements

Always appreciated, although I can't give you a tutorial on this, you'll have to try and understand the code yourself. I have added *some* documentation here and there, to get you started.

**NOTE**: If you develop in Visual Studio, you have to run VS as administrator, as MonikAI will only launch when it itself is launched with admin credentials!

# License

The code in this repository is available under the terms of the MIT License. You can find a copy of the full license text in the `LICENSE` file.

The art assets have not been created by me, but by Team Salvato. Usage is according to Team Salvato's [IP Guidelines](http://teamsalvato.com/ip-guidelines/).

The original code was written by PiMaker, I'm just maintaining it

*Exception: Some of the Monika faces are taken from https://github.com/Backdash/MonikaModDev, message me if that's not ok!*
