#include <iostream>
#include <string>
using namespace std;

class goods
{
public:
    string name;
    string registration_date;
    int price;
    int quantity;
    int number;

    void Print()
    {
        cout << " Наименование товара: " << name << "\n Цена: " << price << " Руб." << "\n Количество: " << quantity << " Шт." << "\n Код товара: " << number << "\n Дата поставки: " << registration_date << endl << endl; 
    }
};

int main()
{
    goods TV;
    TV.name = "Телевизор SAMSUNG QLED TV 8K QE75Q800TAUXRU";
    TV.registration_date = "12.03.2021";
    TV.price = 399990;
    TV.quantity = 159;
    TV.number = 1365534;

    goods coffee_machines;
    coffee_machines.name = "Кофемашина PHILIPS Series 5000 EP5030";
    coffee_machines.registration_date = "10.09.2020";
    coffee_machines.price = 52290;
    coffee_machines.quantity = 513;
    coffee_machines.number = 1107510;

    goods notebook;
    notebook.name = "Ноутбук HP Omen 15-ek0038ur, 15.6";
    notebook.registration_date = "23.02.2021";
    notebook.price = 119990;
    notebook.quantity = 23;
    notebook.number = 1403048;

    goods iphone;
    iphone.name = "APPLE iPhone 12 Pro Max 512Gb, MGDL3RU/A";
    iphone.registration_date = "19.03.2021";
    iphone.price = 139990;
    iphone.quantity = 200;
    iphone.number = 1428616;

    goods powerbank;
    powerbank.name = "Внешний аккумулятор (Power Bank) XIAOMI Mi Power Bank 3 PLM13ZM";
    powerbank.registration_date = "01.12.2019";
    powerbank.price = 1290;
    powerbank.quantity = 1547;
    powerbank.number = 1197408;

    goods vape;
    vape.name = "VOOPOO Drag Nano 750mAh Pod Kit";
    vape.registration_date = "19.05.2020";
    vape.price = 1490;
    vape.quantity = 721;
    vape.number = 3765192;

    cout << "Какой товар желаете посмотреть? (TV, coffee machines, notebook, iphone, powerbank, vape?) " << endl;
    string product;
    cin >> product;
    if (product == "TV")
    {
        TV.Print();
    } 
    else if (product == "coffee machines")
    {
        coffee_machines.Print();
    }
    else if (product == "notebook")
    {
        notebook.Print();
    }
    else if (product == "iphone")
    {
        iphone.Print();
    }
    else if (product == "powerbank")
    {
        powerbank.Print();
    }
    else if (product == "vape")
    {
        vape.Print();
    }
    else cout << "Товара нет в наличии" << endl;
}