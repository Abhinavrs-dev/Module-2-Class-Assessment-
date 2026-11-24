
#include <iostream>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    double price;

public:
    Product(int id, string name, double price) {
        productId = id;
        productName = name;
        this->price = price;
    }

    void displayProduct() {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p1(101, "Laptop", 55000);

    p1.displayProduct();

    return 0;
}
