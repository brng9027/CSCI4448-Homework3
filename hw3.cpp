#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Store {
public:
  void getCustomers() {
    int number = rand() % 10 + 1;
    for (int i=0; i < number; i++) {
      customers[i] =
    }
  }
private:
  string customers [5];
  int tool_count;
};

int main(){
  std::vector<Tool> inventory;
  for (int i = 0; i < 20; i++) {
    int rand = rand() % 5 + 1;
    switch (rand) {
      case 1:inventory.push_back(Painting("tool" + i));
      case 2:inventory.push_back(Concrete("tool" + i));
      case 3:inventory.push_back(Plumbing("tool" + i));
      case 4:inventory.push_back(Woodwork("tool" + i));
      case 5:inventory.push_back(Yardwork("tool" + i));
    }
  }
  Store store;
  for (int i=0; i<35; i++) {

  }
}
