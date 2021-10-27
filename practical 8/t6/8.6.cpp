#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int series(int n)
{if(n==0)
return 1;
else
{cout<<n*(pow(n-1,n-1)+n-1)<<endl;
return (series(n-1));
}
}
int main()
{int a,s;
cin>>a;
s=series(a);
return 0;
}
