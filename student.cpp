#include <iostream>
using namespace std;
 class Student{
   int rollno;
   char name[50];
   double fees;
  
  public:
  	Student();
  	void display();
 
 };
Student::Student()
{
	cout<<"enter rollno"<<endl;
	cin>>rollno;
	cout<<"entre name"<<endl;
	cin>>name;
	cout<<"enter fees"<<endl;
	cin>>fees;
}
 void Student::display(){
 	cout<<rollno<<"\n"<<name<<"\n"<<fees<<endl;
 }
 int main(){
 	Student s1;
 	s1.display();
 	return 0;
 	
 }
