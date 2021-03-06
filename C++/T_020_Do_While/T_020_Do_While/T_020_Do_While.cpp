// T_020_Do_While.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
Unlike for and while loops, which test the loop condition at the top of the loop, the do...while loop checks its condition at the bottom of the loop.

A do...while loop is similar to a while loop, except that a do...while loop is guaranteed to execute at least one time.

Syntax
The syntax of a do...while loop in C++ is −

do {
statement(s);
}
while( condition );
Notice that the conditional expression appears at the end of the loop, so the statement(s) in the loop execute once before the condition is tested.

If the condition is true, the flow of control jumps back up to do, and the statement(s) in the loop execute again. This process repeats until the given condition becomes false.
*/
int main()
{	
	// Local variable declaration:
	int a = 10;

	// do loop execution
	do {
		cout << "value of a: " << a << endl;
		a = a + 1;
	} while (a < 20);
	system("pause");
    return 0;
}

