#2019년 9월 달력 출력
echo -e "\t10월 2019"
echo -e "일 월 화 수 목 금 토"
p=1
dayy=1
while [ $dayy -le 30 ]
		do
		if [ $p -gt 7 ]
		then
			p=`expr $p - 7`
			echo -ne "\n"
		fi
		echo -n "$dayy   "
		dayy=`expr $dayy + 1`
		p=`expr $p + 1`
done	
				
