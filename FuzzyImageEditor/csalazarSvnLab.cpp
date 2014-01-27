#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int factorial(int i)
{
	
	if (i == 0) {
		return 1;
	}
	else {
		return i*factorial(i-1);
	}
}

int main()	
{
	int n, fact=1;
	char q;
	cout<<"Enter the number: "; 
	cin>>n;

	fact = factorial(n);
 
	cout<<"The factorial of the given number is: "<<fact<<endl;
    	cout<<"Enter any character";
	cin>> q;
 }

