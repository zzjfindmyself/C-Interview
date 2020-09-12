#include <iostream>
using namespace std;

class B {
    private:
    int x;
    public:
    B(){
        cout<<"B construct!"<<endl;
    }
    B(int _x):x(_x){}
    
    ~B(){
        cout<<"B deconstructed!"<<endl;
    }
};

class A {
    private:
    B b;
    public:
    A(){
        //cout<<"A construct!"<<endl;
    }
    A(int x){
        cout<<"A construct!"<<endl;
        b = new B(x);
    }
    ~A(){
        //delete b;
        cout<<"A deconstructed!"<<endl;
    }
};

int main(){
    A ca(4);
    return 0; 
}