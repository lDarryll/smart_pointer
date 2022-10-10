#include <iostream>
#include <memory.h>
#include "cat.h"
using namespace std;

int main()
{
    // stack
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


    cout << "--------------------------" << endl;

    return 0;
}