#include <iostream>
#include <vector>
using namespace std;

int sorted(vector <int> &arr,int t){
    int ans=-1;
    int s=0;
    int e=arr.size()-1;
    int m;
    while(s<=e){
        m=s+(e-s)/2;
        if(arr[m]==t){
            ans=m;
            return ans;
        }
        else if((m+1)<= e && arr[m+1]==t){ // used e in place of arr.size() because arr always reduces
            ans=m+1;
            return m+1;
        }
        else if((m-1)>=s && arr[m-1]==t){ // used s insted of 0 because arr updates everytime
            ans=m-1;
            return m-1;
        }
        else if(t<arr[m]){
            e=m-2;
        }
        else if(t>arr[m]){
            s=m+2;
        }
    }
    return ans;
}

int main(){
    vector <int> arr{1,3,4,5,7,6,8,9};
    int t=5;
    cout << "Element index is: " << sorted(arr,t);
    
}