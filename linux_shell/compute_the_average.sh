# compute_the_average.sh

declare -a array
readarray -t array < /dev/stdin
total=0

for i in ${array[@]:1}; 
	do
		let total+=$i
	done

printf "%.3f\n" $(echo "scale=4;$total/${array[0]}" | bc -l)