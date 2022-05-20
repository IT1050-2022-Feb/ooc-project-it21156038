#pragma once

#include <string>

using namespace std;

class Ticket{
  private:
     int id;
     int status;
     string subject;
     string answer;
     string discription;

  public:
     Ticket(){};
     Ticket(int tId);
     void saveTicket(int sts,string sbj,string ans,string discptin);
     void viewTicket(int tId);
     void ReplyTicket();
     void UpdateTicket();
     ~Ticket(){};
};