#include<bits/stdc++.h>
#include<conio.h>
#include<string>
#include<map>
using namespace std;

int main(){
system("cls");
    map<string, int> ismap;
    ismap["suhel"]=38;
    ismap["sarif"]=83;
    ismap["arif"]=67;
    ismap["jahidul"]=45;
    ismap["hasan"]=43;
    // ismap.insert( { {"akash", 89}, {"rohan", 78} } ); //adding element
    map<string, int>::iterator iter;
    for(iter=ismap.begin(); iter!=ismap.end(); iter++){
        // cout<<iter->first<<" "<<iter->second<<"\n";
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"the size of the map is: "<<ismap.size()<<endl;
    getch();
    return 0;
}