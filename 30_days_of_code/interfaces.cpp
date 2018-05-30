/**
	@file interfaces.cpp
*/


class Calculator : public AdvancedArithmetic 
{

public:

    int divisorSum(int n) 
    {
    	if(n == 1)
    	{
    		return 1;
    	}
    	
    	int sum = n + 1;
        
        for(int i = 2; i < n; i++)
        {
        	sum += (((n % i) == 0) ? (i) : (0));
        }

        return sum;
    }

};