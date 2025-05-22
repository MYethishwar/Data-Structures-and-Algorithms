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




// Reverse an Array without recursion
int main(){
int myarray[7]  = {1, 2, 3, 4, 5, 6, 7};
int left = 0;
int length = sizeof(myarray)/sizeof(myarray[0]);
int right = length - 1;
        while(left < right){
            swap(myarray[left],  myarray[right]);
            left++;
            right--;
        }
       for(int i = 0; i < length; i++){
        cout << myarray[i] << " ";
       } 
       return 0;
}    





// Reverse an Array with Recursion
int myarray[6] = {};
void reversen(int i, int end){
    if(i >= end){
        return;
    }
    swap(myarray[i], myarray[end]);
    reversen(i+1, end-1);
}

int main(){
    int end = sizeof(myarray)/sizeof(myarray[0]) - 1;
    for(int i = 0; i<= end; i++){
        int value;
        cin >> value;
        myarray[i] = value;
    }
    reversen(0, end);
    for(int i = 0; i <= end; i++){
        cout << myarray[i] << " ";
    }
}





// Reverse an Array with Recursion

void reversen(int left, int myarray[], int n){
    if(left >=  n/2){
        return;
    }
    swap(myarray[left], myarray[n - left- 1]);
    reversen(left + 1, myarray, n);
}

int main(){
    int size;
    cin >> size;
    int myarray[size] = {};
    int n = sizeof(myarray)/sizeof(myarray[0]) ;
    for(int i = 0; i< n; i++){
        int value;
        cin >> value;
        myarray[i] = value;
    }
    for(int i = 0; i < n; i++){
        cout << myarray[i] << " ";
    }

    reversen(0, myarray, n);
    cout << endl << endl;

    for(int i = 0; i < n; i++){
        cout << myarray[i] << " ";
    }
}






// Check if a string is palondrome
void reversen(int left, char myarray[], int n){
    if(left >=  n/2){
        return;
    }
    swap(myarray[left], myarray[n - left- 1]);
    reversen(left + 1, myarray, n);
}

int main(){
    int size;
    cin >> size;
    char myarray[size] = {};
    int n = sizeof(myarray)/sizeof(myarray[0]) ;
    for(int i = 0; i< n; i++){
        char value;
        cin >> value;
        myarray[i] = value;
    }
    
    char original[n];  
    for (int i = 0; i < n; i++) {
        original[i] = myarray[i];
    }

    reversen(0, myarray, n);
    cout << endl << endl;

    bool isPalindrome = true;
    for(int i = 0; i < size; i++){
        if(original[i] != myarray[i]){
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome){
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}







// Check if a string is a palindrome or not
bool palindrome(int left, string mystring){
    if(left >= mystring.size()/2){
        return true;
    }
    if(mystring[left] != mystring[mystring.size() - left - 1]){
        return false;
    }
    return palindrome(left+1, mystring);
}
int main(){
    string mystring;
    cin >> mystring;
    palindrome(0, mystring);
    
}




// Leetcode solution

// Recursive function to check if a string is a palindrome
bool checkPalindrome(string s, int left) {
    if (left >= s.size()/2) {
        return true;
    }
    if (s[left] != s[s.size() - left  - 1]) {
        return false;
    }
    return checkPalindrome(s, left + 1);
}

// Main function to clean the string and check for palindrome
bool isPalindrome(string s) {
    string cleaned = "";

    for (char c : s) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }

    return checkPalindrome(cleaned, 0);
}

int main() {
    string input = "malayalam";

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is NOT a palindrome." << endl;
    }

    return 0;
}





// Fibanocci series without recursion
int fib(int n) {
    if (n == 0) {
    cout << 0 << " ";
    return 0;
    }
    if (n == 1) {
        cout << 0 << " 1 ";
        return 1;
    }
    int first = 0, second = 1;
    int current = 0;
    cout << first << " ";
    cout << second << " ";
    for (int i = 2; i <= n; i++) {
        current = first + second;
        first = second;
        second = current;
        cout << current << " ";
    }
    return current;
}
int main(){
    fib(1);
}





// Fibanocci without recursion using arrays
int main(){
    int size;
    cin >> size;
    int series[size];
    series[0] = 0;
    series[1] = 1;
    cout << series[0] << " " << series[1] <<" ";
    for(int i = 2; i < size; i++){
        series[i] = series[i-1] + series[i-2];
        cout << series[i] << " ";
    }
}





int fib(int n){
    if(n <= 1){
        return n;
    }
    int second = fib(n - 1);
    int first = fib(n - 2);
    return first + second;
}
int main(){
    int n;
    cin >> n;
    cout << fib(n);
}
