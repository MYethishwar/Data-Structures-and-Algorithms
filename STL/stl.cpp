#include<bits/stdc++.h>
using namespace std;

// void explainpair(){
//     pair<int,int> p = {12,45};
//     cout << p.first << " " << p.second << " " ;
//     pair<int,pair<char,char>>  p1 = {25,{'A','S'}};
//     cout << p1.first << " " << p1.second.first << " " << p1.second.second << " ";
//     pair<int,int> pairarr[] = {{1,2},{2,3},{3,4}}; 
//     cout << pairarr[0].second;
// }




// void explainVector(){
//     vector<int> v;
//     v.push_back(2);
//     v.emplace_back(3);  // Same like push_back but faster

//     vector<pair<int, int>> vp; 
//     vp.push_back({2,5});
//     vp.emplace_back(5,10);

//     vector<int> v1(5,100); //[100,100,100,100,100]
//     vector<int> v2(5); //[0,0,0,0,0]
//     vector<int> v3(v2); //It will make a copy of v2

//     for(int i=0; i<v1.size();i++){
//         cout << v1[i] << " ";
//     }



//     vector<int>::iterator it = v.begin(); //It assigns to the beginning element 
//     it++;
//     cout << *(it) << " ";  //from (2,3)  it prints 2 without it++ , with it++ it prints 3
    
//     vector<int>::iterator it = v.end(); //It starts from after end element
//     it--;
//     cout << *(it) << " ";  //It prints 3 with it++, without it-- it prints garbage value after end element.

//     vector<int>::iterator it = v.rend();
//     vector<int>::iterator it = v.rbegin();

//     cout << v.back();  //It prints  3 from (2,3)



//     for(vector<int>::iterator it = v.begin(); it != v.end(); it++){    //Method 1
//         cout << *(it) << " ";
//     }


//     for(auto it=v.begin(); it != v.end(); it++){   //Method 2
//         cout << *(it) << " ";
//     }

//     for(auto it: v){        //Method 3
//         cout  << it << " ";
//     }


//     v.erase(v.begin() +1);   //From (10, 23, 14, 4)  It delets 23

    
//     v.erase(v.begin()+2, v.begin()+4); // From (10, 23, 14, 4, 5) It deletes (14,4) 

//INSERT FUNCTION
//         vector<int>v(2,100); //{100, 100}
//         v.insert(v.begin(),300); //{300, 100, 100}
//         v.insert(v.begin()+1, 2, 10); //{300, 10, 10, 100, 100}

//         vector<int> vcopy(2, 50); //{50, 50}
//         v.insert(v.begin(), vcopy.begin(), vcopy.end());  //{50, 50, 300, 10, 10, 100, 100}


//         //To print the size of the vector
//         cout << v.size();

//         for(auto it: v){
//             cout << it << " ";
//         }

//         v.pop_back(); //From {1, 5} it removes {5}
//         v1.swap(v2);  // if v1 = {2, 3} & v2 = {4, 5} then it swaps v1 = {4, 5} & v2 = {2, 3}
//         v.clear(); //Erases the entire vector
//         v.empty(); //If vector is empty - True or else False

// }




// void explainlist(){
//     list<int> ls;
//     ls.push_back(5); //{5}
//     ls.emplace_back(2); //{5, 2}

//     ls.push_front(10); //{10, 5, 2}
//     ls.emplace_front(50);  //{50, 10, 5, 2}

    
//     for(auto it = ls.begin(); it != ls.end(); it++){
//         cout << *(it) << " ";
//     }  
    
//     //Rest all function are similar like we seen in vector

// }




// void explaindeque(){
//     deque<int> dq;
//     dq.push_back(19);   //{19}
//     dq.emplace_back(5);   //{19, 5}
//     dq.push_front(8);   //{8, 19, 5}
//     dq.emplace_front(7);    //{7, 8, 19, 5}


//     dq.pop_back();      //{7,8,19}
//     dq.pop_front();     //{8, 19}

//     cout << dq.front() << " ";
//     cout << dq.back() << " ";
    
// }




// void explainStack(){
//     stack<int> st;
//         st.push(2);  //{2}
//         st.push(8);  //{2, 8}
//         st.push(11);  //{2, 8, 11} 
//         st.push(3);  //{2, 8, 11, 3}
//         st.emplace(9);  //{2, 8, 11, 3, 9}

//         cout << st.top() << " ";

//         st.pop(); //{2, 8, 11, 3}
//         cout <<  st.top() << " ";
//         cout << st.size() << " ";
//         cout <<  st.empty() << " ";

//         stack<int> s1, s2;
//         s1.swap(s2);

// }




// void explainQueue(){
//      queue<int> q;
//     q.push(9); //{9}
//     q.push(12); //{9, 12}
//     q.emplace(7); //{9, 12, 7}

//     cout << q.front() << " ";
//     cout << q.back() << " ";

//     q.pop();

//     cout << q.front() << " ";
//     cout << q.back() << " ";

//     q.back() += 6;

//     cout << q.back();
// }




// void explainPq(){
//     priority_queue<int> pq;
//     pq.push(10);
//     pq.push(8);
//     pq.emplace(19);

//     cout << pq.top() << " ";

//     pq.pop();

//     cout << pq.top() << " ";

//     //If we want minimum heap
//     priority_queue<int, vector<int>, greater<int>> pq1;
//     pq1.push(8);
//     pq1.push(4);
//     pq1.push(19);

//     cout << pq1.top() << " ";
// }





// void explainSet(){
//     set<int> se;
//     se.insert(10);
//     se.insert(4);
//     se.insert(5);
//     se.emplace(7);
//     se.insert(7);
//     se.insert(2);
//     //{2, 4, 5, 7, 10}

//     //begin(), end(), rbegin(), rend(), size() are same as others

//     auto it = se.find(10);

//     auto it = se.find(100); //Genrally it points to the se.end() whichis after the last element

//     se.erase(10);

//     int cnt = se.count(1);

//     auto it1 = se.find(4);
//     auto it2 = se.find(10);
//     se.erase(it1, it2); // It takes constant time

//     auto it = se.lower_bound(12); //Look notes 

//     auto it = se.upper_bound(10);

// }





// void explainMultiSet(){
// // It allows duplicates and it allows Lower and upper bound functions
//     multiset<int> mst;
    
//     mst.insert(1);
//     mst.insert(3);
//     mst.insert(4);
//     mst.insert(7);
//     mst.emplace(4);
//     mst.insert(9);

//     mst.erase(7); //It will erase all elements where  7 contains

//     int cnt = mst.count(7); 

//     mst.erase(mst.find(7)); //Only a single 7 one will be erased

//     mst.erase(mst.find(7), mst.find((7)+2)); //froms set{7, 7, 7, 5, 6} it delets {7,7} it means 7 upto 2 occurences
// }





// void explainUset(){
//     unordered_set<int> uset;
//     //It is same as set but the only difference is 
//     //The lower bound and upper bound will not work here 
//     //It does not store the values in any particular order
//     //It has a time complexity of O(n) in rare cases with intentionally worst case will happen
    
// }





// void explainMap(){
//     //Time Complexity is O(1) in rare cases O(n)
//     map<int, int> mpp;
//     //map<int, pair<int , int>> mpp;
//     //map<pair<int, int>, <int> mpp;

//     mpp[1] = 5; 
//     mpp.emplace(3, 6);
//     mpp.insert({2, 4});
    

//     cout << mpp[3];
//     cout << mpp[5];  //Prints 0
// //The result is in sorted order of keys
//     // for(auto it : mpp){
//     //     cout <<  it.first << " " << it.second << " " << endl ;
//     // }

//     auto it = mpp.find(1);
//     cout << it->first;

//     auto it2 = mpp.lower_bound(2);
//     auto it3 = mpp.upper_bound(3);

// }





// bool comp(pair<int, int> p1, pair<int, int> p2){
//     if(p1.second < p2.first) return true;
//     if(p1.second > p2.second) return false;

//     if(p1.first > p2.first) return true;
//     return false;
// }





// void explainExtra(){
//     sort(a, a+n); //n is the size
//     sort(v.begin(), v.end(); //In case of vectors)
//     sort(a+2, a+4); //IF you wanted to sort specific region

//     sort(a, a+n, greater<int>);//Sorts in descending order

//     pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
//     //If we wanted to sort according to our own way
//     //Sort the elements based on second element
//     //If the second element is same then 
//     //sort the elements based on the first element in descending order

//     sort(a, a+n, comp)


    // int num1 = 7;
    // int cnt1 = __builtin_popcount(num1);
    
    // long long num2  = 14343234423;
    // int cnt2 = __builtin_popcountll(num2);

    // string s = "123";
    // //If i want all the permutations of it
    // do{
    //     cout << s << endl;
    // } while(next_permutation(s.begin(), s.end()));

    // int maxi = *max_element(a, a+n);

// }





int main(){
    // explainpair();
    // explainVector();
    // explainlist();
    // explaindeque();
    // explainStack();
    // explainQueue();
    // explainPq();
    // explainSet();
    // explainMultiSet();
    // explainUset();
    // explainMap();
    // explainExtra();
    return 0;
}