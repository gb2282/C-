#include<iostream>
using namespace std;
void fact(int a)
{int i=0,t=1;
 for(i=1;i<=a;i++)
 {t=t*i;}
 cout<<t;
 }
int main()
{int a;
cin>>a;
fact(a);
return 0;
}

