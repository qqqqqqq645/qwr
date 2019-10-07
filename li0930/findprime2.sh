num=1
ch_num=1
cnt=0
while [ $num -le 50 ] 
do
	while [ $ch_num -le $num ] 
	do
		if [ `expr $num % $ch_num` -eq 0 ] 
		then
			cnt=`expr $cnt + 1`
		fi
		ch_num=`expr $ch_num + 1`
	done
	if [ $cnt -eq 2 ]
	then
		echo -en "$num\t"
	fi
	ch_num=1
	cnt=0
	num=`expr $num + 1`
done
