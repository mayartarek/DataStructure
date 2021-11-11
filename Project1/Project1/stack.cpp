#include "stack.h"
#include <iostream>
#include "LinkedList.cpp"
using namespace std;
const  int Max_size = 100;
class stack
{
	int  top;
	int Item[Max_size];
public:
	stack():top(-1) {};
	void push(int element) {
		if (top >= Max_size - 1) {
			cout << "stack Full on push";

		}
		else {
			top++;
			Item[top] = element;
		}
	}
	bool isEmpty() {
		return top < 0;

	}
	void pop() {
		if (isEmpty()) {
			cout << "stack empty on pop"<<endl;
		}
		else
		{
			top--;
		}
	}
	void TopElement(int &element) {
		if (isEmpty()) {
			cout << "stack empty on pop";
		}
		else
		{
			element = Item[top];
			cout << element << endl;
		}
	}
	void print() {
		for (int  i =top; i >=0; i--)
		{
			cout << Item[i] << ""<<endl;

		}
	
	}

};

int main() {



	LinkedList<int> c;
	c.push(100);
	c.push(200);

	c.dispalay();
}