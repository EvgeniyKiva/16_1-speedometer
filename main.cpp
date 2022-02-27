#include <iostream>
#include <sstream>
#include <iomanip>

float speed (float speed, float delta, float epsilon){

    speed+= delta;
    if (speed+epsilon>=150){
        speed=150;
    }
    else if (speed-epsilon<=0){
        speed=0;
    }
    speed=speed*10;
    speed=(int)speed;
    speed=(float)speed;
    speed/=10;
    return speed;
};


int main() {
    float delta;
    float epsilon=0.01;
    float new_speed=0;
    std::stringstream speed_buffer;

    std::cout << "Enter the delta in speed - " << std::endl;
    std::cin >> delta;
    new_speed = speed (new_speed, delta, epsilon);
    speed_buffer << new_speed <<" km/h; ";

    while (new_speed!=0 && new_speed!=150){
        std::cout << "Enter the delta in speed - " << std::endl;
        std::cin >> delta;
        new_speed = speed (new_speed, delta, epsilon);
        speed_buffer << new_speed <<" km/h; ";

    }
    //std::setprecision(1);
    std::cout <<  speed_buffer.str();

    return 0;
}
