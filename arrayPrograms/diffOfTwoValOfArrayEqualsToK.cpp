// #include<iostream>
// #include<vector>
// #include <cstdlib>
// using namespace std;

// int main(){
//     vector <int> arr{3,1,4,1,5};
//     int k=2;
//     int c=0;
//     for(int i=0; i<arr.size(); i++){
//         // cout << arr[i] << endl;
//         for(int j=i+1; j<arr.size(); j++){
//             // cout << "i=" << arr[i] << " j" << arr[j] << endl;
//             if(abs(arr[i]-arr[j])==k){
//                 c++;
//                 arr[i]=-1;
//             }
//         }
//     }
//     cout << c;
// }

// Two Pointer approach 
// It uses just one loop and a sorted array

#include<iostream>
#include<vector>
#include <cstdlib>
using namespace std;

int main(){
    vector <int> arr{1,1,3,4,5};
    int k=2;
    int c=0;
    int s=0, e=1;
    while(s<=e && e<arr.size()){
        if(abs(arr[e]-arr[s])==k){
            c++;
            s++,e++;
            // Jab bhi ek pair mil jata hai to hm dono pointers ko ek place agee increase kar dete hai jisse required pair cancel out ho jata hai aur pair ki value repeated ho to
        }
        else if((arr[e]-arr[s])>k){
            s++;
        }
        else if((arr[e]-arr[s])<k){
            e++;
        }
    }
    
    cout << c << endl;
    
}