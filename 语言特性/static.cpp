#include <iostream>

using namespace std;

void f(){
    static int i = 0;
    i++;
    cout<<i<<endl;
}
int main(){
    f();//打印1
    f();//打印2
    return 0;
}