
#include <iostream>
#include "LinkedList.h"
using namespace std;
template <class T>
void deleteReps(ListNode* ln) {
	ListNode* ptr; ptr = ln; ListNode* del;
	while (ptr != nullptr) {
		del = ptr->next;
		if (del != nullptr) {
			while (del->next != nullptr) {
				if (del->next->val == ptr->val) del->next = del->next->next;
				del = del->next;
			}
			if (ptr->next->val == ptr->val)ptr->next = ptr->next->next;
		}
		ptr=ptr->next;
	}
}
int main()
{
	
		return 0;
}

