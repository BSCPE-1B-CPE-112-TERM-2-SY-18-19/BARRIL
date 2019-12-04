#include <iostream>
using namespace std;

int main()
{
	int long num[100], digit[100], factor[100], rem[100];
	int long i, size=0, t,j,x,n;
	
	cout<<"Enter Numbers: "<<endl;
	
	 for(i=0;;i++)
	 {
	    cin>>num[i];
	    
		 if(num[i]==0)
	   
	      {
	     	break;
	      }
	 
	     size++;
     }
     
     for(i=0;i<size;i++)
     {
     	n=num[i];
     	x=n;
     	digit[i]=0;
     	
        	for(;n!=0;)
            	{
     	        	n=n/10;
     	        	digit[i]++;
	        	 }
	    t=0;
	    j=2;
	    factor[i]=0;
	    
	    for(;x!=0;)
	    {
	    	if(x%j==0)
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
	 cout<<"\n 1 - NON - WASTEFUL NUMBER(S): "<<endl;
	 
	    for(i=0;i<size;i++)
	    {
	    	if(factor[i]<=digit[i])
	    	{
	    		cout<<"    "<<num[i]<<endl;
			}
		}
		
		cout<<"\n 2 - WASTEFUL NUMBER(S): "<<endl;
		
		for(i=0;i<size;i++)
		{
			if(factor[i]>digit[i])
			{
				cout<<"    "<<num[i]<<endl;
			}
		}
		return 0;
}
