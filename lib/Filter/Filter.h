#ifndef FILTER_H
#define FILTER_H

#include <Arduino.h>

class EMAFilter {
  private:
    double alpha_;
    double value_;

  public:
    EMAFilter(double alpha) : alpha_{alpha}, value_{0} {}
    double add(double value);
};

#endif