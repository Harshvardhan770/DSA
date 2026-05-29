#include<iostream>
using namespace std;
int main()
{

    int a =10,b=6;
    cout<<"Operators\n";

    // arithmetic
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a/b<<endl;
    cout<<a*b<<endl;
    cout<<a%b<<endl;

    cout<<a/(float)b<<endl;

    // relational
    cout<<"(a==b) = "<<(a==b)<<endl;
    cout<<"(a<=b) = "<<(a<=b)<<endl;
    cout<<"(a>=b) = "<<(a>=b)<<endl;
    cout<<"(a!=b) = "<<(a!=b)<<endl;
    cout<<"(a>b) = "<<(a>b)<<endl;
    cout<<"(a<b) = "<<(a<b)<<endl<<endl;


    // logical
    cout<<"(a==b) &&  (a<=b) = "<<((a==b) &&  (a<=b))<<endl;
    cout<<"(a>=b) || (a<=b) = "<<((a>=b) ||  (a<=b))<<endl;
    cout<<"(a==b) &&  (a<=b) = "<<((a==b) &&  (a<=b))<<endl;
    cout<<"!(a>b) = "<<!(a>b)<<endl;
    cout<<"!(a<b) = "<<!(a<b)<<endl<<endl;

    //Unary 

    a = 10;

    cout << a++ << endl; 
    cout << a-- << endl;
    cout << --a << endl;
    cout << ++a << endl;



    return 0;
}
