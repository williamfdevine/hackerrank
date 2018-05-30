/**
	@file binary_search_trees.cpp
*/

int getHeight(Node* root)
{
	if(NULL == root)
	{
		return -1;
	}
	else
	{
		int left = getHeight(root->left);
		int right = getHeight(root->right);

		return ((left > right) ? (left) : (right)) + 1;
	}
}