/**
	@file throw.js
*/

function isPositive(num)
{
	if(num > 0)
	{
		return "YES";
	}
	else if(num == 0)
	{
		throw new Error("Zero Error");
	}
	else
	{
		throw new Error("Negative Error");
	}
}