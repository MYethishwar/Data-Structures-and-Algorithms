#include <bits/stdc++.h>
using namespace std;

// Function 1: Print name
void printName(string n) {
    cout << "Hello " << n << "\n";
}

// Function 2: Return sum of two numbers
int printSum(int a, int b) {
    return a + b;
}

// Function 3: Pass by value
void doSomething(string s) {
    s[0] = 'T';
    cout << "doSomething (pass by value): " << s << "\n";
}

// Function 4: Pass by reference
void doSomethingRef(string &s) {
    s[0] = 'T';
    cout << "doSomething (pass by reference): " << s << "\n";
}

int main() {
    // 1. Name input and display
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "The name you typed is: " << name << "\n";

    // 2. Grade classification
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;

    if (grade >= 80 && grade <= 100) {
        cout << grade << " Outstanding!! A\n";
    } else if (grade >= 60) {
        cout << grade << " Very Good!! B\n";
    } else if (grade >= 50) {
        cout << grade << " Good!! C\n";
    } else if (grade >= 45) {
        cout << grade << " Poor!! D\n";
    } else if (grade >= 25) {
        cout << grade << " Very Poor!! E\n";
    } else {
        cout << "Fail!!!!\n";
    }

    // 3. Job eligibility
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "Not eligible for job.\n";
    } else if (age <= 57) {
        cout << "You are eligible for job!";
        if (age > 55) {
            cout << " Retirement soon.\n";
        } else {
            cout << "\n";
        }
    } else {
        cout << "Your retirement age is over!\n";
    }

    // 4. Switch case for days
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch(day) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
        default: cout << "Invalid day!\n";
    }

    // 5. Arrays
    int arr[10] = {1, 2, 3, 4, 5, 67, 8, 9, 34, 0};
    cout << "Element at index 6: " << arr[6] << "\n";

    // 6. String and its length
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Length of string: " << str.size() << "\n";
    if (str.size() >= 4)
        cout << "Characters at [0] and [3]: " << str[0] << ", " << str[3] << "\n";
    else
        cout << "String is too short for index 3.\n";

    // 7. For loop
    for (int i = 0; i < 10; i++) {
        cout << "yethishwar" << i << "\n";
    }

    // 8. Function to print name
    printName(name);

    // 9. Function to print sum
    int num1, num2;
    cout << "Enter two numbers to add: ";
    cin >> num1 >> num2;
    int result = printSum(num1, num2);
    cout << "SUM is: " << result << "\n";

    // 10. Pass by value
    string s1 = "Raja";
    doSomething(s1);
    cout << "Main after pass by value: " << s1 << "\n";

    // 11. Pass by reference
    string s2 = "Raja";
    doSomethingRef(s2);
    cout << "Main after pass by reference: " << s2 << "\n";

    // 12. Character to integer
    int x = 'A';
    cout << "ASCII value of 'A' is: " << x << "\n";

    return 0;
}
