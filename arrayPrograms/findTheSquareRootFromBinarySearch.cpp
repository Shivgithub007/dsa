#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n=16;
    vector <int> arr{1,2,3,4,5,6,7,8};
    // Kisi bhi no. ka square us no. ke half se chota hota hai
    int s=0;
    int e=arr.size()-1;
    int m;
    int ans=-1;
    while(s<=e){
        m=(s+e)/2;
        // cout << m;
        if((arr[m]*arr[m])==(n)){
            cout << arr[m] << endl;
            
            break;
        }
        else if((arr[m]*arr[m])<(n)){
            ans=arr[m];
            s=m+1;
        }
        else if((arr[m]*arr[m])>(n)){
            e=m-1;
        }
    }
    cout << ans;
}