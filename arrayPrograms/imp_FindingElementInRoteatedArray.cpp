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
            return e;
        }else{
            if(m+1<=e && arr[m]>arr[m+1]){
                return m;
            }
            else if(m-1>=s && arr[m]<arr[m-1]){
                return m-1;
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

int binarySearch(vector <int> arr, int s, int e,int t){
    int m;
    while( s <= e ){
        m=s+(e-s)/2;
        cout << "s: " << s << "| e: " << e << "| m: " << m << endl;
        if(arr[m]==t){
            return m;
        }else if(arr[m]>t){
            e=m-1;
        }else if(arr[m]<t){
            s=m+1;
        }
    }
    return -1;
}

int main(){
    vector <int> arr{9,10,1,2,3,4};
    int t=10;
    int p=pivot(arr);
    
    int s=0;
    int e=arr.size()-1;
    if(arr[p]<=t){
        if(binarySearch(arr,s,p,t)!=-1){
            cout << "Element found" << endl;
        }else{
            cout << "Element not found" << endl;
        }
    }
    else if(arr[p]>t){
        if(binarySearch(arr,p,e,t)!=-1){
            cout << "Element found" << endl;
        }else{
            cout << "Element not found" << endl;
        }
    }
}