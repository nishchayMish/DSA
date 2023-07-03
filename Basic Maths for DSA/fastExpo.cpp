#include<bits/stdc++.h>
using namespace std;

# define ll long long
ll FastModExpo(ll a , ll b){
    ll result = 1;
    while(b > 0){
        if(b & 1){
            // odd
            result = (a*result);
        }
        a = a*a;
        b = b>>1;
    }
    return result;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b = ";
    cin>>a>>b;
    cout<<"ans is : "<<FastModExpo(a,b)<<endl;
    return 0;
}