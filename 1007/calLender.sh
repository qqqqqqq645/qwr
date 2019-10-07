#만년달력
year=(31 28 31 30 31 30 31 31 30 31 30 31)
month=0
p=1
firstYear=1900
echo -n "input data : "
read yInput mInput
#시작연도인 1900년부터 입력한 연도까지 달력 계산
while [ $firstYear -le $yInput ]
do
	#계산중인 연도가 윤년인지 확인하고 윤년이면 2월을 29일, 아니면 28일로 설정
	if [ `expr $firstYear % 4` -eq 0 ] && [ `expr $firstYear % 100` -ne 0 ] || [ `expr $firstYear % 400` -eq 0]
	then
		year[1]=29
	else
		year[1]=28
	fi

	while [ $month -lt 12 ]
	do
		if [ $firstYear -eq yInput ]
		then
		echo -e "\t`expr $month + 1`월"
		echo  "일 월 화 수 목 금 토"
		cnt=1
		while [ $cnt -lt $p ]
		do
			echo -n "   "
			cnt=`expr $cnt + 1`
		done
		day=1
		while [ $day -le ${year[$month]} ]
		do
				if [ $day -lt 10 ]
			then
				echo -n "  "
			fi
			echo "$day "
			day=`expr $day + 1`
			p=`expr $p + 1`
			if [ $p -gt 7 ]
			then
				p=`expr $p - 7`
				echo ""
			fi

		done
	done
	if [ $p -ne 1 ]
	then echo
	fi
	month=`expr $month + 1`
done
