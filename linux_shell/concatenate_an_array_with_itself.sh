# concatenate_an_array_with_itself.sh

declare -a array

readarray -t array < /dev/stdin

array+=("${array[*]}" "${array[*]}")

echo "${array[*]}"
