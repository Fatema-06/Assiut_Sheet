#include<iostream>  
using namespace std;     
int input;
void print(int num){
    //(num==1), input-1; 2*1=2-1=1
    //(num==2) input-2;  2*2=4-1=3
    if(num==0){
        return;
    }
    print(num-1);
    for(int i=1;i<=input-num;i++){
        cout<<" ";
    }
    for(int i=1;i<=num*2-1;i++){
        cout<<"*";
    }
    cout<<endl;
}
int main() {
    int n;
    cin>>n;
    input=n;
    print(n);
    return 0;  
}
