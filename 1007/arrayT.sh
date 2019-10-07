a[11]=23
a[13]=37
a[51]=UFO

echo -n "a[11]="
echo ${a[11]}
echo "a[51]의 값은 ${a[51]}입니다"

 a[5]=`expr ${a[11]} + ${a[13]}`
  echo -n “a[5]=”
  echo ${a[5]}
echo -n "a[3] = a[11] * a[13] = "
a[3]=`expr ${a[11]} \* ${a[13]}`
echo -n "a[3] = ${a[3]}"

  k=(zero  one  two  three)
  echo -n “k[0]=”
  echo ${k[0]}
  echo -n “k[1]=”
  echo ${k[1]}

  day=(31 28 31 30 31 30 31 31 30 31 30 31)
  echo -n “day[1]=”
  echo ${day[1]}
  echo -n “day[11]=”
  echo ${day[11]}


