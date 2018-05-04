/**
	@file create_rectangle_object.js
*/

function Rectangle(a, b)
{
	var rectangle = new Object();
	rectangle.length = a;
	rectangle.width = b;
	rectangle.perimeter = 2 * (a + b);
	rectangle.area = a * b;
	return rectangle;
}