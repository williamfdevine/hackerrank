/**
	@file arrow_functions.js
*/

function modifyArray(nums)
{
	return nums.map(element => ((element % 2 == 0) ? (element * 2) : (element * 3)));
}