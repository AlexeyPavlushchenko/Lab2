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
	const double PI = 3.14159265358979323846;
	cout << "HELLO";
	if (fabs(pi(eps) - PI) <= eps)
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "FAIL at eps " << eps << endl;
	}
}

int main()
{
	assert(0.0000678);
	assert(0.005);
	assert(0.000345);
	assert(0.00004);
	assert(0.000053);
	assert(0.000001);
	assert(0.001);
	system("pause");
}