// T_029_Nested_If_Statements.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
C++ nested if statements
It is always legal to nest if-else statements, which means you can use one if or else if statement inside another if or else if statement(s).

Syntax
The syntax for a nested if statement is as follows −

if( boolean_expression 1) {
// Executes when the boolean expression 1 is true
if(boolean_expression 2) {
// Executes when the boolean expression 2 is true
}
}
You can nest else if...else in the similar way as you have nested if statement.

*/

int main()
{
    

	// local variable declaration:
	int a = 100;
	int b = 200;

	// check the boolean condition
	if (a == 100) {
		// if condition is true then check the following
		if (b == 200) {
			// if condition is true then print the following
			cout << "Value of a is 100 and b is 200" << endl;
		}
	}
	cout << "Exact value of a is : " << a << endl;
	cout << "Exact value of b is : " << b << endl;
	system("pause");
	return 0;


}

