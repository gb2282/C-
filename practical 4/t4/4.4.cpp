#include<iostream>
using namespace std;
namespace first
{
   int add(int a, int b)
     {
        return a+b;
     }
}
namespace second
{
    float add(float a, float b)
      {
        return a+b;
      }
}
using namespace first;
using namespace second;
int main()
{
   //int a= add(9.1+1.5); 
   cout << " Sum of entered numbers is: " <<first::add(10,1.2)<<"\n"<<second::add(10.5,1);
   return 0;
}
