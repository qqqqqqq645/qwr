for digit1 in 1 2 3 4 5 6 7 8 9
do

for digit2 in 1 2 3 4 5 6 7 8 9
do
echo -en "$digit1 \* $digit2 = `expr $digit1 \* $digit2`\t"
done
echo
done
