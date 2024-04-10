#!/bin/bash

dir=$1
filename=$2
file_regex=$filename[0-9]*$

if [ -d $dir ]
then
    echo
    echo "$dir DIRECTORY FOUND"

    latest=$(ls -v "$dir"|grep "$file_regex"|tail -1)
    # check if no filename file exists
    if [ -z "$latest" ]
    then
        echo "No $filename file found."
        echo "CREATING ONE ..."
        touch "$dir"/$filename
	if [ $? -eq 0 ]
        then
	    echo "$filename file created successfully!"
	else
	    echo "An error occured trying to create $filename file"
	fi
    else
        # filename file exist, create next one
	echo
        echo "$filename file type found"
	echo "Latest is $latest"
	echo "CREATING NEXT ..."
	echo
	./number_files.sh "${dir}/${latest}"
    fi
else
    echo "$dir DIRECTORY NOT FOUND"
    echo "Usage: $0 dir_path filename"
    echo "Exiting ..."
    exit 1
fi
exit 0


#for file in "$dir"/*; do
#
#       filename=$(basename "$file")
#
#	if [[ "$filename" =~ $file_regex ]]
#	then
#
#	    echo "id_rsa file type found"
#	    ./number_files.sh "$file"
#	    exit 0
#	fi
#   done
