#include<iostream>
using namespace std;
int main()
{char c='p';
bool b=(10>9);
short s=23;
int i=199;
long l=111111111;
float f=4.999f;
double d=2.45689;
long double ld=1.234567;
wchar_t w=L'P';
cout<<"char "<<sizeof(c)<<"\nbool "<<sizeof(b)<<"\nshort "<<sizeof(s)<<"\nint "<<sizeof(i)<<"\nlong "<<sizeof(l)<<"\nfloat "<<sizeof(f)<<"\ndouble "<<sizeof(d)<<"\nlong double "<<sizeof(ld)<<"\nwchar"<<sizeof(w)<<endl; 
return 0;
}

