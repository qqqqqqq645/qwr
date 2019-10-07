#1부터 100사이의 7의 배수들을 출력하고 합계를 구하는 프로그램
i=1
sum=0

while [ $i -le 100 ]
do
if [  `expr $i %  7` -eq 0  ]
#if [ [$i % 7 ] -eq 0 ]
	then 
		echo -n "$i "
		sum=`expr $sum + $i`
	fi
		i=`expr $i + 1`
done
echo " "

