
#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Graph.h"
using namespace std;

bool RouteBetweenNodes(Graph* graph, GraphNode* gr1, GraphNode* gr2) {
	
	for (GraphNode* gr : *graph->nodes) {
		gr->visited = false;
	}
Stack<GraphNode*>* st = new Stack<GraphNode*>();
bool finish;
if (gr1 != nullptr && gr2 != nullptr) {
	if (gr1 != gr2) {
		gr1->visited = true;
		st->push(gr1);
	}else
		return true;
	while (!st->isEmpty()) {
		for (GraphNode* check : *st->pop()->adyacent) {
			if (!check->visited) {
				check->visited = true;
				if (check == gr2)
					return true;
				else {
					cout << check->val << " was added to stack\n";
					st->push(check);
				}
			}
		}
	}
}
return false;

}

int main()
{
	return 0;
}

