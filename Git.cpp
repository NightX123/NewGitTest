#include <iostream>
#include <string>
using namespace std;
int function(int x);

int main()
{
	int num1;
	cin>>num1;
	cout<<function(num1);
}
int function(int x)
{
	if(x==1)
	{
		return x;
	}
	else
	{
		
		return x*function(x-1);
	}
}
