
#include <iostream>
#include<algorithm>
#include <vector>
#include "TreeNode.h"

TreeNode* parent(TreeNode* root);
TreeNode* nextInOrder(TreeNode* root) {
	TreeNode* res = nullptr;
	if (root != nullptr) {
		if (root->right != nullptr) {
			res = root->right;
			while (res->left != nullptr)
				res = res->left;
		}
		else {
			res = parent(root);
			while (res != nullptr && res->val < root->val)
				res = parent(res);
		}
	}
	return res;
}
int main()
{
	
}

