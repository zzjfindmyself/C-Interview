#include <vector>
#include <string>
#include <memory>
#include <set>
#include <map>
using namespace std;

class QueryResult;
class TextQuery {
    public:
        using line_no = vector<string>::size_type;
        TextQuery(std::ifstream&);
        QueryResult query(const string&) const;
    private:
        shared_ptr<vector<string>> file;
        map<string,shared_ptr<set<line_no>>> wm;
};