# lonely_integer_bash.sh

declare -a array
readarray array < /dev/stdin

array=${array[*]:1:}

unique=0

for i in ${array[*]}
	do
		unique=$(($unique ^ i))
	done

echo $unique