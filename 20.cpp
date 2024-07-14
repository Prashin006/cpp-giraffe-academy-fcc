// Inheritance
#include <iostream>
#include <string>
using namespace std;

class Chef
{
public:
    void makeRoti()
    {
        cout << "The chef makes roti" << endl;
    }
    void makeSalad()
    {
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish()
    {
        cout << "The chef makes Jalebi with Rabdi" << endl;
    }
};

class ItalianChef : public Chef
{
public:
    void makePasta()
    {
        cout << "The chef makes Pasta" << endl;
    }
    void makeSpecialDish()
    {
        cout << "The chef makes Gulab Jamun" << endl;
    }
};

// Here ItalianChef class is inheriting from Chef class so ItalianChef class is sub class & Chef class is super class

int main()
{
    Chef chef;
    ItalianChef italianChef;
    chef.makeSpecialDish();
    italianChef.makeSpecialDish();
    return 0;
}