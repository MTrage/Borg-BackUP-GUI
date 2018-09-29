![Borg-BackUP-GUI](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/icon.png)
# Borg BackUP GUI
Many Borg users know exactly what they are doing and only need this program to simply create or delete a new BackUP point. For all newcomers to Borg, it is advisable to first view a short manual or a video on the subject of Borg.


## BorgBackup (short: Borg) must of course be installed.
Here you will find everything you need to know about Borg: 
https://www.borgbackup.org/


## For all those who already know Borg, the procedure is quite simple:
Initiate a new Borg MAIN-BackUP, use an encryption with repokey. 
This example assumes that you have already mounted your BackUP on a folder in your home directory.

    borg init /home/USERNAME/BackUP_Path/BackUP_NAME –encryption=repokey

Of course you can also do without client-side encryption, but if you have your BackUP on e.g. a cloud it is advisable to use it!

All individual settings are made in the BackUP.sh file, this script is read by BORG BackUP GUI, therefore the names of the variables must not be changed.

If you want to access an encrypted backup and don't always want to enter the password locally, you can start the Passphrase.sh. In this script you have to insert your passphrase.


## On the dark side of the GUI
If you start with the parameters "-d" e.g.
BORG-BackUP-GUI -d or Passphrase.sh -d 
so the dark theme of QdarkStyleSheet is used.

You have to download QdarkStyleSheet from https://github.com/ColinDuquesnoy/QDarkStyleSheet and copy the qdarkstyle folder into the BORG BackUP GUI directory.

If you don't save your data locally but install it on a NAS or Cloud, opening BORG BackUP GUI and the actions may take some time. It may happen that Borg itself crashes or does not close properly, in the first test versions this was the case with me, but this behavior has not occurred in the last 2 weeks  (26.09.18) and is therefore generously ignored by me or considered fixed.


## BackUP Area
In the BackUP section you will find an overview of the original archive size, as well as the compressed archive size, but also the deduplicated size of the archive is displayed here. The deduplicated size of the archive is the amount of space the backup currently occupies on your storage medium.

Furthermore you can mount your BackUP here and of course unmount it. If the BackUP is mounted, BORG BackUP GUI automatically detects this (even when restarting) and disables all functions that could damage the archive in the mounted state. To make the work easier, the mount button is replaced with an "Open Mount" button, which allows you to open the BackUP folder when clicking on it.

Pressing the "all Deteils" button opens the archive overview in the desired text editor. - At this point a PDF-Printer will be integrated later, if desired. 
![Screenshot1](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/images/screenshot1.png)


## Configuration Area
Here you will find a quick overview of the settings you have made. You can also open and edit the configuration file directly with the text editor of your choice by pressing "Opening the configuration file".
![Screenshot2](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/images/screenshot2.png)


## Delete Area
You can delete specific backup points in this area. In order not to delete a backup point, it is necessary to enter a confirmation code. After entering this code this must be confirmed by pressing Return and the Delete button.
![Screenshot3](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/images/screenshot3.png)


## Schedule Area
This area makes it easy to set up a Cron job, so that the BackUP service works automatically it is necessary that the Cron Deamon is active on the system. The path used for this is "/etc/cron.d/" where your file will be created with the name "Borg_Cron_Job"! So that this data can be written or deleted, the ROOT password must be specified when executing the action.
![Screenshot4](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/images/screenshot4.png)


## The following programs are used by Borg BackUP GUI to create enjoyment.°)
- [x] borg
- [x] grep
- [x] echo
- [x] kill
- [x] cat
- [x] awk
- [x] rm
- [x] sh
- [x] cp
- [x] mount
- [x] mkdir
- [x] pidof
- [x] touch
- [x] gksudo


## For the creation of Borg BackUP GUI (++ the required packages).

    qmake && make


## There are 2 ways to start BORG BackUP GUI

1.) Call directly without using a passphrase for the BackUP: 

    ~/BORG-BackUP-GUI/BORG-BackUP-GUI

2.) For a BackUP that uses a passphrase,

    ~/BORG-BackUP-GUI/Passphrase.sh

must be started. The passphrase for the BackUP has to be entered in the Passphrase.sh file.

## As written above for using dark Theme, QdarkStyleSheet has to be added to the BORG BackUP GUI directory.
For option 1 and 2 you can optionally add a -d at the end to start BORG BackUP GUI with a dark theme.

    ~/BORG-BackUP-GUI/BORG-BackUP-GUI -d

or

    ~/BORG-BackUP-GUI/Passphrase.sh -d
    
### If you have any useful changes or improvements, please let me know.

### I wish you a lot of fun with BORG BackUP GUI.
