#include <iostream>
#include <memory>
#include <string>

using namespace std;

// 示例：
unique_ptr<int> clone(int p)
{
    unique_ptr<int> pInt(new int(p)); //堆指针
    std::cout << "pInt address: " << pInt.get() << std::endl;
    return pInt;    // 返回unique_ptr
}

// 示例：
int main() 
{
    // 创建一个unique_ptr实例
    std::unique_ptr<int> pInt(new int(5));
    //std::unique_ptr<int> pInt2(pInt);    // 报错
    //std::unique_ptr<int> pInt3 = pInt;   // 报错
    unique_ptr<int> pInt2 = std::move(pInt);    // 转移所有权
    cout << *pInt2 <<endl;

    unique_ptr<int> pInt3(std::move(pInt2));

    int p = 6;
    unique_ptr<int> ret = clone(p);
    std::cout << "ret address: " << ret.get() << std::endl;

     //创建一个指向int的空指针
    std::unique_ptr<int> fPtr1;
    std::unique_ptr<int> fPtr2(new int(4));
    auto fPtr3 = std::make_unique<int>();
    
 	//fPtr2释放指向对象的所有权，并且被置为nullptr
    std::cout << "fPtr2 release before:" << fPtr2.get() << std::endl;
    int *pF = fPtr2.release();
    std::cout << "fPtr2 release before:" << fPtr2.get() << " and pF value:" << *pF << std::endl;
    
	//所有权转移，转移后fPtr3变为空指针
    std::cout << "move before fPtr1 address:" << fPtr1.get() << " fPtr3 address:" << fPtr3.get() << std::endl;
    fPtr1 = std::move(fPtr3);
    std::cout << "move after fPtr1 address:" << fPtr1.get() << " fPtr3 address:" << fPtr3.get() << std::endl;

	std::cout << "move before fPtr1 address:" << fPtr1.get() << std::endl;
    fPtr1.reset();
    std::cout << "move after fPtr1 address:" << fPtr1.get() << std::endl;


    return 0;
}
