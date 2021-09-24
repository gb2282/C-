#include<iostream>
using namespace std;
int prime(int n)
{ int i,f=0;
   for(i=2;i<n/2;i++)
    {if(n%i==0)
       { cout<<"its not prime\n";
        f=1;
        break;}
    }
   if(f==0) 
   cout<<"yes its a prime\n";
   return 0;    
  }
int main()
{  int n;
   cout<<"enter number: ";
   cin>>n;
   prime(n);

}
