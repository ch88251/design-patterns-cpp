#ifndef INSTOREORDERPROCESSOR_H
#define INSTOREORDERPROCESSOR_H

#include "OrderProcessor.h"

class InStoreOrderProcessor : public OrderProcessor {
public:
    // Implementation of abstract methods
    void selectProduct() override;
    void makePayment() override;
    void deliverProduct() override;
};

#endif // INSTOREORDERPROCESSOR_H