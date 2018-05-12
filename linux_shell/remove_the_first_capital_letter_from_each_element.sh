# remove_the_first_capital_letter_from_each_element.sh

declare -a array
readarray -t array < /dev/stdin

for i in ${array[@]};
	do
		echo -n "${i} " | sed "0,/[A-Z]/{s/[A-Z]/./}"
	done
