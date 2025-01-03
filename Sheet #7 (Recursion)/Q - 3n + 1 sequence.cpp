#include<iostream> 
#include<string> 
using namespace std;     
int counter=0;
void cnt(long long num){
    counter++;
    if(num==1){
        return;
    }
    if(num%2==0){
        cnt(num/2);
    } else{
        cnt(3*num+1);
    }
}
int main() {
   long long num;
   cin>>num;
   cnt(num);
   cout<<counter;
    return 0;  
}
