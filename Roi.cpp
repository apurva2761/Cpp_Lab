#include<iostream>
#include<string.h>
using namespace std;
class Rate{
	int id;
	char name[50];
	static float roi;
	public:
		void setData(int,char*);
		void getData();
};
void Rate::setData(int i,char *n)
{
	this->id=i;
	strcpy(this->name,n);
}
void Rate::getData()
{
	cout<<"id"<<id<<" " <<"name"<<name<<" "<<"ROI"<<roi<<endl;
}
float Rate::roi=6.5;
int main()
{
	Rate r;
	r.setData(100,"asgh");
	r.getData();
}
