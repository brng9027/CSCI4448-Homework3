#ifndef Rental_H
#define Rental_H
#include <map>
#include "tools.h"
#include <vector>
using namespace std;

class Rental{
public:
	Rental(std::vector<Tool> new_rental_tools, std::vector<int> new_tool_rental_times);
	int min_nights();
	int num_of_tools();
	int TotalCost();
	int get_rental_id(){return rental_id;}
private:
	std::vector<Tool> rental_tools;
	std::vector<int> tool_rental_times;
	int rental_id;
	static int rental_id_total;
};

#endif
