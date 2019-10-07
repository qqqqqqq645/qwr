echo "Input your number"

read digit

while [ $digit -gt 0 ] 
do
	echo $digit
	digit=`expr $digit -1`
done
