#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
  

    string name;
    cin >> name;
    cout << "The name you typed is : " << name;

    string x1, x2, x3;
    cin >> x1;
    cin >> x2;
    cin >> x3;
    cout << "My string1 is: " << x1 << "My string 2 is: " << x2 << "String3 is: " << x3;

    string str;
    getline(cin, str);
    cout << str;
    
//     int grade;
//     cin >> grade;
//     if (grade >= 80 and grade <= 100){ 
//         cout << grade << " Outstanding!! A";
//     }
//     else if(grade <= 79 and grade >= 60){
//         cout << grade << " Very Good!! B";
//     }
//     else if(grade <= 59 and grade >= 50){
//         cout << grade << " Good!! C";
//     }
//     else if(grade <= 49 and grade >= 45){
//         cout << grade << " Poor!! D";
//     }
//     else if(grade <= 44 and grade >= 25){
//         cout << grade << " Very Poor!! E";
//     }
//     else {
//         cout << " Fail!!!!";
//     }


// // Effective Approach
//     int grade;
//     cin >> grade;
//     if (grade < 25){ 
//         cout << grade << "F";
//     }
//     else if(grade <= 44){
//         cout << grade << "E";
//     }
//     else if(grade <= 49){
//         cout << grade << "D";
//     }
//     else if(grade <= 59){
//         cout << grade << "C";
//     }
//     else if(grade <= 79){
//         cout << grade << "B";
//     }
//     else {
//         cout << "A Outstanding!!!!";
//     }


//     int age;
//     cin >> age;
//     if (age < 18){
//         cout << "Not eligible for Job";
//     }
//     else if(age <= 57){
//         cout << "You are eligible for job!";
//         if(age > 55){
//             cout << ", Retirement soon";
//         }
//     else{
//         cout << "You retiirement age is over!";
//     }
//     }

// // SWITCH
//     int day;
//     cin >> day;

//     switch(day) {
//         case 1:
//             cout << "Monday!";
//             break;
//         case 2:
//             cout << "Tuesday!";
//             break;
//         case 3:
//             cout << "Wednesday!";
//             break;
//         case 4:
//             cout << "Thrusday!";
//             break;
//         case 5:
//             cout << "Friday!";
//             break;
//         case 6:
//             cout << "Saturday!";
//             break;
//         case 7:
//             cout << "Sunday!";
//             break;
//         default:
//             cout << "Please enter a valid day number";
//     }


// ARRAYS

    int  arr[10] = {1, 2, 3, 4, 5, 67, 8, 9, 34};
    cout << arr[6];
    
// // STRING SLICES

//     string str;
//     cin >> str;
//     int len = str.size();
//     cout << len;
//     cout << str[0] << str[3];
    

// // FOR LOOPS

//     for (int i = 0;i < 10 ; i++) {
//         cout << "yethishwar" << i << "\n";
//     } 


// // FUNCTIONS 1

// void printName(string n){
//     cout << "Hello " << n;
// }
// int main() { 
//     string name;
//     cin >> name;
//     printName(name);
//     return 0;
// }


// // FUNCTIONS 2

// int printSum(int a, int b){
//     int result = a + b;
//     return result;
// }
// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int result = printSum(num1, num2);
//     cout << "SUM is: " << result;
//     return 0;
// }


// // FUNCTION 3(Pass by value)

// void doSomething(string s){
//     s[0] = 'T';
//     cout << "doSomething function " << s << "\n";
// }

// int main(){
//     string s= "Raja";
//     doSomething(s);
//     cout << "Main Function " << s << "\n";
// }



// // FUNCTION 3(Pass by value)

// void doSomething(string &s){
//     s[0] = 'T';
//     cout << "doSomething function " << s << "\n";
// }

// int main(){
//     string s= "Raja";
//     doSomething(s);
//     cout << "Main Function " << s << "\n";
// }


// int main(){
//     int x = 'A';
//     cout << x ;

    return 0;
}