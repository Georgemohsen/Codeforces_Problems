#include <iostream>
using namespace std;
int main ()
{
	int limak_age ;
	int bear_age ;
	cin>>limak_age;
	cin>>bear_age;
	for (int i=1 ; ; i++)
	{
		limak_age*=3;
		bear_age*=2;
		if (limak_age > bear_age)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}