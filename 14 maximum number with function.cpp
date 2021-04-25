


#include<iostream>
#include<conio.h>
using namespace std;
void num(int,int);
int main()
{
	int x,y;
	cout<<"Enter two numbers :";
	cin>>x>>y;
	num(x,y);
	return 0;
}
void num(int a,int b)
{
	if(a>b)
	cout<<"The maximum number is "<<a;
	else
	cout<<"The maximum number is "<<b;
}
