#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	float totalaverage;

	return (i1 + i2 + i3) / 3;
}

int main()
{
	int i1 =0 , i2 = 0, i3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> i1;
	cout << "Second number: "; cin >> i2;
	cout << "Third number: "; cin >> i3;

	float a = average(i1, i2, i3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}