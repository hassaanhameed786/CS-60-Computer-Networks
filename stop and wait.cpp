#include<studio.h>
#include<stdlib.h>
#include <cstdlib>
using namespace std;

int main()
{
	int i,number ,random,x;
	
	cout << "the number of packets are : " << number << endl;
	for(int i =1; i<=5; i++)
	{
		cout <<"the packet sent is " << i << endl;
		random = rand() % 2;
		if(random == 1)
		{
			x = rand() % 2;
			if(x==1)
				cout << "acknowledgement number ",i+1;
			else 	// val of x =0
				cout << "no acknowledgement number ",i+1;
				
		}
		else
			cout << "time out & resend " << endl;
			i--;
	}
}
