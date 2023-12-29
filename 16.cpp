#include <iostream>
#include <string>

using namespace std;

// Product class representing a product in the inventory
class Product
{
private:
    int productId;
    string productName;
    float price;
    int quantityInStock;

public:
    // Parameterized constructor to initialize attributes
    Product(int id, const string &name, float p, int quantity)
        : productId(id), productName(name), price(p), quantityInStock(quantity) {}

    // Function to display product details
    void displayProductDetails()
    {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity in Stock: " << quantityInStock << endl;
        cout << "------------------------" << endl;
    }

    // Function to update quantity in stock
    void updateQuantity(int quantity)
    {
        quantityInStock += quantity;
    }
};

int main()
{
    // Creating Product objects
    Product product1(1, "Laptop", 999.99, 10);
    Product product2(2, "Smartphone", 499.99, 20);
    Product product3(3, "Headphones", 49.99, 30);

    // Display initial product details
    cout << "Initial Product Details:" << endl;
    product1.displayProductDetails();
    product2.displayProductDetails();
    product3.displayProductDetails();

    // Update quantity for one product
    product1.updateQuantity(-5);

    // Display updated product details
    cout << "Product Details after Quantity Update:" << endl;
    product1.displayProductDetails();
    product2.displayProductDetails();
    product3.displayProductDetails();

    return 0;
}
