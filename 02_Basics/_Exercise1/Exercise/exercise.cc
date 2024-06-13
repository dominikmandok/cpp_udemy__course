#include <iostream>

#include "exercise.h"

void mod_cross_sum(const int I, const int J) {
    for (int i = 0; i < I; i++) {
        for (int j = 0; j < J; j++) {
            std::cout << "i: " << i << ", j: " << j
                << " => " << ((i+j) % 2 == 0 ? "Gerade" : "Ungerade")
                << std::endl;
        }
    }
}
