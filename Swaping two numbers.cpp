#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	char x;
	char y;
	
	cout<<endl<<"Input x:";
	cin>>x;
	
	cout<<"Input y:";
	cin>>y;
		
	x=x+y;
	y=x-y;
	x=x-y;
	
	cout<<"x=";
	cout<<x<<endl;
	
	cout<<"y=";
	cout<<y<<endl;
	
	return 0;
}
