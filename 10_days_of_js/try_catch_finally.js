/**
	@file try_catch_finally.js
*/

function reverseString(s)
{
	var array;
	var reverse_array;
	var return_str;
	
	try
	{
		array = s.split("");
		reverse_array = array.reverse();
		return_str = reverse_array.join("");
	}
	catch(error)
	{
		console.log(error.message);
		return_str = "" + s;
	}
	finally
	{
		console.log(return_str);
	}
}