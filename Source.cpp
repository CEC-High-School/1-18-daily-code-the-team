#include <iostream>
using namespace std;

int main() {
	float num;

	cout << "Give me a number" << endl;
	cin >> num;

	for (int i = 1; i < num + 1; i++) {
		cout << "The number is " << i << " its cube is " << i*i*i << endl;
	}

}