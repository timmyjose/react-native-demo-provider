#ifndef DEMOPROVIDER_H
#define DEMOPROVIDER_H

extern "C" double rust_add(double, double);

namespace demoprovider {
  double multiply(double a, double b);
  double add(double a, double b);
}

#endif /* DEMOPROVIDER_H */
