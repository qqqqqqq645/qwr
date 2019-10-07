#만년달력
#1년의 매달 날짜를 저장하는 배열 year
year=(31 28 31 30 31 30 31 31 30 31 30 31)
#
p=1 #위치변수 p 는 일요일을 0으로 시작해서 토요일 6까지, 7이되면 다음줄로 이동 1900년 1월 1일은 월요일이므로p=1
firstYear=1900
echo -n "input data : "
read yInput mInput
#시작연도인 1900년부터 입력한 연도까지 달력 계산
while [ $firstYear -le $yInput ]
do
	#계산중인 연도가 윤년인지 확인하고 윤년이면 2월을 29일, 아니면 28일로 설정
	if [ `expr $firstYear % 4` -eq 0 ] && [ `expr $firstYear % 100` -ne 0 ] || [ `expr $firstYear % 400` -eq 0 ]
	then
		year[1]=29
		setPoint=2 #윤년은 하루 더 많은 366일이므로 다음해의 1월1일은 이번년도 1월1일의 다다음 요일이되므로 2로 설정
		else
		year[1]=28
		setPoint=1 #1년 365일을 7로 나누면 나머지가 1이므로 다음해의 1월1일은 이번년도의 1월1일의 다음 요일이 되므로 p변수에 1을 더해줄 setpoint 초기화
	fi
	month=0 # 배열 인덱스는 0부터 시작하므로 month 1월로 초기화
	if [ $firstYear -eq $yInput ] #firstYear변수를 1씩 올리면서 반복하다 입력한 연도가되면 출력 준비
	then
		while [ $month -lt 12 ]
		do
			day=1 #날짜 변수
					echo -e "\t`expr $month + 1`월"
					echo  "일 월 화 수 목 금 토"
					# 매월 1일의 위치를 계산하는 루프, 
					cnt=0
				while [ $cnt -lt $p ]
				do
					echo -n "   "
					cnt=`expr $cnt + 1`
				done
				while [ $day -le ${year[$month]} ] #날짜 출력하는 루프
				do
					if [ $day -lt 10 ]
					then
						echo -n " "
					fi
				echo -n "$day "
				day=`expr $day + 1`
				p=`expr $p + 1`
				if [ $p -gt 6 ]
				then
					p=`expr $p - 7`
					echo ""
				fi	
				done
				echo
				echo
				month=`expr $month + 1`
		done
	else
				p=`expr $p + $setPoint`
				if [ $p -gt 6 ]
				then 
					p=`expr $p - 7`
				fi
	fi

	firstYear=`expr $firstYear + 1`
done
