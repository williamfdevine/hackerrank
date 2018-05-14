# sed_command_5.sh

cat /dev/stdin | sed -re 's/([0-9]{4}) ([0-9]{4}) ([0-9]{4}) ([0-9]{4})/\4 \3 \2 \1/'