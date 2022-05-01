#include <iostream>
using namespace std;
void compare(int x,int y)
{
	if(x>y)
	{
		cout<<"最大值为："<<x<<endl; 
	}
	else
	{
		cout<<"最大值为: "<<y<<endl;
	}
}
void compare(int x,int y,int z)
{
	if(x>y&&x>z)
	{
		cout<<"最大值为："<<x<<endl; 
	}
	if(y>x&&y>z)
	{
		cout<<"最大值为："<<y<<endl;
	}
	if(z>x&&z>y)
	{
		cout<<"最大值为："<<z<<endl;
	}
}
void compare(double a,double b)
{
	if(a>b)
	{
		cout<<"最大值为："<<a<<endl;
	}
	else
	{
		cout<<"最大值为: "<<b<<endl;
	}
}
void compare(double a,double b,double c)
{
	if(a>b&&a>c)
	{
		cout<<"最大值为："<<a<<endl;
	}
	if(b>a&&b>c)
	{
		cout<<"最大值为："<<b<<endl;
	}
	if(c>a&&c>b)
	{
		cout<<"最大值为："<<c<<endl; 
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

