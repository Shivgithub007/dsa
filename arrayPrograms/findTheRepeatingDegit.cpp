// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int> arr{4,1,2,3,4};
//     for(int i=0; i<arr.size(); i++){
//         for(int j=0; j<arr.size(); j++){
//             if(i==j){ // Taki khud ki position ko check na kar le
//                 continue;
//             }
            
//                 if(arr[i]==arr[j]){
//                     cout << "Found, the number is:" << arr[j];
//                     //mark 
//                     arr[i]=-1;
//                     break;
//                 }
            
//             // cout << arr[i] << " " << arr[j] << endl;
//         }
//     }
    
// }


// Sorting the array and then finding the duplicate item -
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int> arr{4,1,2,3,4};
//     for(int i=0; i<arr.size(); i++) {
//         for(int j=0; j<arr.size()-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(auto value: arr){
//         cout << value;
//     }
//     for(int i=0; i<arr.size()-1; i++){
//         if(arr[i]==arr[i+1]){
//             cout << "The number is : " << arr[i] ;
//             break;
//         }
//     }
    
// }

// Using negative method applicable only for this array
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr{5,3,2,1,4,2};
    
    for(int i=0; i< arr.size(); i++){
        if(arr[abs(arr[i])]<0){
            
            cout << abs(arr[i]);
            break;
        }
        else{
            arr[arr[i]]=-arr[arr[i]];
        }
    }
    
}