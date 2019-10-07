echo -n "input a number"
read num

num2=$num

while [ $num2 -ne 0 ]
do
	if [ `expr $num %  $num2` -eq 0 ] 
	then
			echo $num2
	fi
	num2=`expr $num2 - 1`
done
