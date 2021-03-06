// T_011_Sizeof_Operator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

/*
C++ sizeof Operator
The sizeof is a keyword, but it is a compile-time operator that determines the size, in bytes, of a variable or data type.

The sizeof operator can be used to get the size of classes, structures, unions and any other user defined data type.

The syntax of using sizeof is as follows −

sizeof (data type)
Where data type is the desired data type including classes, structures, unions and any other user defined data type.

Try the following example to understand all the sizeof operator available in C++. Copy and paste following C++ program in test.cpp file and compile and run this program.
*/
int main()
{	
	// im to lazy to type the c++ out you can type it like c printf
	printf("Size of char %d \n", sizeof(char));
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
	system("pause");
    return 0;
}

