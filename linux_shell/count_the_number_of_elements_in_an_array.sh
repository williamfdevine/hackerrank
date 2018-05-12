# count_the_number_of_elements_in_an_array.sh

declare -a array

readarray -t array < /dev/stdin 

echo ${#array[*]}