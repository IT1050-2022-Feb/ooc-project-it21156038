#pragma once

#include <string>

#include "Payment.h"
#include "Client.h"

class Client; // class forward declaration

using namespace std;

class Invoice {
  private:
    int id;
    string documents;
    string status;
    float amount;
    string createdAt;
    string expiredAt;
    Client *clnt;

  public:
    Invoice() {};
    Invoice(int inId); // Constructor Overloading, this will fetch single invoice by id from database and set values.
    void saveInvoice(string documents, float amount, string expiredAt, Payment *payment);
    void updateInvoice(string documents, float amount, string status, string expiredAt, Payment *payment);
    void acceptInvoice(int inId); 
    void rejectInvoice(int inId); 
    void viewInvoice(); 
    ~Invoice() {
      cout << "Invoice deleted" << endl;
    };
};