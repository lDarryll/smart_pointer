#include <iostream>
#include <memory>
#include "cat.h"
using namespace std;

int main()
{
    // // stack
    // Cat c1("ok");
    // c1.cat_info();
    // {
    //     Cat c1("ok");
    //     c1.cat_info();
    // }

    // raw pointer  非常不安全
    // Cat *c_p1 = new Cat("yy");
    // c_p1->cat_info();
    // int *i_p1 = new int(100);

    // {
    //     i_p1 = new int(200);
    //     Cat *c_p1 = new Cat("yy_scope");
    //     c_p1->cat_info();
    //     delete i_p1; // 第一次 delete
    //     delete c_p1;
    // }
    // delete c_p1;
    // delete i_p1;   // 第二次 delete 程序崩溃
    // cout << *i_p1 << endl;

    // Cat *c_p2 = new Cat("yz");
    // std::unique_ptr<Cat> u_c_p2{c_p2};
    // // c_p2->cat_info();
    // // u_c_p2->cat_info();
    // // c_p2->set_cat_name("ok");
    // // u_c_p2->cat_info();

    // delete c_p2;
    // c_p2 = nullptr;
    // u_c_p2->cat_info();

    // // 第二种 new
    // std::unique_ptr<Cat> u_c_p3{new Cat("dd")};
    // u_c_p3->cat_info();
    // u_c_p3->set_cat_name("oo");
    // u_c_p3->cat_info();

    // 推荐第三种 std::make_unique
    std::unique_ptr<Cat> u_c_p4 = make_unique<Cat>("dd");
    u_c_p4->cat_info();
    u_c_p4->set_cat_name("oo");
    u_c_p4->cat_info();

    cout << "--------------------------" << endl;

    return 0;
}