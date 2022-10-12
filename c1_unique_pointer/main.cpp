#include <iostream>
#include <memory>
#include "cat.h"
using namespace std;



void do_with_cat_pass_value(std::unique_ptr<Cat> c)
{
    c->cat_info();
}

void do_with_cat_pass_ref(std::unique_ptr<Cat> &c)
{
    c->set_cat_name("oo");
    c->cat_info();
    c.reset();
}

std::unique_ptr<Cat> get_unique_ptr()
{
    std::unique_ptr<Cat> p_dog = std::make_unique<Cat>("Local cat");
    return p_dog;
}

int main()
{
    // // 1. pass by value
    // std::unique_ptr<Cat> c1 = make_unique<Cat>("ff");
    // // do_with_cat_pass_value(c1); // error
    // do_with_cat_pass_value(std::move(c1)); // right
    // // c1->cat_info(); //error
    // // make_unique
    // do_with_cat_pass_value(std::make_unique<Cat>());

    // 2. pass ref
    // 不加const
    std::unique_ptr<Cat> c2 = make_unique<Cat>("f2");
    do_with_cat_pass_ref(c2);
    // c2->cat_info();
    cout << "address : " << c2.get() <<endl;

    cout << "--------------------------" << endl;

    return 0;
}