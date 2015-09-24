#include <iostream>
#include <cmath>
using namespace std;

double sinus(double x, double e)
{
	bool check = true;
	double temp = x;
	double res = temp;
	for (double i = 0; check == true ; i++)
	{
		temp *= -x*x / ((2 * i + 2)*(2 * i + 3));
		res += temp;
		if (((sin(x) + e) >= res) && ((sin(x) - e) <= res))
		{
			check = false;
		}
	}
	return res;

}

void assert(double x , double eps)
{
	if (fabs(sin(x) - sinus(x, eps)) <= eps)
		cout << "OK" << endl;
	else
		cout << "FAIL at " << x << " with eps " << eps << endl;
}

int main(){
    assert(3.14159265358979, 0.1);
	assert(1.57079632679, 0.001);
	assert(0.523598775598, 0.000001);
	assert(3.14159265358979, 0.0000001);
	assert(2, 0.0002);
	assert(-1, 0.000001);
	assert(4.2, 0.00042);
	
	system("pause");
}
