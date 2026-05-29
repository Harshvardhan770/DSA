#include<iostream>
using namespace std;
int main()
{

    int i = 1;

    cout<<endl<<"for loop"<<endl;
    for(i;i<=5;i++)
    {
        cout<<i<<endl;
    }

    cout<<endl<<"while loop"<<endl;
    while (i>=1)
    {
        cout<<i<<endl;
        i--;
    }

    cout<<endl<<"do-while loop"<<endl;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=5);

    int n;
    cout<<"enter value of n = ";
    cin>>n;
    int sum = 0;
    for (int i = 0;i<=n;i++)
    {
        if((i % 2) != 0 )
        {
            sum = sum + i;
        }
    }
    cout <<"sum = "<<sum <<endl;

    bool isPrime = true;

    for(int i = 2;i*i <= n; i++)
    {
        if(i % n == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true)
    {
        cout<<"Prime No."<<endl;
    }
    else
    {
        cout<<"Not Prime No."<<endl;
    }
    //nested loop
    cout<<endl<<"nested for loop"<<endl;
    for (int i = 1; i<=5 ;i++)
    {
        for (int j = 1 ; j<=5 ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
