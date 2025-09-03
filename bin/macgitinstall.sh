#!/bin/bash

user=$1
if [ -z $user ]; then
  echo "Please type your git login after macgitinstall.sh - i.e.:"
  echo "macgitinstall.sh mygitloginname"
  exit
fi

set -x
git clone -v https://${user}@github.com/${user}/cs102e2020fall.git
cd cs102e2020fall
git remote add upstream https://${user}@github.com/seancusackcooperunion/cs102e2020fall.git
git config --global core.autocrlf false
set +x
 
