echo -n "Input two numbers : "
read num1 num2
echo -n "$num1 + $num2 = "
expr $num1 + $num2
echo -n "$num1 - $num2 = "
expr $num1 - $num2
echo -n "$num1 * $num2 = "
expr $num1 \* $num2
echo -n "$num1 / $num2 = "
expr $num1 / $num2
echo""


