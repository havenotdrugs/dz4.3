#include <iostream>
using namespace std;

double average(double one, double two, double three);

int main() {
	double one, two, three;
	cin >> one >> two >> three;
	cout << average(one, two, three);
}

double average(double one, double two, double three) {
	return (one + two + three) / 3;
}

