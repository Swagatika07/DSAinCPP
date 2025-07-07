#include <bits/stdc++.h>
using namespace std;

void examplePair(){
    //pair using curly braces
    pair<int,int> pr1 = {3,5};
    cout<<pr1.first<<" "<<pr1.second<<endl;
    
    //pair using make_pair()
    pair<int,char> pr2 = make_pair(1,'a');
    cout<<pr2.first<<" "<<pr2.second<<endl;
    
    //nested pairs
    pair<pair<int,char>,int> pr3 = {{5,'s'},8};
    cout<<pr3.first.second<<" "<<pr3.second<<endl;
}

int main() {
   examplePair();
   return 0;
}