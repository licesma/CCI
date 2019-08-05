
#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
using namespace std;

void sortStack(Stack* st) {
	int top, count;
	Stack* aux = new Stack();
	while (!st->isEmpty()) {
		top = st->pop(); count = 0;
		while (!aux->isEmpty() && aux->peek() > top) {
			st->push(aux->pop()); count++;
		}
		aux->push(top);
		while (count > 0) {
			aux->push(st->pop()); count--;
		}
	}
	while (!aux->isEmpty()) {
		st->push(aux->pop());
	}
}
int main()
{
	return 0;
}

