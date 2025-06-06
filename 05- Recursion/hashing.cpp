#include <bits/stdc++.h>
using namespace std;




// //Number Hashing
// int main(){
//     int n;
//     cout << "Enter Array Size: ";
//     cin >> n;
//     cout << "------ Enter Array Elements -----" << endl;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cout << "Enter Value " << i + 1 << ": ";
//         cin >> arr[i];
//     }


//     //precompute
//     int hash[15] = {};
//     for(int i = 0; i<n; i++){
//         hash[arr[i]] = hash[arr[i]] + 1;
//     }


//     //Fetching Hash Array
//     int q;
//     cout << "How many numbers you want count: ";
//     cin >> q;
//     while(q--){
//         cout << "Enter that number: ";
//         int number;
//         cin >> number;
//         cout << "Count of value " << number << " is: " << hash[number] << endl;
//     }
// }





// //Charecter Hashing -- My version
// int main(){
//     int n;
//     cout << "Enter String Size: ";
//     cin >> n;
//     cout << "------ Enter String Elements -----" << endl;
//     char arr[n];
//     for(int i=0; i<n; i++){
//         cout << "Enter Value " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     //precompute
//     int hash[256] = {0};
//     for(int i = 0; i<n; i++){
//         hash[int(arr[i])] += 1;
//     }


//     //Fetching Hash Array
//     int q;
//     cout << "How many characters you want count: ";
//     cin >> q;
//     while(q--){
//         cout << "Enter that Character: ";
//         char ch;
//         cin >> ch;
//         cout << "Count of value " << ch << " is: " << hash[int(ch)] << endl;
//     }
// }





// //Charecter Hashing -- Striver's version
// int main(){
//     cout << "------ Enter String  -----" << endl;
//     string ins;
//     cin >> ins;

//     //Precompute
//     int hash[256] = {0};
//     for(int i=0; i<ins.size(); i++){
//         hash[ins[i]]++;
//     }


//     //Fetching Hash Array
//     int q;
//     cout << "How many characters you want count: ";
//     cin >> q;
//     while(q--){
//         cout << "Enter that Character: " << q << ": ";
//         char ch;
//         cin >> ch;
//         cout << "Count of value " << ch << " is: " << hash[int(ch)] << endl;
//     }
// }





// // Number Hashing using Map(STL)
// // Overcomming the drawback of time complexity of first version
// int main(){
//     int n;
//     cout << "Enter Array Size: ";
//     cin >> n;
//     cout << "------ Enter Array Elements -----" << endl;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cout << "Enter Value " << i + 1 << ": ";
//         cin >> arr[i];
//     }


//     //precompute
//     map<int, int> mpp;
//     for(int i = 0; i<n; i++){
//        mpp[arr[i]]++;
//     }


//     //Fetching Hash Array
//     int q;
//     cout << "How many numbers you want count: ";
//     cin >> q;
//     while(q--){
//         cout << "Enter that number: ";
//         int number;
//         cin >> number;
//         cout << "Count of value " << number << " is: " << mpp[number] << endl;
//     }
// }





// //Assignment 
// int main(){
//     int n;
//     cout << "Enter Array Size: ";
//     cin >> n;
//     cout << "------ Enter Array Elements -----" << endl;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cout << "Enter Value " << i + 1 << ": ";
//         cin >> arr[i];
//     }


//     //precompute
//     map<int, int> mpp;
//     for(int i = 0; i<n; i++){
//        mpp[arr[i]]++;
//     }


//     //Fetching Hash Array
//     for (auto [key, value] : mpp) {
//     cout << "The " << key << " Occurs " << value << " Times" << endl;
// }

// }







//LEETCODE Problem
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
    map<int, int> mpp;
    for(int i = 0; i<n; i++){
       mpp[arr[i]]++;
    }


    //Fetching Hash Array
    int q;
    cout << "How many numbers you want count: ";
    cin >> q;
    while(q--){
        cout << "Enter that number: ";
        int number;
        cin >> number;
        cout << "Count of value " << number << " is: " << mpp[number] << endl;
    }
}