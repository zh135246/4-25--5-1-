#include <iostream>
using namespace std;
void exchange(char& a,char& b)
{
	char t;
	t=a;
    a=b;
    b=t;
    cout<<a<<" "<<b;
}
int main()
{
	char a,b;
	cout<<"�����������ַ���"<<endl; 
	cin<<a;
	cin<<b;
	if(a>b)
	{
		cout<<a<<" "<<b;
	}
	else
	{
		cout<<b<<" "<<a;
	}
    exchange(s,y);
	return 0;
}
}
