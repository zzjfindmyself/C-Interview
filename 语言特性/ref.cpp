#include <iostream>
using namespace std;

void f(int *a){
    a[0]=1;
}

int main(){
    int a[2];
    f(a);
    cout<<a[0]<<endl;
    return 0;
}