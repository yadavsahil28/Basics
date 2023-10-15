#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the binary input: ";
    cin>>n;

    int a = 0;
    int ans = 0;

    while(n!=0){
        int rem = n%10;
        n/=10;
        ans+=rem*pow(2,a);
        a++;
    }

    cout<<ans;

    return 0;
}
