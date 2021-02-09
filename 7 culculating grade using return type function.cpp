#include<iostream>
using namespace std;
char grade(int);
int main()
{
	int m;
	cout<<"Enter marks :";
	cin>>m;
	cout<<"Your grade is "<<grade(m);
	return 0;
}
char grade(int m)
{
	char g;
	if(m>90)
	g='A+';
	else if(m>80&&m<90)
	g='A';
	else if(m>70&&m<80)
	g='B';
	else if(m>60&&m<70)
	g='C';
	else if(m>50&&m<60)
	g='D';
	else if(m>40&&m<50)
	g='E';
	else
	g='F';
	return g;
}
