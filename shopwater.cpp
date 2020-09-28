#include<iostream>
#include<string>
#include "watertank.cpp"

int main(){
  WaterTank t1{"collecter1", false,250,"outside,rear"};
  WaterTank t2{"tinyPressure"};

  cout << "T1 Capacity" << t1.maxCapacity << '\n';
  cout << "T2 name" << t2.getID() << '\n';
}