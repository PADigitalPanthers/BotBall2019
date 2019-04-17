	#include <kipr/botball.h>

int main()
{
//create_connect(); Starts the Roomba
//create_drive_direct(speed of wheel 1, speed of wheel 2);
//wait_for_milliseconds(how long you want to run the code);
//create_disconnect(); Stops the Roomba
//return 0; stops
//make sure servo is plugged in the right way
    //Bloack&PomPoms
    //wait_for_light(0);
    create_connect();
    create_drive_direct(-180, -180);
    wait_for_milliseconds(3600);
    create_drive_direct(0, 350);
    wait_for_milliseconds(1000);
    create_drive_direct(175, 175);
    wait_for_milliseconds(1400);
    create_drive_direct(350, 0);
    wait_for_milliseconds(1000);
    create_drive_direct(100,103);
    wait_for_milliseconds(10500);
    create_drive_direct(270, 0);
    wait_for_milliseconds(1100);
    create_drive_direct(50, 50);
    wait_for_milliseconds(3000);
   //Ambulance
    create_drive_direct(-50, -50);
    wait_for_milliseconds(3000);
    create_drive_direct(100, -110);
    wait_for_milliseconds(2000);
    create_drive_direct(200, 200);
    wait_for_milliseconds(9000);
    create_drive_direct(200, 0);
    wait_for_milliseconds(2000);
    create_drive_direct(200, 200);
    wait_for_milliseconds(3000);
    enable_servos();
    
    set_servo_position(2, 838);
    disable_servos();
    
    create_disconnect();
    
    return 0;
}