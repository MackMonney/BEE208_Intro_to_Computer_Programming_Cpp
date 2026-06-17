#include <iostream>
using namespace std;

int main() {
	int a, b;
	
	cout << "Enter first integer: ";
	cin >> a;
	
	cout<< "Enter second integer: ";
	cin>> b;
	
	cout << "Sum = "<< a + b << endl;
	cout << "Difference = " << a - b << endl;
	cout << "Product = " << a * b << endl;
	
	if (b != 0)
	    cout << "Quotient = " << (float)a / b <<endl;
	else
	    cout << "Division by zero is not allowed." << endl;
	    
	return 0;
}
