#include<iostream>  
using namespace std;     
//int n; global 

void print(int n){
    if(n==0)
    return;
    cout<<n;
    //check if i need space
    if(n>1)
    cout<<" ";
    print(n-1);
}


int main() {
    int n;
    cin>>n;
    print(n);
    return 0;  
}
