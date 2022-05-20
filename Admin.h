#pragma once
#include <string>

#include "Report.h"
#include "Feedback.h"

using namespace std;

class Admin : public User {
  private:
    int id;
    Feedback *fdb;
  public:
    Admin(){};
    void addPolicy(char policy);
    void updatePolicy(char policy);
    void removePolicy(char policy);
    void suspendUser(int id);
    void addAgent(int id); 
    void removeAgent(int id);               
    void replyFeedback(char rply);
    void generateFinancialReport(Report *report);
    void displayFinancialReport(int rId,Report *report);
    void veiwUserReports(int uId,Report *report);
    ~Admin(){};
};