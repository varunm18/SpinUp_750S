#include "main.h"
#include "okapi/api/units/QAngle.hpp"
#include <cmath>

using namespace okapi;


//change to the center of the vision sensor coords
static int CX = 0;


//turntable changes with x offset (task)
// void fixTurntableOffset(void) {
//    while(true) {
//         //gets an object given a signature (size, sig) -> 0 is largest
//         vision_object_s_t rtn = vision_sensor.get_by_sig(0, 1);
        
//         double offset = CX - (rtn.left_coord + (double)rtn.width/2);
//         //the ideal height is CX, we are an offset away from that height
        
//         //rotate angle until offset is 0

//         //we're going to have to tune it based on how slow/fast it turns
        
//         double K_t = (leftBack.get_actual_velocity() + leftFront.get_actual_velocity() + rightBack.get_actual_velocity() + rightFront.get_actual_velocity())/40.0; //make it relative to the speed of the robot
//         lcd::print(2, "Constant: %f", K_t);

//         turntable.move_velocity(offset * K_t);
//         Task::delay(1);
//    }
// }