/*Write a program to implement Horner’s method.*/
#include <iostream>
#include <cmath>
#define f(x) 4 * pow(x, 3) + pow(x, 2) - 3 * x + 5
using namespace std;
int main()
{
    int x;
    cout << "enter value of x:" << endl;
    cin >> x;
    double result;
    result = f(x);
    cout << "the value of the function is: " << result;

    return 0;
}