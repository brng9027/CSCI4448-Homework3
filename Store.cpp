#include "Store.h"
#include "Customer.h"
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

Store::Store(){
  for(int i = 0; i < 20; i++){
    Tool new_tool;
    inventory.push_back(new_tool);
  }
}

void Store::rentTools(int number_of_tools_to_rent, std::vector<int> num_of_nights, Customer current_customer){
  srand(time(NULL));
  std::vector<Tool> rental_tools;
  std::vector<int> rental_tools_nights;
  for(int i = 0; i < number_of_tools_to_rent; i++){
    tool tool_to_rent = inventory[rand()%(inventory.size()-1) + 1;
    rental_tools.push_back(tool_to_rent);
    rental_tools_nights.push_back(num_of_nights[i]);
    inventory.remove(tool_to_rent);
  }
  Rental new_rental(rental_tools, rental_tools_nights);
  current_customer.NewRental(new_rental);
  existing_rentals.push_back(new_rental);
}

void Store::returnTools(vector<string> tools, Rental rental_to_return){
  for(Tool tool_itr : tools){
    inventory.push_back(tool_itr);
  }
  existing_rentals.remove(rental_to_return);
}

int Store::RentalsCash(Customer current_customer, Rental rental_to_return){
  return current_customer.total_cost(rental_to_return);
}
