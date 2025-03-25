
#include "Payment.hpp"

Payment::Payment(double amount, PaymentStrategy* paymentStrategy) {
    this->amount = amount;
    this->paymentStrategy = paymentStrategy;
}

void Payment::processPayment() {
    if(this->amount > 0) {
        paymentStrategy->processPayment(this->amount);
    }else {
        std::cout << "Invalid amount" << std::endl;
    }
}