# 1부터 50사이의 소수 출력
echo "1 부터 50 사이의 소수 출력

i=0
j=0

while [ $i le 50 ]
do
	count=0
	while [ $j le $i ]
	do
		if [ `expr $i %  $j` -eq 0 ]
		then
			count=`expr $count + 1`
		fi
	done
	
	if [ $count -eq 2 ]
	then 
		echo "$i"
	fi
	i=`expr $i + 1`
done
