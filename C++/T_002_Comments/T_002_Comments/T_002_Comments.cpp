// T_002_Comments.cpp : Defines the entry point for the console application.
//

/*
Program comments are explanatory statements that you can include in the C++ code. These comments help anyone reading the source code. All programming languages allow for some form of comments.

C++ supports single-line and multi-line comments. All characters available inside any comment are ignored by C++ compiler.

C++ comments start with /* and end with . For example −

/* This is a comment */

/* C++ comments can also
* span multiple lines

A comment can also start with //, extending to the end of the line. For example 
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "Hello worlds \n"; // prints Hello World
	system("pause");
}
/*
When the above code is compiled, it will ignore // prints Hello World and final executable will produce the following result −

Hello World
Within a  and  comment, // characters have no special meaning. Within a // comment,  and  have no special meaning. Thus, you can "nest" one kind of comment within the other kind. For example −

/* Comment out printing of Hello World:

cout << "Hello World"; // prints Hello World

*/


