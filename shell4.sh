#! /bin/bash
countfiles() {
local dir=$1
local count=0
for item in "$dir"/* 
do
if [ -f "$item" ]; then
count=$((count+1))
elif [ -d "$item" ]; then
sub_count=$(countfiles "$item")
count=$((count+sub_count))
fi 
done
echo "$count"
}

echo "Enter current path"
read directory
if [ -d "$directory" ];
then
total=$(countfiles "$directory")
echo "total files in $directory in subdirectory is {$total}"
else
echo "Invalid directory"
fi
