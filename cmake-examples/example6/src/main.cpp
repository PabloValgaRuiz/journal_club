#include <iostream>
#include "my_random_lib.h"

#include <fmt/core.h>

#include <stdio.h>
#include <gsl/gsl_sf_bessel.h>

int
main (void)
{
// --------------------------------------------------------------------------------
  std::cout << "Hello, World!" << std::endl;
  std::cout << "Random number: " << get_random_number() << std::endl;
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
  double energy = -13.605693;
  int step = 42;
  // Uses compiled functions from libfmt.a / fmt.lib
  fmt::print("Step {}: Energy = {:.4f} eV\n", step, energy);
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
  double x = 5.0;
  double y = gsl_sf_bessel_J0 (x);
  printf ("J0(%g) = %.18e\n", x, y);
// --------------------------------------------------------------------------------

  return 0;
}


