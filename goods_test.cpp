#include <string>
#include <iostream>
#include <sstream>
#include "goods_test.h"
#include "helper.h"

goods::goods(string name, string data, int price, int amount, int number) : name(name), data(data), price(price), amount(amount), number(number) {}


int goods::get_p() const {
    return this->price;
}
int goods::get_a() const {
    return this->amount;
}
/*
void add_number(goods& price, int i){
    return get_p() + i;
}
*/


goods goods::sum(const goods& other) const {
    return ::sum_helper(this->get_p(), other.get_p());
}
goods goods::sub(const goods& other) const {
    return ::sub_helper(this->get_p(), other.get_p());
}
goods goods::calculat(const goods& other) const {
    return ::calculat_helper(this->get_p(), other.get_p());
}

string goods::to_string() const {
    stringstream buffer;
    buffer << "{" << goods::name << ", ";
    buffer << goods::data << ", ";
    buffer << goods::price << ", ";
    buffer << goods::amount << ", ";
    buffer << goods::number << "}";

    return buffer.str();
}
ostream& operator << (ostream& out, const goods& tovar)
{
    return out << tovar.to_string();
}