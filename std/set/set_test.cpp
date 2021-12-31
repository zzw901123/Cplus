#include <iostream>
#include <set>

using namespace std;

int main()
{
    int array[6]={12, 34, 10, 12, 98, 3};
    const size_t array_size=sizeof(array)/sizeof(array[0]);
    std::set<int> set;
    for(size_t i=0; i<array_size; ++i)
    {
        //把数据插入集合，数据自动排序
        set.insert(array[i]);
    }

    //此时已经排序了，下面依次输出
    std::set<int>::const_iterator b=set.begin();
    for(; b!=set.end(); ++b)
    {
        std::cout << *b << '\n';
    }

    std::set<int>::const_iterator result=set.find(12);

    return 0;
}
