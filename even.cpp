#include<iostream>
using namespace std;
class Checkno
{
	int i;
	public:
		void even();
		void odd();
		void prime();
};
void Checkno::prime()
{
	int n;
	cout<<"enter number:"<<endl;
	cin>>n;
	for(i=2;i < n;i++)
	{
		if (n % i == 0)
			break;
	
	}
	if (i == n)
		cout<<"prime";
	else
		cout<<"not prime";
}

void Checkno::even()
{
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			cout<<i<<"\t"<<endl;
		}	
	}
}
void Checkno::odd()
{
	for(i=1;i<=10;i++)
	{
		if(i%2!=0)
		{
			cout<<i<<"\t"<<endl;
		}	
	}
	
}

int main()
{
	Checkno ch;
	cout<<"even number between 1 to 10"<<endl;
	cout<<"Even number"<<endl;
	ch.even();
	cout<<"Odd number"<<endl;
	ch.odd();
	cout<<"prime or non-prime"<<endl;
	ch.prime();
	
	

}
