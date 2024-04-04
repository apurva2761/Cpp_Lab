#include<iostream>
using namespace std;
class Calculation
{
	int a,b;
	public:
		void addition();
		void subtraction();
		void multiplication();
		void divsion();
		void modolus();
		
};
void Calculation::addition()
{
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	cout<<"addition : "<<a+b<<endl;
}
void Calculation::subtraction()
{
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	cout<<"subtraction : "<<a-b<<endl;	
}
void Calculation::multiplication()
{
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	cout<<" multiplication: "<<a*b<<endl;
}
void Calculation::divsion()
{
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	cout<<" division: "<<a/b<<endl;
}
void Calculation::modolus()
{
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	cout<<" Remainder: "<<a%b<<endl;
}
int main(){
	
	Calculation c;
	
	c.addition();
	c.subtraction();
	c.multiplication();
	c.divsion();
	c.modolus();
	
}
