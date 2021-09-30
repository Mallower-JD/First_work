#pragma once
#include <string>
using namespace std;

/**
*@brief Класс, описывающий работу с товарами
*
*/
class Goods {
private:
    /**
     * @brief Наименование товара
     * 
     */
    string name;
    /**
     * @brief Дата оформления.
     * 
     */
    string data;
    /**
     * @brief Цена товара.
     * 
     */
    int price;
    /**
     * @brief Количество товара.
     * 
     */
    int amount;
    /**
     * @brief Номер накладной, по которой товар поступил на склад.
     * 
     */
    int number;
public:
    
    /**
     * @brief Изначальный конструктор 
     * 
     */
    Goods()
    {
        name = "";
        data = "";
        price = 0;
        amount = 0;
        number = 0;
    }
    
    /**
     * @brief Конструктор с параметрами
     * 
     */
    Goods(string a, string b, int p, int k, int n)
    {
        name = a;
        data = b;
        price = p;
        amount = k;
        number = n;
    }
    
    /**
     * @brief Установить имя
     * 
     */
    void set_name(string a)
    
    /**
     * @brief Получить имя
     * 
     */
    string get_name()
    
    /**
     * @brief Установить дату
     * 
     */
    void set_data(string b)

    /**
     * @brief Получить имя
     * 
     */
    string get_data()

    /**
     * @brief Установить цену
     * 
     */
    void set_price(int p)

    /**
     * @brief Получить цену
     */
    int get_price()

    /**
     * @brief Установить количество
     * 
     */
    void set_amount(int k)

    /**
     * @brief Получить количество
     * 
     */
    int get_amount()

    /**
     * @brief Установить номер накладной
     * 
     */
    void set_number(int n)

    /**
     * @brief Получить номер накладной
     * 
     */
    int get_number()

    /**
     * @brief Получить общую стоимость
     * 
     */
    int get_total_cost()
     
    /**
     * @brief Получить стоимость заданного числа товара
     * 
     */
    int get_cost(int n)

    /**
     * @brief Количество товра увеличить на заданное число
     * 
     */
    void amount_increase(int n)
        
    /**
     * @brief Количество товра уменьшить на заданное число
     * 
     */
    void amount_decrease(int n) 
};