/**
	@file linked_lists_detect_a_cycle.cpp
*/

#include <unordered_set>

bool has_cycle(Node* head)
{
	if(nullptr == head)
	{
		return false;
	}
	
	std::unordered_set<Node*> node_set;
	Node* current = head;

	while(nullptr != current)
	{
		if(node_set.end() == node_set.find(current))
		{
			node_set.insert(current);
			current = current->next;
		}
		else
		{
			return true;
		}
	}

	return false;
}