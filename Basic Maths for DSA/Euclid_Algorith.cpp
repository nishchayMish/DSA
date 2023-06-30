// leetCode problem number -> 204
// count Primes -> https://leetcode.com/problems/count-primes/description/
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b = ";
    cin>>a>>b;
    cout<<"Answer is = "<<gcd(a,b)<<endl;
    return 0;
}