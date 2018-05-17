/**
	@file recursion.cpp
*/

#include <bits/stdc++.h>
#include <iostream>

// Complete the factorial function below.
int factorial(int n) 
{
	if(n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}

}

int main()
{
    std::ofstream fout(std::getenv("OUTPUT_PATH"));

    int n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << std::endl;

    fout.close();

    return 0;
}
