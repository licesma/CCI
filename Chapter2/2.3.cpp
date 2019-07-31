
#include <iostream>
#include "LinkedList.h"
using namespace std;

void delThisNode(ListNode* ln) {
	ln->val = ln->next->val; ln->next = ln->next->next;
}
int main()
{	
	LinkedList* lis; lis = new LinkedList();
	for (int i = 0; i < 10; i++) {
		lis->add(i);
	}
	lis->print(); cout << "\n";
	delThisNode(lis->head->next->next->next);
	lis->print();
}

