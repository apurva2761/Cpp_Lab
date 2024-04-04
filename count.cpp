#include<iostream>
using namespace std;
class Count{
	 int real,img;
	 public:
	 static int cnt;
	 public:
	 	Count(){
	 		
	 		real=5;
	 		img=3;
	 		cnt++;
	 	
		 }
	Count (int r, int i){
		this->real=r;
		this->img=i;
		cnt++;
		
	}
	
	static int  getdata (){
		return cnt;
	}
};
int Count::cnt=0;
int main(){
	
	Count c,	c1 (20,40);
	
	cout<<Count::getdata();
	
	
}
