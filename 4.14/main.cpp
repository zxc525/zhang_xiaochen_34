#include <iostream>

using namespace std;

int main()
{


    int a=0;
    float b=0;
    float c=0;
    float d=0;
    float e=0;

while(a!=-1)
{



    cout<<"Enter account number(or -1 to quit):";
    cin>>a;
    cout<<"Enter beginning balance:";
    cin>>b;
    cout<<"Enter total charges:";
    cin>>c;
    cout<<"Enter total credits:";
    cin>>d;
    cout<<"Enter credit limit:";
    cin>>e;


    float f;
    f=b+c-d;
    cout<<"New balance is"<<f<<endl;

    if(f>e)
{


        cout<<"Account:"<<a<<endl;
        cout<<"Credit limit:"<<e<<endl;
        cout<<"Balance:"<<f<<endl;
        cout<<"Credit Limit Exceeded."<<endl;
}


   if(f<=e)
   {
        cout<<endl;
        cout<<"Enter Account Number (or -1 to quit):-1"<<endl;

   }

}
    return 0;


}
