#include <iostream>
using namespace std;
class shop
{
    int itemid[50];
    int itemprice[50];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void display(void);
};
void shop::setprice()
{
    cout << "enter id of your item no :" << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the  price of item with id" << itemid[i] << "is " << itemprice[i] << endl;
    }
}
int main()
{
    shop moky;
    moky.initcounter();
    moky.setprice();
    moky.setprice();
    moky.setprice();
    moky.setprice();
    moky.display();
    return 0;
}