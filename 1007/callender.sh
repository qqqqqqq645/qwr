#2019년 9월 달력 출력
echo -e "\t11월 2019"
echo -e "일 월 화 수 목 금 토"
p=0
dayy=1
cnt=0
while [ $cnt -lt $p ]
do
	echo -n "   "
	cnt=`expr $cnt + 1`
done
while [ $dayy -le 30 ]
do
	if [ $p -gt 6 ]
	then
		p=`expr $p - 7`
		echo -ne "\n"
	fi
	if [ $dayy -gt 9 ]
	then
		echo -n "$dayy "
	else
		echo -n " $dayy "
	fi
	dayy=`expr $dayy + 1`
	p=`expr $p + 1`
done
echo		
