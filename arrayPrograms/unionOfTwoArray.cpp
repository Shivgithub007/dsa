#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr{1,2,3,4,5};
    vector <int> arr2{4,5,6,7};
    vector <int> arr3; //Not taken the size because we will push the newly values at the end
    // Putting the values of arr into arr3;
    for(int i=0;i<arr.size();i++){
        arr3.push_back(arr[i]);
    }
    // Putting the unique values from arr2 into arr3
    int match=0;
    for(int i=0; i<arr2.size(); i++){
        match=0;
        for(int j=0; j<arr3.size(); j++){
            if(arr3[j]==arr2[i]){
                match++;
            }
        }
        if(match==0){
            arr3.push_back(arr2[i]); //new values which are not present in the arr3 will get pushed 
            // cout << arr2[i] << endl;
            // cout << arr3.capacity() << endl;
        }
    }
    for(int i=0;i<arr3.size();i++){
        cout << arr3[i];
    }
}