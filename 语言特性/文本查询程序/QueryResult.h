#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <set>
using namespace std;

class QueryResult {
    using line_no = vector<string>::size_type;
    friend ostream& print(ostream&,const QueryResult&);
    public:
    QueryResult(string s,shared_ptr<set<line_no>> p,
                shared_ptr<vector<string>> f):
                sought(s),lines(p),file(f){ }
    private:
    string sought;
    shared_ptr<set<line_no>> lines;
    shared_ptr<vector<string>> file;
};
ostream& print(ostream&,const QueryResult&);