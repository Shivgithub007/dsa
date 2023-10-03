#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> num={5,2,9,1,5,6};
    cout << "before sorted vector" << endl;
    for(int i=0;i<num.size();i++){
        cout << num[i] << " ";
    }
    cout << endl;
    sort(num.begin(),num.end());

    cout << "Sorted vector"<< endl;
    for(int i=0;i<num.size();i++){
        cout << num[i] << " ";
    }
}