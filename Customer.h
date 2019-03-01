#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "Rental.h"
#include "tools.h"
#include <iostream>
using namespace std;

class Customer{
public:
	Customer(std::string new_name);
	std::string get_type(){return customer_type;} //Gets the type that the customer is
	std::string get_name(){return name;} //Gets the name of the customer
	bool max_tools(); //Checks if the customer has more than three tools
	void NewRental(Rental new_rental); //Adds a new rental to the customers total rentals
	int TotalCost(int rental_id);
  virtual int num_of_tools_to_rent(){};
  virtual int num_of_tools_days(){};
protected:
	std::string name;
	std::string customer_type;
	std::vector<Rental> rentals;
};

class Business:public Customer{
public:
  std::string customer_type = "Business";
  int num_of_tools_to_rent() override{
    return 3;
  }
  int num_of_tools_days() override{
    return 7;
  }
private:
};

class Casual:public Customer{
public:
  std::string customer_type = "Casual";
  int num_of_tools_to_rent() override{
    return rand() % 2 + 1;
  }
  int num_of_tools_days() override{
    return rand() % 2 + 1;
  }
private:
};

class Regular:public Customer{
public:
  std::string customer_type = "Regular";
  int num_of_tools_to_rent() override{
    return rand() % 5 + 3;
  }
  int num_of_tools_days() override{
    return rand() % 3 + 1;
  }
private:
};

#endif
