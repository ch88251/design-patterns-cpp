#include "OnlineOrderProcessor.h"
#include "PhoneOrderProcessor.h"
#include "InStoreOrderProcessor.h"

int main() {
    // Online Order
    OnlineOrderProcessor orderProcessor;
    orderProcessor.processOrder();

    std::cout << "\n-----------------\n";

    // Phone Order
    PhoneOrderProcessor phoneOrderProcessor;
    phoneOrderProcessor.processOrder();

    std::cout << "\n-----------------\n";

    // In-Store Order
    InStoreOrderProcessor inStoreOrderProcessor;
    inStoreOrderProcessor.processOrder();

    return 0;
}

