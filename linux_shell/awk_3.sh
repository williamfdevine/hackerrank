# awk_3.sh

awk '

{
	average = ($2 + $3 + $4) / 3

	if(80 <= average)
	{
		retval = "A";
	}
	else if(60 <= average)
	{
		retval = "B";
	}
	else if(50 <= average)
	{
		retval = "C";
	}
	else
	{
		retval = "FAIL";
	}

	print $0, ":", retval;
}

'