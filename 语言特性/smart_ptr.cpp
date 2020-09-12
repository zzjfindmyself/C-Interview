#include <memory>
using namespace std;

int main(){
    unique_ptr<int> pa(new int(5));
    unique_ptr<int> pb = std::move(pa);
    return 0;
}