#include "Rental.h"
int Rental::rental_id_total = 0;
/*
	Rental Constructor. The corresponding rental time to the tool is based off of index
	@new_rental_tools: A list of tools that the rental has
	@new_tool_rental_times: A corresponding amount of time that the tool is being rented for.
*/
Rental::Rental(std::vector<Tool> new_rental_tools, std::vector<int> new_tool_rental_times){
	rental_tools = new_rental_tools;
	tool_rental_times = new_tool_rental_times;
	rental_id = Rental::rental_id_total;
	Rental::rental_id_total += 1;
}

/*
	Returns the minimum rental time that the rental has
*/
int Rental::min_nights(){
	int min_time = 10;
	for(int night_time : tool_rental_times){
		if(night_time < min_time){
			min_time = night_time;
		}
	}
	return min_time;
}

/*
	Returns the amount of tools the rental has
*/
int Rental::num_of_tools(){
	return rental_tools.size();
}

/*
	Returns the total cost of the rental
*/
int Rental::TotalCost(){
	int total_cost = 0;
	for(Tool tool_itr : rental_tools){
		total_cost += tool_itr.get_price();
	}
	return total_cost;
}
