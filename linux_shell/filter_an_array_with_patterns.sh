# filter_an_array_with_patterns.sh

declare -a array
readarray -t array < /dev/stdin

filtered=(${array[*]/*[Aa]*/})

echo "${filtered[*]}"