1. 引用传参避免拷贝，尽量将函数不会改变的形参定义为常量引用。
2. 在头文件中声明变量和函数，在源文件中定义。
3. 数组不能进行拷贝，因此无法通过值传递传参，如果传入一个数组，实参会转换成数组首元素的指针。
4. 不要返回局部对象的引用或指针，否则会导致Segmentation fault
5. 友元在类内部用friend关键字修饰声明仅仅表明访问权限，在头文件的类外部还需要进行一次声明。
6. 如果成员是const、引用或者属于某种未提供默认构造函数的类类型，必须通过构造函数初始值列表为这些成员提供初值。
9. 如果一个类需要自定义析构函数，那么几乎可以肯定也需要自定义拷贝构造函数和拷贝赋值函数，防止动态内存被多次释放或访问不存在的内存对象。