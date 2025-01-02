#include<iostream> 
#include<string> 
using namespace std;     
    long long findsum(int arr[],int size){
        if(size==0){
            return 0;
        }
        return arr[0]+ findsum(arr+1,size-1);
    }
int main() {
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findsum(arr,n)<<endl;
    return 0;  
}
