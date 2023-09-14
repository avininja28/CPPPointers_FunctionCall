#include <iostream>
using namespace std;
void swap(int *a,int *b);
main()
{
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"before swap: "<<a<<" "<< b<<endl;
    swap(&a,&b);
    cout<<"after swap: "<<a<<" "<<b<<endl;
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}