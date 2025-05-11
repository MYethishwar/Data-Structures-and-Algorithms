#include <bits/stdc++.h>
using namespace std;

// Sum of First N numbers using recursion - parameterised version
void sumofn(int i, int n){
    if(i < 1){
        cout << n << endl;
        return;
    }
    sumofn(i - 1, n + i);
}
int main(){
    int n;
    cin >> n;
    sumofn(n , 0);
    return 0;
}




// Sum of First N numbers using recursion - fucntional version
int sumofn(int n){
    if(n == 0) return 0;
    return n + sumofn(n - 1);
}
int main(){
    int n;
    cin >> n;
    cout <<  "SUM is: " << sumofn(n);
    return 0;
}




// Factorial of N numbers
int factorial(int n){
    if(n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main(){
    int n;
    cin >> n;
    cout <<  "FACTORIAL: " << factorial(n);
    return 0;
}

