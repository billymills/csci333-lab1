#include <iostream>
using std::cout;
using std::endl;

//euler 2

int main() {
	int sum = 0;
	int first = 1;
	int second = 1;
	int fib = 1;
	while (fib<=4000000) {
		if (fib%2==0) {
			sum += fib;
		}
		fib = first + second;
		first = second;
		second = fib;
	}
	cout << sum << endl;
}
