#include <iostream>
using namespace std;
int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int sumOfDigits(int num)
{
    int sum = 0;
    int lastdigit;
    while (num > 0)
    {
        lastdigit = num % 10;
        num = num / 10;
        sum += lastdigit;
    }

    return sum;
}
int main()
{
    cout << sum(5) << endl;
    cout << sum(10) << endl;
    cout << sum(15) << endl;

    cout << endl
         << endl;
    cout << factorial(4) << endl;
    cout << factorial(5) << endl;

    cout << endl
         << endl;
    cout << sumOfDigits(555) << endl;
    cout << sumOfDigits(5555) << endl;
    cout << sumOfDigits(55555) << endl;
    cout << sumOfDigits(55) << endl;

    return 0;
}