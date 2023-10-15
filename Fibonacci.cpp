#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int first=-1;
    int second=1;
    int fibo;

    for(int i=0;i<n;i++){
        fibo = first + second;
        first = second;
        second = fibo;
    }

    cout<<fibo;

    return 0;
}
