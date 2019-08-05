
#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
using namespace std;

class MyQueue{
public:
	Stack* st1, * st2;
	MyQueue() {
		st1 = new Stack();
		st2 = new Stack();
	}
	void add(int data) {
		if (st1->isEmpty() && st2->isEmpty())
			st1->push(data);
		else
			st2->push(data);
	}
	int remove() {
		if (!st1->isEmpty() || !st2->isEmpty()) {
			if (!st1->isEmpty())
				return st1->pop();
			else {
				while (!st2->isEmpty())
					st1->push(st2->pop());
				return st1->pop();
			}
		}
	}

int peek() {
	if (!st1->isEmpty() || !st2->isEmpty()) {
		if (!st1->isEmpty())
			return st1->peek();
		else {
			while (!st2->isEmpty())
				st1->push(st2->pop());
			return st1->peek();
		}
	}
}
bool isEmpty() {
	return st1->isEmpty() && st2->isEmpty();
}
};
int main()
{
	MyQueue* que; que = new MyQueue();
	cout << "\n isEmpty: " << que->isEmpty();
	for (int i = 0; i < 10; i++) {
		que->add(i);
	}
	cout << "\n isEmpty: " << que->isEmpty();
	cout << "\n peek: " << que->peek();
	cout << "\n pop: " << que->remove();

	que->add(314); que->add(712);
	while(!que->isEmpty())
		cout << "\n pop: " << que->remove();
	

	
	
}

