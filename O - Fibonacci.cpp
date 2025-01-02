#include<iostream> 
#include<string> 
using namespace std;     
    // 0,1,1,2,3,5,8,13,21

//fib(1)=0
//fib(2)=1
long long fib(long long num){
    if(num==1){ //base case 1
        return 0;
    }
    else if(num==2){ //base case 2
        return 1;
    }
    else{ //n>=3
        return fib(num-1)+fib(num-2);
    }
}

int main() {
    long long num;
    cin>>num;
    cout<<fib(num);
    return 0;  
}
