#include<bits/stdc++.h>
using namespace std;

void explainpair(){
    pair<int,int> p = {12,45};
    cout << p.first << " " << p.second << " " ;
    pair<int,pair<char,char>>  p1 = {25,{'A','S'}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << " ";
    pair<int,int> pairarr[] = {{1,2},{2,3},{3,4}}; 
    cout << pairarr[0].second;
}

int main(){;
    explainpair();
    return 0;
}