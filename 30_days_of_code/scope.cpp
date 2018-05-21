/**
	@file scope.cpp
*/

Difference(std::vector<int> element_list): elements(element_list) {;}

void computeDifference(void)
{
	std::sort(elements.begin(), elements.end());
	maximumDifference = elements.back() - elements.front();
}