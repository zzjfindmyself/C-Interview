#include <iostream>
#include <memory>
 
class Node {
  int value;
 public:
  std::shared_ptr<Node> leftPtr;
  std::shared_ptr<Node> rightPtr;
  Node(int val) : value(val) {
    std::cout << "Constructor" << std::endl;
  }
  ~Node() {
    std::cout << "Destructor" << std::endl;
  }
};
 
int main() {
  std::shared_ptr<Node> ptr = std::make_shared<Node>(4);
  ptr->leftPtr = std::make_shared<Node>(2);
  ptr->rightPtr = std::make_shared<Node>(5);
  std::cout<<"helloworld"<<std::endl;
  return 0;
}
