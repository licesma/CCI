
#include <iostream>
#include <vector>
#include "LinkedList.h"
#include "TreeNode.h"
using namespace std;


TreeNode* minimalTree(vector<int> arr) {
	return minimalTree(arr, 0, arr.size() - 1);
}
TreeNode* minimalTree(vector<int> arr, int start, int finish) {
	if (finish >= start) {
		int mid = (start + finish) / 2;
		TreeNode* head; head = new TreeNode(mid);
		head->left = minimalTree(arr, start, mid - 1);
		head->right = minimalTree(arr, mid + 1, finish);
		return head;
	}
	else
		return nullptr;
}

int main()
{
	return 0;
}

