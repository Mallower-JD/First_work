#include <string>
#include <iostream>
#include <sstream>
#include "goods_test.h"

goods::goods(const std::string& name, const std::string& data, const double price, const int amount, const int number) : name(name), data(data), price(price), amount(amount), number(number) {}

double goods::get_price() const {
    return this->price;
}
int goods::get_amount() const {
    return this->amount;
}
std::string good::get_name() const{
    return this->name;
}
std::string good::get_data() const{
    return this->data;
}
void set_name(const string& this->name){
    if (S.empty(this->name)){ 
        throw;
    }
    return this->name;
}
void set_data(const string& this->data){
    if (S.empty(this->data)){ 
        throw;
    }
    return this->data;
}

void set_number(const int this->number){
    if (S.empty(this->number)){
        throw;
    } 
    return this->number;
}

void set_price(const double this->price){
    if (this->price < 0 ){
        throw;
    }
    return this->price;
}
void set_amount(const int this->amount){
    if (this->amount < 0 ){
      throw;  
    }
    return this->amount;
}
double get_cost(double w) const{
    return this->price * w;
}
double get_plus_cost(double w) const{
    if (this->price + w <= 0){
        throw;
    }
    return this->price + w;
}
double get_minus_cost(double w) const{
    if( this->price - w <=0){
        throw;
    }
    return this->price - w;
}
double get_plus_amount(double w) const{
    if (this->amount + w <=0){
        throw;
    }
    return this->amount + w;
}
double get_minus_amount(double w) const{
    if (this->amount - w <=0){
        throw;
    }
    return this->amount - w;
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