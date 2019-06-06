## Many Borg users know exactly what they are doing and only need this program to simply create or delete a new snapshot.
### BORG BackUP GUI can also be used by new Borg users to get to their destination very quickly.

<kbd>  
  
![NEW Snapshot](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/video/New-Snapshot.gif)

</kbd>

## BorgBackup (short: Borg) must of course be installed
Here you will find everything you need to know about Borg: 
https://www.borgbackup.org/

## For all those who already know Borg, the procedure is quite simple: 
<kbd>
  
![NEW Archive](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/video/New-Archiv.gif)

</kbd>


# Conversion to the free selection of Qt5 themes.
![Qt5 Style](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/video/Qt5-Style-min.gif)




## For the creation of Borg BackUP GUI (++ the required packages).
Change to the src directory with :

    cd ~/Borg-BackUP-GUI/src/

Create the GUI with it:

    qmake && make
    

## Mount problems?    
The GUI always uses the mount folder during the initial setup. This can be found in ~/Borg-BackUP-GUI/src/mount so that it is present on Github a blank file is needed e.g. ".gitkeep" this file should be deleted in the folder when using this folder.
For e.g. Ubuntu and its derivatives it may be necessary to install the following:

#### Debian (Ubuntu / LinuxMint)
    sudo apt install python3-llfuse

#### Arch Linux (Manjaro / Antergos)
    sudo pacman -S python-llfuse

## Instructions can be found here: [Instructions](https://github.com/MTrage/Borg-BackUP-GUI/wiki/Short-instruction)

### If you have any useful changes or improvements, please let me know.
I wish you a lot of fun with BORG BackUP GUI.
