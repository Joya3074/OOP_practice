/*The Problem is:
You are building an online shopping system and need to create a class called "Product" in C++.
The Product class should have attributes for product ID, name, price, and quantity. Implement
member functions to:
1. Update the quantity of the product.
2. Display the product details.
Create an instance of the Product class with ID="P001", name="Smartphone", price=499.99, and
quantity=10. Update the quantity to 5 and display the product details.*/
#include<iostream>
#include<string>
using namespace std;
class Product
{
public:
    string productID;
    string name;
    double price;
    int quantity;
    void display()
    {
        cout<<"Product ID: "<<productID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Quantity: "<<quantity<<endl;
    }
    void updatedquantity(int x)
    {
        quantity=x;
        cout<<"Quantity updated to "<<quantity<<endl;
    }
};
int main()
{
    Product a;
    a.productID="P001";
    a.name="Smartphone";
    a.price=499.99;
    a.quantity=10;
    cout<<"The first display value is:"<<endl;
    a.display();
    a.updatedquantity(5);
    cout<<"Updated value is: "<<endl;
    a.display();
    return 0;
}
