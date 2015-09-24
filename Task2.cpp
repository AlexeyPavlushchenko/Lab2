#include <iostream>
using namespace std;


double pi(double eps)
{
    double res = 0;
	for (int i = 1; 1.0 / i >= eps/4; i += 4)
		res += 1.0 / i;
		
	for (int i = 3; 1.0 / i >= eps/4;i += 4)
		res -= 1.0 / i;

     return 4 * res;
}

void assert(double eps)
{
    cout << "OK";
}

int main()
{

	system("pause"); 
}