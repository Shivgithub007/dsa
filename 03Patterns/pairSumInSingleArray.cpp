// Pair Sum in single array

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int > arr{8,2,4,65,34,87,23,54,1};
    // for(int i=0; i<arr.size()-1;i++){
    //     if(arr[i]+arr[i+1]==9){
    //         cout<< arr[i] << endl;
    //         cout << arr[i+1] << endl;
    //     }// Pair Sum in single array

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int > arr{1,2,3,4,5,6,7,8,9};
    // for(int i=0; i<arr.size()-1;i++){
    //     if(arr[i]+arr[i+1]==9){
    //         cout<< arr[i] << endl;
    //         cout << arr[i+1] << endl;
    //     }
    // }
    int count=1;
    for(int i=0; i< arr.size(); i++){
        // We will take values after i because we dont want same values in a single array
        for(int j=i+1; j<arr.size(); j++){
            if( arr[i]+arr[j]==9){
                cout << "Pair " << count <<endl;
                cout << arr[i] << "+" << arr[j] << endl;
                count++;
            }
        }
    }
}
    // }
    count=1;
    for(int i=0; i< arr.size()/2; i++){
        for(int j=0; j<arr.size(); j++){
            if( arr[i]+arr[j]==9){
                cout << "Pair " << count <<endl;
                cout << arr[i] << "+" << arr[j] << endl;
                count++;
            }
        }
    }
}

// IN TRIPLET WE WILL USE THREE LOOPS