// T_035_Numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
Numbers in C++
Normally, when we work with Numbers, we use primitive data types such as int, short, long, float and double, etc. The number data types, their possible values and number ranges have been explained while discussing C++ Data Types.

Defining Numbers in C++
You have already defined numbers in various examples given in previous chapters. Here is another consolidated example to define various types of numbers in C++ −
ath Operations in C++
In addition to the various functions you can create, C++ also includes some useful functions you can use. These functions are available in standard C and C++ libraries and called built-in functions. These are functions that can be included in your program and then use.

C++ has a rich set of mathematical operations, which can be performed on various numbers. Following table lists down some useful built-in mathematical functions available in C++.

To utilize these functions you need to include the math header file <cmath>.

Sr.No	Function & Purpose
1
double cos(double);

This function takes an angle (as a double) and returns the cosine.

2
double sin(double);

This function takes an angle (as a double) and returns the sine.

3
double tan(double);

This function takes an angle (as a double) and returns the tangent.

4
double log(double);

This function takes a number and returns the natural log of that number.

5
double pow(double, double);

The first is a number you wish to raise and the second is the power you wish to raise it t

6
double hypot(double, double);

If you pass this function the length of two sides of a right triangle, it will return you the length of the hypotenuse.

7
double sqrt(double);

You pass this function a number and it gives you the square root.

8
int abs(int);

This function returns the absolute value of an integer that is passed to it.

9
double fabs(double);

This function returns the absolute value of any decimal number passed to it.

10
double floor(double);

Finds the integer which is less than or equal to the argument passed to it.
*/
#include <cmath>
#include <ctime>
#include <cstdlib>

int main()
{	

	// number definition:
	short  s;
	int    i;
	long   l;
	float  f;
	double d;

	// number assignments;
	s = 10;
	i = 1000;
	l = 1000000;
	f = 230.47;
	d = 30949.374;

	// number printing;
	cout << "short  s :" << s << endl;
	cout << "int    i :" << i << endl;
	cout << "long   l :" << l << endl;
	cout << "float  f :" << f << endl;
	cout << "double d :" << d << endl;
	// mathematical operations;
	cout << "sin(d) :" << sin(d) << endl;
	cout << "abs(i)  :" << abs(i) << endl;
	cout << "floor(d) :" << floor(d) << endl;
	cout << "sqrt(f) :" << sqrt(f) << endl;
	cout << "pow( d, 2) :" << pow(d, 2) << endl;

	int  j;

	// set the seed
	srand((unsigned)time(NULL));

	/* generate 10  random numbers. */
	for (int i = 0; i < 10; i++) {
		// generate actual random number
		j = rand();
		cout << " Random Number : " << j << endl;
	}


	system("pause");
    return 0;
}

/*
Random Numbers in C++
There are many cases where you will wish to 
generate a random number. There are actually two
functions you will need to know about random number 
generation. The first is rand(), this function will only
return a pseudo random number. The way to fix this is to 
first call the srand() function.

Following is a simple example to generate 
few random numbers. This example makes use of time() 
function to get the number of seconds on your system time, 
to randomly seed the rand() function −
*/
