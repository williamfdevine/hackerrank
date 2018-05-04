/**
	@file bitwise_operators.js
*/

function getMaxLessThanK(n, k) 
{
    let ret_val = 0;

    for(let i = 1; i <= n; i++)
    {
    	for(let j = i + 1; j <= n; j++)
    	{
    		let curr = i & j;
    		if(curr > ret_val && curr < k)
    		{
    			ret_val = curr;
    		}
    	}
    }

    return ret_val;
}