#ifndef MESSAGE_H
#define MESSAGE_H

#include <set>
#include <string>
using namespace std;

class Message {
    friend class Folder;
private:
    string contents;
    set<Folder*> folders;
    void add_to_Folders(const Message&);
    void remove_from_Folders();
public:
    explicit Message(const string &str = ""):contents(str){ }
    Message& operator=(const Message&);
    ~Message();
    void save(Folder&);
    void remove(Folder&);
};

void swap(Message& , Message&);

#endif