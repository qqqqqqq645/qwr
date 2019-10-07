num=2
while [ $num -le 9 ]
do
	i=1
	while [ $i -le 9 ]
	do 
		echo "$num * $i = `expr $num \* $i`"
		i=`expr $i + 1`
	done
	num=`expr $num + 1`
done
	
