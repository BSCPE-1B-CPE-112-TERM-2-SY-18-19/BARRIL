#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class wasteful{  			  /*Nag declare kog class nga wasteful paramao rasad ni akong pagatawagon sa main */
	public: 
		void display(int m[5]);
		long digit[100],n, x, t, j, factor[100], rem[100], num[10],num1[10];  	//Function nga gideclare ang mga variables para gamiton sa ubos nga code para makuha ang output nga wasteful number */
};
int main() 
{
	int num[10]={21,22,23,24,25,26,27,28,29,30};    /*Array ni sya nga gisudlan og numbers kaning mga numbera ang pagabasihan kung asay mga wasteful number */
	wasteful numbers;					/* Mao na sya ang gitawag na */
	numbers.display (num);					/* Pangan sa akong object */
	return 0;
}

	void wasteful::display(int num[10]) 		/*Mao ni akong pagatawagon */
{
	cout<<"Displaying WASTEFUL: "<<endl;	
	
	for (int i=0; i<10; i++)			/*sugod sa code para sa output nga or sugod sa looping para sa output nga wasteful number */
	{
		
	    for (i=0;i<10; i++)
			{
			digit[i]=0;
			n=num[i];
			x=n;
			for (;n!=0;)
				{
				n=n/10;
				digit[i]++;
				}
			t=0;
			j=2;
			factor[i]=0;
			for (;x!=0;)
				{
				if (x%j==0)
					{
					x=x/j;
					rem[t]=j;
					t++;
					factor[i]++;
					if(x==1)
						{
						break;
						}
					}
			else
				{
				j++;
				}
			}
		}
		for (i=0; i<10; i++)
			{
			if (factor[i]>digit[i])
				{
				cout<<"Number: "<<num[i]<<endl;
				}
			}
		}
}
