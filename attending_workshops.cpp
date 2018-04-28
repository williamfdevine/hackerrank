/**
	@file attending_workshops.cpp
*/

#include <vector>

typedef std::pair<int, int> Workshop;
typedef std::vector<Workshop> Available_Workshops;

#define SET_START_TIME(available_workshops, idx, time) (available_workshops->at(idx).first = time)
#define SET_END_TIME(available_workshops, idx, time)   (available_workshops->at(idx).second = time)
#define GET_START_TIME(available, idx)                 (available->at(idx).first)
#define GET_END_TIME(available, idx)                   (available->at(idx).second)

Available_Workshops* initialize(int start_time[], int duration[], int num)
{
	Available_Workshops* ret_val = new Available_Workshops(num);
	
	for (int i = 0; i < num; i++)
	{
		SET_START_TIME(ret_val, i, start_time[i]);
		SET_END_TIME(ret_val, i, start_time[i] + duration[i]);
	}

	return ret_val;
}

static bool SortWorkshops(const Workshop& workshop_1, const Workshop& workshop_2)
{
	return (workshop_1.second < workshop_2.second);
}

uint32_t CalculateMaxWorkshops(Available_Workshops* available)
{
	std::sort(available->begin(), available->end(), SortWorkshops);
	int end_of_day = 0;
	int number_of_workshops = 0;
	for(int i = 0; i < available->size(); i++)
	{
		if(GET_START_TIME(available, i) >= end_of_day)
		{
			end_of_day = GET_END_TIME(available, i);
			number_of_workshops++;
		}
	}

	return number_of_workshops;
}