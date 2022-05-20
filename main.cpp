// include once
#pragma once

#include "iostream"
#include <string>

#include "User.h"
#include "Client.h"
#include "Agent.h"
#include "Admin.h"
#include "Policy.h"
#include "Feedback.h"
#include "Claim.h"
#include "Invoice.h"
#include "Payment.h"
#include "Ticket.h"
#include "Report.h"

using namespace std;

int main() {
  
  User *usr = new User();
  Client *clnt = new Client();
  Agent *agnt = new Agent();
  Admin *admn = new Admin();
  Policy *plcy = new Policy();
  Feedback *fd = new Feedback();
  Claim *clm = new Claim();
  Invoice *inv = new Invoice();
  Payment *pmnt = new Payment();
  Ticket *tkt = new Ticket();
  Report *rpt = new Report();

  delete usr;
  delete clnt;
  delete agnt;
  delete admn;
  delete plcy;
  delete fd;
  delete clm;
  delete inv;
  delete pmnt;
  delete tkt;
  delete rpt; 
  
  return 0;
}