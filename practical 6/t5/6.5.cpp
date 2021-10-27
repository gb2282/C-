#include <iostream>
using namespace std;
int main()
{
	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
	int x = s1.compare(s2);
	if(x>0)
		cout<<"S1 is Larger"<<endl;
	else if(x<0)
		cout<<"S2 is Larger"<<endl;
	else
		cout<<"Both are equal"<<endl;
	return 0;
}
