echo -n "Input a number :"
read num
i=1
echo $num
while [ $i -le 9 ]
do
	echo "$num * $i = `expr $num \* $i`"
	i=`expr $i + 1`
done

