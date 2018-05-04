/**
	@file count_objects.js
*/

function getCount(objects)
{
	let ret_val = 0;

	for(let i = 0; i < objects.length; i++)
	{
		if(objects[i].x == objects[i].y)
		{
			ret_val += 1;
		}
	}

	return ret_val;
}