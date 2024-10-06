#include <iostream>
#include <string>

using namespace std;

class Desktop {
private:
    int id;
    string name;
    string brand;
    double price;

public:
    // Default constructor
    Desktop() : id(0), name(""), brand(""), price(0.0) {}

    // Parameterized constructor
    Desktop(int id, string name, string brand, double price)
        : id(id), name(name), brand(brand), price(price) {}

    // Getters
    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    string getBrand() const {
        return brand;
    }

    double getPrice() const {
        return price;
    }

    // Setters
    void setId(int id) {
        this->id = id;
    }

    void setName(string name) {
        this->name = name;
    }

    void setBrand(string brand) {
        this->brand = brand;
    }

    void setPrice(double price) {
        this->price = price;
    }

    // Display method
    void display() const {
        cout << "Desktop [id=" << id << ", name=" << name
             << ", brand=" << brand << ", price=" << price << "]" << endl;
    }
};
