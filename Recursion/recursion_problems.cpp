#include <bits/stdc++.h>
using namespace std;

// // Sum of First N numbers using recursion - parameterised version
// void sumofn(int i, int n){
//     if(i < 1){
//         cout << n << endl;
//         return;
//     }
//     sumofn(i - 1, n + i);
// }
// int main(){
//     int n;
//     cin >> n;
//     sumofn(n , 0);
//     return 0;
// }




// // Sum of First N numbers using recursion - fucntional version
// int sumofn(int n){
//     if(n == 0) return 0;
//     return n + sumofn(n - 1);
// }
// int main(){
//     int n;
//     cin >> n;
//     cout <<  "SUM is: " << sumofn(n);
//     return 0;
// }




// // Factorial of N numbers
//     int factorial(int n){
//         if(n == 0) {
//             return 1;
//         }
//         return n * factorial(n - 1);
//     }
//     int main(){
//         int n;
//         cin >> n;
//         cout <<  "FACTORIAL: " << factorial(n);
//         return 0;
//     }




// // Reverse an Array without recursion
// int main(){
// int myarray[6]  = {1, 2, 3, 4, 5, 6};
// int start = 0;
// int length = sizeof(myarray)/sizeof(myarray[0]);
// int end = length - 1;
//         while(start <= end){
//             int temp = myarray[start];
//             myarray[start] = myarray[end];
//             myarray[end] = temp;
//             start++;
//             end--;
//         }
//        for(int i = 0; i < length; i++){
//         cout << myarray[i] << " ";
//        } 
//        return 0;
// }





// Reverse an Array with Recursion
int main(){
    int myarray[6] = {9, 2, 5, 1, 7, 8};
    reversen(myarray)
}



