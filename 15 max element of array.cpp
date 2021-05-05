#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,a[5],max;
	cout<<"Enter data in array";
	for(i=0;i<5;i++)
	cin>>a[i];
	max=a[0];
	for(i=0;i<5;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	cout<<"Largest element of array is :"<<max;
	return 0;
}
