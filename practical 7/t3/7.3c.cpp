#include<iostream>
using namespace std;
int main()
{int i,j,a[3][3];
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
   {cin>>a[i][j];
    a[i][j]=10-a[i][j];
   }
}
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
   {cout<<a[i][j];
   }
cout<<endl;}
}
