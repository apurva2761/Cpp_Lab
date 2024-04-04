#include <iostream>
using namespace std;
 class Demo{
 	int a,b;
 	public:
 		void show(){
 			
 			a=10;
 			b=20;
 			cout<<"object add"<<this<<endl;
 			cout<<"a"<<this->a<<endl;
 			cout<<"b"<<this->b<<endl;
		 }
 };

int main(){
	Demo D;
	cout<<&D<<endl;
	D.show();
	
	
}
