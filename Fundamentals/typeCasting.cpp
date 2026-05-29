#include<iostream>
using namespace std;
int main()
{

    // type conversion (implicit)
    char grade = 'A';
    int data = grade;

    cout<<data<<endl;


    // type casting (Explicit)
    double price = 100.99;

    int value = (int)price;

    cout<<value<<endl;
    return 0;
}
