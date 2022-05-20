#pragma once

#include <string>

using namespace std;

class Payment {
  private:
    int id;
    string method;
    string payFor;
    float amount;
    string due;
    float fine;

  public:
    Payment() {};
    Payment(int pId) {}; // Constructor Overloading, this will fetch single payment by id from database and set values.
    void addPayment(string payFor, float amount, string method);
    void setFines(string due);
    void updatePayment(string payFor, float amount, string method); 
    void viewPayment();
    ~Payment() {
      cout << "Payment deleted" << endl;
    };
};