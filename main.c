#include <kipr/botball.h>

int main()
    
{ 
    wait_for_light(0);
    
    enable_servos();
    set_servo_position(0,822);
    set_servo_position(3,1111);
    mav(0,1000);	//Go forward
    mav(3,1000);
    msleep(3300);
    mav(0,500);		// turn RIGHT
    mav(3,-500);
    msleep(2850);
    mav(0,1000);	// collect poms
    mav(3,1000);
    set_servo_position(0,2047);
    set_servo_position(3,0);
    msleep(9000);
    mav(0,500);		// turn RIGHT
    mav(3,-500);
    msleep(2850);
    mav(0,1000);	//go twords zone
    mav(3,1000);
    msleep(3000);
    ao();
    msleep(2000);
    mav(0,-1000);	//go back
    mav(3,-1000);
    msleep(2500);
    mav(0,500);		// uturn
    mav(3,-500);
    msleep(5800);
    mav(0,1000);	//go twords haybale
    mav(3,1000);
    msleep(300);
    set_servo_position(0,983);	//ajust claw for haybale
    set_servo_position(3,718);
    msleep(1700);
    mav(0,1000);
    mav(3,1000);
    msleep(300);
    set_servo_position(0,778);	//grab block
    set_servo_position(3,1144);
    mav(0,-1000);
    mav(3,-1000);
    msleep(2000);
    mav(0,500);		// uturn
    mav(3,-500);
    msleep(5600);
    mav(0,1000);
    mav(3,1000);
    msleep(1900);
    ao();
    set_servo_position(0,2047);
    set_servo_position(3,0);
    msleep(1000)
    mav(0,-1000);	//go back
    mav(3,-1000);
    msleep(2500);
    mav(0,-500);		// turn RIGHTaf
    mav(3,500);
    msleep(2850);
    mav(0,1000);
    mav(3,1000);
    msleep(7000);
    set_servo_position(0,822);
    set_servo_position(3,1111);
    
    return 0;
}