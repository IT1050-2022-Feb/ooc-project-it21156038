#pragma once

#include <string>

using namespace std;

class Feedback {
  private:
    int id;
    string feedback;
    string subject;
    string name;
    string reply;
  public:
    Feedback() {};
    Feedback(int fId); // overload constructor. get feedback from database using this fId and assign values to the other propeties 
    void addFeedback(string fb, string sbj, string uname);
    void replyFeedback(int fId,string rply);
    void viewFeedback();
    ~Feedback() {
      cout << "Feedback deleted" << endl;
    };
};