#include<iostream>
using namespace std;
class Test{
 	int a,b;
 	public:
 		void show(int,int);
 		void display();
 	
 };
void Test::show(int a , int b)
{
	this->a=a;
	(*this).b=b;

}
void Test::display()
{
	cout<<a<<b<<endl;
}
int main(){
	Test t;
	t.show(10,20);
	t.display();
}
