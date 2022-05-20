#pragma once

#include <string>
#include "Ticket.h"

using namespace std;

class Agent : public User{
private:  
 		int id;
    char branch [20];
    char rank [10];
    double basic_salary;
    Ticket *tckt;
    
public :
    Agent(){};  
    void displayDetails();
    void reviwTickets();
    void makeInvoice();
    void addTicket(Ticket *t);
    ~Agent(){}; 
};


