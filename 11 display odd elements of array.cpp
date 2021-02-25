#include<iostream>
using namespace std;
int main()
{
	int n,a[10000];
	cout<<"Enter length of array ";
	cin>>n;
	cout<<"\n Enter data in array variable";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Odd elements of array are given bellow\n";
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
	{
     	cout<<"\n"<<a[i];
	}
	}
	return 0;
}
