#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv)
{
		int x,y,z;
		
	cout<<"Input x:";
	cin>>x;

	cout<<"Input y:";
	cin>>y;

	cout<<"Input z:";
	cin>>z;

x=x+y;
y=x-y;
x=x-y;
z=z+x;
x=z-x;
z=z-x;

cout<<"x=";
cout<<x<<endl;
cout<<"y=";
cout<<y<<endl;
cout<<"z=";
cout<<z<<endl;

return 0;	
}
