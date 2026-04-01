#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumOfN(int n){
    if(n == 0)
        return 0;
    return n + sumOfN(n - 1);
}

int power(int a, int b){
    if(b == 0)
        return 1;
    return a * power(a, b - 1);
}

void printNumbers(int n){
    if(n == 0)
        return;
    printNumbers(n - 1);
    cout << n << " ";
}

int main(){
    int n = 5;

    cout << "Factorial: " << factorial(n) << endl;
    cout << "Fibonacci: " << fibonacci(n) << endl;
    cout << "Sum: " << sumOfN(n) << endl;
    cout << "Power: " << power(2, 3) << endl;

    printNumbers(n);

    return 0;
}