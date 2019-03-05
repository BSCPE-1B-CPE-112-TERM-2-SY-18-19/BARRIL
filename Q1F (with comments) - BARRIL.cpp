#include <iostream>  // UNSAY SULOD ANI?
#include <string>

using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 // global

class cpe1b{
	public:
		void palindromic_prime(long x); // PASABOT ANI KAY MAGHIMO KAG FUNCTION NGA PALINDROMIC PRIME
		void wasteful_number(long x);
		long prime(long num);  // KANI CLASS GAHIMOG FUNCTION NGA GINGANLAN UG PRIME NGA longEGER KAY longEGER MAN ANG PRIME DILI STRING DILI POD FLOAT
		long binary(long num1);
		long reverse(long num2);
		long digit(long num3);
		long primefactorization(long num4);

		long j,count,x;
		long pdtemp, bin, base, rem;
		long rev, temp, key;
		long dolor, digits;
		long factors,t,i;
		long rem1[100];
		long johanna;
};

int main() /* dili ni siya pwd ma wala kay mao niy pinaka main kung wala ni dili mo run ang program  */
 {
	
	cpe1b guwapo;   /* gi declare para ma gamit  */
	long num,i;	/* gi declare ang mga variable  */
        string str;     /* gi declare para ma gamit ang string str. */
    
	cin>>str;  /* mo input ka ug character or integer na maoy e process */
    cout << "The size of str is " << str.length() << " bytes.\n";    /* gi print ang kung pilay size sa gi enter */
	
		if(str.length()%2==0)  /* gi analyze niya ang string na kung e modulo two sya mo equal to zero ba sya */
	{
		cout<<str.length()<<" is EVEN"<<endl;  /* then base sa if statement kung mo equal sya ug zero eprint na EVEN sya then gi tawag si str. length para ma apil ug print */
	}
	else    /* nag gamit ug else para naay laing option ang if statement kung dili mo equal ug zero  */
	{
		cout<<str.length()<<" is ODD"<<endl;    /* kani siya kay ga base gihapon sa if statement kay na sulod na mn sya sa else so kung dili mo equal to zero iya eprint kay odd */
	}
	



	
	if (str.length()%2!=0) /* ga gama na pd ug laing statement para mo determine kung wasteful number ba or palindromic prime bah ang pangitaon */
	{
		for(i=1;i<=str.length();i++)   /* loop para mag cgeg balik-balik ang process hangtod sa kanusa gi desired sa programmer na mo undang syag loop */
		{
		guwapo.palindromic_prime(i);   /* kung ang str.length na gi modulo 2 mo not equal to zero gi tawag ang palindromic_prime para sa iyang code mo sulod ang mga e process  */
     	}
	}
	
	else /* kung mo equal to zero siya */
	{
	        for(i=1;i<=str.length();i++)
                {
    	        guwapo.wasteful_number(i);  /* kung mo equal to zero siya gi tawag ang wasteful_number para ani na code mo sulod ang ge process */ 
       }
   	}
   	return 0;
   }
   	
   	void cpe1b::palindromic_prime(long x){
	cout<<"PALINDROMIC PRIME BA NI SIYA?"<<endl;
	prime(x);
}

void cpe1b::wasteful_number(long x){
	cout<<"WASTEFUL NUMBER NI SIYA"<<endl;	



	digit(x);	
	if (digits<factors){
		cout<<"WASTERFUL MEE YEEY";
	}
}


long cpe1b::prime(long num){  
	/* PRIME */

	count = 0;
	for (j=2;j<num;j++){
		if (num%j==0){
			count++;
		}
	}
	
	if (count==0){
	cout<<"PRIME"<<endl;
	binary(num);
	}
	
	else{cout<<"Composite"<<endl;
		cout<<"DIKO WELCOME :(";
	}
}

long cpe1b::binary(long num1){ 
	/* BINARY */

	/*	prlongf("PRIME: %ld \n",pdnum[i]);     */
	pdtemp = num1;
	bin=0;
	base = 1;

	for (;pdtemp>0;){
		rem=pdtemp%2;
		bin=bin+rem*base;
		base = base*10;
		pdtemp=pdtemp/2;
	}

	cout<<"BINARY: "<<bin<<endl;
	reverse(bin);
}

long cpe1b::reverse(long num2){
	/*REVERSE*/

	key=num2;
	temp=0;
	rev=0;

	for (;key!=0;){
		temp=key%10;
		key=key/10;
		rev=temp+(rev*10);
	}

	cout<<"REVERSE: ";
	cout<<rev<<endl;
	
	if (rev==num2){
		cout<<"PALINDROMIC PRIME KO YEHEY"<<endl;
	}

	else{
		cout<<"DIKO WELCOME :(";
	}
}

long cpe1b::digit(long num3){

	dolor=num3;
	johanna=num3;
	digits = 0;

	for (;dolor!=0;){
		dolor=dolor/10;
		digits++;
		}
		
		cout<<digits;
		
		
		primefactorization(johanna);
		
}

long cpe1b::primefactorization(long num4){
	
	x=num4;
	factors=0;
	i=2;
	t=0;
	
	for (;x!=0;) {
	   if (x%i==0){
	       x=x/i;
	       rem1[t]=i;
	       t++;
	       factors++;
	       if (x==1){
	              break;
	              }
	           }
	       else{
	           i++;
	           }
	    }
	
	for (i=0;i<factors;i++){
		printf(" %ld ",rem1[i]);
	}
	
	cout<<"factors:="<<factors;
}
