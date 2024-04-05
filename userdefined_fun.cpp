#include<iostream>
#include<string.h>
using namespace std;
class assignment
{
	int len;
	char a[];
	int i=0;
	public:
		assignment()
		{
		//	cout<<"enter string"<<endl;
		}
		int strlength(char*);
		void strcopy(char*);
		int strreverse(char[]);
		void strcatu(char*,char*);
		void palindrome(char*);
};
int assignment::strlength(char * str)
{
	len=0;
	
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	cout<<"length of string is :"<<len<<endl;
}
void assignment::strcopy(char* s1)
{
	char a[20];
	int i=0;
	while(s1[i]!='\0')
	{
			a[i]=s1[i];
			i++;
			
	}
	a[i]='\0';
	
	cout<<"copied string:"<<"  "<<a<<endl;
}
int assignment::strreverse(char* s)
{
	int y=0;
	char a[20];
	len=strlen(s)-1;
	while(len>=0)
	{
		a[y]=s[len];
		len--;
		y++;
	}
	a[y]='\0';
	cout<<"reverse string:"<<" "<<a<<endl;
	
}
void assignment::strcatu(char* t,char* s)
{
	while(*t!='\0')
	{
		t++;
	}
	while(*s!='\0')
	{
		*t=*s;
		t++;
		s++;
	}
	*t='\0';
}
void assignment::palindrome(char*s)
{
	char a[20],b[20];
	strcpy(a,s);
	strrev(a);
	if(strcmp(a,s)==0)
{
	cout<<"string is palindrome"<<endl;
}
else
{
	cout<<"string is not palindrome"<<endl;
}
}

int main()
{
	char s[] = "hello";
	char t[] = "world";
 	assignment a;
 	a.strlength("pune");
 	a.strcopy("pune");
 	a.strreverse("IET");
	a.strcatu(t, s);
	cout<<"concatenate string is"<<" "<<t<<endl;;
	a.palindrome("mom");
}
