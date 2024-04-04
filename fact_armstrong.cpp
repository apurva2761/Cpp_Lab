#include<iostream>
using namespace std;
class Equation
{
	int i,no,base,exponent;
	public:
	void factorial();
	void armstrong();
	void power(int,int);
	void fibonacci();

};
void Equation::factorial()
{
	int fact=1;
	cout<<"enter the number:"<<endl;
	cin>>no;
	for(i=no;i>0;i--)
	{
		fact=fact*i;	
	}
	cout<<"factorial\t"<<fact<<endl;
}
void Equation::armstrong()
{
	int rem,sum=0,orgnum;
	cout<<"enter the number:"<<endl;
	cin>>no;
	orgnum=no;
	while(no!=0)
	{
		rem=no%10; 
		no=no/10;
		sum=sum+rem*rem*rem;
	}
	if(sum==orgnum)
	cout<<"Armstrong number"<<endl;
	else
	cout<<"not Armstrong number"<<endl;
	
}
void Equation::power(int b, int e)
{
	int pow=1;
	base=b;
	exponent=e;
	for(i=1;i<=e;i++)
	{
	  pow=pow*b;	
	}
	cout<<"Power is\t"<<pow<<endl;
}
void Equation::fibonacci()
{
	int n1=0,n2=1,n3;
	i=1;
	cout<<"enter the range"<<endl;
	cin>>no;
	cout<<n1<<"\n"<<n2<<endl;
	while(i<no)
	{
		n3=n1+n2;
		cout<<n3<<"\t"<<endl;
		n1=n2;
		n2=n3;
		i++;
	}
	
}

int main()
{
	Equation e;
	e.factorial();
	e.armstrong();
	e.power(2,3);
	e.fibonacci();
	
}
