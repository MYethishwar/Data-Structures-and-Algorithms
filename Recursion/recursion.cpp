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




// Task - 1 (Print My name N times)
void printName(int i, int n){
    if(i > n) return;
    cout << i << " Yethishwar" << endl;
    printName(i+ 1, n);
    
}

int main(){
    int n;
    cin >> n;
    printName(1, n);
}




// // Task - 2 (Print lineraly from 1 to N)
// void linearPrint(int repeat){
//     if(repeat == 0){
//         return;
//     }
//     cout << repeat << endl;
//     repeat--;
//     linearPrint(repeat);
// }
// int main(){
//     int repeat;
//     cout << "Please Enter N value: ";
//     cin >> repeat;
//     linearPrint(repeat);
// }





// // Task - 3 (Print from N to 1)
// int basevalue = 1;
// void linearPrint(int repeat){
//     if(repeat == 0){
//         return;
//     }
//     cout << basevalue << endl;
//     basevalue++;
//     repeat--;
//     linearPrint(repeat);
// }
// int main(){
//     int repeat;
//     cout << "Please Enter N value: ";
//     cin >> repeat;
//     linearPrint(repeat);
// }




// Task - 1 (Print Linearly from 1 to N but using backtracking)
// Task - 1 (Print Linearly from N to 1 but using backtracking)



