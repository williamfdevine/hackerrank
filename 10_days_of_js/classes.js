/**
	@file classes.js
*/

function Polygon(sides)
{
	this.sides = sides;
	this.perimeter = function()
	{
		let ret_val = 0;
		for(let i = 0; i < this.sides.length; i++)
		{
			ret_val += this.sides[i];
		}
		return ret_val;
	};
}