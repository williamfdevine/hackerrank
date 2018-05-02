/**
	@file loops.js
*/

function vowelsAndConsonants(letters)
{
	const vowels = "aeiou";

	let consonants_found = "";

	for(var i = 0; i < letters.length; i++)
	{
		if(-1 == vowels.search(letters.charAt(i)))
		{
			consonants_found += letters.charAt(i);
		}
		else
		{
			console.log(letters.charAt(i));
		}
	}

	for(var i = 0; i < consonants_found.length; i++)
	{
		console.log(consonants_found.charAt(i));
	}
}