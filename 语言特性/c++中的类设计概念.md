1. 虚函数，纯虚函数
https://blog.csdn.net/hackbuteer1/article/details/7558868
定义一个函数为虚函数，不代表函数为不被实现的函数。
定义他为虚函数是为了允许用基类的指针来调用子类的这个函数。
定义一个函数为纯虚函数，才代表函数没有被实现。
定义纯虚函数是为了实现一个接口，起到一个规范的作用，规范继承这个类的程序员必须实现这个函数.


虚函数只能借助于指针或者引用来达到多态的效果,他是一种运行时多态。虚函数有虚函数表，位于只读数据段，虚函数指针指向虚函数表，放在类的开头。

这也就解释了为啥基类的析构函数为虚函数，为了使得指向子类的基类指针可以调用子类的析构函数。

2. 构造函数
