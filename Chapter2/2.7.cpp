
#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
using namespace std;

bool intersection(ListNode* ln1, ListNode* ln2) {
	if (ln1 != nullptr && ln2 != nullptr) {
		ListNode* pt1, * pt2;
		while (pt1->next != nullptr) {
			pt1 = pt1->next;
		}
		while (pt2->next != nullptr) {
			pt2 = pt2->next;
		}
		return pt1 == pt2;
	}
	return false;
}
int main()
{
	return 0;
}

