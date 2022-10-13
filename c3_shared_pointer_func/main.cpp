#include <iostream>
#include <memory>
#include "cat.h"
using namespace std;

void cat_by_value(std::shared_ptr<Cat> cat)
{
    cout << cat->get_name() << endl;
    cat->set_cat_name("ee");
    cout << "func use count : " << cat.use_count() << endl;
}

void cat_by_ref(std::shared_ptr<Cat> &cat)
{
    cout << cat->get_name() << endl;
    cat.reset(new Cat());
    cout << "func_ref use count : " << cat.use_count() << endl;
}


int main()
{
    // 值传递的方式
    std::shared_ptr<Cat> c1 = make_shared<Cat>("dd");
    cat_by_value(c1);
    c1->cat_info();
    cout << "c1 use count : " << c1.use_count() << endl;

    cout << "-------------split line-------------" << endl;

    // 引用传递
    std::shared_ptr<Cat> c2 = make_shared<Cat>("dd");
    cat_by_ref(c2);
    cout << "c2 use count : " << c2.use_count() << endl;

    cout << "-------------finish-------------" << endl;

    return 0;
}