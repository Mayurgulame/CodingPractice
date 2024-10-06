#include <iostream>
#include "Desktop.h"
// Assuming Desktop class is in another file, include its header

using namespace std;

class DesktopMain {
public:
    void run() {
        // Way 1: Using default constructor and setting values through setters
        // Desktop desktop1;
        // desktop1.setId(1);
        // desktop1.setName("Gaming PC");
        // desktop1.setBrand("Alienware");
        // desktop1.setPrice(2499.99);
        // desktop1.display();

        // Way 2: Using parameterized constructor to set values directly
        // Desktop desktop2(2, "Office PC", "Dell", 999.99);
        // desktop2.display();

        // Way 3: Dynamic allocation using 'new'
        Desktop* desktop3 = new Desktop(3, "Workstation", "HP", 1299.99);
        desktop3->display();
        delete desktop3;  // Remember to free dynamically allocated memory

        // // Way 4: Array of Desktop objects
        // Desktop desktops[2] = {
        //     Desktop(4, "Gaming PC", "Asus", 1999.99),
        //     Desktop(5, "Home PC", "Lenovo", 799.99)
        // };
        // for (int i = 0; i < 2; i++) {
        //     desktops[i].display();
        // }
    }
};

// Main function
int main() {
    DesktopMain app;
    app.run();

    return 0;
}
