// T_025_Decision_Making_Statements.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
using namespace std;

/*
C++ decision making statements
Decision making structures require that the programmer
specify one or more conditions to be evaluated or tested
by the program, along with a statement or statements to 
be executed if the condition is determined to be true, and 
optionally, other statements to be executed if the condition
is determined to be false.

Following is the general form of a typical decision making structure found in most of the programming languages −
C++ programming language provides following types of decision making statements.

Sr.No	Statement & Description
1	if statement
An ‘if’ statement consists of a boolean expression followed by one or more statements.

2	if...else statement
An ‘if’ statement can be followed by an optional ‘else’ statement, which executes when the boolean expression is false.

3	switch statement
A ‘switch’ statement allows a variable to be tested for equality against a list of values.

4	nested if statements
You can use one ‘if’ or ‘else if’ statement inside another ‘if’ or ‘else if’ statement(s).

5	nested switch statements
You can use one ‘switch’ statement inside another ‘switch’ statement(s).

The ? : Operator
We have covered conditional operator “? :” in previous chapter which can be used to replace if...else statements. It has the following general form −

Exp1 ? Exp2 : Exp3;
Exp1, Exp2, and Exp3 are expressions. Notice the use and placement of the colon.

The value of a ‘?’ expression is determined like this: Exp1 is evaluated. If it is true, then Exp2 is evaluated and becomes the value of the entire ‘?’ expression. If Exp1 is false, then Exp3 is evaluated and its value becomes the value of the expression.
*/
int main()
{
    /*
	Exp1 ? Exp2 : Exp3;
	where Exp1, Exp2, and Exp3 are expressions. Notice the use and placement of the colon. The value of a ? expression is determined like this: Exp1 is evaluated. If it is true, then Exp2 is evaluated and becomes the value of the entire ? expression. If Exp1 is false, then Exp3 is evaluated and its value becomes the value of the expression.

	The ? is called a ternary operator because it requires three operands and can be used to replace if-else statements, which have the following form −

	if(condition) {
	var = X;
	} else {
	var = Y;
	}
	For example, consider the following code −

	if(y < 10) {
	var = 30;
	} else {
	var = 40;
	}
	Above code can be rewritten like this −

	var = (y < 10) ? 30 : 40;
	Here, x is assigned the value of 30 if y is less than 10 and 40 if it is not.
	*/
	// Local variable declaration:
	int x, y = 10;

	x = (y < 10) ? 30 : 40;
	cout << "value of x: " << x << endl;
}

