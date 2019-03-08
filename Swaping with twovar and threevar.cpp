#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class SwapNum
{
	
	public:
		
		int x,y,z;
		void twovar();
		void threevar();
		
};

int main ()
{
	SwapNum m;
	m.threevar();
	m.twovar();
}

void SwapNum::threevar(){
	
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
}

void SwapNum::twovar(){
	
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
}
