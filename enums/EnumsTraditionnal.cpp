#include<iostream>
#include<string>
using namespace std;

enum StoplightState {
  STOP = 0,
  SLOW = 1,
  GO = 2
};

string EnumToStr(StoplightState val)
{
  if (val == STOP) { return "STOP"; }
  else if (val == SLOW) { return "SLOW"; }
  else if (val == GO) { return "GO"; }
  else { return "???"; }
}

int main()
{
  StoplightState light = STOP;

  for (int i = 0; i < 10; i++)
  {
    cout << i << ". Stop light state is " << light << " (" << EnumToStr(light) << ")" << endl;

    // Green to yellow
    if (light == GO) { light = SLOW; }

    // Yellow to red
    else if (light == SLOW) { light = STOP; }

    // Red to green
    else if (light == STOP) { light = GO; }
  }

  return 0;
}

