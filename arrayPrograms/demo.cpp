#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    
    int arr[m][n];
    for(int i = 1; i <= m ; i++){
        
        for(int j = 1 ; j <= n ; j++) {
           if(i==1){
           cout<<arr[i][j];

           } 
           

        }
    }




    return 0;
}