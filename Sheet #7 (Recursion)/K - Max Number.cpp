#include<iostream> 
#include<string> 
using namespace std;     
    int findmax(int arr[],int size){
        if(size==1){
            return arr[0];
        }
        int maxrest=findmax(arr,size-1);
        return max(arr[size-1],maxrest);
    }
int main() {
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findmax(arr,n)<<endl;
    return 0;  
}
