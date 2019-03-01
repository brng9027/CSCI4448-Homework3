#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Tool {
public:
  string tool_name;
  int tool_cost;
  string tool_type;
  static int counter;
  Tool()
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
