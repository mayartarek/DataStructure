#include "stack.h"
#include <iostream>
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

	stack s;
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.push(8);
	s.push(9);
	s.push(1);
	s.push(2);
	s.print();
	int y=0;
	s.TopElement(y);

}