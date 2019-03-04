//
// Created by Dima Zapolsky on 04/03/2019.
//

#include "lib.h"
#include <iostream>

void add(int & a, int val = 1) {
    a += val;
}

void substract(int & a, int val = 1) {
    a -= val;
}