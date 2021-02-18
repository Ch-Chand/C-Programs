#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int cprice,sprice,loss,profit;
	cout<<"Enter cost price :";
	cin>>cprice;
	cout<<"Enter selling price :";
	cin>>sprice;
	if(cprice>sprice)
	{
		loss=cprice-sprice;
		cout<<"He has incured loss of "<<loss;
	}
	else
	{
		profit=sprice -cprice;
		cout<<"He has got profit of "<<profit;
	}
	return 0;
}
