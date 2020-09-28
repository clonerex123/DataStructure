#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;
// READ CHAPTER 8

class sock{

  public:

  // structure output (type methodName) = (int store){ guts }
    void setmnfg(string m){ // declares function called setmnfg requires string that is stored in "m"
      mnfg = m;
    }

    string getmnfg(){
      return mnfg;
    }

    void setColor(string c){
      color = c;
    }

    string getColor(){
      return color;
    }

    void setSmells(bool s){
      smells = s;
    }
    // boolean getSmells returns private value smells
    bool getSmells(){ 
      return smells;
    }

    void setWorn(bool w){
      beingWorn = w;
    }

    bool getWorn(){ 
      return beingWorn;
    }

    void setSize(char q){
      size = q;
    }

    char getSize(){ 
      return size;
    }

    void printSockStatus(){
      cout << "Manufacturer: " << mnfg << '\n';
      cout << "Color: " << color << '\n';
      cout << "Size" << size << '\n';
      cout << "Does it smell?" << smells << '\n';
      cout << "Being worn?" << beingWorn << '\n';
    }



  private:
    char size;
    std::string color;
    std::string mnfg;
    bool beingWorn;
    bool smells;
};

