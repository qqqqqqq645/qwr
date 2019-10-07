p=3
day=1
echo -e "\t\t\t10월 2019\t\t\t"
echo -e "일\t월\t화\t수\t목\t금\t토"
while [ $p -ge 1 ]
		do
		echo -en "\t"
		p=`expr p - 1`
				
done
while [ $day -le 31 ]
do
		echo -en "$day\t"
		if [ `expr $p % 7` -eq 0 ]
			then
				 echo -e "\n"
			p=0
		fi
		day=`expr $day + 1`
		p=`expr $p + 1`
done
echo -e "\n"
