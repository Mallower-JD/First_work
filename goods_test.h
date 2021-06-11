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
    goods(const string name, const string data, const int price, const int amount, const int number);
    
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
    int get_p() const;
    
    /**
     * @brief Возвращает количество товаров
     */
    int get_a() const;
    
    /**
     * @brief Возвращает сумму цены/количества товаров
     */
    goods sum(const goods& other) const;
   
    /**
     * @brief Возвращает разницу цены/количества товаров
     */
    goods sub(const goods& other) const;

    /**
     * @brief Возвращает вычисление стоимости товара
     */
    goods calculat(const goods& other) const;

   string to_string() const;

    friend ostream& operator << (ostream& out, const goods& tovar);
};