#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(){
system("cls");
    vector<int> v;
    // v.reserve(4);
    for(int i=0; i<7; i++){
        v.push_back(i);
        cout<<v.size()<<" "<<v.capacity()<<endl;
    }
    getch();
    return 0;
}