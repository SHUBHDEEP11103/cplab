#include <iostream>

class Order {
private:
    int tableNumber;
    std::string serverName;
    int numberOfPatrons;
    static const float tableMinimumCharge; 

public:
    static void displayTableMinimumCharge() {
        std::cout << "Table Minimum Charge: $" << tableMinimumCharge << std::endl;
    }
};


const float Order::tableMinimumCharge = 4.75;

int main() {
   
    Order::displayTableMinimumCharge();

    return 0;
}
