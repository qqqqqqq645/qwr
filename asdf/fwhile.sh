 i=1
sum=0;
while [ $1 -lt 101 ]
do
	sum=`expr $i + $sum`
	i=`expr $i + 1`
done
echo $sum
