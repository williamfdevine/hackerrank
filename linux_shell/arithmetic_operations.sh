# arithmetic_operations.sh

read line

printf "%.3f\n" $(echo "scale=4;$line" | bc -l)