#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    	cout << "Enter first integer: ";
	cin >> a;
	
		cout << "Enter first integer: ";
	cin >> b;
	
		cout << "Enter first integer: ";
	cin >> c;

    if (a == b && b == c)
        cout << "Equal";
    else
        cout << "Not equal";

    return 0;
}
