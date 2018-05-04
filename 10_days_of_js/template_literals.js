/**
	@file template_literals.js
*/

function sides(literals, ...expressions)
{
	let s_1 = 0;
	let s_2 = 0;
	let area = expressions[0];
	let perimeter = expressions[1];

	s_1 = (perimeter + Math.sqrt(Math.pow(perimeter, 2) - 16 * area)) / 4;
	s_2 = (perimeter - Math.sqrt(Math.pow(perimeter, 2) - 16 * area)) / 4;

	return ((s_1 > s_2) ? ([s_2, s_1]) : ([s_1, s_2]));
}