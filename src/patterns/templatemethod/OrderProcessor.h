#ifndef ORDERPROCESSOR_H
#define ORDERPROCESSOR_H

#include <iostream>


class OrderProcessor {
public:
    // Template method
    void processOrder() {
        selectProduct();
        makePayment();
        deliverProduct();
    }

    // Abstract methods to be implemented by subclasses
    virtual void selectProduct() = 0;
    virtual void makePayment() = 0;
    virtual void deliverProduct() = 0;

    virtual ~OrderProcessor() = default;
};

#endif // ORDERPROCESSOR_H