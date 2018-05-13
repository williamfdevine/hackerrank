# awk_4.sh

awk '
	{
		ORS = (NR % 2 ? ";" : RS)
	}
	1
'