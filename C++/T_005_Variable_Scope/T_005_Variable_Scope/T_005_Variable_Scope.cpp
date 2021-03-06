// T_005_Variable_Scope.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
Variable Scope in C++
A scope is a region of the program and broadly speaking there are three places, where variables can be declared −

Inside a function or a block which is called local variables,

In the definition of function parameters which is called formal parameters.

Outside of all functions which is called global variables.

We will learn what is a function and it's parameter in subsequent chapters. Here let us explain what are local and global variables.

Local Variables
Variables that are declared inside a function or block are local variables. They can be used only by statements that are inside that function or block of code. Local variables are not known to functions outside their own. Following is the example using local variables −
Global Variables
Global variables are defined outside of all the functions, usually on top of the program. The global variables will hold their value throughout the life-time of your program.

A global variable can be accessed by any function. That is, a global variable is available for use throughout your entire program after its declaration. Following is the example using global and local variables
Initializing Local and Global Variables
When a local variable is defined, it is not initialized by the system, you must initialize it yourself. Global variables are initialized automatically by the system when you define them as follows −

Data Type	Initializer
int	0
char	'\0'
float	0
double	0
pointer	NULL
It is a good programming practice to initialize variables properly, otherwise sometimes program would produce unexpected result.
*/
// Global variable declaration:
int g = 20;
int main()
{
	// Local variable declaration:
	int a, b;
	int c;
	// actual initialization
	a = 10;
	b = 20;
	c = a + b;
	// Local variable declaration:
	int g = 10;
	cout << c << endl;
	cout << "This is local variable " << g;
	system("pause");
	return 0;
}

