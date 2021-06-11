#pragma once

#include <string>
#include <iostream>
using namespace std;

class goods {
    string name;
    string data;
    int price;
    int amount;
    int number;
    double w;
public:
    /**
     * @brief Конструктор с параметрами
     * 
     * @param name - наименование товара
     * @param data - дата поставки
     * @param price - цена
     * @param amount - количество
     * @param number - номер накладной
     */
    goods(const string& name, const string& data, const double price, const int amount, const int number);
    
    /**
     * @brief Конструктор копирования
     */
    goods(const goods& other) = default;

    /**
     * @brief конструтор перемещения 
     */
    goods(goods&& other) = default;

    ~goods()=default;
    
    /**
     * @brief Возвращает цену товаров
     */
    double get_price() const;
    
    /**
     * @brief Возвращает количество товаров
     */
    int get_amount() const;

    void set_name(const string& name);

    void set_data(const string& data);

    void set_number(const int number);

    
    /**
     * @brief Возвращает сумму цены/количества товаров
     */
    void set_amount(const int amount);
   
    /**
     * @brief Возвращает разницу цены/количества товаров
     */
    void set_price(const double price);

    /**
     * @brief Возвращает вычисление стоимости товара
     */
    double get_cost() const;

   string to_string() const;

    friend ostream& operator << (ostream& out, const goods& tovar);
};