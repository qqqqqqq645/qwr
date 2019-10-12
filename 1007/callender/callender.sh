#만년달력
#1년의 매달 날짜를 저장하는 배열 year
year=(31 28 31 30 31 30 31 31 30 31 30 31)
#
p=1 #위치변수 p 는 일요일을 0으로 시작해서 토요일 6까지, 7이되면 다음줄로 이동. 기준인 1900년 1월 1일은 월요일이므로p=1
firstYear=1900
	echo -n "출력할 연도 달 입력하세요  : "
	#사용자는 프로그램 실행하여출력할 연도, 달 또는 연도만 입력
	read yInput mInput  
	mInput=${mInput:="__NO_MONTH__"} #사용자가 달을 입력하지 않고 연도만 입력했을때 mInput값 설정
#	올해가 윤년이 아닐때 내년 2월1일의 요일은 365 % 7 = 1 이므로 올해 1월1일 요일의 다음날이된다.
# 	올해가 윤년이면 366 % 7 = 2 이므로 올해 1월 1일인 요일의 다다음날이 된다.
#	다음 루프는 1900년부터 입력받은 연도까지 윤년인지 판별하여 윤년이면 2, 평년이면 1씩 더해준다
	while [ $firstYear -le $yInput ]
	do	# $firstYear가 4로 나누어 떨어지고 100으로 나누어떨어지지 않거나 400으로 나누어떨어지면 윤년
		if [ `expr $firstYear % 4` -eq 0 ] &&
			[ `expr $firstYear % 100` -ne 0 ] ||
			[ `expr $firstYear % 400` -eq 0 ]
		then
			setPoint=2 #입력받은 $yInput이윤년이면 $setPoint 2로 설정됨
		else
			setPoint=1 # $yInput이 평년이면 1을 가지고 종료
		fi

			p=`expr $p + $setPoint`
			firstYear=`expr $firstYear + 1`
	done
#	위 반복문에서는 입력받은 연도까지 포함하여 p변수에 저장하기 때문에 마지막 설정되었던 setPoint변수를 한번 빼준다.
	p=`expr $p - $setPoint`
	if [ $setPoint -eq 2 ] #yInput이 윤년이면 2월을 29일로 설정
	then
		year[1]=29
	fi
	month=0 # 배열 인덱스는 0부터 시작하므로 month 1월=0 으 로 초기화

	echo -e "\t$yInput"
	if [ $mInput = "__NO_MONTH__" ] #사용자가 달을 입력하지 않았을 경우 전체 달력 출력하게 설정
	then
			endMonth=11 # endMonth변수는 달력 출력부에서 이용
	elif [ $mInput -le 12 ] && [ $mInput -gt 0 ] #달을 입력받았을경우 해당하는 달만 출력
	then
#	p값에 1월1일의 위치를 저장했다면 아래 반복문에서는 입력받은 달의 1일의 위치를 찾는다
#	다음 반복문은 1월부터 시작해서 month달 나누기 7 해서 나머지를 p값에 더해주다가 
#	해당하는 달에 도달하기 직전 반복문종료
			while [ $month -lt `expr $mInput - 1` ] #year 배열 인덱스가 0부터 시작하므로 mInput -1해준다
			do
				setPoint=`expr ${year[$month]} % 7` # $month달의 일수를 7로 나눈 나머지를 변수에 저장
				p=`expr $p + $setPoint` # p변수에 다음달 1일의 위치가 저장된다
				month=`expr $month + 1` # 반복을 위해 month값 +1
			done
			endMonth=$month #입력받은 달만 출력할것이므로 두 변수의 값을 일치시켜 반복을 한번만 하게 설정
	else #사용자가 달을 잘못 입력했을시 메세지 출력후 프로그램 종료
		echo "1에서 12사이의 달을 입력해 주세요"
		exit

	fi

#	p변수는 0에서 6사이에서만 돌아야 하므로 값을 7로 나누어서 나머지를 저장
	p=`expr $p % 7` 

#	달력 출력하는 반복문
	while [ $month -le $endMonth ] 
	do
			day=1 #날짜 변수
				echo -e "\t `expr $month + 1`월"
				echo  "일 월 화 수 목 금 토"
				# 매월 1일의 위치를 계산하는 루프, cnt변수가 p변수의 값에 따라 공백을 출력한다
				cnt=0
			while [ $cnt -lt $p ]
			do
				echo -n "   "
				cnt=`expr $cnt + 1`
			done
			while [ $day -le ${year[$month]} ] #날짜 출력하는 루프
			do
				if [ $day -lt 10 ] #날짜가 한자리수이면 공백을 출력하여 간격을 맞춰준다
				then
					echo -n " "
				fi
			echo -n "$day " #날짜 출력
			day=`expr $day + 1`
			p=`expr $p + 1` #다음 날짜의 위치값 설정
			if [ $p -gt 6 ] #p값은 0에서 6사이에서 돌아야 하므로 p값이 7이되면 7로나눠 나머지를 저장 
			then
				p=`expr $p % 7`
				echo  #p값이 7이되면 일주일이 끝났으므로 다음줄로 변경
			fi	
			done 
			echo #달력 간격 조정
			if [ $p -ne 0 ] #p값이 0인 상태로 반복문이 끝나면 개행을 한번 더 하기때문에 예외처리
			then
				echo
			fi
			month=`expr $month + 1`
	done
