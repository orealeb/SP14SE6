/* Carlos Salazar SVN Lab Assignment */
#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()	
{
	int n, fact=1;
	char q;
	cout<<"Enter the number: "; 
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
 
	cout<<"The factorial of the given number is: "<<fact<<endl;
    	cout<<"Enter any character";
	cin>> q;
 }