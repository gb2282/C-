#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{string a,b;
getline(cin,a);
b=a;
reverse(b.begin(),b.end());
if(a==b)
cout<<"yes";
else
cout<<"no";
}
