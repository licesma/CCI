
#include <iostream>
#include <vector>
#include "TreeNode.h"
template <class T>
class ListNode {
public:
	T val;
	ListNode* next;
	ListNode(T val) {
		this->val = val;
		this->next = nullptr;
	}
};

using namespace std;


int depth(TreeNode* root) {
	if (root != nullptr) {
		int resL=depth(root->left) resR=depth(root->right));
		if (res > 1)
			return -1;
		return res+1;
	}
	return 0;

}


int main()
{
	
}

