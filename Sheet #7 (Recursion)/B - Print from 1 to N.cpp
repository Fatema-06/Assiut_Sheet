#include<iostream>  
using namespace std;     

void print(int n){ //5
    if(n==0)
    return;
    //rec call
    print(n-1);
    cout<<n<<endl;
}

int main() {
    int n;
    cin>>n;
    print(n);
    return 0;  
}
