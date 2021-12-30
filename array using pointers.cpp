#include <iostream>

using namespace std;

int main()
{
    int a[100],n,i;
    
    cout<<"Enter the no of elements: ";
    cin>>n;
    
    cout<<"Enter the numbers: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int *p=a;
    
    cout<<"You entered: ";
    for(i=0;i<n;i++)
    {
        cout<<*p++<<" ";
    }
    
    return 0;
}
