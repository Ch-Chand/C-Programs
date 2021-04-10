#include<iostream>
using namespace std;
int main()
{
	int i,j;
	i=1;
	while(i<=4)
	{
		j=1;
		while(j<=i)
		{
			cout<<"***";
			j++;
		}
		cout<<endl;
		i++;
	}
	i=3;
	while(i>=1)
	{
		j=1;
		while(j<=i)
		{
			cout<<"***";
			j++;
		}
		cout<<endl;
		i--;
	}
	return 0;
}
