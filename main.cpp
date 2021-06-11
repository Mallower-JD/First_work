#include <iostream>
#include "goods_test.h"

int main() {    
    goods goods_test = goods("name", "10 may 2020", 1000, 150, 123456789);

    const goods get_cost_test = goods_test.get_cost(10);
    std::cout << "get_cost_test = " << get_cost_test << endl;

    const goods get_cost_test2 = goods_test.get_plus_cost(15);
    std::cout << "get_cost_test2 = " << get_cost_test2 << endl;

    return 0;
}