#include<bits/stdc++.h>
#include<vector>
#include<conio.h>
using namespace std; 
void show(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
system("cls");
    vector<int> vecbro;
    int size,element;
    cout<<"Enter the size";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element that you want to add vector";
        cin>>element;
        vecbro.push_back(element);//adding
    }
    show(vecbro);
    vector<int>::iterator iter = vecbro.begin();
    vecbro.insert(iter,599);
    show(vecbro);  
    getch();
    return 0;
}