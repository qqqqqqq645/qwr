#만년달력
#1년의 매달 날짜를 저장하는 배열 year
year=(31 28 31 30 31 30 31 31 30 31 30 31)
#
p=1 #위치변수 p 는 일요일을 0으로 시작해서 토요일 6까지, 7이되면 다음줄로 이동 1900년 1월 1일은 월요일이므로p=1
firstYear=1900
	echo -n "input data : "
	read yInput mInput
#시작연도인 1900년부터 입력한 연도까지1월1일의 차이 계산
	while [ $firstYear -lt $yInput ]
	do
		if [ `expr $firstYear % 4` -eq 0 ] && [ `expr $firstYear % 100` -ne 0 ] || [ `expr $firstYear % 400` -eq 0 ]
		then
			setPoint=2
		else
			setPoint=1 
		fi
			echo "setPoint = $setPoint"

			p=`expr $p + $setPoint`
			echo "p = $p"
			firstYear=`expr $firstYear + 1`
			echo "firstYear+1 = $firstYear"
	done
#	echo "end p=$p"
	echo "setPoint = $setPoint"
#	p=`expr $p - $setPoint`
	p=`expr $p % 7`
	if [ `expr $yInput % 4` -eq 0 ] && [ `expr $yInput % 100` -ne 0 ] || [ `expr $yInput % 400` -eq 0 ]
	then
		year[1]=29
	fi
	month=0 # 배열 인덱스는 0부터 시작하므로 month 1월=0 으 로 초기화
	echo -e "\t$yInput" 
	
#	if [ -n $mInput ]
#	then
#		temp=0
#		while [ $temp -le $mInput ]
#		do
#			setPoint=`expr ${year[$temp]} % 7`
#			p=`expr $p + setPoint`
#			temp=`expr $temp + 1`
#		done
#		else
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

