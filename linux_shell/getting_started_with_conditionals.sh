# getting_started_with_conditionals.sh

read str 

if [ $str = "y" ] || [ $str = "Y" ]; then
	echo "YES"
else
	echo "NO"
fi