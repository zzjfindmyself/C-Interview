#include <stdio.h>

#include <vector>
#include <string>
#include <iostream>
#include <memory>
using namespace std;

void getnext(string s, vector<int>& next)
{
    int i, j;
    next[0] = -1;
    int len = s.size();
    i = 0; j = -1;
    while (i < len)
    {
        if (j == -1 || s[i] == s[j])
        {
            ++i;
            ++j;
            next[i] = j;
        }
        else
            j = next[j];
    }
    for (i = 0; i < len; i++)
        printf("%d ", next[i]);
}

int main(){
    string s = "aaaa";
    vector<int> next(s.size(),-1);
    getnext(s,next);
    int paste = 0;
    for(int i=0;i<s.size();i++){
        if(next[i]<=0)continue;
        if(i-next[i]<=next[i])
            paste = max(paste,i-next[i]);
    }
    cout<<1+s.size()-paste<<endl;
    unique_ptr<int> up(new int(8));
    unique_ptr p2 = up;
    return 0;
}