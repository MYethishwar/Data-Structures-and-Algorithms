#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    cout << "------ Enter Array Elements -----" << endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter Value " << i + 1 << ": ";
        cin >> arr[i];
    }


    //precompute
    int hash[15] = {};
    for(int i = 0; i<n; i++){
        hash[arr[i]] += 1;
    }


    //Fetching Hash Array
    int q;
    cout << "How many numbers you want count: ";
    cin >> q;
    while(q--){
        cout << "Enter that number: ";
        int number;
        cin >> number;
        cout << "Count of value " << number << " is: " << hash[number] << endl;
    }
}