#!/bin/bash
# This file is also read by BORG-BackUP-GUI to take over your specification, so you should not rename any variables.


# The password entered here must be treated confidentially and stored securely.
# It should only be used by users who know what they are doing.
export BORG_PASSPHRASE='YOUR BORG PASSPHRASE'


# File Manager
File_Manager="/usr/bin/nautilus" 

# Text Editor
Text_Editor="/usr/bin/kate"

# Name of the BackUP
BackUP_Name="Borg-BackUP-WS1"

# Path to BackUP
BackUP_Path="/home/user/BackUP/"

# Name of the BackUP
BackUP_Name="Borg-BackUP-WS1"

# Parameters for BackUP 
BackUP_Parameters="-v -s -p -C lz4"

# Path to the folder in which the BackUP is to be mounted.
BackUP_Mount_Path="/home/user/BORG-BackUP"

# Specification of the folders or/and files to be backed up.
# AS AN EXAMPLE !!! Please adapt to your own needs.
BackUP_DATA="/home/user/Dokumente/ /home/user/Bilder/ /home/user/Skripte/ /home/user/Qt-Prj/ /home/user/.mainDB.kdbx /etc/fstab"



# In an emergency, the following lines should only be changed by experienced users.
# Failure to do so may result in damage or incomplete BackUPs.
date=$(date +"%Y.%m.%d-%H:%M:%S")
/usr/bin/borg create $BackUP_Parameters $BackUP_Path$BackUP_Name::$date $BackUP_DATA
