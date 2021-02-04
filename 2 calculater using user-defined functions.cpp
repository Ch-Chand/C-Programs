#include<iostream>
#include<conio.h>
using namespace std;
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void mod(int,int);
int main()
{
	int a,b;
	char ch;
	cout<<"Enter 2 numbers :";
	cin>>a>>b;
	cout<<"Enter an arithmetic operator :";
	cin>>ch;
	if(ch=='+')
	add(a,b);
	else if(ch=='-')
	sub(a,b);
	else if(ch=='*')
	mul(a,b);
	else if(ch=='/')
	div(a,b);
	else
	mod(a,b);
    return 0;
}
void add(int a,int b)
{
	cout<<"SUM="<<a+b;
}
void sub(int a,int b)
{
	cout<<"SUBTRACTION="<<a-b;
}
void mul(int a,int b)
{
	cout<<"MULTIPLICATION="<<a*b;
}
void div(int a,int b)
{
	cout<<"DIVISION="<<a/b;
}
void mod(int a,int b)
{
	cout<<"MODULUS="<<a%b;
}
