#include <iostream>
#include <string>
#include "time.hpp"

std::string mil_to_reg(unsigned short int mil_time){

      unsigned short int min = 0, hour = 0;
      std::string civilian_minutes, civilian_hours;

      min = mil_time % 100;
      hour = mil_time / 100;

  if (hour < 12) {
    civilian_minutes = std::to_string(min);
    civilian_hours = std::to_string(hour);
    if (min == 0) {
      return civilian_hours + ":00" + " am";
    } else if (min <10) {
        return civilian_hours + ":0" + civilian_minutes + " am";
    } else {
        return civilian_hours + ":" + civilian_minutes + " am";
    }

  } else if (hour > 12) {
    hour = hour - 12;
    civilian_minutes = std::to_string(min);
    civilian_hours = std::to_string(hour);
    if (min == 0) {
      return civilian_hours + ":00" + " pm";
    } else if (min <10) {
        return civilian_hours + ":0" + civilian_minutes + " pm";
    } else {
        return civilian_hours + ":" + civilian_minutes + " pm";
    }

  }
}
