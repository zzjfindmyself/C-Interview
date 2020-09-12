#include "a.h"
#include "b.h"
#include <iostream>
#include <string>
using namespace std;

/*const string &manip(){
    string ret;
    if(!ret.empty())
        return ret;
    else
    {
        return "Empty";
    }
    
}*/

// string& shorterString(string& s1,string& s2){
//     return s1.size()<s2.size()?s1:s2;
// }

bool lengthCompare(const string& s1,const string& s2){
    return s1.size()<s2.size();
}

bool lenCompare(const int& s1,const int& s2){
    return s1<s2;
}

int main(){
    // int c = f();
    
    // int i=1;
    // const int &r1 = i;
    // int &r2=i;
    // r2=2;
    // const int &r3 = 32;
    // int const *curErr = &c;
    // curErr=&a;
    //if(curErr==&a)

    //cout<<manip()<<endl;//Segmentation fault
    string s1="Hello";
    string s2="Hi";
    bool (*pf)
    (const string&,const string &);
    pf = lengthCompare;
    if(pf(s2,s1))cout<<"True"<<endl;
    // pf = lengthCompare;
    // pf(s1,s2);
    // shorterString(s1,s2) = "World";
    // cout<<s2<<endl;
    return 0;
}