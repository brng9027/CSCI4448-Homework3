#include "Customer.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Customer::Customer(std::string new_name){
	name = new_name;
}
/*
	Returns a boolean of whether or not the customer has the max number of allowed tools to be rented at once
*/
bool Customer::max_tools(){
	int num_of_tools = 0;
	for(Rental rental_ : rentals){
		num_of_tools += rental_.num_of_tools();
	}
	if(num_of_tools >= 3){
		return true;
	}
	return false;
}

/*
	Adds a new rental to the customers total amount of rentals
*/
void Customer::NewRental(Rental new_rental){
	rentals.push_back(new_rental);
}

/*
	Returns the total cost of the specified rental
	@rental_id the unique id of the rental
*/
int Customer::TotalCost(int rental_id){
	for(Rental rental_itr : rentals){
		if(rental_id == rental_itr.get_rental_id()){
			return rental_itr.TotalCost();
		}
	}
	return 0;
}
