#include <iostream>
using namespace std;
void compare(int x,int y)
{
	if(x>y)
	{
		cout<<"���ֵΪ��"<<x<<endl; 
	}
	else
	{
		cout<<"���ֵΪ: "<<y<<endl;
	}
}
void compare(int x,int y,int z)
{
	if(x>y&&x>z)
	{
		cout<<"���ֵΪ��"<<x<<endl; 
	}
	if(y>x&&y>z)
	{
		cout<<"���ֵΪ��"<<y<<endl;
	}
	if(z>x&&z>y)
	{
		cout<<"���ֵΪ��"<<z<<endl;
	}
}
void compare(double a,double b)
{
	if(a>b)
	{
		cout<<"���ֵΪ��"<<a<<endl;
	}
	else
	{
		cout<<"���ֵΪ: "<<b<<endl;
	}
}
void compare(double a,double b,double c)
{
	if(a>b&&a>c)
	{
		cout<<"���ֵΪ��"<<a<<endl;
	}
	if(b>a&&b>c)
	{
		cout<<"���ֵΪ��"<<b<<endl;
	}
	if(c>a&&c>b)
	{
		cout<<"���ֵΪ��"<<c<<endl; 
	}
}
int main()
{
	compare(3,4);
	compare(4,5,6);
	compare(3.1,3.4);
	compare(7.3,7.8,6.9);
	return 0;
}

