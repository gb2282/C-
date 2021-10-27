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
int main()
{
   int a= first::add(7,5);
   float b = second::add(9.5,21.1); 
   cout << " Sum of entered numbers is: " <<a<<" "<<b;
return 0;}
