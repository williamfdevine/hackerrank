/**
	@file abstract_classes_polymorphism.cpp
*/



class LRUCache: public Cache
{

public:

	LRUCache(int capacity) {cp = capacity;}
	~LRUCache(){;}

	void set(int key, int value)
	{
		if(true == mp.empty())
		{
			addFirstNode(key, value);
		}
		else if(true == elementExists(key))
		{
			updateNode(key, value);
		}
		else
		{
			insertNewNode(key, value);
		}


	}

	int get(int key)
	{
		return ((true == elementExists(key)) ? (mp.find(key)->second->value) : (-1));
	}

private:

	void addFirstNode(int key, int value)
	{
		Node* node = new Node(key, value);
		head = node;
		tail = node;
		mp[key] = node;
	}

	bool elementExists(int key)
	{
		return (mp.end() != mp.find(key));
	}

	void updateNode(int key, int value)
	{
		auto iterator = mp.find(key);
		iterator->second->value = value;

		if(iterator->second != head)
		{
			iterator->second->prev->next = iterator->second->next;

			if(iterator->second == tail)
			{
				tail = tail->prev;
			}
			else
			{
				iterator->second->next->prev = iterator->second->prev;
			}

			iterator->second->next = head;
			iterator->second->prev = nullptr;
			head->prev = iterator->second;
			head = iterator->second;
		}
	}

	void insertNewNode(int key, int value)
	{
		Node* node = new Node(head->prev, head, key, value);
		head->prev = node;
		head = node;
		mp[key] = node;

		if(true == cacheFull())
		{
			dropOldest();
		}
	}

	bool cacheFull(void)
	{
		return (mp.size() > cp);
	}

	void dropOldest(void)
	{
		tail = tail->prev;
		mp.erase(tail->next->key);
		delete tail->next;
		tail->next = nullptr;
	}
	
};