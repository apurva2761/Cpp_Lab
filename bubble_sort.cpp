#include<iostream>
using namespace std;
int main()
{
	int n,i,j,max=0;
	int a[n];
	cout<<"Enter the no of elements"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"before sorting"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<i;j++)
 		{
 			if(a[i]<a[j])
 			{
 				int temp;
 				temp=a[i];
 				a[i]=a[j];
 				a[j]=temp;
			 }
		 }
	 }
	 cout<<"after sorting"<<endl;
	 for(i=0;i<n;i++)
	 {
	 	cout<<a[i]<<endl;
	 }
}
