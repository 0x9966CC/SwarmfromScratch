//
// Created by kawa0 on 25/05/16.
//
#include "field.h"

Field::Field(float x, float y, float z) {
    limit = {x, y, z};
    disturbance = {0, 0, 0};
}

void Field::setDisturbance(float x, float y, float z) {
    disturbance = {x, y, z};
}

void Field::getDisturbance(float *x, float *y, float *z) {
    *x = disturbance.x;
    *y = disturbance.y;
    *z = disturbance.z;
};