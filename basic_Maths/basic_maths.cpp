#include <bits/stdc++.h>
using namespace std;

void extractingDigits(int n){
    
    while(n > 0){
        int last_digit = n % 10;
        cout << last_digit << " " << endl;
        n = n / 10;
    }

    cout << endl;
}



void countDigits(int n){
    int num = n;
    int count = 0;
    while(n > 0){
        int each_digit = n % 10;
        n = n/10;
        count++;
    }
    cout << "The number " << num << " has " << count << " digits." << endl;

    // THE OTHER WAY
    cout << "The number "<<  num << " has " << int(log10(num)) + 1 << " digits.";

}




void reverseNumber(int n){
    int sign = 1;
    if (n < 0){
        sign = -1;
        n = -(n);
    }
    int rev = 0;
    while(n > 0){
        int last_digit = n % 10;
        n = n / 10;
        
        rev = (rev * 10) + last_digit;
        
    }
    cout << rev * sign;

}




void palindrome(int n){
    int rev = 0;
    int num = n;
    if (n < 0){
       cout <<  "false";
    }
    while(n > 0){
        int last_digit = n % 10;
        n = n/10;
        rev = (rev * 10) + last_digit;
        }
    if (num == rev){
        cout << "true";
    }
    else{
        cout << "false";
    }   
}





    void armstrong(int n){
        int num = n;
        int result = 0;
        int length = log10(num) + 1;
        while(n> 0){
            int last_digit = n % 10;
            n = n/10;
            result = result + pow(last_digit, length);
            cout << result << " ";
        }
        if(result == num){
            cout << "Armstrong Number";
        }
        else{
            cout << "Not a Armstrong Number";
        }
    }




void printAllDivisors(int n){
    vector<int> result;
    int num = n;
    for(int i = 1; i * i <=num; i++){
        if(num % i == 0){
            result.push_back(i);
            if(i != n/i){
                result.push_back(n/i);
            }
        }   
       
    }
    std::sort(result.begin(), result.end());
    for(auto it: result){
        cout << it << " ";
    }
}




void checkPrime(int n){
    int count =  0;
    for(int i=1; i * i <= n; i++){
        if(n % i == 0){
            count++;
                if(n/i != i){
                    count++;
                }
        }
    }
    //If counts equals to 2 its a prime because a prime number can only divisible 
    //Exactly 1 and itself so there exists only 2 factors.
    cout << "Count: " << count << endl; 
    if(count == 2){
        cout << "It's a Prime Number";
    }
    else{
        cout << "It's Not a Prime Number";
    }
}



void gcd(){
    int num1;
    int num2;
    int gcd = 0;
    cin >> num1 >>  num2;
    if(min(num1, num2) == 0) {
        gcd = max(num1, num2);
    }
    else{
        for(int i = min(num1, num2); i>=0; i--){
            
            if( num1 % i == 0 && num2 % i == 0){
                gcd = i;
                break;
            }
        }
    }
    cout << "Highest Common Factor is: " << gcd;
   
}



void gcde(){
    int a;
    int b;
    cin >> a >> b;
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a == 0){
        cout<< "Highest Common Factor: " << b;
    }
    else{
        cout<< "Highest Common Factor: " << a;
    }
   
}






int main(){
    int n;
    cin >> n;
    extractingDigits(n);
    countDigits(n);
    reverseNumber(n);
    palindrome(n);
    armstrong(n);
    printAllDivisors(n);
    checkPrime(n);
    gcd();
    gcde();
}

