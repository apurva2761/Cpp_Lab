#include<iostream>
using namespace std;
class Employee
{
	int id;
	float salary;
	public:
		void empDetail(int, float);
		void display();
		void setSalary(float);
		int getSal();
};
void Employee::empDetail(int i, float sal)
{ 
 id=i;
 salary=sal;
}
void Employee::display()
{
	cout<<"employee ID :"<<id<<"\n Employee Salary:"<<salary<<endl;
}
void Employee::setSalary(float s)
{
	salary=s;
}
int Employee::getSal()
{
	return salary;
}
int main(){
	Employee e;
	e.empDetail(101,60000);
	e.display();
	e.setSalary(500000);
	e.display();
	cout<<"updated salary :"<<e.getSal();	
}
