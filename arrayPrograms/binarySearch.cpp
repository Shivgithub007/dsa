#include <iostream>

using namespace std;

bool hello(int arr[],int t){
    int s=0,e=9;
    int m;
    while(s<=e){
        m=(s+e)/2;
        if(arr[m]==t){
            
            return true;
        }
        else if(arr[m]>t){
            e=m-1;
        }else if(arr[m]<t){
            s=s+1;
        }
    }
    return false;
}

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int t=10;
    bool val=hello(arr,t);
    if(val==1){
        cout << "Value found";
    }else{
        cout << "Value not found";
    }
    
    
}