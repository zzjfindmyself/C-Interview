#include <iostream>
#include <fstream>
using namespace std;

#include "TextQuery.h"
#include "QueryResult.h"

void runQueries(ifstream &infile){
    TextQuery tq(infile);
    while(true){
        cout<<"enter word to look for, or q to quit: ";
        string s;
        if(!(cin>>s)||s=="q")break;
        print(cout, tq.query(s))<<endl;
    }
}

int main(){
    ifstream infile("article.txt",ifstream::in);
    runQueries(infile);
    return 0;
}