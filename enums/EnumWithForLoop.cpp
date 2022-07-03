#include<iostream>
using namespace std;

enum light {
  STOP = 100, // red
  SLOW = 500, // yellow
  GO = 1000 //green
};


int main() {
  light trafficLight;
  trafficLight = STOP;

  for (int time = 0; time < 12; time++) {
    cout << time << ".Time: " << "The traffic light is: " << trafficLight << endl;
    if (trafficLight == STOP) {
      trafficLight = GO;
    } //red -> green

    else if (trafficLight == GO) {
      trafficLight = SLOW;
    }//Green -> yellow
    else if (trafficLight == SLOW) {
      trafficLight = STOP;
    }//Yellow -> Red
  }
  return 0;
}