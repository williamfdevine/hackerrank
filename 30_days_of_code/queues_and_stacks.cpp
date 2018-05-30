/**
	@file queues_and_stacks.cpp
*/

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Solution 
{

public:

	Solution()
	{

	}

	~Solution(){;}

	void pushCharacter(char to_push)
	{
		stack_.push(to_push);
	}

	void enqueueCharacter(char to_enqueue)
	{
		queue_.push(to_enqueue);
	}

	char popCharacter(void)
	{
		char ret_val = stack_.top();
		stack_.pop();
		return ret_val;
	}

	char dequeueCharacter(void)
	{
		char ret_val = queue_.front();
		queue_.pop();
		return ret_val;
	}

private:

	std::stack<char> stack_;
	std::queue<char> queue_;
};