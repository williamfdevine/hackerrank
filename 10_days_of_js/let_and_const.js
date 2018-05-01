/**
	@file let_and_const.js
*/

const PI = Math.PI;

function main()
{
	var radius = readLine();
	console.log(PI * radius * radius);
	console.log(PI * 2 * radius);

    try {    
        // Attempt to redefine the value of constant variable PI
        PI = 0;
        // Attempt to print the value of PI
        console.log(PI);
    } catch(error) {
        console.error("You correctly declared 'PI' as a constant.");
    }
}