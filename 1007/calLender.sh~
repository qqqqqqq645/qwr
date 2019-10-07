#2019년 달력 출력
echo -e "\t\t2019"
p=3
monthIndex=(31 28 31 30 31 30 31 31 30 31 30 31)
month=0
while [ $month -lt 12 ]
do
	echo -e "\t`expr $month + 1`월"
	echo  "일 월 화 수 목 금 토"
	cnt=1
	while [ $cnt -lt $p ]
	do
		echo -n "   "
		cnt=`expr $cnt + 1`
	done
	dayy=1
	while [ $dayy -le ${monthIndex[$month]} ]
	do
			if [ $dayy -gt 9 ]
		then
			echo -n "$dayy "
		else
			echo -n " $dayy "
		fi
		dayy=`expr $dayy + 1`
		p=`expr $p + 1`
		if [ $p -gt 7 ]
		then
			p=`expr $p - 7`
			echo ""
		fi

	done
	if [ $p -ne 1 ]
	then echo
	fi
	month=`expr $month + 1`
done
