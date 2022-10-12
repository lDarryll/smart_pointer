#include <iostream>
#include <memory>
#include "cat.h"
using namespace std;

int main()
{

    // 常量类型
    std::shared_ptr<int> i_p_1 = make_shared<int>(10);
    cout << "value : " << *i_p_1 << endl;
    cout << "use count : " << i_p_1.use_count() << endl;

    // copy
    std::shared_ptr<int> i_p_2 = i_p_1;
    cout << "i_p_1 value : " << *i_p_1 << endl;
    cout << "i_p_2 value : " << *i_p_2 << endl;
    cout << "i_p_1 use count : " << i_p_1.use_count() << endl;
    cout << "i_p_2 use count : " << i_p_2.use_count() << endl;

    // change
    *i_p_2 = 30;
    cout << "i_p_1 value : " << *i_p_1 << endl;
    cout << "i_p_2 value : " << *i_p_2 << endl;

    std::shared_ptr<int> i_p_3 = i_p_1;
    i_p_1 = nullptr;
    i_p_2 = nullptr;
    cout << "i_p_1 use count : " << i_p_1.use_count() << endl;
    cout << "i_p_2 use count : " << i_p_2.use_count() << endl;
    cout << "i_p_3 use count : " << i_p_3.use_count() << endl;


    cout << "--------------------------" << endl;

    return 0;
}