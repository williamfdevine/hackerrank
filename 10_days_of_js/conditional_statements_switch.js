/**
	@file conditional_statements_switch.js
*/

var SET_ENUM = 
{
	SET_A : 0,
	SET_B : 1,
	SET_C : 2,
	SET_D : 3
};

function getLetter(letter_set)
{
	let letter;
	let set_enum = getSet(letter_set.charAt(0));

	switch(set_enum)
	{
		case SET_ENUM.SET_A:
		{
			letter = "A";
		}
		break;

		case SET_ENUM.SET_B:
		{
			letter = "B";
		}
		break;
		
		case SET_ENUM.SET_C:
		{
			letter = "C";
		}
		break;
		
		default:
		{
			letter = "D";
		}
		break;
	}

	return letter;
}

function getSet(letter)
{
	if(isSetA(letter))
	{
		return SET_ENUM.SET_A;
	}
	else if(isSetB(letter))
	{
		return SET_ENUM.SET_B;
	}
	else if(isSetC(letter))
	{
		return SET_ENUM.SET_C;
	}
	else
	{
		return SET_ENUM.SET_D;
	}
}

function isSetA(letter)
{
	let set = "aeiou";
	
	if(-1 == set.search(letter))
	{
		return false;
	}
	else
	{
		return true;
	}
}

function isSetB(letter)
{
	let set = "bcdfg";
	
	if(-1 == set.search(letter))
	{
		return false;
	}
	else
	{
		return true;
	}
}

function isSetC(letter)
{
	let set = "hjklm";
	
	if(-1 == set.search(letter))
	{
		return false;
	}
	else
	{
		return true;
	}
}