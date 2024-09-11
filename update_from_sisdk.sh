#!/bin/bash

# Assume we're starting in the root directory

usage() {
	echo "./update_from_sisdk.sh <Simplicity Studio Directory>"
}

if [ "$#" -ne "1" ]; then
	usage
	exit 1
fi

find $PWD/gecko -path  "*/.*" -prune -o -type f | while read file; do
	filename=`basename $file`
	srcfile=`find $1 -name $filename`
	echo "Going to copy from $srcfile to $file"
	rm $file
	cp $srcfile $file
done

find $PWD/zephyr/blobs/gecko/platform/radio/rail_lib/autogen/librail_release -path  "*/.*" -prune -o -type f | while read file; do
	filename=`basename $file`
	srcfile=`find $1 -name $filename`
	echo "Going to copy from $srcfile to $file"
	cp $srcfile $file
done
