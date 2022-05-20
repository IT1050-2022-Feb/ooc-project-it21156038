#pragma once

#include <string>

#include "Invoice.h"
#include "User.h"
#include "Feedback.h"
#include "Claim.h"
#include "Policy.h"
#include "Ticket.h"

using namespace std;


class Client: public User {
  private:       
    int id;
    string address[30];
    string gender[5];
    string dob[10];
    int registered_at;
    string matirial_status;
    Invoice *invse[10];
    Feedback *fdb;
    Ticket *tckt;
    Claim *clm[1];
    Policy *plcy[1];

   public: 
      Client() {};
      Client(int cId);
      void addClaim();
      void addPolicy(Policy *p);
      void addFeedback(string fb, string sbj, string uname);
      void updateProfile();
      void displayClientDetails();
      ~Client(){};

};