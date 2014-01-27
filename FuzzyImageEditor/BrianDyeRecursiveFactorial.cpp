#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int recursiveFactorial(int i)
{
	if(i == 1)
		return 1;
	else 
		return recursiveFactorial(i - 1) * i;
	
}

int main()	
{
	int n, fact=1;
	char q;
	cout<<"Enter the number: "; 
	cin>>n;

	fact = recursiveFactorial(n);
 
	cout<<"The factorial of the given number is: "<<fact<<endl;
    	cout<<"Enter any character";
	cin>> q;
 }

