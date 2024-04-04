#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a,b;
	cout<<"Enter a and b "<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<<"after swapping";
	cout<<"values of a and b\t"<<a<<"\t"<<b<<endl;
		
}
void swap(int& p, int& q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"after swapping";
	cout<<"values p and q \t"<<p<<"\t"<<q<<endl;
	
}
