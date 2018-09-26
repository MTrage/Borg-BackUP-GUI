![Borg-BackUP-GUI](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/icon.png)
# Borg-BackUP-GUI

Many Borg users know exactly what they are doing and only need this program to simply create or delete a new BackUP point. For all newcomers to Borg, it is advisable to first view a short manual or a video on the subject of Borg.

## Borg Documentation
https://borgbackup.readthedocs.io/en/stable/
## Borg Videos
https://asciinema.org/a/133292

If you have many SH scripts and you have them in different folders or subfolders, you will love Scripter. Scripter sorts alphabetically and by hierarchy (also subfolders). Scripter sorts alphabetically and by hierarchy (also subfolders).

Created 2.8.2016 by Marc-André Tragé


## Initiate a new Borg MAIN-BackUP, use an encryption with repokey. 
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


## The following programs are used by Scripter to create enjoyment.°)
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


## For the creation of Scripters (++ the required packages).

    qmake && make
