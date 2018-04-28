/**
	@file dequeue_stl.cpp
*/

#include <iostream>
#include <algorithm> 
#include <deque> 

static void printKMax(int array[], int array_elements, int subarray_elements)
{
	std::deque<int> queue;

	for(int i = 0; i < array_elements; i++)
	{
		while(!queue.empty() && array[i] > queue.back())
		{
			queue.pop_back();  
		}

		queue.push_back(array[i]);

		if(i >= subarray_elements && queue.front() == array[i - subarray_elements])
		{
			queue.pop_front();  
		}

		if(i >= subarray_elements - 1)
		{
			std::cout << queue.front() << " ";
		}
	}

	std::cout << std::endl;
}

int main(void)
{
	int test_cases;
	std::cin >> test_cases;

	while(test_cases-- > 0) 
	{
		int array_elements = 0;
		int subarray_elements = 0;
		std::cin >> array_elements >> subarray_elements;
		int array[array_elements];
		
		for(int i = 0; i < array_elements; i++)
		{
			std::cin >> array[i];
		}
		
		printKMax(array, array_elements, subarray_elements);
	}

	return 0;
}