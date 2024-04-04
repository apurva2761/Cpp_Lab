#include<iostream>
using namespace std;
class MyComplex
{
	int real,img;
	public:
		void setComplexno(int r,int i)
		
		{
			real=r;
			img=i;
		}
		void display()
		{
			cout<<"complex no is"<<real<<"+"<<img<<"i"<<endl;
		}
		void setimg(int i)
		{
			img=i;
		}
		
		int getimg(){
			return img;
		}
};


int main(){
	MyComplex c1;
	c1.setComplexno(2,13);
	c1.display();
	c1.setimg(2);
int i=c1.getimg();	
cout<<"image part is"<<i<<endl;

}
