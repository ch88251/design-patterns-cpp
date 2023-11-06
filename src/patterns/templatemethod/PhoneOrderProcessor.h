#ifndef PHONEORDERPROCESSOR_H
#define PHONEORDERPROCESSOR_H

#include "OrderProcessor.h"

class PhoneOrderProcessor : public OrderProcessor {
public:
    // Implementation of abstract methods
    void selectProduct() override;
    void makePayment() override;
    void deliverProduct() override;
};

#endif // PHONEORDERPROCESSOR_H