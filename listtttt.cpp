#include<bits/stdc++.h>
#include<list>
#include<conio.h>
using namespace std;
void show(list<int> &ls){
    list<int>::iterator iter;
    for (iter=ls.begin(); iter != ls.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main(){
system("cls");
    list<int> list1;
    list1.push_back(53);
    list1.push_back(7);
    list1.push_back(19);
    list1.push_back(13);
    list1.push_back(25);
    show(list1);
    // list1.pop_back();
    // show(list1);
    // list1.pop_front();
    // show(list1);
    // list1.remove(13);
    // show(list1);
    // list1.reverse();
    // show(list1);
    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
    show(list2);
    list1.merge(list2);
    show(list1);

    getch();
    return 0;
}