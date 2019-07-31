
#include <iostream>
#include "LinkedList.h"
using namespace std;

void OrderPartition(ListNode* &ln, int part){
	ListNode* pt1, * pt2, * swap; bool falStart = false;
	if (ln != nullptr) {
		if (ln->val < part) {
			pt1 = ln;
			while (pt1->next != nullptr && pt1->next->val < part) 
				pt1 = pt1->next;
			pt2 = pt1->next;
		}
		else {
			pt1 = new ListNode(0); pt1->next = ln; pt2 = ln; ln = pt1; falStart = true;
		}
		
		while (pt2 != nullptr) {
			
			if (pt2->next!=nullptr && pt2->next->val < part) {
				swap = pt2->next; pt2->next = pt2->next->next;
				swap->next = pt1->next; pt1->next = swap; pt1 = swap; 
			}
			else pt2 = pt2->next;
		}
		if (falStart) {
			ln = ln->next;
		}
	}
}
int main()
{	
	LinkedList* ls;
	ls = new LinkedList();
	for (int i = 0; i < 10; i++) {
		ls->add(10 - i);
	}
	ls->print(); OrderPartition(ls->head, 6); cout << "\n"; ls->print();
	return 0;
}

