#include<iostream>
#include<conio.h>
using namespace std;
void num(int a);
int main()
{
	int a;
	cout<<"Enter a number for checking :";
	cin>>a;
	num(a);
	return 0;
}
void num(int a)
{
	int i,c;
	for(i=2;i<=a/2;i++)
	{
		c=0;
		if(a%i==0)
		{
		c=1;
		break;
	    }
	}
	if(c=0&&a%2==0)
	cout<<a<<" is even and prime ";
	else if(c=1&&a%2==0)
	cout<<a<<" is only even but not prime ";
	else if(c=0&&a%2!=0)
	cout<<a<<" is only prime but not even ";
	else if(c=1&&a%2!=0)
	cout<<a<<" is neither prime and nor even";
}
