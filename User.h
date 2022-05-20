#pragma once

#include <string>

using namespace std;

class User {
  protected:    
    int id;
    char name[20];
    char email[30];
    char phone[11];
    char nic[10];
    char password[10];

  public: 
    User(){}
    void signUp(char *uEmail, char *uName, char *pwd);
    void login(char *uEmail,char *pwd);
    void updateProfile(char *uEmail, char *uName,char *phone, char *nic);
    void displayDetails();
    ~User(){};
};



