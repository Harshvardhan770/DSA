#include<iostream>
using namespace std;
int main()
{

    cout<<"Enter age :-\n";
    int age;
    cin >> age;


    cout<<"Entered Age = "<<age<<endl<<endl;

    if (age < 18)
    {
        cout<<"not elligible for vote"<<endl;
    }
    else {
        cout<<"Eligible for vote"<<endl;
    }

    cout<<endl;
    cout<<endl;


    if (age < 18)
    {
        cout<<"not elligible for work"<<endl;
    }
    else if (age >= 18 && age <= 60)
    {
        cout<<"elligible for work"<<endl;

    }
    else {
        cout<<"Age is high for work"<<endl;
    }


    cout<<endl;
    
    // ternary Statement
    (age>=18)?cout<<"can vote"<<endl:cout<<"cannot vote"<<endl;
    return 0;
}
