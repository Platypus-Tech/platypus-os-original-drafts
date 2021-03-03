# Platypus OS Desktop
The desktop for Platypus OS. Because Platypus OS is a totally new thing (Ok, maybe not totally, there are some, actually, a lot of files from the Linux kernel), it has an (almost) totally new kernel, and this is the desktop OS. This is where it all goes. NOTE, ***THIS IS IN PRE ALPHA STAGE WHICH ISN'T EVEN A THING. IF YOU INSTALL IT, AND WHEN IT CRASHES, IT'S NOT MY FAULT. THANK YOU GNU PROJECT FOR PUTTING THAT IN YOUR LICENSE. THAT'S WHY I DON'T HAVE INSTRUCTIONS ON INSTALLING.*** See the file "version.txt" for what version you have. (What? All the GNU projects have it, except it's `version.h`.)
## How to get around/Navigation
Note to self: needs updating BIG TIME
### The `.github` folder
That's my code scanning thing and Dependabot thing.
### The `command lines` folder
That is where everything relating to the command lines goes.
#### The `platypusPrompt `folder
That is where the command line for logging in, and other stuff goes, it is in another repository.
#### The `bash` folder
That is where I am (slowly but steadily) putting in the code for the bash shell from the [source tarball](https://github.com/Platypus-Tech/platypus-os-desktop-alpha/blob/main/command%20lines/bash-5.0.tar.gz). I don't have the heart to delete the directory, but it's huge, and I screwed up a lot with it.
### The `Desktop tools` folder
This is where the desktop environment goes, if I could only upload a folder.
### The `net` folder
This is where internet stuff goes. I'm getting it from the Linux Kernel.
### The `fs` folder
This is filesystem stuff. I'm getting it from the Linux Kernel.
#### The `ufs` folder
This is the code for the Unix Filesystem.
#### The `ntfs` folder
This is the code for the New Technology Filesystem.
#### The `HPFS` folder
This is where the code for the High Performance Filesytem goes.
### The `security` folder
This is really important. That is where everything security related goes.
### The `licenses` folder
This is where all the licenses go.
***
## Support for things
Currently, I cannot run this code, so I don't know what support it has. So, I'll put what I think it supports. *If there is support for something, please let me know by editing this and making a pull request. I'll look over it and probably merge it, or work with you on it. I'm pretty active here so I'll get to you within a reasonable amount of time, never more than a day, unless it's the weekend. Then it might take until Monday.*
### Filesystems
1. The Unix Filesystem
2. The New Technology File System
### Internet
No support, I don't think. But almost...
***
## Contributing
See [contributing.md](contributing.md) for guidelines.
## This used to be the kernel! What happened?
This was the kernel, then I decided I would make this the desktop, and then the kernel repository would come along later, once this was fully developed.
## This has a lot of GNU. When this is deployed, will it just be called "Platypus OS" or "GNU/Platypus OS"?
GNU/Platypus OS to avoid all the junk around GNU/Linux.
