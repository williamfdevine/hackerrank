# display_an_element_of_an_array.sh

declare -a array

readarray -t array < /dev/stdin

echo "${array[@]:3:1}"