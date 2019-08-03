
#include <iostream>
#include "LinkedList.h"
using namespace std;

ListNode* sumLists(ListNode* ln1, ListNode* ln2) {
	ListNode* pt1, * pt2, * res, * head; res = new ListNode(0); head = res;
	int sum = 0; bool finish; finish = false; pt1 = ln1; pt2 = ln2;
	while (!finish) {
		finish = true;
		if (pt1 != nullptr) {
			
			sum += pt1->val; pt1 = pt1->next;
			finish = false;
		}
		if (pt2 != nullptr) {
			sum += pt2->val; pt2 = pt2->next;
			finish = false;
		}
		cout << "\n" << sum;
		if (!finish) {
			res->next = new ListNode(sum % 10); res = res->next; cout << "\n val de res: " << res->val;
			sum = sum / 10;
		}
		
	}
	
	if (sum != 0) {
		res->next = new ListNode(sum % 10); res = res->next; cout << "\n entrooooo res: " << res->val;
	}
	return head->next;
	
}
int recursiveSumListsForward(ListNode* ln1, ListNode* ln2, ListNode* res);
ListNode* sumListsForward(ListNode* ln1, ListNode* ln2) {
	ListNode* res = new ListNode(0);
	if (ln1 != nullptr && ln2 != nullptr) {
		res->val = recursiveSumListsForward(ln1, ln2, res);
		if (res->val == 0)
			res = res->next;
		return res;
	}
	else if (ln1 != nullptr) return ln1;
	else return ln2;
}
int recursiveSumListsForward(ListNode* ln1, ListNode* ln2, ListNode* res) {
	ListNode* pt1 = ln1, * pt2 = ln2; bool fin1 = true, fin2 = true;
	int sum;
	if (ln1->next != nullptr) {
		pt1 = pt1->next; fin1 = false;
	}
	if (ln2->next != nullptr) {
		pt2 = pt2->next; fin2 = false;
	}
	cout << "\nEstos son los 2 pt: \n" << pt1->val << "\n" << pt2->val << "\n";
	if (fin1 && fin2) {
		sum = pt1->val + pt2->val; cout << "\n Esta es la suma: " << sum;
		pt1->val = 0; pt2->val = 0;
		res->next = new ListNode(sum % 10);
		return sum / 10;
	}
	else {
		sum = recursiveSumListsForward(pt1, pt2, res) + ln1->val + ln2->val;
		cout << "\n Esta es la suma: " << sum;
		ListNode* neuf = new ListNode(sum % 10);
		neuf->next = res->next; res->next = neuf;
		return sum / 10;
	}
}
int main()
{
	
	LinkedList* l1, * l2; l1 = new LinkedList(); l2 = new LinkedList();
	l2->add(2); l1->add(9); l2->add(7); l2->add(4); l2->add(1); l2->add(3);
	l1->print(); l2->print();
	ListNode* res; res = sumListsForward(l1->head, 0);
	
	cout << "\n\n";
	while (res != nullptr) {
		cout << res->val;
		res = res->next;
	}
	
	
	
	return 0;
}

