#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

void display(int result) {
    cout << "The result is: " << result << endl;
}

int main() {
    int num1,num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int sum = add(num1, num2,display(sum));
    

    return 0;
}
