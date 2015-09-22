#include <iostream>;
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

void test() 
{
    cout << "HELLO";
}

int main()
{
	double x,e;
	cout << "Enter x and e" << endl;
	cin >> x >> e;
	cout << "sin(x) = " << sinus(x,e);
	system ("pause");
}
