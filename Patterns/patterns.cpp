// #inclvoid printPattern1(int n){
//     for(int i = 0; i<n;i++){
//        for(int j=0; j<n;j++){
//             cout << "*";
//        }
//        cout << endl;
//     }
// }

// void printPattern2(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout << "* " ;ude <iostream>
// using namespace std;



//         }
//         cout << endl;
//     }
// }

// void printPattern3(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout << j + 1 << " ";
//         }
//         cout << endl;
//     }
// }

// void printPattern4(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout << i + 1 << " ";
//         }
//         cout << endl;
//     }
// }

// void printPattern5(int n){
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<=i;j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void printPattern6(int n){
//     for(int i=0;i<n;i++){
        
//         for(int j=0; j<(n-i-1); j++){
//             cout << " ";
//         }
        
//         for(int j=0; j<(2*i+1); j++){
//             cout << "*";
//         }
//         for(int j=0; j<(n-i-1); j++){
//             cout << " ";
//         }
//         cout << endl;
        

//     }
// }

// void printPattern7(int n){
//         for(int i=n-1;i>=0;i--){
            
//             for(int j=0; j<(n-i-1); j++){
//                 cout << " ";
//             }
            
//             for(int j=0; j<(2*i+1); j++){
//                 cout << "*";
//             }
//             for(int j=0; j<(n-i-1); j++){
//                 cout << " ";
//             }
//             cout << endl;
            

//         }
// }

// void printPattern8(int n){
//     for(int i=0;i<n;i++){
        
//         for(int j=0; j<(n-i-1); j++){
//             cout << " ";
//         }
        
//         for(int j=0; j<(2*i+1); j++){
//             cout << "*";
//         }
//         for(int j=0; j<(n-i-1); j++){
//             cout << " ";
//         }
//         cout << endl;
        

//     }
//     for(int i=n-1;i>=0;i--){
        
//         for(int j=0; j<(n-i-1); j++){
//             cout << " ";
//         }
        
//         for(int j=0; j<(2*i+1); j++){
//             cout << "*";
//         }
//         for(int j=0; j<(n-i-1); j++){
//             cout << " ";
//         }
//         cout << endl;
        

//     }
// }

// void printPattern9(int n){
//     for(int i=0; i<n; i++){
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
        
//     }

//     for(int i=n; i>=0; i--){
//         for( int j=1; j<=i;j++){
//             cout << "*";
//         }
//     cout << endl;
// }
// }

// void printPattern10(int n){
//     int start = 1;
//     for(int i=0; i<n; i++){

//         if (i % 2 == 0){
//              start = 1;
//         }
//         else {
//              start = 0;
//         }
//         for(int j=0; j<=i; j++){
            
//             cout << start;
//             start =  1 -start;
//         }
//         cout << endl;
        
//     }

// }

// void printPattern11(int n){
//     int spaces = 2*(n-1);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << j;
//         }
//         for(int j=1; j<=spaces; j++){
//             cout << " ";
//         }
//         spaces = spaces -2;

//         for(int j=i; j>=1; j--){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void printPattern12(int n){
//     int num = 1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << num << " ";
//             num++;
//         }
        
//         cout << endl;
//     }
// }
        
// void printPattern13(int n){
    
//     for(int i=0; i<=n; i++){
//         for(int j=0; j<i; j++){
//             char x = 'A' + j;
//             cout << x   << " ";
//         }
        
//         cout << endl;
//     }
// }     
    
// void printPattern14(int n){
    
//     for(int i=0; i<=n; i++){
//         int inc = 0;
//         for(int j=n; j>i; j--){
//             char x = 'A' + inc;
//             cout << x   << " ";
//             inc++;
//         }
        
//         cout << endl;
//     }
// }     

// void printPattern15(int n){
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             char x = 'A' + i;
//             cout << x   << " ";
//         }
        
//         cout << endl;
//     }
// } 

// void printPattern16(int n){
       
//     for(int i=0;i<n;i++){
        
//         for(int j=0; j<(n-i-1); j++){
//             cout << " ";
//         }
        
//         for(int j=0; j<=i; j++){
//             cout << char('A' + j);
//         }
        
//         for(int j=i-1; j>=0; j--){
//             cout << char('A' + j ) ;
//         }

//         for(int j=0; j<(n-i-1); j++){
//             cout << " ";
//         }

//     cout << endl;      
    
//     }     
       
// }

// void printPattern17(int n){
       
//     for(int i=1;i<=n;i++){
//         char start = 'A' + n-i;
//         for(int j=1; j<=i; j++){
            
//             cout << start << " ";
//             start++;
//         }

//     cout << endl;      
//     }     
       
// }

// void printPattern18(int n){
       
//     for(int i=0;i<n;i++){
//         for(int j=n;j>i;j--){
//             cout << "*";
//         }
//         for(int j=0;j<(2*i);j++){
//             cout << " ";
//         }
//         for(int j=n;j>i;j--){
//             cout << "*";
//         }

//     cout << endl;      
//     }   

//     for(int i=n-1;i>=0;i--){
//         for(int j=0; j<=(n-i-1); j++){
//             cout << "*";
//         }
//         for(int j=0;j<(2*i);j++){
//             cout << " ";
//         }
//         for(int j=0; j<=(n-i-1); j++){
//             cout << "*";
//         }    
//        cout << endl;
// }
// }

// void printPattern19(int n){
//         int inis = (n*2) -2 ;
//     for(int i=0;i<n;i++){
       
//         for(int j=0;j<=i;j++){
//             cout << "*";
//         }
//         for(int j=0; j<inis; j++){
//             cout << " ";
//         }
//         for(int j=0;j<=i;j++){
//             cout << "*";
//         }
//         inis = inis -2;
//         cout << endl;      
//     }  
    
//     int var = 2;
//     for(int i=n-1;i>0;i--){
//        for(int j=0; j<i; j++){
//         cout << "*";
//        }
//        for(int j=0; j<var;j++){
//         cout << " ";
//        }
//        for(int j=0; j<i;j++){
//         cout << "*";
//        }
//        var = var+2;
//     cout << endl;      
//     }   
// }

// void printPattern20(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j == 1 or j==n or i == 1 or i ==n){
//                 cout << "*";
//             }
//             else{
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// void printPattern21(int n){
//     for(int i=0;i<(2*n-1);i++){
//         for(int j=0;j<(2*n-1);j++){
//             int top = j;
//             int left = i;
//             int right = (2*n-2) -j;
//             int down = (2*n-2) -i;
//             cout << (n-min(min(top, down), min(left, right))) << " ";  
//         }
//         cout << endl;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     printPattern1(n);
//     printPattern2(n);
//     printPattern3(n);
//     printPattern4(n);
//     printPattern5(n);
//     printPattern6(n);
//     printPattern7(n);
//     printPattern8(n);
//     printPattern9(n);
//     printPattern10(n);
//     printPattern11(n);
//     printPattern12(n);
//     printPattern13(n);
//     printPattern14(n);
//     printPattern15(n);
//     printPattern16(n);
//     printPattern17(n);
//     printPattern18(n);
//     printPattern19(n);
//     printPattern20(n);
//     printPattern21(n);
//  return 0;
// }