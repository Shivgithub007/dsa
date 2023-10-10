#include <iostream>
#include <vector>

using namespace std;
int pivot(vector <int> arr){
    int s=0;
    int e=arr.size()-1;
    int m;
    while(s<=e){
        m=s+(e-s)/2;
        if(arr[s] < arr[e]){
            return arr[e];
        }else{
            if(m+1<=e && arr[m]>arr[m+1]){
                return arr[m];
            }
            else if(m-1>=s && arr[m]<arr[m-1]){
                return arr[m-1];
            }
            else if(arr[s]>arr[m]){
                e=m-1;
            }
            else if(arr[s]<arr[m]){
                s=m+1;
            }
        }
    }
    return -1;
}

int main(){
    vector <int> arr{9,10,1,2,3,4};
    int data=pivot(arr);
    if(data!= -1){
        cout << "Data found " << data << endl;
    }else{
        cout << "Data not found";
    }
}