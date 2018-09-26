#!/bin/bash

# The password entered here must be treated confidentially and stored securely.
# It should only be used by users who know what they are doing.
export BORG_PASSPHRASE='YOUR BORG PASSPHRASE'

# In an emergency, the following lines should only be changed by experienced users.
# Failure to do so may result in damage or incomplete BackUPs.
START_PATH="`dirname \"$0\"`"
$START_PATH/BORG-BackUP-GUI $1
