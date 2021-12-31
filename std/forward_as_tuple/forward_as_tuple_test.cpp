#include <iostream>
#include <map>
#include <tuple>
#include <string>
 
int main()
{
    std::map<int, std::string> m;
 
    m.emplace(std::piecewise_construct,
              std::forward_as_tuple(9),
              std::forward_as_tuple(20, 'a'));
    std::cout << "m[10] = " << m[9] << '\n';
 
    // 下面是错误：它产生保有二个悬垂引用的 std::tuple<int&&, char&&>
    //
    // auto t = std::forward_as_tuple(20, 'a');
    // m.emplace(std::piecewise_construct, std::forward_as_tuple(10), t);
}