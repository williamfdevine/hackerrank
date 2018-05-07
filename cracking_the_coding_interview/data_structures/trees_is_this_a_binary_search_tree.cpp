/**
	@file trees_is_this_a_binary_search_tree.cpp
*/

#include<limits.h> 

bool isBST(Node* root, int min, int max)
{
	if(nullptr == root)
	{
		return true;
	}
	
	if(root->data < min || root->data > max)
	{
		return false;
	}

	return (isBST(root->left, min, root->data - 1) &&
			isBST(root->right, root->data + 1, max));
}

bool checkBST(Node* root)
{
	return isBST(root, INT_MIN, INT_MAX);
}