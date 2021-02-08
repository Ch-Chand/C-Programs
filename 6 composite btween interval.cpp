#include<iostream>
using namespace std;
int main()
{
	int start,end,test,i,j;
	cout<<"Enter starting and ending point of composite number :";
	cin>>start>>end;
	for(i=start;i<=end;i++)
	{
		test=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				test=1;
			}
		}
			if(test==1)
			cout<<i<<"\t";
	}
	return 0;
}
