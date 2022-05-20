#pragma once

#include <string>

using namespace std;

class Claim {
  private :
    int id;
    int status;
    string disease;
    string document;
    float amount;

  public:
    Claim() {};
    Claim(int cId);
    void request(string disease,string docs);
    void viewProgress(int cId);
    void reviewClaim(int cId); 
    void reject(int cId); 
    void approve(int cId); 
    ~Claim() {
      cout << "Claim deleted" << endl;
    }
};