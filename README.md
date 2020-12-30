![GitHub](https://img.shields.io/github/languages/top/MTrage/Borg-BackUP-GUI?label=Qt%20%28C%2B%2B%29&style=plastic) ![GitHub](https://img.shields.io/github/issues/MTrage/Borg-BackUP-GUI?label=Issues&style=plastic) ![GitHub](https://img.shields.io/github/last-commit/MTrage/Borg-BackUP-GUI?label=Last%20commit&style=plastic) ![GitHub](https://img.shields.io/github/languages/code-size/MTrage/Borg-BackUP-GUI?label=Code%20size&style=plastic) ![GitHub](https://img.shields.io/github/repo-size/MTrage/Borg-BackUP-GUI?label=Repo%20size&style=plastic) ![GitHub](https://img.shields.io/github/license/MTrage/Borg-BackUP-GUI?label=License&style=plastic)<BR>
Many Borg users know exactly what they are doing and only need this program to simply create or delete a new snapshot. BORG BackUP GUI can also be used by new Borg users to get to their destination very quickly.

[![Instructions](https://img.shields.io/badge/Instructions%20can%20be%20found%20here-
Guide%20for%20beginners-blue)](https://github.com/MTrage/Borg-BackUP-GUI/wiki/Short-instruction)

<kbd>  
  
![NEW Snapshot](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/video/New-Snapshot.gif)

</kbd>

### BorgBackup (short: Borg) must of course be installed
Here you will find everything you need to know about Borg: 
https://www.borgbackup.org/

### For all those who already know Borg, the procedure is quite simple: 
<kbd>
  
![NEW Archive](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/video/New-Archiv.gif)

</kbd>


## Conversion to the free selection of Qt5 themes.
![Qt5 Style](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/video/Qt5-Style-min.gif)




### For the creation of Borg BackUP GUI (++ the required packages).
Change to the src directory with :

    cd ~/Borg-BackUP-GUI/src/

Create the GUI with it:

    qmake && make
    

### Mount problems?    
The GUI always uses the mount folder during the initial setup. This can be found in ~/Borg-BackUP-GUI/src/mount so that it is present on Github a blank file is needed e.g. ".gitkeep" this file should be deleted in the folder when using this folder.
For e.g. Ubuntu and its derivatives it may be necessary to install the following:

#### Debian (Ubuntu / Linux Mint)
    sudo apt install python3-llfuse

#### Arch Linux (Manjaro / Antergos)
    sudo pacman -S python-llfuse

### Instructions can be found here: [Guide for beginners](https://github.com/MTrage/Borg-BackUP-GUI/wiki/Short-instruction)

#### If you have any useful changes or improvements, please let me know.
I wish you a lot of fun with BORG BackUP GUI.
