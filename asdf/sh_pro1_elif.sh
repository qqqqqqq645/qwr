echo Type in the filename
read file
if [ -f $file ] 
then echo"$file ===> ordinary file"

elif [ -d $file ]
	then echo "$file ===> directory"

else echo " $file ===> not exist"
fi
echo "File test end"
