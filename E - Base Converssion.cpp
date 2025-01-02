#include<iostream>  
using namespace std;     
void print(int num){
    if(num==0)
    return;
    print(num/2);
    cout<<num%2; //rem (binary)
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==0){
            cout<<"0"<<endl;
        } else{
            print(n);
            cout<<endl;
        }
    }
    return 0;  
}
