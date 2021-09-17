#include "Filter.h"

double EMAFilter::add(double value) {
  value_ = (alpha_ * value) + ((1-alpha_) * value_);
  return value_;
}