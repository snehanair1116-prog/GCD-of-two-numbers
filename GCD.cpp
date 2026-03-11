#include<iostream>
using namespace std;
int findgcd(int a,int b){
    while(b!=0){
        int remainder= a % b;
        a = b;
        b = remainder;
    
    }
    return a;
}
int main(){
    int n1= 48,n2= 18;
    cout <<"GCD of "<<n1<<" and "<<n2<<" is "<<findgcd(n1,n2);
}