#include <iostream>
using namespace std;
template<class t> 
class LinkedList {
	struct node {
		t item;
		node *next;
	};
	node* top,*cur;
 public:	
	  LinkedList()
	  {
		top = NULL;
	  }
	  void push(t newItem) {
		 node* newItemPtr = new node;
		 if (newItemPtr == NULL) {
			 cout << "stacl allpcate memory";
		 }
		 else{newItemPtr->item = newItem;
		newItemPtr->next = top;
		top = newItemPtr;
		 }
		 


	   }
	  bool isEmpty() {
		  return top == NULL;

	  }

	  void pop(t& stackTop) {
		  if (isEmpty()) {
			  cout << "stack empyt" << endl;
		  }
		  else
		  {
			  stackTop = top->item;
			  node* temp = top;
			  top = top->next;
			  temp = temp->next = NULL;
			  delete temp;
		  }
	  }
	  void getTop(t& stackTop) {
		  if (isEmpty()) {
			  cout << "stack empyt" << endl;
		  }
		  else
		  {
			  stackTop = top->item;
			
		  }
	  }
	  void dispalay() {
		  cur = top;
		  while (cur!=NULL) {
			  cout << cur->item <<endl;
			 cur= cur->next;

		  }
	  }
};

