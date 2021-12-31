// #include <iostream>
// #include <vector>

// using namespace std;

// struct Bar {
//     Bar(int a) {}
//     explicit Bar(int a, double b) {}
// };

// int main(void)
// {
//     vector<Bar> bv;
//     bv.push_back(1); // 隐式转换生成临时变量
//     bv.push_back(Bar(1)); // 显示构造临时变量
//     bv.emplace_back(1); // 没有临时变量

//     //bv.push_back({1, 2.0}); // 无法进行隐式转换
//     bv.push_back(Bar(1, 2.0)); // 显示构造临时变量
//     bv.emplace_back(1, 2.0); // 没有临时变量

//     return 0;
// }

#include <iostream>
#include <utility>
#include <tuple>
 
struct Foo {
    Foo(std::tuple<int, float>) 
    {
        std::cout << "Constructed a Foo from a tuple\n";
    }
    Foo(int, float) 
    {
        std::cout << "Constructed a Foo from an int and a float\n";
    }
};
 
int main()
{
    std::tuple<int, float> t(1, 3.14);
    std::pair<Foo, Foo> p1(t, t);
    std::cout << "----------------------" << std::endl;
    std::pair<Foo, Foo> p2(std::piecewise_construct, t, t);
    return 0;
}