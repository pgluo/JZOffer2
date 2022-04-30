#include<iostream>
using namespace std;

int function(int n);

int main() {
	int n = 4;
	int Fn = 0;
	Fn = function(n);
	cout << Fn << endl;
}

int function(int n) {
	if (n < 2) return n;
	return function(n - 1) + function(n - 2);
}