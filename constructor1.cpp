#include<iostream>
using namespace std;
class MyDate
{
	int dd,mm,yy;
	public:
		MyDate();
		int setDay(int);
		MyDate(int,int,int);
		int getDay();
		void display();
};
void MyDate::display()
{
	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
MyDate::MyDate()
{
	cout<<"default constructor"<<endl;
	dd=19;
	mm=3;
	yy=24;
}
MyDate::MyDate(int d,int m,int y)
{
	cout<<"parametrised constructor"<<endl;
	dd=d;
	mm=m;
	yy=y;
}
int MyDate::setDay(int d)
{
	dd=d;
}
int MyDate::getDay()
{
	return dd;
}

int main()
{
	MyDate d1;
	d1.display();
	MyDate d2(22,3,24);
	d2.display();
	d2.setDay(24);
		d2.getDay();
}
