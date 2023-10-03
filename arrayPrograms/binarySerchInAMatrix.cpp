#include <iostream>
#include <vector>
using namespace std;

int main(){
    int mat[3][3]={1,2,3,4,5,6,7,8,9};
    int n=6;
    int r=3,c=3;
    int s=0,e=8;
    int m;
    while(s<=e){
        m=(s+e)/2;
        
        if(mat[m/c][m%c]==n){
            cout << "Found" << endl;
            cout << m/c << " " << m%c;
            break;
        }
        else if(mat[m/c][m%c]>n){
            e=m-1;
        }else if(mat[m/c][m%c]<n){
            s=s+1;
        }
    }
    
}