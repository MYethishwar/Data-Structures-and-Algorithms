#include <bits/stdc++.h>
using namespace std;



// void cpp(int count){
//     cout << count << " " << "Yethishwar" << endl;
//     count--;
//     if(count == 0){
//         return;
//     }
//     else{
//     cpp(count);
//     }
// }

// int main(){
//     int count;
//     cin >> count;
//     cpp(count);

//     return 0;
// }




// // Task - 1 (Print My name N times)
// void printName(int i, int n){
//     if(i > n) return;
//     cout << i << " Yethishwar" << endl;
//     printName(i+ 1, n);
    
// }

// int main(){
//     int n;
//     cin >> n;
//     printName(1, n);
// }






// // // Task - 2 (Print lineraly from 1 to N)
// void printOne2N(int i, int n){
//     if(i > n){
//         return;
//     }
//     cout << i << endl;
//     printOne2N(i + 1, n);
// }
// int main(){
//     int n;
//     cin >> n;
//     printOne2N(1, n);

//     return 0;
// }




// // // Task - 3 (Print from N to 1)
// void printn1(int i, int n){
//     if(i < 1 ){
//         return;    }
//     cout << i << endl;
//     printn1(i - 1, n );
// }
// int main(){
//     int n;
//     cin >> n;
//     printn1(n, n);

//     return 0;
// }




// Task - 3 (Print Linearly from 1 to N but using backtracking)
// void print1n(int i, int n){
//     if(i < 1 ){
//         return;    
//     }
//     print1n(i - 1, n );
//     cout << i << endl;
    
// }
// int main(){
//     int n;
//     cin >> n;
//     print1n(n, n);

//     return 0;
// }



// Task - 4 (Print Linearly from N to 1 but using backtracking)
void print1n(int i, int n){
    if(i >  n ){
        return;    
    }
    print1n(i + 1, n );
    cout << i << endl;
    
}
int main(){
    int n;
    cin >> n;
    print1n(1, n);

    return 0;
}


