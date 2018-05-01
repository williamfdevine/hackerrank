/**
	@file functions.js
*/

function factorial(n)
{
	var ret_val = 1;
	for(var i = 1; i <= n; i++)
	{
		ret_val *= i;
	}

	return ret_val;
}