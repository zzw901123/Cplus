#include <iostream>
#include <set>
#include <string>
#include <tuple>

struct S {
    int n;
    std::string s;
    float d;
    bool operator<(const S& rhs) const {
        // 比较 n 与 rhs.n,
        // 而后为 s 与 rhs.s,
        // 而后为 d 与 rhs.d
        return std::tie(n, s, d) < std::tie(rhs.n, rhs.s, rhs.d);
    }
};

int main() {
    std::set<S> set_of_s;  // S 为可比较小于 (LessThanComparable)

    S value{42, "Test", 3.14};
    std::set<S>::iterator iter;
    bool inserted;

    // 解包 insert 的返回值为 iter 与 inserted
    std::tie(iter, inserted) = set_of_s.insert(value);

    if (inserted)
        std::cout << "Value was inserted successfully\n";
}