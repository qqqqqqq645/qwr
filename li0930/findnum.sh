# 1부터 50사이의 소수 출력
echo "1 부터 50 사이의 소수 출력 "

i=1


while [ $i -le 50 ]
do
	j=1
	cnt=0
	while [ $j -le $i ]
	do
		if [ `expr $i %  $j` -eq 0 ]
		then
			cnt=`expr $cnt + 1`
		fi
		j=`expr $j + 1`
	done
	
	if [ $cnt -eq 2 ]
	then 
		echo -n "$i "
	fi
	i=`expr $i + 1`
done
