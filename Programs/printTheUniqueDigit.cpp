#include <iostream>
#include <vector>
using namespace std;

int main(){
   int arr[10]={1,2,3,4,4,3,2,1,9,4};
   int arr2[109]={0};
   int count=0;
//    Checking which value are repeating and putting them into a different array
   for(int i=0;i<10;i++){
       for(int j=0;j<10;j++){
           if(i!=j){
               if(arr[i]==arr[j]){
                   arr2[count]=arr[j];
                   count++;
               }
           }
       }
   }
//    intiialize a variable with the first place int of the new array because we want the old array all the repeated values to be changed by this value only due to this only that value will remain different which is not repeated
   int match=arr2[0];
   
   for(int i=0;i<10;i++){
    //   cout << arr2[i] <<endl;
    for(int j=0;j<10;j++){
        if(arr[i]==arr2[j]){
            arr[i]=match;
        }
    }
   }
   
   for(int i=0;i<10;i++){
       if(arr[i]!=match){
           cout << arr[i];
       }
   }
}