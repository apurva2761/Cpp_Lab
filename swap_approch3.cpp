#include<iostream>
using namespace std;
class Swap
{
	int num;
	public:
		Swap(int num)
		{
			this->num=num;
		}
		friend void swap1(Swap&,Swap&);
};
void swap1(Swap& s1, Swap& s2)
{
	cout<<"before swapping\n"<<s1.num<<" "<<s2.num<<endl;
	 s1.num=s1.num + s2.num ;
	s2.num=s1.num - s2.num;
	s1.num=s1.num - s2.num ;
	cout<<"after swapping\n"<<s1.num<<" "<<s2.num<<endl;
}
int main()
{
	Swap s(6),s1(10);
	swap1(s,s1);
}
