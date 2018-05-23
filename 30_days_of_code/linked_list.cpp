/**
	@file linked_list.cpp
*/

Node* insert(Node* head, int data)
{
	Node* new_node = new Node(data);

	if(head == NULL)
	{
		return new_node;
	}

	Node* tail = head;
	while(nullptr != tail->next)
	{
		tail = tail->next;
	}

	tail->next = new_node;
	return head;
}
