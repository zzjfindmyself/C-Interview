#include <iostream>
#include <fstream>
// #include <vector>
#include <sstream>
using namespace std;

int main(){
    ifstream f("phone.txt",ifstream::in);
    string line;
    while(getline(f,line)){
        istringstream record(line);
        string name;
        // cout<<record.str()<<endl;
        record>>name;
        cout<<name<<":";
        int num;
        record>>num;
        
        string phone;
        // vector<string> phones;
        //cout<<num<<endl;
        while(num-->0){
            record>>phone;
            cout<<phone<<' ';
        }
            
        cout<<endl;
    }
    return 0;
}