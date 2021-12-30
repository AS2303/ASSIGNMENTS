#include <iostream>

using namespace std;

int main()
{
    
    int a;
    
    cout<<"Enter your age: ";
    cin>>a;
    
    if(a>=18)
    {
        cout<<"You are eligible to vote.";
    }
    
    else if(a<18)
    {
        cout<<"You are not eligible to vote.\n";
        cout<<"Try after "<<18-a<<" years when you are 18 years old.";
    }
    
    
    return 0;
}
