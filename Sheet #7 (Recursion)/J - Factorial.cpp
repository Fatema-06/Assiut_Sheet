#include<iostream> 
#include<string> 
using namespace std;     
long long fact(long long num){ //1000000
    if(num<=1){
        return 1;
    }
    return num*fact(num-1);
}
int main() {
    long long num;
    cin>>num;
    cout<<fact(num);
    return 0;  
}
