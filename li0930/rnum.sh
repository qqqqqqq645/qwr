#한 개의 정수를 입력받아 그 수의 약수들을 출력

echo -n "정수 입력하세요 : "
read num
i=1

echo -n "$num의 약수 : "

while [ $i -le $num ]
do
	if [ `expr $num % $i` -eq 0 ]
	then
		echo -n "$i "
	fi
	
	i=`expr $i + 1`
done
echo " "
