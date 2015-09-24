#include <iostream>;
using namespace std;

int zero(int N)
{
	int counter = 0, a;
	for (int i = 1; i <= N; i++)
	{
		a = i;
		while ((i % 5) == 0)
		{
			counter++;
			i /= 5;
		}
		i = a;
	}
	return counter;
}

void assert(int number, int ans)
{
	if (ans == zero(number))
		cout << "OK";
	else
		cout << "FAIL at " << number;
	cout << endl;
}

int main()
{
	assert(4, 0);
	assert(6, 1);
	assert(24, 4);
	assert(25, 6);
	assert(100, 24);
	assert(87, 20);
	
	system("pause");
}