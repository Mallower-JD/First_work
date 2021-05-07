#include <string>
#include <iostream>
#include "Goods.h"
using namespace std;

class Goods {
private:
    string name;
    string data;
    int price;
    int amount;
    int number;
public:
    Goods()
    {
        name = "";
        data = "";
        price = 0;
        amount = 0;
        number = 0;
    }

    Goods(string a, string b, int p, int k, int n)
    {
        name = a;
        data = b;
        price = p;
        amount = k;
        number = n;
    }
    
    void set_name(string a)
    {
        name = a;
    }
    
    string get_name()
    {
        return name;
    }

    void set_data(string b)
    {
        data = b;
    }

    string get_data()
    {
        return data;
    }

    void set_price(int p)
    {
        price = p;
    }

    int get_price()
    {
        return price;
    }

    void set_amount(int k)
    {
        amount = k;
    }

    int get_amount()
    {
        return amount;
    }

    void set_number(int n)
    {
        number = n;
    }

    int get_number()
    {
        return number;
    }

    int get_total_cost()
    {
        return price * amount;
    }

    int get_cost(int n)
    {
        return price * n;
    }

    void amount_increase(int n)
    {
        amount += n;
    }
    
    void amount_decrease(int n)
    {
        amount -= n;
    } 
};