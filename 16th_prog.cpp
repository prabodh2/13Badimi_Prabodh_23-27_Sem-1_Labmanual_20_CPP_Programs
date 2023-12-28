#include <iostream>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    float price;
    int quantityInStock;

public:
    Product(int id, const string& name, float productPrice, int quantity)
        : productId(id), productName(name), price(productPrice), quantityInStock(quantity) {}
    void displayProductInfo() const {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity in Stock: " << quantityInStock << endl;
        cout << "------------------------\n";
    }

    // Getters and setters (optional)
    int getProductId() const { return productId; }
    void setProductId(int id) { productId = id; }

    const string& getProductName() const { return productName; }
    void setProductName(const string& name) { productName = name; }

    float getPrice() const { return price; }
    void setPrice(float productPrice) { price = productPrice; }

    int getQuantityInStock() const { return quantityInStock; }
    void setQuantityInStock(int quantity) { quantityInStock = quantity; }
};

int main() {
    // Create an array to store products
    const int maxProducts = 5;
    Product inventory[maxProducts];

    // Add products to the inventory
    for (int i = 0; i < maxProducts; ++i) {
        int id, quantity;
        string name;
        float price;
        cout << "Enter product details for Product " << i + 1 << ":\n";
        cout << "Product ID: ";
        cin >> id;

        cout << "Product Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Price: $";
        cin >> price;

        cout << "Quantity in Stock: ";
        cin >> quantity;
        inventory[i] = Product(id, name, price, quantity);
    }
    cout << "\nInventory Information:\n";
    for (const auto& product : inventory) {
        product.displayProductInfo();
    }

    return 0;
}
