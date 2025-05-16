//
// Created by kawa0 on 25/05/16.
//

#ifndef FIELD_H
#define FIELD_H

#endif //FIELD_H

struct Vector3 { //座標
    float x,y,z;
};

class Field {
    public:
        Field(float x, float y, float z) ;
        void setDisturbance(float x, float y, float z);
        void getDisturbance(float *x, float *y, float *z);
    private:
        Vector3 limit{}; //フィールドの限界
        Vector3 disturbance{}; //外乱
};