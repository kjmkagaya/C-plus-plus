// T_019_For_Loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
A for loop is a repetition control structure that allows you to efficiently write a loop that needs to execute a specific number of times.

Syntax
The syntax of a for loop in C++ is −

for ( init; condition; increment ) {
statement(s);
}
Here is the flow of control in a for loop −

The init step is executed first, and only once. This step allows you to declare and initialize any loop control variables. You are not required to put a statement here, as long as a semicolon appears.

Next, the condition is evaluated. If it is true, the body of the loop is executed. If it is false, the body of the loop does not execute and flow of control jumps to the next statement just after the for loop.

After the body of the for loop executes, the flow of control jumps back up to the increment statement. This statement can be left blank, as long as a semicolon appears after the condition.

The condition is now evaluated again. If it is true, the loop executes and the process repeats itself (body of loop, then increment step, and then again condition). After the condition becomes false, the for loop terminates.
*/
int main()
{
	// for loop execution
	for (int a = 10; a < 20; a = a + 1) {
		cout << "value of a: " << a << endl;
	}
	system("pause");
	return 0;
}

