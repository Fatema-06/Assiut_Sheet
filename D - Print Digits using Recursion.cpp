#include<iostream>  
using namespace std;     
int index=0; //global
void print(string num){
    //base case
    if(index==num.size()){
        return;
    }
    cout<<num[index]<<" "; //num[0] 1    num[1] 2 1  
    index++;
    return print(num);
}

int main() {
    int t;
    cin>>t;
    while(t--){
        string num;
        cin>>num;
        print(num);
        cout<<endl;
        index=0;//reset
    }
    return 0;  
}
