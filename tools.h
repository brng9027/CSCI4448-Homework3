#ifndef TOOLS_H
#define TOOLS_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;


class Tool {
protected:
  string tool_name;
  string tool_type;
  int counter = 2;
  int tool_cost;
};

class Painting: public Tool {
private:
  int tool_cost = 1;
  string tool_type = "painting";
  string tool_name = "painting" + to_string(counter);
};
class Concrete: public Tool {
private:
  int tool_cost = 2;
  string tool_type = "concrete";
  string tool_name = "concrete" + to_string(counter);
};
class Plumbing: public Tool {
private:
  int tool_cost = 3;
  string tool_type = "plumbing";
  string tool_name = "plumbing" + to_string(counter);
};
class Woodwork: public Tool {
private:
  int tool_cost = 4;
  string tool_type = "woodwork";
  string tool_name = "woodwork" + to_string(counter);
};
class Yardwork: public Tool {
private:
  int tool_cost = 5;
  string tool_type = "yardwork";
  string tool_name = "yardwork" + to_string(counter);

};

#endif
