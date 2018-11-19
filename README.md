![Borg-BackUP-GUI](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/images/banner.jpg)
Many Borg users know exactly what they are doing and only need this program to simply create or delete a new BackUP point. For all newcomers to Borg, it is advisable to first view a short manual or a video on the subject of Borg.

![NEW Snapshot](https://github.com/MTrage/Borg-BackUP-GUI/blob/master/video/New-Snapshot.gif)

## BorgBackup (short: Borg) must of course be installed
Here you will find everything you need to know about Borg: 
https://www.borgbackup.org/

## For all those who already know Borg, the procedure is quite simple:
Initiate a new Borg MAIN-BackUP, use an encryption with repokey. 
This example assumes that you have already mounted your BackUP on a folder in your home directory.

    borg init /home/USERNAME/BackUP_Path/BackUP_NAME –encryption=repokey

Of course you can also do without client-side encryption, but if you have your BackUP on e.g. a cloud it is advisable to use it!

All individual settings are made in the BackUP.sh file, this script is read by BORG BackUP GUI, therefore the names of the variables must not be changed.

If you want to access an encrypted backup and don't always want to enter the password locally, you can start the Passphrase.sh. In this script you have to insert your passphrase.

## Instructions can be found here: [Instructions](https://github.com/MTrage/Borg-BackUP-GUI/wiki/Short-instruction)

### If you have any useful changes or improvements, please let me know.
I wish you a lot of fun with BORG BackUP GUI.
