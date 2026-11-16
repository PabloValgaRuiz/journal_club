#include <fmt/core.h>

int main() {
    double energy = -13.605693;
    int step = 42;

    // Uses compiled functions from libfmt.a / fmt.lib
    fmt::print("Step {}: Energy = {:.4f} eV\n", step, energy);

    return 0;
}