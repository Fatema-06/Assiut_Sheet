#include<iostream>  
using namespace std;     

void print(int n){ //3
    //base case
    if(n==0) return;
    cout<<"I love Recursion"<<endl;
    //rec call
    print(n-1);
}
int main() {
    int n;
    cin>>n;
    print(n);
    return 0;  
}
