#include<iostream> 
#include<string> 
using namespace std;     
    int rows,cols; //global
    int arr1[100][100],arr2[100][100],result[100][100];
    void sum(int r1,int c1){
        if(r1==rows||c1==cols){
            return;
        }
        if(c1<cols-1){
            sum(r1,c1+1);
        } else{
            sum(r1+1,0);
        }
        result[r1][c1]=arr1[r1][c1]+arr2[r1][c1];
    }
int main() {
    cin>>rows>>cols;
    for(int i=0;i<rows;i++){
        for(int z=0;z<cols;z++){
            cin>>arr1[i][z];
        }
    }
    for(int i=0;i<rows;i++){
        for(int z=0;z<cols;z++){
            cin>>arr2[i][z];
        }
    }
    sum(0,0);
    for(int i=0;i<rows;i++){
        for(int z=0;z<cols;z++){
            cout<<result[i][z]<<" ";
        }
        cout<<endl;
    }
    return 0;  
}
