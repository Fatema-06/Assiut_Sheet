#include<iostream> 
#include<string> 
using namespace std;     
    long long findsum(int arr[], int n, int m){
        if(m==0){
            return 0;
        }
        return arr[n-m]+findsum(arr,n,m-1);
    }
int main() {
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findsum(arr,n,m)<<endl;
    return 0;  
}
