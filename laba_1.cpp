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
        cout << " Name of goods: " << name << "\n Price: " << price << " Rub." << "\n Quantity: " << quantity <<  "\n Article number: " << number << "\n Date of delivery: " << registration_date << endl << endl; 
    }
    
};

int main()
{
    goods TV;
    TV.name = "SAMSUNG QLED TV 8K QE75Q800TAUXRU";
    TV.registration_date = "12.03.2021";
    TV.price = 399990;
    TV.quantity = 159;
    TV.number = 1365534;

    goods coffee_machines;
    coffee_machines.name = "Coffee machine PHILIPS Series 5000 EP5030";
    coffee_machines.registration_date = "10.09.2020";
    coffee_machines.price = 52290;
    coffee_machines.quantity = 513;
    coffee_machines.number = 1107510;

    goods notebook;
    notebook.name = "Notebook HP Omen 15-ek0038ur, 15.6";
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
    powerbank.name = "XIAOMI Mi Power Bank 3 PLM13ZM";
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

    cout << "What product do you choose? (TV, coffee_machines, notebook, iphone, powerbank, vape?) "<< endl;
    string product;
    cin >> product;
    int money;
    int quant;

    if (product == "TV")
    {
        TV.Print();
        cout << "How much will you buy?" << endl;
        cin >> quant;
        if (quant <= TV.quantity)
        {
            TV.quantity = TV.quantity - quant;
            money = TV.price * quant;
            TV.Print();
            cout << "Price is: " << money << " Rub." << "\nQuantity is: " << quant << endl;
        } else cout << "Too many products" << endl;
    } 
    else if (product == "coffee_machines")
    {
        coffee_machines.Print();
        cout << "How much will you buy?" << endl;
        cin >> quant;
        if (quant <= coffee_machines.quantity)
        {
            coffee_machines.quantity = coffee_machines.quantity - quant;
            money = coffee_machines.price * quant;
            coffee_machines.Print();
            cout << "Price is: " << money << " Rub." << "\nQuantity is: " << quant << endl;
        } else cout << "Too many products" << endl;
    }
    else if (product == "notebook")
    {
        notebook.Print();
        cout << "How much will you buy?" << endl;
        cin >> quant;
        if (quant <= notebook.quantity)
        {
            notebook.quantity = notebook.quantity - quant;
            money = notebook.price * quant;
            notebook.Print();
            cout << "Price is: " << money << " Rub." << "\nQuantity is: " << quant << endl;
        } else cout << "Too many products" << endl;
    }
    else if (product == "iphone")
    {
        iphone.Print();
        cout << "How much will you buy?" << endl;
        cin >> quant;
        if (quant <= iphone.quantity)
        {
            iphone.quantity = iphone.quantity - quant;
            money = iphone.price * quant;
            iphone.Print();
            cout << "Price is: " << money << " Rub." << "\nQuantity is: " << quant << endl;
        } else cout << "Too many products" << endl;
    }
    else if (product == "powerbank")
    {
        powerbank.Print();
        cout << "How much will you buy?" << endl;
        cin >> quant;
        if (quant <= powerbank.quantity)
        {
            powerbank.quantity = powerbank.quantity - quant;
            money = powerbank.price * quant;
            powerbank.Print();
            cout << "Price is: " << money << " Rub." << "\nQuantity is: " << quant << endl;
        } else cout << "Too many products" << endl;
    }
    else if (product == "vape")
    {
        vape.Print();
        cout << "How much will you buy?" << endl;
        cin >> quant;
        if (quant <= vape.quantity)
        {
            vape.quantity = vape.quantity - quant;
            money = vape.price * quant;
            vape.Print();
            cout << "Price is: " << money << " Rub." << "\nQuantity is: " << quant << endl;
        } else cout << "Too many products" << endl;
    }
    else cout << "Product out of stock" << endl << endl;
}