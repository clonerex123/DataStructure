#include <string>
#include <iostream>

using namespace std;

class WaterTank{
  public:
    WaterTank(string id, bool psrizd, int cap, string loc)
      :tankID{id}, pressurized{psrizd}, maxCapacity{cap}, location{loc}
      {

      }

    WaterTank(string id)
      :tankID{id}
      {

      }

    void fillTank(int gals){
      
      if((currentCapacity + gals) > maxCapacity){
          currentCapacity = maxCapacity;
      } else {
        currentCapacity = currentCapacity + gals;
      }
    }

    void drainTank(int gals){
      currentCapacity = currentCapacity - gals;
      if(currentCapacity < 0){
        currentCapacity = 0;
      }
    }

    double getTankCapacity(){
      return currentCapacity / maxCapacity;
    }



  public:

  string tankID;
  string id;
  string location;
  bool pressurized;
  bool inService;
  int maxCapacity;
  int currentCapacity;
  int pressure;
  int maxPressure;

};