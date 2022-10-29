#!/bin/bash
git add .
if  [ -z ; "$1" ] 
then git commit -m "Nous allons rajouter un fichier"
else git commit -m "$1" 
fi
git push