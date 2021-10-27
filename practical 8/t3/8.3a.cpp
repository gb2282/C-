#include<iostream>
using namespace std;
int main()
{int a=10,*p,**q;
p=&a;
q=&p;
cout<<*p<<endl;
cout<<**q<<endl;
**q=10+21+19;
cout<<**q<<endl;
return 0;
}
