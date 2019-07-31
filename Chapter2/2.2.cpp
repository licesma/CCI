
#include <iostream>
#include "LinkedList.h"
using namespace std;

ListNode* kthToLast(ListNode* ln, int k) {
	ListNode *pt1, *pt2;
	try {
		pt1 = ln;
		for (int i = 1; i < k; i++) {
			pt1 = pt1->next;
		}
	}
	catch (exception ex) {
		return nullptr;
	}
	if (pt1 != nullptr) {
		pt2 = ln;
		while (pt1->next != nullptr) {
			pt2 = pt2->next; pt1 = pt1->next;
		}
		return pt2;
	}
	else return nullptr;
}
int main()
{
		return 0;
}

