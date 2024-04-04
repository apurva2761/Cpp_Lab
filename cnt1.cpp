#include<iostream>
using namespace std;
class Count{
	 int real,img;	
	 public:static const int cnt;
	 private:static const int cnt1;
	 public:
	 	Count(){
	 		cout<<"default invoke";
	 		real=5;
	 		img=3;
	 		//cnt++;
	 	
		 }/*
	Count (int r, int i){
		this->real=r;
		this->img=i;
		cnt++;
		
	}*/
	
	 int  getdata (){
		return cnt;
	}
};
const int Count::cnt=5;
//const int Count::cnt1=10;
int main()
{
	
	Count c;
	//cout<<Count::getdata();
	cout<<Count::cnt;
	//cout<<Count::cnt1;
	}
