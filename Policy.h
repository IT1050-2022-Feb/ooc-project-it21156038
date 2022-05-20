#pragma once

#include <string>

#include "Claim.h"

using namespace std;

class Policy {
  private :
    int id;
    int age_limit;
    char perMonth;
    string benifits;
    string coverage;
    string term;
    string title;
    Claim *clm[1];

  public:
    Policy() {};
    Policy (int Id) {};
    void addClaim();
    void addPolicy(string cvg,int agL, string bnt, int pM, string term, string tl);
    void updatePolicyTerms();
    void removePolicyTerms();
    void displayPolicyTerms();
    ~Policy(){};
};

