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

void test()
{
    cout << "Tests";
}

int main()
{
	int N;
	cout << " Enter N" << endl;
	cin >> N;
	cout << " Number of zeros in the end of N! is " << zero(N) << endl;
	system("pause");
}