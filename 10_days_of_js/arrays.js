/**
	@file arrays.js
*/

/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) 
{
	let largest = 0;

	for(let i = 0; i < nums.length; i++)
	{
		if(nums[i] > largest)
		{
			largest = nums[i];
		}
	}

	let second_largest = 0;

	for(let i = 0; i < nums.length; i++)
	{
		if(nums[i] > second_largest && 
			nums[i] < largest)
		{
			second_largest = nums[i];
		}
	}

	return second_largest;
}