#include<iostream>
using namespace std;
int main()
{int i,j,a[3][3],b[3][3],c[3][3];
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
   {cin>>a[i][j];
     b[i][j]=a[i][j];
     c[i][j]=a[i][j];
   }
}
for(i=0;i<3;i++) // loop for v1
{ for(j=0;j<3;j++)
   {a[i][j]=i+1;
    cout<<a[i][j];
   }cout<<endl;
}
}
