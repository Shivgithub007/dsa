// We have an array which contains no. which are in pairs 
// We have to find the no. which is not available in the pair

#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector <int> arr{1,1,2,2,3,3,4,4,3,5,5,4,4};
    vector <int> arr{1,1,2,2,4,4,3,3,4,4,6,6,7,7,9};
    int s=0;
    int e=arr.size()-1;
    int m;
    while(s<=e){
        m=s+(e-s)/2;
        cout << "s: " << s << "|e: " << e << "|m:" << m << endl;
        
        if(m%2==0){
            if(arr[m]!=arr[m+1] && arr[m]!=arr[m-1]){
                break;
            }
            else if(arr[m]==arr[m+1]){
                s=m+2;
                
            }
            else{
                // e=m-2;
                e=m;
            }
        }
        else{
            if(arr[m]!=arr[m+1] && arr[m]!=arr[m-1]){
                break;
            }
            else if(arr[m]==arr[m-1]){
                s=m+1;
            }
            else{
                e=m;
            }
        }

        
       
        
    }
    cout << arr[m];
}