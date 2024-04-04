#include<iostream>
using namespace std;
class MyDate
{
	int dd,mm,yy;
	public:
	void setDate(int,int,int);
	void setDay(int);
	void display();
	int getDate();
};
void MyDate::setDate(int d, int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
}
void MyDate::display()
{
	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
void MyDate::setDay(int d)
{
	dd=d;
}
int MyDate::getDate()
{
	return dd;
}
int main()
{
	MyDate d1;
	d1.setDate(18,3,24);
	d1.display();
	d1.setDay(19);
	d1.display();
	cout<<"day is"<<d1.getDate();
}
