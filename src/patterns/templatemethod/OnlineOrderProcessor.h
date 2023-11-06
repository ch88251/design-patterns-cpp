#ifndef ONLINEORDERPROCESSOR_H
#define ONLINEORDERPROCESSOR_H

#include "OrderProcessor.h"

class OnlineOrderProcessor : public OrderProcessor {
public:
    // Implementation of abstract methods
    void selectProduct() override;
    void makePayment() override;
    void deliverProduct() override;
};

#endif // ONLINEORDERPROCESSOR_H