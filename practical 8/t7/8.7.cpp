#include<iostream>
using namespace std;
void swap1(int a,int b)
{int t;
t=a;
a=b;
b=t;
cout<<a<<" "<<b<<endl;
}
void swap2(int &a,int &b)
{int t;
t=a;
a=b;
b=t;
cout<<a<<" "<<b<<endl;
}
void swap3(int *a,int *b)
{int t;
 t=*a;
 *a=*b;
 *b=t;
}
int main()
{int a,b;
cin>>a>>b;
swap1(a,b);
swap2(a,b);
swap3(&a,&b);
cout<<a<<" "<<b<<endl;
}
