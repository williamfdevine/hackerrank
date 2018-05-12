# slice_an_array.sh

declare -a array

readarray -t array < /dev/stdin

echo "${array[@]:3:5}"