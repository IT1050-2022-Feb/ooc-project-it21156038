#pragma once
 
class Report{
  private:
    int id;

  public:
    Report(){};
    Report(int rId);
    void generateFinacialReports();
    void generateUserReport();
    void viewFinancialReports(int rId);
    void viewUserReports(int uId);
    ~Report(){};
};