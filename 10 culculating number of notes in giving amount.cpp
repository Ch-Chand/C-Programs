#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int amount,a,b,c,d,e,f,g;
	cout<<"ENter amount :";
	cin>>amount;
	a=amount/500;
	amount=amount%500;
	b=amount/100;
	amount=amount%100;
	c=amount/50;
	amount=amount%50;
	d=amount/20;
	amount=amount%20;
	e=amount/10;
	amount=amount%10;
	f=amount/5;
	amount=amount%5;
	g=amount/1;
	cout<<"Currency notes\tNumber of notes\n"
	    <<"500:\t\t"<<a<<endl
	    <<"100:\t\t"<<b<<endl
	    <<"50:\t\t"<<c<<endl
	    <<"20:\t\t"<<d<<endl
	    <<"10:\t\t"<<e<<endl
	    <<"5:\t\t"<<f<<endl
	    <<"1:\t\t"<<g<<endl;
	return 0;
}
