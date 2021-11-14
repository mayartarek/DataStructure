#include "BalancedParenthesesUsingStack.h"
#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool airPair(char open,char close) {
	if (open == '(' && close == ')')
		return true;
	if (open == '{' && close == '}')
		return true;
	if (open == '[' && close == ']')
		return true;
	return false;
}
bool arBalanced(string exp) {
	stack<char>s;
	for (size_t i = 0; i < exp.length(); i++) {
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			s.push(exp[i]);
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
			if (s.empty()|| !airPair(s.top(),exp[i]))
				return false;
			else
				s.pop();
		}
	}
   return s.empty()?true:false;

};

int main() {
	string expression;
	cout << "Enter the expression:"<<endl;
	cin >> expression;
	if(arBalanced(expression))
		cout << "balanced" << endl;
	else
		cout << "NotBalanced" << endl;
	
}