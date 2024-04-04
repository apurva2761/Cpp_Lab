#include<iostream>
using namespace std;
int main()
{
	int c=20;
	int a=10;
	  int*  const b= &a;
	a++;
	
	*b++;
	b=&c;
	cout<<a<<"\n"<<*b<<"\n"<<b<<endl;
	
	
	
}
