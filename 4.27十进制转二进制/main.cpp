#include <iostream>

using namespace std;

void a(int n)
{
    if(n==1)
        cout<<1;
    if(n==0)
        cout<<0;
    else
    {
        a(n/2);
        cout<<(n%2);

    }
}


void b(double m,int i)
{
    if(i==1)
    {
        if(2*m>=1)
            cout<<1;
        else
            cout<<0;
    }
    else
    {
        if(2*m>=1)
        {
            cout<<1;
            b(2*m-1,i-1);
        }
    }
}


int main()
{
    double number1;
    int number2;
    cout<<"ʮ������:";
    cin>>number1;

    int n=number1;
    double m=number1-n;
    if(m!=0)
    {
        cout<<"������Ҫ������С��λ��:";
        cin>>number2;

    }


    cout<<"ת���Ķ�������Ϊ:";
    a(number1);
    if(m!=0)
    {
        cout<<'.';
        b(m,number2);
    }


    return 0;
}
