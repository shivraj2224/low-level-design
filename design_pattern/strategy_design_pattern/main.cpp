#include "CashPayment.hpp"       
#include "CreditCardPayment.hpp"
#include "UpiPayment.hpp"
#include "PaymentProcessor.hpp"

int main(){

    CashPayment cashPayment;
    CreditCardPayment creditCardPayment;
    UPIPayment UPIPayment;

    PaymentProcessor paymentProcessor(&cashPayment);
    paymentProcessor.executeStrategy(); // Output: Payment made using cash.

    paymentProcessor.setStrategy(&creditCardPayment);
    paymentProcessor.executeStrategy(); // Output: Payment made using credit card.

    paymentProcessor.setStrategy(&UPIPayment);
    paymentProcessor.executeStrategy(); // Output: Payment made using UPI.

    return 0;
}