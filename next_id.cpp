#include<iostream>
using namespace std;
class Player
{
	int id;
	public:static int next_id;
	public:
		int  getId()
		{
			return id ;
		}
		Player()
		{
			id=next_id++;
		}
		
};
int Player::next_id=1;
int main()
{
	Player p;
	Player p1;
	Player p2;
	cout<<p.next_id<<" ";
	cout<<p1.next_id<<" ";
	cout<<p2.next_id<<endl;
}
