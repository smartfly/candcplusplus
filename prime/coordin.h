//
// Created by smartfly on 2020/7/21.
//

#ifndef HELLOWORLD_COORDIN_H
#define HELLOWORLD_COORDIN_H

struct polar {
    double distance;        //distance from origin
    double angle;           //direction from origin
};

struct rect {
    double x;               //horizontal distance from origin
    double y;               //vertical distance from origin
};

//prototype
polar rect_to_polar(rect xypos);

void show_polar(polar dapos);

#endif //HELLOWORLD_COORDIN_H

