/*An online store keeps track of product inventory using an Item class. When a product is
sold, the stock count decreases by one. Overload the unary decrement (--) operator to
simulate a sale of one unit, enabling the inventory manager to decrement the stock with a
single operation.*/
#include<iostream>
using namespace std;
class Item
{
    int stock;
public:
    Item(int s=0)
    {
        stock=s;
    }
    void display()
    {
        cout<<"Stock left: " <<stock<<endl;
    }
    void operator--()
    {
        if(stock>0)
        {
            stock--;
        }
        else
        {
            cout<<"Out of stock!"<<endl;
        }
    }
};
int main()
{
    Item a(3);
    a.display();
    --a;
    a.display();
    --a;
    a.display();
    --a;
    a.display();
    --a;
    a.display();
    return 0;
}
