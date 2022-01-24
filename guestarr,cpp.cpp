
#include<iostream>
using namespace std;
int main()
{
	int guests,charis,i;
	int arrag=1;
	cout<<"enter the number of guests";
	cin>>guests;
	cout<<"enter the number of  charis";
	cin>>charis;
	for(i=1;i<=charis;i++)
	{
	arrag*=guests--;
}
	cout<<"number of arragement:"<< arrag;
	return 0;
}
