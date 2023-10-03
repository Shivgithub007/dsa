// Given an array {1,2,3,0,2,3,1,0};
// We have to sort it without any technique;
// First count how may 0s, 1s, 2s, 3s are there and store them into the array
// Now iterate over the count array
// Inside count loop run a loop from 0 to the value written at index.
// And enter the number into the array

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> arr{0,3,1,2,3,3,1,2,0};
    vector <int> count{0,0,0,0};
    for(int i=0; i<arr.size();i++){
        switch(arr[i]){
            case 0:
                count[0]++;
                break;
            case 1:
                count[1]++;
                break;
            case 2:
                count[2]++;
                break;
            case 3:
                count[3]++;
                break;
        }
    }
    
    int c=0;// To move to the next element in original array
    for(int i=0; i<count.size(); i++){
        for(int j=0; j<count[i]; j++){
            arr[c]=i; // Setting the value equals to i because it equals to the digits that need to be putted into the array
            c++;
        }
    }
    for(auto data:arr){
        cout << data << endl;
    }
}