# more_on_conditionals.sh

read x
read y
read z

if [ $x -eq $y ] && [ $x -eq $z ]; then
	echo "EQUILATERAL"
elif [ $x -eq $y ] && [ $x -ne $z ]; then
	echo "ISOSCELES"
elif [ $x -eq $z ] && [ $x -ne $y ]; then
	echo "ISOSCELES"
elif [ $y -eq $z ] && [ $y -ne $x ]; then
	echo "ISOSCELES"
else
	echo "SCALENE"
fi