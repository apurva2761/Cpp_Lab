#include<iostream>
using namespace std;
class Pattern
{
	int i,j;
	public:
		void table(int no)
		{
			for(i=1;i<=10;i++)
			{
				cout<<no<<"*"<<i<<"="<<no*i<<endl;
			}
		}
		void star()
		{
			for(i=1;i<=4;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout<<"*";
				}
				cout<<"\n";
			}
				
		}
			void starRev()
		{
			for(i=1;i<=4;i++)
			{
				for(j=i;j<=4;j++)
				{
					cout<<"*";
				}
				cout<<"\n";
			}
		}
		void numbers()
		{
				for(i=1;i<4;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout<<i;
					
				}
				cout<<"\n";
			}
				
			
		}
		void alphabets()
		{
		  char ch='a';
		for(i=1;i<=4;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout<<ch;
					ch++;
					
				}
				
					cout<<"\n";
		
			}
			
		
}
				void floydTriangle()
				{
					int n=1;
					for(i=1;i<=4;i++)
					{
						for(j=1;j<=i;j++)
						{
							cout<<n;
							n++;
						}
						
						cout<<endl;
					}
						
				}
					void floydTriangleRev()
				{
					int n=10;
					for(i=4;i<=8;i++)
					{
						for(j=i;j<=7;j++)
						{
							cout<<n;
							n--;
						}
						
						cout<<endl;
					}
						
				}
				
		void numbersRev()
		{
				for(i=4;i<=8;i++)
			{
				for(j=i;j<=8;j++)
				{
					cout<<i;
				}
				cout<<"\n";
			}
				
			
		}
		void alphabetsRev()
		{
		  char ch='a';
		for(i=1;i<=4;i++)
			{
				for(j=i;j<=4;j++)
				{
					cout<<ch;
					
				}
				ch++;
					cout<<"\n";
		
			}
			
		
}
};

int main()
{
	Pattern p;
	p.table(5);
	cout<<endl;
	p.star();
	p.starRev();
	cout<<endl;
	p.numbers();
	p.numbersRev();
	cout<<endl;
	p.alphabets();
	p.alphabetsRev();
	cout<<endl;
	p.floydTriangle();
	p.floydTriangleRev();

	
}
