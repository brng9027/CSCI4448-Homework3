#ifndef Store_H
#define Store_H
#include <map>
#include "Store.h"
#include "tools.h"
#include "Customer.h"
#include <vector>
class Store{
    public:
      Store();
      void rentTools(int number_of_tools_to_rent, std::vector<int> num_of_nights, Customer current_customer);
      void returnTools();
      int RentalsCash(Customer current_customer);
      std::vector<Tool> inventory;
   //    map <string, bool> inventory  = {
   //   { "Paint Tool 1", 1 },
   //   { "Paint Tool 2", 1 },
   //   { "Paint Tool 3", 1 },
   //   { "Paint Tool 4", 1 },
   //   { "Concrete Tool 1", 1 },
   //   { "Concrete Tool 2", 1 },
   //   { "Concrete Tool 3", 1 },
   //   { "Concrete Tool 4", 1 },
   //   { "Plumbing Tool 1", 1 },
   //   { "Plumbing Tool 2", 1 },
   //   { "Plumbing Tool 3", 1 },
   //   { "Plumbing Tool 4", 1 },
   //   { "Woodwork Tool 1", 1 },
   //   { "Woodwork Tool 2", 1 },
   //   { "Woodwork Tool 3", 1 },
   //   { "Woodwork Tool 4", 1 },
   //   { "Yardwork Tool 1", 1 },
   //   { "Yardwork Tool 2", 1 },
   //   { "Yardwork Tool 3", 1 },
   //   { "Yardwork Tool 4", 1 }
   // };
 private:
   std::vector<Rental> existing_rentals;
};
#endif
