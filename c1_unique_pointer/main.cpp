#include <iostream>
#include <memory>
#include "cat.h"
using namespace std;



void do_with_cat_pass_value(std::unique_ptr<Cat> c)
{
    c->cat_info();
}

int main()
{
    // pass by value
    std::unique_ptr<Cat> c1 = make_unique<Cat>("ff");

    // do_with_cat_pass_value(c1); // error
    do_with_cat_pass_value(std::move(c1)); // right
    // c1->cat_info(); //error
    // make_unique
    do_with_cat_pass_value(std::make_unique<Cat>());
    


    cout << "--------------------------" << endl;

    return 0;
}