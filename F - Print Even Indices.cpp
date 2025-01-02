#include<iostream>  
using namespace std;     
void print(int arr[], int size, int index){
    if(index>=size){
        return;
    }
    print(arr,size,index+2);
    cout<<arr[index]<<" ";
}

int main() {
    int size;
    cin>>size;
    int arr[1000];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    print(arr,size,0);
    return 0;  
}
