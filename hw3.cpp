#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Tool {
public:
  string tool_name;
  int tool_cost;
  string tool_type;
};

class Painting:Tool {
public:
  tool_cost = 1;
  tool_type = "painting";
  tool_name = "painting" + counter;
private:
  int counter = 1;
};
class Concrete:Tool {
public:
  tool_cost = 2;
  tool_type = "concrete";
  tool_name = "concrete" + counter;
private:
  int counter = 1;
};
class Plumbing:Tool {
public:
  tool_cost = 3;
  tool_type = "plumbing";
  tool_name = "plumbing" + counter;
private:
  int counter = 1;
};
class Woodwork:Tool {
public:
  tool_cost = 4;
  tool_type = "woodwork";
  tool_name = "woodwork" + counter;
private:
  int counter = 1;
};
class Yardwork:Tool {
public:
  tool_cost = 5;
  tool_type = "yardwork";
  tool_name = "yardwork" + counter;
private:
  int counter = 1;
};

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