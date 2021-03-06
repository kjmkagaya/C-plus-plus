// T_023_Continue_Statement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*C++ continue statement
The continue statement works somewhat like the break statement. Instead of forcing termination, however, continue forces the next iteration of the loop to take place, skipping any code in between.

For the for loop, continue causes the conditional test and increment portions of the loop to execute. For the while and do...while loops, program control passes to the conditional tests.

Syntax
The syntax of a continue statement in C++ is −

*/

int main()
{
	int a = 10;

	// do loop execution
	do {
		if (a == 15) {
			// skip the iteration.
			a = a + 1;
			continue;
		}
		cout << "value of a: " << a << endl;
		a = a + 1;
	} while (a < 20);
	system("pause");
	return 0;
}

