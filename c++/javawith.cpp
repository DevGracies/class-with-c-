#include <iostream>

class Payment {
public:
    virtual void processPayment() = 0;
};

class CreditCardPayment : public Payment {
public:
    void processPayment() override {
        // Implement credit card payment processing logic here
        std::cout << "Processing credit card payment..." << std::endl;
    }
};

class PayPalPayment : public Payment {
public:
    void processPayment() override {
        // Implement PayPal payment processing logic here
        std::cout << "Processing PayPal payment..." << std::endl;
    }
};

int main() {
    Payment* paymentMethod;

    // Example 1: Credit Card Payment
    paymentMethod = new CreditCardPayment();
    paymentMethod->processPayment();
    delete paymentMethod;

    // Example 2: PayPal Payment
    paymentMethod = new PayPalPayment();
    paymentMethod->processPayment();
    delete paymentMethod;

    return 0;
}
