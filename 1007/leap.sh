echo -n "연도 입력 : "
read numy
if [ `expr $numy % 4` -eq 0 ] && [ `expr $numy % 100` -ne 0 ] || [ `expr $numy % 400` -eq 0 ] 
then
	echo "윤년이다"
else
	echo "아니다"
fi
