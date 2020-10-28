#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int num1, num2, num3, num4, num5;
	int max, min;
	cout << "Input five different integers:" << endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	min = num1;
	if (num2 < min)
		min = num2;
	if (num3 < min)
		min = num3;
	if (num4 < min)
		min = num4;
	if (num5 < min)
		min = num5;
	cout << "Smallest is " << min << endl;

	max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	if (num4 > max)
		max = num4;
	if (num5 > max)
		max = num5;
	cout << "Largest is " << max << endl;

	return 0;
}