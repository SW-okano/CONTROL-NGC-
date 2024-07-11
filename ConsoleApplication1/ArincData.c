#include <stdbool.h>
#include "ArincData.h"
#include "CoomonFunction.h"
///////////////////////////////////////////////////////
//Arinc Data set/get function for Air
///////////////////////////////////////////////////////
float getArAirTimerTimeCounter()
{
    float time_counter;

    mLock(eSendDataType_ARINC_AIR);
    time_counter = gArAirData.timer.time_counter;
    mUnLock(eSendDataType_ARINC_AIR);
    return time_counter;
}

void setArAirTimerTimeCounter(const float time_counter)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.timer.time_counter = time_counter;
    mUnLock(eSendDataType_ARINC_AIR);
}

bool getArAirLaunchReleaseCommand()
{
    bool release_command;

    mLock(eSendDataType_ARINC_AIR);
    release_command = gArAirData.launch.release_command;
    mUnLock(eSendDataType_ARINC_AIR);
    return release_command;
}

void setArAirLaunchReleaseCommand(const bool release_command)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.launch.release_command = release_command;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirStatusAirdataComputerStatus()
{
    int airdata_computer_status;

    mLock(eSendDataType_ARINC_AIR);
    airdata_computer_status = gArAirData.status.airdata_computer_status;
    mUnLock(eSendDataType_ARINC_AIR);
    return airdata_computer_status;
}

void setArAirStatusAirdataComputerStatus(const int airdata_computer_status)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.status.airdata_computer_status = airdata_computer_status;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsD1()
{
    int d1;

    mLock(eSendDataType_ARINC_AIR);
    d1 = gArAirData.fads.d1;
    mUnLock(eSendDataType_ARINC_AIR);
    return d1;
}

void setArAirFadsD1(const int d1)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.d1 = d1;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsD2()
{
    int d2;

    mLock(eSendDataType_ARINC_AIR);
    d2 = gArAirData.fads.d2;
    mUnLock(eSendDataType_ARINC_AIR);
    return d2;
}

void setArAirFadsD2(const int d2)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.d2 = d2;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsD3()
{
    int d3;

    mLock(eSendDataType_ARINC_AIR);
    d3 = gArAirData.fads.d3;
    mUnLock(eSendDataType_ARINC_AIR);
    return d3;
}

void setArAirFadsD3(const int d3)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.d3 = d3;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsD4()
{
    int d4;

    mLock(eSendDataType_ARINC_AIR);
    d4 = gArAirData.fads.d4;
    mUnLock(eSendDataType_ARINC_AIR);
    return d4;
}

void setArAirFadsD4(const int d4)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.d4 = d4;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsD5()
{
    int d5;

    mLock(eSendDataType_ARINC_AIR);
    d5 = gArAirData.fads.d5;
    mUnLock(eSendDataType_ARINC_AIR);
    return d5;
}

void setArAirFadsD5(const int d5)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.d5 = d5;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsD6()
{
    int d6;

    mLock(eSendDataType_ARINC_AIR);
    d6 = gArAirData.fads.d6;
    mUnLock(eSendDataType_ARINC_AIR);
    return d6;
}

void setArAirFadsD6(const int d6)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.d6 = d6;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsD7()
{
    int d7;

    mLock(eSendDataType_ARINC_AIR);
    d7 = gArAirData.fads.d7;
    mUnLock(eSendDataType_ARINC_AIR);
    return d7;
}

void setArAirFadsD7(const int d7)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.d7 = d7;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsD8()
{
    int d8;

    mLock(eSendDataType_ARINC_AIR);
    d8 = gArAirData.fads.d8;
    mUnLock(eSendDataType_ARINC_AIR);
    return d8;
}

void setArAirFadsD8(const int d8)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.d8 = d8;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsD9()
{
    int d9;

    mLock(eSendDataType_ARINC_AIR);
    d9 = gArAirData.fads.d9;
    mUnLock(eSendDataType_ARINC_AIR);
    return d9;
}

void setArAirFadsD9(const int d9)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.d9 = d9;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsA1()
{
    int a1;

    mLock(eSendDataType_ARINC_AIR);
    a1 = gArAirData.fads.a1;
    mUnLock(eSendDataType_ARINC_AIR);
    return a1;
}

void setArAirFadsA1(const int a1)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.a1 = a1;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsA2()
{
    int a2;

    mLock(eSendDataType_ARINC_AIR);
    a2 = gArAirData.fads.a2;
    mUnLock(eSendDataType_ARINC_AIR);
    return a2;
}

void setArAirFadsA2(const int a2)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.a2 = a2;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsA3()
{
    int a3;

    mLock(eSendDataType_ARINC_AIR);
    a3 = gArAirData.fads.a3;
    mUnLock(eSendDataType_ARINC_AIR);
    return a3;
}

void setArAirFadsA3(const int a3)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.a3 = a3;
    mUnLock(eSendDataType_ARINC_AIR);
}

int getArAirFadsA4()
{
    int a4;

    mLock(eSendDataType_ARINC_AIR);
    a4 = gArAirData.fads.a4;
    mUnLock(eSendDataType_ARINC_AIR);
    return a4;
}

void setArAirFadsA4(const int a4)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.a4 = a4;
    mUnLock(eSendDataType_ARINC_AIR);
}

float getArAirFadsAngleOfAttack()
{
    float angle_of_attack;

    mLock(eSendDataType_ARINC_AIR);
    angle_of_attack = gArAirData.fads.angle_of_attack;
    mUnLock(eSendDataType_ARINC_AIR);
    return angle_of_attack;
}

void setArAirFadsAngleOfAttack(const float angle_of_attack)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.angle_of_attack = angle_of_attack;
    mUnLock(eSendDataType_ARINC_AIR);
}

float getArAirFadsSideSlipAngel()
{
    float side_slip_angel;

    mLock(eSendDataType_ARINC_AIR);
    side_slip_angel = gArAirData.fads.side_slip_angel;
    mUnLock(eSendDataType_ARINC_AIR);
    return side_slip_angel;
}

void setArAirFadsSideSlipAngel(const float side_slip_angel)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.side_slip_angel = side_slip_angel;
    mUnLock(eSendDataType_ARINC_AIR);
}

float getArAirFadsAirSpeed()
{
    float air_speed;

    mLock(eSendDataType_ARINC_AIR);
    air_speed = gArAirData.fads.air_speed;
    mUnLock(eSendDataType_ARINC_AIR);
    return air_speed;
}

void setArAirFadsAirSpeed(const float air_speed)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.air_speed = air_speed;
    mUnLock(eSendDataType_ARINC_AIR);
}

float getArAirFadsMach()
{
    float mach;

    mLock(eSendDataType_ARINC_AIR);
    mach = gArAirData.fads.mach;
    mUnLock(eSendDataType_ARINC_AIR);
    return mach;
}

void setArAirFadsMach(const float mach)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.mach = mach;
    mUnLock(eSendDataType_ARINC_AIR);
}

bool getArAirFadsSystemFailureFlag()
{
    bool system_failure_flag;

    mLock(eSendDataType_ARINC_AIR);
    system_failure_flag = gArAirData.fads.system_failure_flag;
    mUnLock(eSendDataType_ARINC_AIR);
    return system_failure_flag;
}

void setArAirFadsSystemFailureFlag(const bool system_failure_flag)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.system_failure_flag = system_failure_flag;
    mUnLock(eSendDataType_ARINC_AIR);
}

bool getArAirFadsLowAccuracyFlag()
{
    bool low_accuracy_flag;

    mLock(eSendDataType_ARINC_AIR);
    low_accuracy_flag = gArAirData.fads.low_accuracy_flag;
    mUnLock(eSendDataType_ARINC_AIR);
    return low_accuracy_flag;
}

void setArAirFadsLowAccuracyFlag(const bool low_accuracy_flag)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.low_accuracy_flag = low_accuracy_flag;
    mUnLock(eSendDataType_ARINC_AIR);
}

float getArAirFadsPressureAltitude()
{
    float pressure_altitude;

    mLock(eSendDataType_ARINC_AIR);
    pressure_altitude = gArAirData.fads.pressure_altitude;
    mUnLock(eSendDataType_ARINC_AIR);
    return pressure_altitude;
}

void setArAirFadsPressureAltitude(const float pressure_altitude)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads.pressure_altitude = pressure_altitude;
    mUnLock(eSendDataType_ARINC_AIR);
}


ArDataAirTimerStruct getArAirTimer()
{
    ArDataAirTimerStruct timer;

    mLock(eSendDataType_ARINC_AIR);
    timer = gArAirData.timer;
    mUnLock(eSendDataType_ARINC_AIR);
    return timer;
}

ArDataAirLaunchStruct getArAirLaunch()
{
    ArDataAirLaunchStruct launch;

    mLock(eSendDataType_ARINC_AIR);
    launch = gArAirData.launch;
    mUnLock(eSendDataType_ARINC_AIR);
    return launch;
}

ArDataAirStatusStruct getArAirStatus()
{
    ArDataAirStatusStruct status;

    mLock(eSendDataType_ARINC_AIR);
    status = gArAirData.status;
    mUnLock(eSendDataType_ARINC_AIR);
    return status;
}

ArDataAirFadsStruct getArAirFads()
{
    ArDataAirFadsStruct fads;

    mLock(eSendDataType_ARINC_AIR);
    fads = gArAirData.fads;
    mUnLock(eSendDataType_ARINC_AIR);
    return fads;
}


void setArAirTimer(const ArDataAirTimerStruct timer)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.timer = timer;
    mUnLock(eSendDataType_ARINC_AIR);
}

void setArAirLaunch(const ArDataAirLaunchStruct launch)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.launch = launch;
    mUnLock(eSendDataType_ARINC_AIR);
}

void setArAirStatus(const ArDataAirStatusStruct status)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.status = status;
    mUnLock(eSendDataType_ARINC_AIR);
}

void setArAirFads(const ArDataAirFadsStruct fads)
{
    mLock(eSendDataType_ARINC_AIR);
    gArAirData.fads = fads;
    mUnLock(eSendDataType_ARINC_AIR);
}

///////////////////////////////////////////////////////
//Arinc Data set/get function for Navigation
///////////////////////////////////////////////////////
float getArNavTimerTimeCounter()
{
    float time_counter;

    mLock(eSendDataType_ARINC_NAV);
    time_counter = gArNavData.timer.time_counter;
    mUnLock(eSendDataType_ARINC_NAV);
    return time_counter;
}

void setArNavTimerTimeCounter(const float time_counter)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.timer.time_counter = time_counter;
    mUnLock(eSendDataType_ARINC_NAV);
}

bool getArNavLaunchReleaseCommand()
{
    bool release_command;

    mLock(eSendDataType_ARINC_NAV);
    release_command = gArNavData.launch.release_command;
    mUnLock(eSendDataType_ARINC_NAV);
    return release_command;
}

void setArNavLaunchReleaseCommand(const bool release_command)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.launch.release_command = release_command;
    mUnLock(eSendDataType_ARINC_NAV);
}

int getArNavStatusNavigationComputerStatus()
{
    int navigation_computer_status;

    mLock(eSendDataType_ARINC_NAV);
    navigation_computer_status = gArNavData.status.navigation_computer_status;
    mUnLock(eSendDataType_ARINC_NAV);
    return navigation_computer_status;
}

void setArNavStatusNavigationComputerStatus(const int navigation_computer_status)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.status.navigation_computer_status = navigation_computer_status;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRoll()
{
    float roll;

    mLock(eSendDataType_ARINC_NAV);
    roll = gArNavData.ins.roll;
    mUnLock(eSendDataType_ARINC_NAV);
    return roll;
}

void setArNavInsRoll(const float roll)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.roll = roll;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsPitch()
{
    float pitch;

    mLock(eSendDataType_ARINC_NAV);
    pitch = gArNavData.ins.pitch;
    mUnLock(eSendDataType_ARINC_NAV);
    return pitch;
}

void setArNavInsPitch(const float pitch)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.pitch = pitch;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsYaw()
{
    float yaw;

    mLock(eSendDataType_ARINC_NAV);
    yaw = gArNavData.ins.yaw;
    mUnLock(eSendDataType_ARINC_NAV);
    return yaw;
}

void setArNavInsYaw(const float yaw)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.yaw = yaw;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRollRate()
{
    float roll_rate;

    mLock(eSendDataType_ARINC_NAV);
    roll_rate = gArNavData.ins.roll_rate;
    mUnLock(eSendDataType_ARINC_NAV);
    return roll_rate;
}

void setArNavInsRollRate(const float roll_rate)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.roll_rate = roll_rate;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsPitchRate()
{
    float pitch_rate;

    mLock(eSendDataType_ARINC_NAV);
    pitch_rate = gArNavData.ins.pitch_rate;
    mUnLock(eSendDataType_ARINC_NAV);
    return pitch_rate;
}

void setArNavInsPitchRate(const float pitch_rate)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.pitch_rate = pitch_rate;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsYawRate()
{
    float yaw_rate;

    mLock(eSendDataType_ARINC_NAV);
    yaw_rate = gArNavData.ins.yaw_rate;
    mUnLock(eSendDataType_ARINC_NAV);
    return yaw_rate;
}

void setArNavInsYawRate(const float yaw_rate)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.yaw_rate = yaw_rate;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsXAcc()
{
    float x_acc;

    mLock(eSendDataType_ARINC_NAV);
    x_acc = gArNavData.ins.x_acc;
    mUnLock(eSendDataType_ARINC_NAV);
    return x_acc;
}

void setArNavInsXAcc(const float x_acc)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.x_acc = x_acc;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsYAcc()
{
    float y_acc;

    mLock(eSendDataType_ARINC_NAV);
    y_acc = gArNavData.ins.y_acc;
    mUnLock(eSendDataType_ARINC_NAV);
    return y_acc;
}

void setArNavInsYAcc(const float y_acc)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.y_acc = y_acc;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsZAcc()
{
    float z_acc;

    mLock(eSendDataType_ARINC_NAV);
    z_acc = gArNavData.ins.z_acc;
    mUnLock(eSendDataType_ARINC_NAV);
    return z_acc;
}

void setArNavInsZAcc(const float z_acc)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.z_acc = z_acc;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsGroundVelocityU()
{
    float ground_velocity_u;

    mLock(eSendDataType_ARINC_NAV);
    ground_velocity_u = gArNavData.ins.ground_velocity_u;
    mUnLock(eSendDataType_ARINC_NAV);
    return ground_velocity_u;
}

void setArNavInsGroundVelocityU(const float ground_velocity_u)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.ground_velocity_u = ground_velocity_u;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsGroundVelocityV()
{
    float ground_velocity_v;

    mLock(eSendDataType_ARINC_NAV);
    ground_velocity_v = gArNavData.ins.ground_velocity_v;
    mUnLock(eSendDataType_ARINC_NAV);
    return ground_velocity_v;
}

void setArNavInsGroundVelocityV(const float ground_velocity_v)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.ground_velocity_v = ground_velocity_v;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsGroundVelocityW()
{
    float ground_velocity_w;

    mLock(eSendDataType_ARINC_NAV);
    ground_velocity_w = gArNavData.ins.ground_velocity_w;
    mUnLock(eSendDataType_ARINC_NAV);
    return ground_velocity_w;
}

void setArNavInsGroundVelocityW(const float ground_velocity_w)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.ground_velocity_w = ground_velocity_w;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsGroundSpeed()
{
    float ground_speed;

    mLock(eSendDataType_ARINC_NAV);
    ground_speed = gArNavData.ins.ground_speed;
    mUnLock(eSendDataType_ARINC_NAV);
    return ground_speed;
}

void setArNavInsGroundSpeed(const float ground_speed)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.ground_speed = ground_speed;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsQuaternion0()
{
    float quaternion0;

    mLock(eSendDataType_ARINC_NAV);
    quaternion0 = gArNavData.ins.quaternion0;
    mUnLock(eSendDataType_ARINC_NAV);
    return quaternion0;
}

void setArNavInsQuaternion0(const float quaternion0)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.quaternion0 = quaternion0;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsQuaternion1()
{
    float quaternion1;

    mLock(eSendDataType_ARINC_NAV);
    quaternion1 = gArNavData.ins.quaternion1;
    mUnLock(eSendDataType_ARINC_NAV);
    return quaternion1;
}

void setArNavInsQuaternion1(const float quaternion1)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.quaternion1 = quaternion1;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsQuaternion2()
{
    float quaternion2;

    mLock(eSendDataType_ARINC_NAV);
    quaternion2 = gArNavData.ins.quaternion2;
    mUnLock(eSendDataType_ARINC_NAV);
    return quaternion2;
}

void setArNavInsQuaternion2(const float quaternion2)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.quaternion2 = quaternion2;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsQuaternion3()
{
    float quaternion3;

    mLock(eSendDataType_ARINC_NAV);
    quaternion3 = gArNavData.ins.quaternion3;
    mUnLock(eSendDataType_ARINC_NAV);
    return quaternion3;
}

void setArNavInsQuaternion3(const float quaternion3)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.quaternion3 = quaternion3;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsInsGnssUtc()
{
    float ins_gnss_utc;

    mLock(eSendDataType_ARINC_NAV);
    ins_gnss_utc = gArNavData.ins.ins_gnss_utc;
    mUnLock(eSendDataType_ARINC_NAV);
    return ins_gnss_utc;
}

void setArNavInsInsGnssUtc(const float ins_gnss_utc)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.ins_gnss_utc = ins_gnss_utc;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsInsGnssLatitude()
{
    float ins_gnss_latitude;

    mLock(eSendDataType_ARINC_NAV);
    ins_gnss_latitude = gArNavData.ins.ins_gnss_latitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return ins_gnss_latitude;
}

void setArNavInsInsGnssLatitude(const float ins_gnss_latitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.ins_gnss_latitude = ins_gnss_latitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsInsGnssLongitude()
{
    float ins_gnss_longitude;

    mLock(eSendDataType_ARINC_NAV);
    ins_gnss_longitude = gArNavData.ins.ins_gnss_longitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return ins_gnss_longitude;
}

void setArNavInsInsGnssLongitude(const float ins_gnss_longitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.ins_gnss_longitude = ins_gnss_longitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsInsGnssAltitude()
{
    float ins_gnss_altitude;

    mLock(eSendDataType_ARINC_NAV);
    ins_gnss_altitude = gArNavData.ins.ins_gnss_altitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return ins_gnss_altitude;
}

void setArNavInsInsGnssAltitude(const float ins_gnss_altitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.ins_gnss_altitude = ins_gnss_altitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

bool getArNavInsInsGnssStatus()
{
    bool ins_gnss_status;

    mLock(eSendDataType_ARINC_NAV);
    ins_gnss_status = gArNavData.ins.ins_gnss_status;
    mUnLock(eSendDataType_ARINC_NAV);
    return ins_gnss_status;
}

void setArNavInsInsGnssStatus(const bool ins_gnss_status)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.ins_gnss_status = ins_gnss_status;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsInsGnssGroundSpeed()
{
    float ins_gnss_ground_speed;

    mLock(eSendDataType_ARINC_NAV);
    ins_gnss_ground_speed = gArNavData.ins.ins_gnss_ground_speed;
    mUnLock(eSendDataType_ARINC_NAV);
    return ins_gnss_ground_speed;
}

void setArNavInsInsGnssGroundSpeed(const float ins_gnss_ground_speed)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.ins_gnss_ground_speed = ins_gnss_ground_speed;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawRoll()
{
    float raw_roll;

    mLock(eSendDataType_ARINC_NAV);
    raw_roll = gArNavData.ins.raw_roll;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_roll;
}

void setArNavInsRawRoll(const float raw_roll)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_roll = raw_roll;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawPitch()
{
    float raw_pitch;

    mLock(eSendDataType_ARINC_NAV);
    raw_pitch = gArNavData.ins.raw_pitch;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_pitch;
}

void setArNavInsRawPitch(const float raw_pitch)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_pitch = raw_pitch;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawYaw()
{
    float raw_yaw;

    mLock(eSendDataType_ARINC_NAV);
    raw_yaw = gArNavData.ins.raw_yaw;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_yaw;
}

void setArNavInsRawYaw(const float raw_yaw)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_yaw = raw_yaw;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawRollRate()
{
    float raw_roll_rate;

    mLock(eSendDataType_ARINC_NAV);
    raw_roll_rate = gArNavData.ins.raw_roll_rate;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_roll_rate;
}

void setArNavInsRawRollRate(const float raw_roll_rate)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_roll_rate = raw_roll_rate;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawPitchRate()
{
    float raw_pitch_rate;

    mLock(eSendDataType_ARINC_NAV);
    raw_pitch_rate = gArNavData.ins.raw_pitch_rate;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_pitch_rate;
}

void setArNavInsRawPitchRate(const float raw_pitch_rate)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_pitch_rate = raw_pitch_rate;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawYawRate()
{
    float raw_yaw_rate;

    mLock(eSendDataType_ARINC_NAV);
    raw_yaw_rate = gArNavData.ins.raw_yaw_rate;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_yaw_rate;
}

void setArNavInsRawYawRate(const float raw_yaw_rate)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_yaw_rate = raw_yaw_rate;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawXAcc()
{
    float raw_x_acc;

    mLock(eSendDataType_ARINC_NAV);
    raw_x_acc = gArNavData.ins.raw_x_acc;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_x_acc;
}

void setArNavInsRawXAcc(const float raw_x_acc)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_x_acc = raw_x_acc;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawYAcc()
{
    float raw_y_acc;

    mLock(eSendDataType_ARINC_NAV);
    raw_y_acc = gArNavData.ins.raw_y_acc;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_y_acc;
}

void setArNavInsRawYAcc(const float raw_y_acc)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_y_acc = raw_y_acc;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawZAcc()
{
    float raw_z_acc;

    mLock(eSendDataType_ARINC_NAV);
    raw_z_acc = gArNavData.ins.raw_z_acc;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_z_acc;
}

void setArNavInsRawZAcc(const float raw_z_acc)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_z_acc = raw_z_acc;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawGroundVlocityU()
{
    float raw_ground_vlocity_u;

    mLock(eSendDataType_ARINC_NAV);
    raw_ground_vlocity_u = gArNavData.ins.raw_ground_vlocity_u;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_ground_vlocity_u;
}

void setArNavInsRawGroundVlocityU(const float raw_ground_vlocity_u)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_ground_vlocity_u = raw_ground_vlocity_u;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawGroundVelocityV()
{
    float raw_ground_velocity_v;

    mLock(eSendDataType_ARINC_NAV);
    raw_ground_velocity_v = gArNavData.ins.raw_ground_velocity_v;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_ground_velocity_v;
}

void setArNavInsRawGroundVelocityV(const float raw_ground_velocity_v)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_ground_velocity_v = raw_ground_velocity_v;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawGroundVelocityW()
{
    float raw_ground_velocity_w;

    mLock(eSendDataType_ARINC_NAV);
    raw_ground_velocity_w = gArNavData.ins.raw_ground_velocity_w;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_ground_velocity_w;
}

void setArNavInsRawGroundVelocityW(const float raw_ground_velocity_w)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_ground_velocity_w = raw_ground_velocity_w;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawGroundSpeed()
{
    float raw_ground_speed;

    mLock(eSendDataType_ARINC_NAV);
    raw_ground_speed = gArNavData.ins.raw_ground_speed;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_ground_speed;
}

void setArNavInsRawGroundSpeed(const float raw_ground_speed)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_ground_speed = raw_ground_speed;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawQuaternion0()
{
    float raw_quaternion0;

    mLock(eSendDataType_ARINC_NAV);
    raw_quaternion0 = gArNavData.ins.raw_quaternion0;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_quaternion0;
}

void setArNavInsRawQuaternion0(const float raw_quaternion0)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_quaternion0 = raw_quaternion0;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawQuaternion1()
{
    float raw_quaternion1;

    mLock(eSendDataType_ARINC_NAV);
    raw_quaternion1 = gArNavData.ins.raw_quaternion1;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_quaternion1;
}

void setArNavInsRawQuaternion1(const float raw_quaternion1)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_quaternion1 = raw_quaternion1;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawQuaternion2()
{
    float raw_quaternion2;

    mLock(eSendDataType_ARINC_NAV);
    raw_quaternion2 = gArNavData.ins.raw_quaternion2;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_quaternion2;
}

void setArNavInsRawQuaternion2(const float raw_quaternion2)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_quaternion2 = raw_quaternion2;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawQuaternion3()
{
    float raw_quaternion3;

    mLock(eSendDataType_ARINC_NAV);
    raw_quaternion3 = gArNavData.ins.raw_quaternion3;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_quaternion3;
}

void setArNavInsRawQuaternion3(const float raw_quaternion3)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_quaternion3 = raw_quaternion3;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawInsGnssLatitude()
{
    float raw_ins_gnss_latitude;

    mLock(eSendDataType_ARINC_NAV);
    raw_ins_gnss_latitude = gArNavData.ins.raw_ins_gnss_latitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_ins_gnss_latitude;
}

void setArNavInsRawInsGnssLatitude(const float raw_ins_gnss_latitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_ins_gnss_latitude = raw_ins_gnss_latitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawInsGnssLongitude()
{
    float raw_ins_gnss_longitude;

    mLock(eSendDataType_ARINC_NAV);
    raw_ins_gnss_longitude = gArNavData.ins.raw_ins_gnss_longitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_ins_gnss_longitude;
}

void setArNavInsRawInsGnssLongitude(const float raw_ins_gnss_longitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_ins_gnss_longitude = raw_ins_gnss_longitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavInsRawInsGnssAltitude()
{
    float raw_ins_gnss_altitude;

    mLock(eSendDataType_ARINC_NAV);
    raw_ins_gnss_altitude = gArNavData.ins.raw_ins_gnss_altitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_ins_gnss_altitude;
}

void setArNavInsRawInsGnssAltitude(const float raw_ins_gnss_altitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.raw_ins_gnss_altitude = raw_ins_gnss_altitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

int getArNavInsInsGnssSvs()
{
    int ins_gnss_svs;

    mLock(eSendDataType_ARINC_NAV);
    ins_gnss_svs = gArNavData.ins.ins_gnss_svs;
    mUnLock(eSendDataType_ARINC_NAV);
    return ins_gnss_svs;
}

void setArNavInsInsGnssSvs(const int ins_gnss_svs)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins.ins_gnss_svs = ins_gnss_svs;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps1Gps1Utc()
{
    float gps1_utc;

    mLock(eSendDataType_ARINC_NAV);
    gps1_utc = gArNavData.gps1.gps1_utc;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps1_utc;
}

void setArNavGps1Gps1Utc(const float gps1_utc)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps1.gps1_utc = gps1_utc;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps1Gps1Latitude()
{
    float gps1_latitude;

    mLock(eSendDataType_ARINC_NAV);
    gps1_latitude = gArNavData.gps1.gps1_latitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps1_latitude;
}

void setArNavGps1Gps1Latitude(const float gps1_latitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps1.gps1_latitude = gps1_latitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps1Gps1Longitude()
{
    float gps1_longitude;

    mLock(eSendDataType_ARINC_NAV);
    gps1_longitude = gArNavData.gps1.gps1_longitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps1_longitude;
}

void setArNavGps1Gps1Longitude(const float gps1_longitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps1.gps1_longitude = gps1_longitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps1Gps1Altitude()
{
    float gps1_altitude;

    mLock(eSendDataType_ARINC_NAV);
    gps1_altitude = gArNavData.gps1.gps1_altitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps1_altitude;
}

void setArNavGps1Gps1Altitude(const float gps1_altitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps1.gps1_altitude = gps1_altitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

bool getArNavGps1Gps1Status()
{
    bool gps1_status;

    mLock(eSendDataType_ARINC_NAV);
    gps1_status = gArNavData.gps1.gps1_status;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps1_status;
}

void setArNavGps1Gps1Status(const bool gps1_status)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps1.gps1_status = gps1_status;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps1Gps1GroundSpeed()
{
    float gps1_ground_speed;

    mLock(eSendDataType_ARINC_NAV);
    gps1_ground_speed = gArNavData.gps1.gps1_ground_speed;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps1_ground_speed;
}

void setArNavGps1Gps1GroundSpeed(const float gps1_ground_speed)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps1.gps1_ground_speed = gps1_ground_speed;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps1RawGps1Latitude()
{
    float raw_gps1_latitude;

    mLock(eSendDataType_ARINC_NAV);
    raw_gps1_latitude = gArNavData.gps1.raw_gps1_latitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_gps1_latitude;
}

void setArNavGps1RawGps1Latitude(const float raw_gps1_latitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps1.raw_gps1_latitude = raw_gps1_latitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps1RawGps1Longitude()
{
    float raw_gps1_longitude;

    mLock(eSendDataType_ARINC_NAV);
    raw_gps1_longitude = gArNavData.gps1.raw_gps1_longitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_gps1_longitude;
}

void setArNavGps1RawGps1Longitude(const float raw_gps1_longitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps1.raw_gps1_longitude = raw_gps1_longitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps1RawGps1Altitude()
{
    float raw_gps1_altitude;

    mLock(eSendDataType_ARINC_NAV);
    raw_gps1_altitude = gArNavData.gps1.raw_gps1_altitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_gps1_altitude;
}

void setArNavGps1RawGps1Altitude(const float raw_gps1_altitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps1.raw_gps1_altitude = raw_gps1_altitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

int getArNavGps1Gps1Svs()
{
    int gps1_svs;

    mLock(eSendDataType_ARINC_NAV);
    gps1_svs = gArNavData.gps1.gps1_svs;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps1_svs;
}

void setArNavGps1Gps1Svs(const int gps1_svs)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps1.gps1_svs = gps1_svs;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps2Gps2Utc()
{
    float gps2_utc;

    mLock(eSendDataType_ARINC_NAV);
    gps2_utc = gArNavData.gps2.gps2_utc;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps2_utc;
}

void setArNavGps2Gps2Utc(const float gps2_utc)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps2.gps2_utc = gps2_utc;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps2Gps2Latitude()
{
    float gps2_latitude;

    mLock(eSendDataType_ARINC_NAV);
    gps2_latitude = gArNavData.gps2.gps2_latitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps2_latitude;
}

void setArNavGps2Gps2Latitude(const float gps2_latitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps2.gps2_latitude = gps2_latitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps2Gps2Longitude()
{
    float gps2_longitude;

    mLock(eSendDataType_ARINC_NAV);
    gps2_longitude = gArNavData.gps2.gps2_longitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps2_longitude;
}

void setArNavGps2Gps2Longitude(const float gps2_longitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps2.gps2_longitude = gps2_longitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps2Gps2Altitude()
{
    float gps2_altitude;

    mLock(eSendDataType_ARINC_NAV);
    gps2_altitude = gArNavData.gps2.gps2_altitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps2_altitude;
}

void setArNavGps2Gps2Altitude(const float gps2_altitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps2.gps2_altitude = gps2_altitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

bool getArNavGps2Gps2Status()
{
    bool gps2_status;

    mLock(eSendDataType_ARINC_NAV);
    gps2_status = gArNavData.gps2.gps2_status;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps2_status;
}

void setArNavGps2Gps2Status(const bool gps2_status)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps2.gps2_status = gps2_status;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps2Gps2GroundSpeed()
{
    float gps2_ground_speed;

    mLock(eSendDataType_ARINC_NAV);
    gps2_ground_speed = gArNavData.gps2.gps2_ground_speed;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps2_ground_speed;
}

void setArNavGps2Gps2GroundSpeed(const float gps2_ground_speed)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps2.gps2_ground_speed = gps2_ground_speed;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps2RawGps2Latitude()
{
    float raw_gps2_latitude;

    mLock(eSendDataType_ARINC_NAV);
    raw_gps2_latitude = gArNavData.gps2.raw_gps2_latitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_gps2_latitude;
}

void setArNavGps2RawGps2Latitude(const float raw_gps2_latitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps2.raw_gps2_latitude = raw_gps2_latitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps2RawGps2Longitude()
{
    float raw_gps2_longitude;

    mLock(eSendDataType_ARINC_NAV);
    raw_gps2_longitude = gArNavData.gps2.raw_gps2_longitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_gps2_longitude;
}

void setArNavGps2RawGps2Longitude(const float raw_gps2_longitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps2.raw_gps2_longitude = raw_gps2_longitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

float getArNavGps2RawGps2Altitude()
{
    float raw_gps2_altitude;

    mLock(eSendDataType_ARINC_NAV);
    raw_gps2_altitude = gArNavData.gps2.raw_gps2_altitude;
    mUnLock(eSendDataType_ARINC_NAV);
    return raw_gps2_altitude;
}

void setArNavGps2RawGps2Altitude(const float raw_gps2_altitude)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps2.raw_gps2_altitude = raw_gps2_altitude;
    mUnLock(eSendDataType_ARINC_NAV);
}

int getArNavGps2Gps2Svs()
{
    int gps2_svs;

    mLock(eSendDataType_ARINC_NAV);
    gps2_svs = gArNavData.gps2.gps2_svs;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps2_svs;
}

void setArNavGps2Gps2Svs(const int gps2_svs)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps2.gps2_svs = gps2_svs;
    mUnLock(eSendDataType_ARINC_NAV);
}


ArDataNavTimerStruct getArNavTimer()
{
    ArDataNavTimerStruct timer;

    mLock(eSendDataType_ARINC_NAV);
    timer = gArNavData.timer;
    mUnLock(eSendDataType_ARINC_NAV);
    return timer;
}

ArDataNavLaunchStruct getArNavLaunch()
{
    ArDataNavLaunchStruct launch;

    mLock(eSendDataType_ARINC_NAV);
    launch = gArNavData.launch;
    mUnLock(eSendDataType_ARINC_NAV);
    return launch;
}

ArDataNavStatusStruct getArNavStatus()
{
    ArDataNavStatusStruct status;

    mLock(eSendDataType_ARINC_NAV);
    status = gArNavData.status;
    mUnLock(eSendDataType_ARINC_NAV);
    return status;
}

ArDataNavInsStruct getArNavIns()
{
    ArDataNavInsStruct ins;

    mLock(eSendDataType_ARINC_NAV);
    ins = gArNavData.ins;
    mUnLock(eSendDataType_ARINC_NAV);
    return ins;
}

ArDataNavGps1Struct getArNavGps1()
{
    ArDataNavGps1Struct gps1;

    mLock(eSendDataType_ARINC_NAV);
    gps1 = gArNavData.gps1;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps1;
}

ArDataNavGps2Struct getArNavGps2()
{
    ArDataNavGps2Struct gps2;

    mLock(eSendDataType_ARINC_NAV);
    gps2 = gArNavData.gps2;
    mUnLock(eSendDataType_ARINC_NAV);
    return gps2;
}


void setArNavTimer(const ArDataNavTimerStruct timer)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.timer = timer;
    mUnLock(eSendDataType_ARINC_NAV);
}

void setArNavLaunch(const ArDataNavLaunchStruct launch)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.launch = launch;
    mUnLock(eSendDataType_ARINC_NAV);
}

void setArNavStatus(const ArDataNavStatusStruct status)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.status = status;
    mUnLock(eSendDataType_ARINC_NAV);
}

void setArNavIns(const ArDataNavInsStruct ins)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.ins = ins;
    mUnLock(eSendDataType_ARINC_NAV);
}

void setArNavGps1(const ArDataNavGps1Struct gps1)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps1 = gps1;
    mUnLock(eSendDataType_ARINC_NAV);
}

void setArNavGps2(const ArDataNavGps2Struct gps2)
{
    mLock(eSendDataType_ARINC_NAV);
    gArNavData.gps2 = gps2;
    mUnLock(eSendDataType_ARINC_NAV);
}

///////////////////////////////////////////////////////
//Arinc Data set/get function for Guidance
///////////////////////////////////////////////////////
float getArGdeTimerTimeCounter()
{
    float time_counter;

    mLock(eSendDataType_ARINC_GDE);
    time_counter = gArGdeData.timer.time_counter / 0.02;
    mUnLock(eSendDataType_ARINC_GDE);
    return time_counter;
}

void setArGdeTimerTimeCounter(const float time_counter)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.timer.time_counter = time_counter * 0.02;
    mUnLock(eSendDataType_ARINC_GDE);
}

int getArGdePhasePhaseFlag()
{
    int phase_flag;

    mLock(eSendDataType_ARINC_GDE);
    phase_flag = gArGdeData.phase.phase_flag;
    mUnLock(eSendDataType_ARINC_GDE);
    return phase_flag;
}

void setArGdePhasePhaseFlag(const int phase_flag)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.phase.phase_flag = phase_flag;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeLaunchReleaseTimer()
{
    float release_timer;

    mLock(eSendDataType_ARINC_GDE);
    release_timer = gArGdeData.launch.release_timer;
    mUnLock(eSendDataType_ARINC_GDE);
    return release_timer;
}

void setArGdeLaunchReleaseTimer(const float release_timer)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.release_timer = release_timer;
    mUnLock(eSendDataType_ARINC_GDE);
}

int getArGdeLaunchGuidanceComputerStatus()
{
    int guidance_computer_status;

    mLock(eSendDataType_ARINC_GDE);
    guidance_computer_status = gArGdeData.launch.guidance_computer_status;
    mUnLock(eSendDataType_ARINC_GDE);
    return guidance_computer_status;
}

void setArGdeLaunchGuidanceComputerStatus(const int guidance_computer_status)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.guidance_computer_status = guidance_computer_status;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeLaunchInsGnssLatitude()
{
    float ins_gnss_latitude;

    mLock(eSendDataType_ARINC_GDE);
    ins_gnss_latitude = gArGdeData.launch.ins_gnss_latitude;
    mUnLock(eSendDataType_ARINC_GDE);
    return ins_gnss_latitude;
}

void setArGdeLaunchInsGnssLatitude(const float ins_gnss_latitude)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.ins_gnss_latitude = ins_gnss_latitude;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeLaunchInsGnssLongitude()
{
    float ins_gnss_longitude;

    mLock(eSendDataType_ARINC_GDE);
    ins_gnss_longitude = gArGdeData.launch.ins_gnss_longitude;
    mUnLock(eSendDataType_ARINC_GDE);
    return ins_gnss_longitude;
}

void setArGdeLaunchInsGnssLongitude(const float ins_gnss_longitude)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.ins_gnss_longitude = ins_gnss_longitude;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeLaunchInsGnssAltitude()
{
    float ins_gnss_altitude;

    mLock(eSendDataType_ARINC_GDE);
    ins_gnss_altitude = gArGdeData.launch.ins_gnss_altitude;
    mUnLock(eSendDataType_ARINC_GDE);
    return ins_gnss_altitude;
}

void setArGdeLaunchInsGnssAltitude(const float ins_gnss_altitude)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.ins_gnss_altitude = ins_gnss_altitude;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeLaunchGroundVelocityU()
{
    float ground_velocity_u;

    mLock(eSendDataType_ARINC_GDE);
    ground_velocity_u = gArGdeData.launch.ground_velocity_u;
    mUnLock(eSendDataType_ARINC_GDE);
    return ground_velocity_u;
}

void setArGdeLaunchGroundVelocityU(const float ground_velocity_u)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.ground_velocity_u = ground_velocity_u;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeLaunchGroundVelocityV()
{
    float ground_velocity_v;

    mLock(eSendDataType_ARINC_GDE);
    ground_velocity_v = gArGdeData.launch.ground_velocity_v;
    mUnLock(eSendDataType_ARINC_GDE);
    return ground_velocity_v;
}

void setArGdeLaunchGroundVelocityV(const float ground_velocity_v)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.ground_velocity_v = ground_velocity_v;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeLaunchGroundVelocityW()
{
    float ground_velocity_w;

    mLock(eSendDataType_ARINC_GDE);
    ground_velocity_w = gArGdeData.launch.ground_velocity_w;
    mUnLock(eSendDataType_ARINC_GDE);
    return ground_velocity_w;
}

void setArGdeLaunchGroundVelocityW(const float ground_velocity_w)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.ground_velocity_w = ground_velocity_w;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeLaunchGroundSpeed()
{
    float ground_speed;

    mLock(eSendDataType_ARINC_GDE);
    ground_speed = gArGdeData.launch.ground_speed;
    mUnLock(eSendDataType_ARINC_GDE);
    return ground_speed;
}

void setArGdeLaunchGroundSpeed(const float ground_speed)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.ground_speed = ground_speed;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeLaunchQuaternion0()
{
    float quaternion0;

    mLock(eSendDataType_ARINC_GDE);
    quaternion0 = gArGdeData.launch.quaternion0;
    mUnLock(eSendDataType_ARINC_GDE);
    return quaternion0;
}

void setArGdeLaunchQuaternion0(const float quaternion0)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.quaternion0 = quaternion0;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeLaunchQuaternion1()
{
    float quaternion1;

    mLock(eSendDataType_ARINC_GDE);
    quaternion1 = gArGdeData.launch.quaternion1;
    mUnLock(eSendDataType_ARINC_GDE);
    return quaternion1;
}

void setArGdeLaunchQuaternion1(const float quaternion1)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.quaternion1 = quaternion1;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeLaunchQuaternion2()
{
    float quaternion2;

    mLock(eSendDataType_ARINC_GDE);
    quaternion2 = gArGdeData.launch.quaternion2;
    mUnLock(eSendDataType_ARINC_GDE);
    return quaternion2;
}

void setArGdeLaunchQuaternion2(const float quaternion2)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.quaternion2 = quaternion2;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeLaunchQuaternion3()
{
    float quaternion3;

    mLock(eSendDataType_ARINC_GDE);
    quaternion3 = gArGdeData.launch.quaternion3;
    mUnLock(eSendDataType_ARINC_GDE);
    return quaternion3;
}

void setArGdeLaunchQuaternion3(const float quaternion3)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch.quaternion3 = quaternion3;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeCommandAngleOfAttackCommand()
{
    float angle_of_attack_command;

    mLock(eSendDataType_ARINC_GDE);
    angle_of_attack_command = gArGdeData.command.angle_of_attack_command;
    mUnLock(eSendDataType_ARINC_GDE);
    return angle_of_attack_command;
}

void setArGdeCommandAngleOfAttackCommand(const float angle_of_attack_command)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command.angle_of_attack_command = angle_of_attack_command;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeCommandQuaternion0Command()
{
    float quaternion_0_command;

    mLock(eSendDataType_ARINC_GDE);
    quaternion_0_command = gArGdeData.command.quaternion_0_command;
    mUnLock(eSendDataType_ARINC_GDE);
    return quaternion_0_command;
}

void setArGdeCommandQuaternion0Command(const float quaternion_0_command)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command.quaternion_0_command = quaternion_0_command;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeCommandQuaternion1Command()
{
    float quaternion_1_command;

    mLock(eSendDataType_ARINC_GDE);
    quaternion_1_command = gArGdeData.command.quaternion_1_command;
    mUnLock(eSendDataType_ARINC_GDE);
    return quaternion_1_command;
}

void setArGdeCommandQuaternion1Command(const float quaternion_1_command)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command.quaternion_1_command = quaternion_1_command;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeCommandQuaternion2Command()
{
    float quaternion_2_command;

    mLock(eSendDataType_ARINC_GDE);
    quaternion_2_command = gArGdeData.command.quaternion_2_command;
    mUnLock(eSendDataType_ARINC_GDE);
    return quaternion_2_command;
}

void setArGdeCommandQuaternion2Command(const float quaternion_2_command)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command.quaternion_2_command = quaternion_2_command;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeCommandQuaternion3Command()
{
    float quaternion_3_command;

    mLock(eSendDataType_ARINC_GDE);
    quaternion_3_command = gArGdeData.command.quaternion_3_command;
    mUnLock(eSendDataType_ARINC_GDE);
    return quaternion_3_command;
}

void setArGdeCommandQuaternion3Command(const float quaternion_3_command)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command.quaternion_3_command = quaternion_3_command;
    mUnLock(eSendDataType_ARINC_GDE);
}

int getArGdeCommandRecoverSystemStatus()
{
    int recover_system_status;

    mLock(eSendDataType_ARINC_GDE);
    recover_system_status = gArGdeData.command.recover_system_status;
    mUnLock(eSendDataType_ARINC_GDE);
    return recover_system_status;
}

void setArGdeCommandRecoverSystemStatus(const int recover_system_status)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command.recover_system_status = recover_system_status;
    mUnLock(eSendDataType_ARINC_GDE);
}

bool getArGdeCommandSafetyProcessCommand()
{
    bool safety_process_command;

    mLock(eSendDataType_ARINC_GDE);
    safety_process_command = gArGdeData.command.safety_process_command;
    mUnLock(eSendDataType_ARINC_GDE);
    return safety_process_command;
}

void setArGdeCommandSafetyProcessCommand(const bool safety_process_command)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command.safety_process_command = safety_process_command;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeCommandAngleOfAttackCommandTimeHistory(const int index)
{
    float angle_of_attack_command_time_history;

    mLock(eSendDataType_ARINC_GDE);
    angle_of_attack_command_time_history = gArGdeData.command.angle_of_attack_command_time_history[index];
    mUnLock(eSendDataType_ARINC_GDE);
    return angle_of_attack_command_time_history;
}

void setArGdeCommandAngleOfAttackCommandTimeHistory(const int index, const float angle_of_attack_command_time_history)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command.angle_of_attack_command_time_history[index] = angle_of_attack_command_time_history;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeCommandQuaternion0CommandTimeHistory(const int index)
{
    float quaternion0_command_time_history;

    mLock(eSendDataType_ARINC_GDE);
    quaternion0_command_time_history = gArGdeData.command.quaternion0_command_time_history[index];
    mUnLock(eSendDataType_ARINC_GDE);
    return quaternion0_command_time_history;
}

void setArGdeCommandQuaternion0CommandTimeHistory(const int index, const float quaternion0_command_time_history)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command.quaternion0_command_time_history[index] = quaternion0_command_time_history;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeCommandQuaternion1CommandTimeHistory(const int index)
{
    float quaternion1_command_time_history;

    mLock(eSendDataType_ARINC_GDE);
    quaternion1_command_time_history = gArGdeData.command.quaternion1_command_time_history[index];
    mUnLock(eSendDataType_ARINC_GDE);
    return quaternion1_command_time_history;
}

void setArGdeCommandQuaternion1CommandTimeHistory(const int index, const float quaternion1_command_time_history)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command.quaternion1_command_time_history[index] = quaternion1_command_time_history;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeCommandQuaternion2CommandTimeHistory(const int index)
{
    float quaternion2_command_time_history;

    mLock(eSendDataType_ARINC_GDE);
    quaternion2_command_time_history = gArGdeData.command.quaternion2_command_time_history[index];
    mUnLock(eSendDataType_ARINC_GDE);
    return quaternion2_command_time_history;
}

void setArGdeCommandQuaternion2CommandTimeHistory(const int index, const float quaternion2_command_time_history)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command.quaternion2_command_time_history[index] = quaternion2_command_time_history;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeCommandQuaternion3CommandTimeHistory(const int index)
{
    float quaternion3_command_time_history;

    mLock(eSendDataType_ARINC_GDE);
    quaternion3_command_time_history = gArGdeData.command.quaternion3_command_time_history[index];
    mUnLock(eSendDataType_ARINC_GDE);
    return quaternion3_command_time_history;
}

void setArGdeCommandQuaternion3CommandTimeHistory(const int index, const float quaternion3_command_time_history)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command.quaternion3_command_time_history[index] = quaternion3_command_time_history;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation1()
{
    float geneticinformation1;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation1 = gArGdeData.gene.geneticinformation1;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation1;
}

void setArGdeGeneGeneticinformation1(const float geneticinformation1)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation1 = geneticinformation1;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation2()
{
    float geneticinformation2;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation2 = gArGdeData.gene.geneticinformation2;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation2;
}

void setArGdeGeneGeneticinformation2(const float geneticinformation2)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation2 = geneticinformation2;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation3()
{
    float geneticinformation3;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation3 = gArGdeData.gene.geneticinformation3;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation3;
}

void setArGdeGeneGeneticinformation3(const float geneticinformation3)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation3 = geneticinformation3;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation4()
{
    float geneticinformation4;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation4 = gArGdeData.gene.geneticinformation4;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation4;
}

void setArGdeGeneGeneticinformation4(const float geneticinformation4)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation4 = geneticinformation4;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation5()
{
    float geneticinformation5;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation5 = gArGdeData.gene.geneticinformation5;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation5;
}

void setArGdeGeneGeneticinformation5(const float geneticinformation5)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation5 = geneticinformation5;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation6()
{
    float geneticinformation6;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation6 = gArGdeData.gene.geneticinformation6;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation6;
}

void setArGdeGeneGeneticinformation6(const float geneticinformation6)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation6 = geneticinformation6;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation7()
{
    float geneticinformation7;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation7 = gArGdeData.gene.geneticinformation7;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation7;
}

void setArGdeGeneGeneticinformation7(const float geneticinformation7)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation7 = geneticinformation7;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation8()
{
    float geneticinformation8;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation8 = gArGdeData.gene.geneticinformation8;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation8;
}

void setArGdeGeneGeneticinformation8(const float geneticinformation8)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation8 = geneticinformation8;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation9()
{
    float geneticinformation9;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation9 = gArGdeData.gene.geneticinformation9;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation9;
}

void setArGdeGeneGeneticinformation9(const float geneticinformation9)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation9 = geneticinformation9;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation10()
{
    float geneticinformation10;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation10 = gArGdeData.gene.geneticinformation10;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation10;
}

void setArGdeGeneGeneticinformation10(const float geneticinformation10)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation10 = geneticinformation10;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation11()
{
    float geneticinformation11;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation11 = gArGdeData.gene.geneticinformation11;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation11;
}

void setArGdeGeneGeneticinformation11(const float geneticinformation11)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation11 = geneticinformation11;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation12()
{
    float geneticinformation12;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation12 = gArGdeData.gene.geneticinformation12;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation12;
}

void setArGdeGeneGeneticinformation12(const float geneticinformation12)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation12 = geneticinformation12;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation13()
{
    float geneticinformation13;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation13 = gArGdeData.gene.geneticinformation13;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation13;
}

void setArGdeGeneGeneticinformation13(const float geneticinformation13)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation13 = geneticinformation13;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation14()
{
    float geneticinformation14;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation14 = gArGdeData.gene.geneticinformation14;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation14;
}

void setArGdeGeneGeneticinformation14(const float geneticinformation14)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation14 = geneticinformation14;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation15()
{
    float geneticinformation15;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation15 = gArGdeData.gene.geneticinformation15;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation15;
}

void setArGdeGeneGeneticinformation15(const float geneticinformation15)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation15 = geneticinformation15;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation16()
{
    float geneticinformation16;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation16 = gArGdeData.gene.geneticinformation16;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation16;
}

void setArGdeGeneGeneticinformation16(const float geneticinformation16)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation16 = geneticinformation16;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation17()
{
    float geneticinformation17;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation17 = gArGdeData.gene.geneticinformation17;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation17;
}

void setArGdeGeneGeneticinformation17(const float geneticinformation17)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation17 = geneticinformation17;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation18()
{
    float geneticinformation18;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation18 = gArGdeData.gene.geneticinformation18;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation18;
}

void setArGdeGeneGeneticinformation18(const float geneticinformation18)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation18 = geneticinformation18;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation19()
{
    float geneticinformation19;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation19 = gArGdeData.gene.geneticinformation19;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation19;
}

void setArGdeGeneGeneticinformation19(const float geneticinformation19)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation19 = geneticinformation19;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation20()
{
    float geneticinformation20;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation20 = gArGdeData.gene.geneticinformation20;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation20;
}

void setArGdeGeneGeneticinformation20(const float geneticinformation20)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation20 = geneticinformation20;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation21()
{
    float geneticinformation21;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation21 = gArGdeData.gene.geneticinformation21;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation21;
}

void setArGdeGeneGeneticinformation21(const float geneticinformation21)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation21 = geneticinformation21;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation22()
{
    float geneticinformation22;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation22 = gArGdeData.gene.geneticinformation22;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation22;
}

void setArGdeGeneGeneticinformation22(const float geneticinformation22)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation22 = geneticinformation22;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation23()
{
    float geneticinformation23;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation23 = gArGdeData.gene.geneticinformation23;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation23;
}

void setArGdeGeneGeneticinformation23(const float geneticinformation23)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation23 = geneticinformation23;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation24()
{
    float geneticinformation24;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation24 = gArGdeData.gene.geneticinformation24;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation24;
}

void setArGdeGeneGeneticinformation24(const float geneticinformation24)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation24 = geneticinformation24;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation25()
{
    float geneticinformation25;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation25 = gArGdeData.gene.geneticinformation25;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation25;
}

void setArGdeGeneGeneticinformation25(const float geneticinformation25)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation25 = geneticinformation25;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation26()
{
    float geneticinformation26;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation26 = gArGdeData.gene.geneticinformation26;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation26;
}

void setArGdeGeneGeneticinformation26(const float geneticinformation26)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation26 = geneticinformation26;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation27()
{
    float geneticinformation27;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation27 = gArGdeData.gene.geneticinformation27;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation27;
}

void setArGdeGeneGeneticinformation27(const float geneticinformation27)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation27 = geneticinformation27;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformation28()
{
    float geneticinformation28;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformation28 = gArGdeData.gene.geneticinformation28;
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformation28;
}

void setArGdeGeneGeneticinformation28(const float geneticinformation28)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformation28 = geneticinformation28;
    mUnLock(eSendDataType_ARINC_GDE);
}

float getArGdeGeneGeneticinformationforthecalculation(const int index1, const int index2, const int index3)
{
    float geneticinformationforthecalculation;

    mLock(eSendDataType_ARINC_GDE);
    geneticinformationforthecalculation = gArGdeData.gene.geneticinformationforthecalculation[index1][index2][index3];
    mUnLock(eSendDataType_ARINC_GDE);
    return geneticinformationforthecalculation;
}

void setArGdeGeneGeneticinformationforthecalculation(const int index1, const int index2, const int index3, const float geneticinformationforthecalculation)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene.geneticinformationforthecalculation[index1][index2][index3] = geneticinformationforthecalculation;
    mUnLock(eSendDataType_ARINC_GDE);
}


ArDataGdeTimerStruct getArGdeTimer()
{
    ArDataGdeTimerStruct timer;

    mLock(eSendDataType_ARINC_GDE);
    timer = gArGdeData.timer;
    mUnLock(eSendDataType_ARINC_GDE);
    return timer;
}

ArDataGdePhaseStruct getArGdePhase()
{
    ArDataGdePhaseStruct phase;

    mLock(eSendDataType_ARINC_GDE);
    phase = gArGdeData.phase;
    mUnLock(eSendDataType_ARINC_GDE);
    return phase;
}

ArDataGdeLaunchStruct getArGdeLaunch()
{
    ArDataGdeLaunchStruct launch;

    mLock(eSendDataType_ARINC_GDE);
    launch = gArGdeData.launch;
    mUnLock(eSendDataType_ARINC_GDE);
    return launch;
}

ArDataGdeCommandStruct getArGdeCommand()
{
    ArDataGdeCommandStruct command;

    mLock(eSendDataType_ARINC_GDE);
    command = gArGdeData.command;
    mUnLock(eSendDataType_ARINC_GDE);
    return command;
}

ArDataGdeGeneStruct getArGdeGene()
{
    ArDataGdeGeneStruct gene;

    mLock(eSendDataType_ARINC_GDE);
    gene = gArGdeData.gene;
    mUnLock(eSendDataType_ARINC_GDE);
    return gene;
}


void setArGdeTimer(const ArDataGdeTimerStruct timer)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.timer = timer;
    mUnLock(eSendDataType_ARINC_GDE);
}

void setArGdePhase(const ArDataGdePhaseStruct phase)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.phase = phase;
    mUnLock(eSendDataType_ARINC_GDE);
}

void setArGdeLaunch(const ArDataGdeLaunchStruct launch)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.launch = launch;
    mUnLock(eSendDataType_ARINC_GDE);
}

void setArGdeCommand(const ArDataGdeCommandStruct command)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.command = command;
    mUnLock(eSendDataType_ARINC_GDE);
}

void setArGdeGene(const ArDataGdeGeneStruct gene)
{
    mLock(eSendDataType_ARINC_GDE);
    gArGdeData.gene = gene;
    mUnLock(eSendDataType_ARINC_GDE);
}

///////////////////////////////////////////////////////
//Arinc Data set/get function for Control
///////////////////////////////////////////////////////
int getArCtrPhasePhaseFlag()
{
    int phase_flag;

    mLock(eSendDataType_ARINC_CTR);
    phase_flag = gArCtrData.phase.phase_flag;
    mUnLock(eSendDataType_ARINC_CTR);
    return phase_flag;
}

void setArCtrPhasePhaseFlag(const int phase_flag)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.phase.phase_flag = phase_flag;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrTimerControlTimeCounter()
{
    float control_time_counter;

    mLock(eSendDataType_ARINC_CTR);
    control_time_counter = gArCtrData.timer.control_time_counter;
    mUnLock(eSendDataType_ARINC_CTR);
    return control_time_counter;
}

void setArCtrTimerControlTimeCounter(const float control_time_counter)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.timer.control_time_counter = control_time_counter;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrTimerTimeLog()
{
    float time_log;

    mLock(eSendDataType_ARINC_CTR);
    time_log = gArCtrData.timer.time_log;
    mUnLock(eSendDataType_ARINC_CTR);
    return time_log;
}

void setArCtrTimerTimeLog(const float time_log)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.timer.time_log = time_log;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchReleaseCommand()
{
    bool release_command;

    mLock(eSendDataType_ARINC_CTR);
    release_command = gArCtrData.launch.release_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return release_command;
}

void setArCtrLaunchReleaseCommand(const bool release_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.release_command = release_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

int getArCtrLaunchControlComputerStatus()
{
    int control_computer_status;

    mLock(eSendDataType_ARINC_CTR);
    control_computer_status = gArCtrData.launch.control_computer_status;
    mUnLock(eSendDataType_ARINC_CTR);
    return control_computer_status;
}

void setArCtrLaunchControlComputerStatus(const int control_computer_status)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.control_computer_status = control_computer_status;
    mUnLock(eSendDataType_ARINC_CTR);
}

int getArCtrLaunchRecoveryCommand()
{
    int recovery_command;

    mLock(eSendDataType_ARINC_CTR);
    recovery_command = gArCtrData.launch.recovery_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return recovery_command;
}

void setArCtrLaunchRecoveryCommand(const int recovery_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.recovery_command = recovery_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchAirbagDoorCommand()
{
    bool airbag_door_command;

    mLock(eSendDataType_ARINC_CTR);
    airbag_door_command = gArCtrData.launch.airbag_door_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return airbag_door_command;
}

void setArCtrLaunchAirbagDoorCommand(const bool airbag_door_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.airbag_door_command = airbag_door_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchAirbagCommand()
{
    bool airbag_command;

    mLock(eSendDataType_ARINC_CTR);
    airbag_command = gArCtrData.launch.airbag_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return airbag_command;
}

void setArCtrLaunchAirbagCommand(const bool airbag_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.airbag_command = airbag_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchDrogueChuteCommand()
{
    bool drogue_chute_command;

    mLock(eSendDataType_ARINC_CTR);
    drogue_chute_command = gArCtrData.launch.drogue_chute_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return drogue_chute_command;
}

void setArCtrLaunchDrogueChuteCommand(const bool drogue_chute_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.drogue_chute_command = drogue_chute_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchMainChuteCommand()
{
    bool main_chute_command;

    mLock(eSendDataType_ARINC_CTR);
    main_chute_command = gArCtrData.launch.main_chute_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return main_chute_command;
}

void setArCtrLaunchMainChuteCommand(const bool main_chute_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.main_chute_command = main_chute_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchElevonLCommand()
{
    float elevon_l_command;

    mLock(eSendDataType_ARINC_CTR);
    elevon_l_command = gArCtrData.launch.elevon_l_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return elevon_l_command;
}

void setArCtrLaunchElevonLCommand(const float elevon_l_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.elevon_l_command = elevon_l_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchElevonLAnswer()
{
    float elevon_l_answer;

    mLock(eSendDataType_ARINC_CTR);
    elevon_l_answer = gArCtrData.launch.elevon_l_answer;
    mUnLock(eSendDataType_ARINC_CTR);
    return elevon_l_answer;
}

void setArCtrLaunchElevonLAnswer(const float elevon_l_answer)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.elevon_l_answer = elevon_l_answer;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchElevonRCommand()
{
    float elevon_r_command;

    mLock(eSendDataType_ARINC_CTR);
    elevon_r_command = gArCtrData.launch.elevon_r_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return elevon_r_command;
}

void setArCtrLaunchElevonRCommand(const float elevon_r_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.elevon_r_command = elevon_r_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchElevonRAnswer()
{
    float elevon_r_answer;

    mLock(eSendDataType_ARINC_CTR);
    elevon_r_answer = gArCtrData.launch.elevon_r_answer;
    mUnLock(eSendDataType_ARINC_CTR);
    return elevon_r_answer;
}

void setArCtrLaunchElevonRAnswer(const float elevon_r_answer)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.elevon_r_answer = elevon_r_answer;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchRudderLRCommand()
{
    float rudder_l_r_command;

    mLock(eSendDataType_ARINC_CTR);
    rudder_l_r_command = gArCtrData.launch.rudder_l_r_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return rudder_l_r_command;
}

void setArCtrLaunchRudderLRCommand(const float rudder_l_r_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.rudder_l_r_command = rudder_l_r_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchRudderLRAnswer()
{
    float rudder_l_r_answer;

    mLock(eSendDataType_ARINC_CTR);
    rudder_l_r_answer = gArCtrData.launch.rudder_l_r_answer;
    mUnLock(eSendDataType_ARINC_CTR);
    return rudder_l_r_answer;
}

void setArCtrLaunchRudderLRAnswer(const float rudder_l_r_answer)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.rudder_l_r_answer = rudder_l_r_answer;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchSElevonLCommand()
{
    float s_elevon_l_command;

    mLock(eSendDataType_ARINC_CTR);
    s_elevon_l_command = gArCtrData.launch.s_elevon_l_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return s_elevon_l_command;
}

void setArCtrLaunchSElevonLCommand(const float s_elevon_l_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.s_elevon_l_command = s_elevon_l_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchSElevonRCommand()
{
    float s_elevon_r_command;

    mLock(eSendDataType_ARINC_CTR);
    s_elevon_r_command = gArCtrData.launch.s_elevon_r_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return s_elevon_r_command;
}

void setArCtrLaunchSElevonRCommand(const float s_elevon_r_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.s_elevon_r_command = s_elevon_r_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchSRudderLRCommand()
{
    float s_rudder_l_r_command;

    mLock(eSendDataType_ARINC_CTR);
    s_rudder_l_r_command = gArCtrData.launch.s_rudder_l_r_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return s_rudder_l_r_command;
}

void setArCtrLaunchSRudderLRCommand(const float s_rudder_l_r_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.s_rudder_l_r_command = s_rudder_l_r_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

int getArCtrLaunchRcsCommand()
{
    int rcs_command;

    mLock(eSendDataType_ARINC_CTR);
    rcs_command = gArCtrData.launch.rcs_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return rcs_command;
}

void setArCtrLaunchRcsCommand(const int rcs_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.rcs_command = rcs_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchRcs1Command()
{
    bool rcs_1_command;

    mLock(eSendDataType_ARINC_CTR);
    rcs_1_command = gArCtrData.launch.rcs_1_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return rcs_1_command;
}

void setArCtrLaunchRcs1Command(const bool rcs_1_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.rcs_1_command = rcs_1_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchRcs2Command()
{
    bool rcs_2_command;

    mLock(eSendDataType_ARINC_CTR);
    rcs_2_command = gArCtrData.launch.rcs_2_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return rcs_2_command;
}

void setArCtrLaunchRcs2Command(const bool rcs_2_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.rcs_2_command = rcs_2_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchRcs3Command()
{
    bool rcs_3_command;

    mLock(eSendDataType_ARINC_CTR);
    rcs_3_command = gArCtrData.launch.rcs_3_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return rcs_3_command;
}

void setArCtrLaunchRcs3Command(const bool rcs_3_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.rcs_3_command = rcs_3_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchRcs4Command()
{
    bool rcs_4_command;

    mLock(eSendDataType_ARINC_CTR);
    rcs_4_command = gArCtrData.launch.rcs_4_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return rcs_4_command;
}

void setArCtrLaunchRcs4Command(const bool rcs_4_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.rcs_4_command = rcs_4_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchRcs5Command()
{
    bool rcs_5_command;

    mLock(eSendDataType_ARINC_CTR);
    rcs_5_command = gArCtrData.launch.rcs_5_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return rcs_5_command;
}

void setArCtrLaunchRcs5Command(const bool rcs_5_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.rcs_5_command = rcs_5_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchRcs6Command()
{
    bool rcs_6_command;

    mLock(eSendDataType_ARINC_CTR);
    rcs_6_command = gArCtrData.launch.rcs_6_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return rcs_6_command;
}

void setArCtrLaunchRcs6Command(const bool rcs_6_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.rcs_6_command = rcs_6_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchAngleOfGimbalPitchCommand()
{
    float angle_of_gimbal_pitch_command;

    mLock(eSendDataType_ARINC_CTR);
    angle_of_gimbal_pitch_command = gArCtrData.launch.angle_of_gimbal_pitch_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return angle_of_gimbal_pitch_command;
}

void setArCtrLaunchAngleOfGimbalPitchCommand(const float angle_of_gimbal_pitch_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.angle_of_gimbal_pitch_command = angle_of_gimbal_pitch_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchAngleOfGimbalYawCommand()
{
    float angle_of_gimbal_yaw_command;

    mLock(eSendDataType_ARINC_CTR);
    angle_of_gimbal_yaw_command = gArCtrData.launch.angle_of_gimbal_yaw_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return angle_of_gimbal_yaw_command;
}

void setArCtrLaunchAngleOfGimbalYawCommand(const float angle_of_gimbal_yaw_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.angle_of_gimbal_yaw_command = angle_of_gimbal_yaw_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchRollPGain()
{
    float roll_p_gain;

    mLock(eSendDataType_ARINC_CTR);
    roll_p_gain = gArCtrData.launch.roll_p_gain;
    mUnLock(eSendDataType_ARINC_CTR);
    return roll_p_gain;
}

void setArCtrLaunchRollPGain(const float roll_p_gain)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.roll_p_gain = roll_p_gain;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchPitchPGain()
{
    float pitch_p_gain;

    mLock(eSendDataType_ARINC_CTR);
    pitch_p_gain = gArCtrData.launch.pitch_p_gain;
    mUnLock(eSendDataType_ARINC_CTR);
    return pitch_p_gain;
}

void setArCtrLaunchPitchPGain(const float pitch_p_gain)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.pitch_p_gain = pitch_p_gain;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchYawPGain()
{
    float yaw_p_gain;

    mLock(eSendDataType_ARINC_CTR);
    yaw_p_gain = gArCtrData.launch.yaw_p_gain;
    mUnLock(eSendDataType_ARINC_CTR);
    return yaw_p_gain;
}

void setArCtrLaunchYawPGain(const float yaw_p_gain)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.yaw_p_gain = yaw_p_gain;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchAngleOfAttackPGain()
{
    float angle_of_attack_p_gain;

    mLock(eSendDataType_ARINC_CTR);
    angle_of_attack_p_gain = gArCtrData.launch.angle_of_attack_p_gain;
    mUnLock(eSendDataType_ARINC_CTR);
    return angle_of_attack_p_gain;
}

void setArCtrLaunchAngleOfAttackPGain(const float angle_of_attack_p_gain)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.angle_of_attack_p_gain = angle_of_attack_p_gain;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchSideSlipAnglePGain()
{
    float side_slip_angle_p_gain;

    mLock(eSendDataType_ARINC_CTR);
    side_slip_angle_p_gain = gArCtrData.launch.side_slip_angle_p_gain;
    mUnLock(eSendDataType_ARINC_CTR);
    return side_slip_angle_p_gain;
}

void setArCtrLaunchSideSlipAnglePGain(const float side_slip_angle_p_gain)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.side_slip_angle_p_gain = side_slip_angle_p_gain;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchRollDGain()
{
    float roll_d_gain;

    mLock(eSendDataType_ARINC_CTR);
    roll_d_gain = gArCtrData.launch.roll_d_gain;
    mUnLock(eSendDataType_ARINC_CTR);
    return roll_d_gain;
}

void setArCtrLaunchRollDGain(const float roll_d_gain)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.roll_d_gain = roll_d_gain;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchPitchDGain()
{
    float pitch_d_gain;

    mLock(eSendDataType_ARINC_CTR);
    pitch_d_gain = gArCtrData.launch.pitch_d_gain;
    mUnLock(eSendDataType_ARINC_CTR);
    return pitch_d_gain;
}

void setArCtrLaunchPitchDGain(const float pitch_d_gain)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.pitch_d_gain = pitch_d_gain;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchYawDGain()
{
    float yaw_d_gain;

    mLock(eSendDataType_ARINC_CTR);
    yaw_d_gain = gArCtrData.launch.yaw_d_gain;
    mUnLock(eSendDataType_ARINC_CTR);
    return yaw_d_gain;
}

void setArCtrLaunchYawDGain(const float yaw_d_gain)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.yaw_d_gain = yaw_d_gain;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchAngleOfAttackDGain()
{
    float angle_of_attack_d_gain;

    mLock(eSendDataType_ARINC_CTR);
    angle_of_attack_d_gain = gArCtrData.launch.angle_of_attack_d_gain;
    mUnLock(eSendDataType_ARINC_CTR);
    return angle_of_attack_d_gain;
}

void setArCtrLaunchAngleOfAttackDGain(const float angle_of_attack_d_gain)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.angle_of_attack_d_gain = angle_of_attack_d_gain;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchSideSlipAngleDGain()
{
    float side_slip_angle_d_gain;

    mLock(eSendDataType_ARINC_CTR);
    side_slip_angle_d_gain = gArCtrData.launch.side_slip_angle_d_gain;
    mUnLock(eSendDataType_ARINC_CTR);
    return side_slip_angle_d_gain;
}

void setArCtrLaunchSideSlipAngleDGain(const float side_slip_angle_d_gain)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.side_slip_angle_d_gain = side_slip_angle_d_gain;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchSystemFailureFlag()
{
    bool system_failure_flag;

    mLock(eSendDataType_ARINC_CTR);
    system_failure_flag = gArCtrData.launch.system_failure_flag;
    mUnLock(eSendDataType_ARINC_CTR);
    return system_failure_flag;
}

void setArCtrLaunchSystemFailureFlag(const bool system_failure_flag)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.system_failure_flag = system_failure_flag;
    mUnLock(eSendDataType_ARINC_CTR);
}

bool getArCtrLaunchLowAccuracyFlag()
{
    bool low_accuracy_flag;

    mLock(eSendDataType_ARINC_CTR);
    low_accuracy_flag = gArCtrData.launch.low_accuracy_flag;
    mUnLock(eSendDataType_ARINC_CTR);
    return low_accuracy_flag;
}

void setArCtrLaunchLowAccuracyFlag(const bool low_accuracy_flag)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.low_accuracy_flag = low_accuracy_flag;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchAirspeed()
{
    float airspeed;

    mLock(eSendDataType_ARINC_CTR);
    airspeed = gArCtrData.launch.airspeed;
    mUnLock(eSendDataType_ARINC_CTR);
    return airspeed;
}

void setArCtrLaunchAirspeed(const float airspeed)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.airspeed = airspeed;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchAngleOfAttack()
{
    float angle_of_attack;

    mLock(eSendDataType_ARINC_CTR);
    angle_of_attack = gArCtrData.launch.angle_of_attack;
    mUnLock(eSendDataType_ARINC_CTR);
    return angle_of_attack;
}

void setArCtrLaunchAngleOfAttack(const float angle_of_attack)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.angle_of_attack = angle_of_attack;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchMach()
{
    float mach;

    mLock(eSendDataType_ARINC_CTR);
    mach = gArCtrData.launch.mach;
    mUnLock(eSendDataType_ARINC_CTR);
    return mach;
}

void setArCtrLaunchMach(const float mach)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.mach = mach;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchSideSlipAngle()
{
    float side_slip_angle;

    mLock(eSendDataType_ARINC_CTR);
    side_slip_angle = gArCtrData.launch.side_slip_angle;
    mUnLock(eSendDataType_ARINC_CTR);
    return side_slip_angle;
}

void setArCtrLaunchSideSlipAngle(const float side_slip_angle)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.side_slip_angle = side_slip_angle;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchRollRate()
{
    float roll_rate;

    mLock(eSendDataType_ARINC_CTR);
    roll_rate = gArCtrData.launch.roll_rate;
    mUnLock(eSendDataType_ARINC_CTR);
    return roll_rate;
}

void setArCtrLaunchRollRate(const float roll_rate)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.roll_rate = roll_rate;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchPitchRate()
{
    float pitch_rate;

    mLock(eSendDataType_ARINC_CTR);
    pitch_rate = gArCtrData.launch.pitch_rate;
    mUnLock(eSendDataType_ARINC_CTR);
    return pitch_rate;
}

void setArCtrLaunchPitchRate(const float pitch_rate)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.pitch_rate = pitch_rate;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchYawRate()
{
    float yaw_rate;

    mLock(eSendDataType_ARINC_CTR);
    yaw_rate = gArCtrData.launch.yaw_rate;
    mUnLock(eSendDataType_ARINC_CTR);
    return yaw_rate;
}

void setArCtrLaunchYawRate(const float yaw_rate)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.yaw_rate = yaw_rate;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchRoll()
{
    float roll;

    mLock(eSendDataType_ARINC_CTR);
    roll = gArCtrData.launch.roll;
    mUnLock(eSendDataType_ARINC_CTR);
    return roll;
}

void setArCtrLaunchRoll(const float roll)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.roll = roll;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchPitch()
{
    float pitch;

    mLock(eSendDataType_ARINC_CTR);
    pitch = gArCtrData.launch.pitch;
    mUnLock(eSendDataType_ARINC_CTR);
    return pitch;
}

void setArCtrLaunchPitch(const float pitch)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.pitch = pitch;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchYaw()
{
    float yaw;

    mLock(eSendDataType_ARINC_CTR);
    yaw = gArCtrData.launch.yaw;
    mUnLock(eSendDataType_ARINC_CTR);
    return yaw;
}

void setArCtrLaunchYaw(const float yaw)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.yaw = yaw;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchQuaternion0()
{
    float quaternion0;

    mLock(eSendDataType_ARINC_CTR);
    quaternion0 = gArCtrData.launch.quaternion0;
    mUnLock(eSendDataType_ARINC_CTR);
    return quaternion0;
}

void setArCtrLaunchQuaternion0(const float quaternion0)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.quaternion0 = quaternion0;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchQuaternion1()
{
    float quaternion1;

    mLock(eSendDataType_ARINC_CTR);
    quaternion1 = gArCtrData.launch.quaternion1;
    mUnLock(eSendDataType_ARINC_CTR);
    return quaternion1;
}

void setArCtrLaunchQuaternion1(const float quaternion1)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.quaternion1 = quaternion1;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchQuaternion2()
{
    float quaternion2;

    mLock(eSendDataType_ARINC_CTR);
    quaternion2 = gArCtrData.launch.quaternion2;
    mUnLock(eSendDataType_ARINC_CTR);
    return quaternion2;
}

void setArCtrLaunchQuaternion2(const float quaternion2)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.quaternion2 = quaternion2;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchQuaternion3()
{
    float quaternion3;

    mLock(eSendDataType_ARINC_CTR);
    quaternion3 = gArCtrData.launch.quaternion3;
    mUnLock(eSendDataType_ARINC_CTR);
    return quaternion3;
}

void setArCtrLaunchQuaternion3(const float quaternion3)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.quaternion3 = quaternion3;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchInsGnssAltitude()
{
    float ins_gnss_altitude;

    mLock(eSendDataType_ARINC_CTR);
    ins_gnss_altitude = gArCtrData.launch.ins_gnss_altitude;
    mUnLock(eSendDataType_ARINC_CTR);
    return ins_gnss_altitude;
}

void setArCtrLaunchInsGnssAltitude(const float ins_gnss_altitude)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.ins_gnss_altitude = ins_gnss_altitude;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchGroundVelocityU()
{
    float ground_velocity_u;

    mLock(eSendDataType_ARINC_CTR);
    ground_velocity_u = gArCtrData.launch.ground_velocity_u;
    mUnLock(eSendDataType_ARINC_CTR);
    return ground_velocity_u;
}

void setArCtrLaunchGroundVelocityU(const float ground_velocity_u)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.ground_velocity_u = ground_velocity_u;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchGroundVelocityV()
{
    float ground_velocity_v;

    mLock(eSendDataType_ARINC_CTR);
    ground_velocity_v = gArCtrData.launch.ground_velocity_v;
    mUnLock(eSendDataType_ARINC_CTR);
    return ground_velocity_v;
}

void setArCtrLaunchGroundVelocityV(const float ground_velocity_v)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.ground_velocity_v = ground_velocity_v;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchGroundVelocityW()
{
    float ground_velocity_w;

    mLock(eSendDataType_ARINC_CTR);
    ground_velocity_w = gArCtrData.launch.ground_velocity_w;
    mUnLock(eSendDataType_ARINC_CTR);
    return ground_velocity_w;
}

void setArCtrLaunchGroundVelocityW(const float ground_velocity_w)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.ground_velocity_w = ground_velocity_w;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchAngleOfAttackCommand()
{
    float angle_of_attack_command;

    mLock(eSendDataType_ARINC_CTR);
    angle_of_attack_command = gArCtrData.launch.angle_of_attack_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return angle_of_attack_command;
}

void setArCtrLaunchAngleOfAttackCommand(const float angle_of_attack_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.angle_of_attack_command = angle_of_attack_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchQuaternion1Command()
{
    float quaternion1_command;

    mLock(eSendDataType_ARINC_CTR);
    quaternion1_command = gArCtrData.launch.quaternion1_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return quaternion1_command;
}

void setArCtrLaunchQuaternion1Command(const float quaternion1_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.quaternion1_command = quaternion1_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchQuaternion2Command()
{
    float quaternion2_command;

    mLock(eSendDataType_ARINC_CTR);
    quaternion2_command = gArCtrData.launch.quaternion2_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return quaternion2_command;
}

void setArCtrLaunchQuaternion2Command(const float quaternion2_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.quaternion2_command = quaternion2_command;
    mUnLock(eSendDataType_ARINC_CTR);
}

float getArCtrLaunchQuaternion3Command()
{
    float quaternion3_command;

    mLock(eSendDataType_ARINC_CTR);
    quaternion3_command = gArCtrData.launch.quaternion3_command;
    mUnLock(eSendDataType_ARINC_CTR);
    return quaternion3_command;
}

void setArCtrLaunchQuaternion3Command(const float quaternion3_command)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch.quaternion3_command = quaternion3_command;
    mUnLock(eSendDataType_ARINC_CTR);
}


ArDataCtrPhaseStruct getArCtrPhase()
{
    ArDataCtrPhaseStruct phase;

    mLock(eSendDataType_ARINC_CTR);
    phase = gArCtrData.phase;
    mUnLock(eSendDataType_ARINC_CTR);
    return phase;
}

ArDataCtrTimerStruct getArCtrTimer()
{
    ArDataCtrTimerStruct timer;

    mLock(eSendDataType_ARINC_CTR);
    timer = gArCtrData.timer;
    mUnLock(eSendDataType_ARINC_CTR);
    return timer;
}

ArDataCtrLaunchStruct getArCtrLaunch()
{
    ArDataCtrLaunchStruct launch;

    mLock(eSendDataType_ARINC_CTR);
    launch = gArCtrData.launch;
    mUnLock(eSendDataType_ARINC_CTR);
    return launch;
}


void setArCtrPhase(const ArDataCtrPhaseStruct phase)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.phase = phase;
    mUnLock(eSendDataType_ARINC_CTR);
}

void setArCtrTimer(const ArDataCtrTimerStruct timer)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.timer = timer;
    mUnLock(eSendDataType_ARINC_CTR);
}

void setArCtrLaunch(const ArDataCtrLaunchStruct launch)
{
    mLock(eSendDataType_ARINC_CTR);
    gArCtrData.launch = launch;
    mUnLock(eSendDataType_ARINC_CTR);
}

///////////////////////////////////////////////////////
//Arinc Data set/get function for Communication
///////////////////////////////////////////////////////
float getArComTimerCommunicationTimeCounter()
{
    float communication_time_counter;

    mLock(eSendDataType_ARINC_COM);
    communication_time_counter = gArComData.timer.communication_time_counter;
    mUnLock(eSendDataType_ARINC_COM);
    return communication_time_counter;
}

void setArComTimerCommunicationTimeCounter(const float communication_time_counter)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.timer.communication_time_counter = communication_time_counter;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComLaunchReleaseCommandStatus()
{
    bool release_command_status;

    mLock(eSendDataType_ARINC_COM);
    release_command_status = gArComData.launch.release_command_status;
    mUnLock(eSendDataType_ARINC_COM);
    return release_command_status;
}

void setArComLaunchReleaseCommandStatus(const bool release_command_status)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.launch.release_command_status = release_command_status;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComLaunchIgnitionStatus()
{
    bool ignition_status;

    mLock(eSendDataType_ARINC_COM);
    ignition_status = gArComData.launch.ignition_status;
    mUnLock(eSendDataType_ARINC_COM);
    return ignition_status;
}

void setArComLaunchIgnitionStatus(const bool ignition_status)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.launch.ignition_status = ignition_status;
    mUnLock(eSendDataType_ARINC_COM);
}

int getArComStatusCommunicationCommandStatus()
{
    int communication_command_status;

    mLock(eSendDataType_ARINC_COM);
    communication_command_status = gArComData.status.communication_command_status;
    mUnLock(eSendDataType_ARINC_COM);
    return communication_command_status;
}

void setArComStatusCommunicationCommandStatus(const int communication_command_status)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.communication_command_status = communication_command_status;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusEmergencyStopCommandA()
{
    bool emergency_stop_command_a;

    mLock(eSendDataType_ARINC_COM);
    emergency_stop_command_a = gArComData.status.emergency_stop_command_a;
    mUnLock(eSendDataType_ARINC_COM);
    return emergency_stop_command_a;
}

void setArComStatusEmergencyStopCommandA(const bool emergency_stop_command_a)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.emergency_stop_command_a = emergency_stop_command_a;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusUplinkEstablishmentConfirmation()
{
    bool uplink_establishment_confirmation;

    mLock(eSendDataType_ARINC_COM);
    uplink_establishment_confirmation = gArComData.status.uplink_establishment_confirmation;
    mUnLock(eSendDataType_ARINC_COM);
    return uplink_establishment_confirmation;
}

void setArComStatusUplinkEstablishmentConfirmation(const bool uplink_establishment_confirmation)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.uplink_establishment_confirmation = uplink_establishment_confirmation;
    mUnLock(eSendDataType_ARINC_COM);
}

int getArComStatusSystemCommands()
{
    int system_commands;

    mLock(eSendDataType_ARINC_COM);
    system_commands = gArComData.status.system_commands;
    mUnLock(eSendDataType_ARINC_COM);
    return system_commands;
}

void setArComStatusSystemCommands(const int system_commands)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.system_commands = system_commands;
    mUnLock(eSendDataType_ARINC_COM);
}

int getArComStatusPropulsionValveDriveSignal()
{
    int propulsion_valve_drive_signal;

    mLock(eSendDataType_ARINC_COM);
    propulsion_valve_drive_signal = gArComData.status.propulsion_valve_drive_signal;
    mUnLock(eSendDataType_ARINC_COM);
    return propulsion_valve_drive_signal;
}

void setArComStatusPropulsionValveDriveSignal(const int propulsion_valve_drive_signal)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.propulsion_valve_drive_signal = propulsion_valve_drive_signal;
    mUnLock(eSendDataType_ARINC_COM);
}

int getArComStatusEngineValveDriveSignal()
{
    int engine_valve_drive_signal;

    mLock(eSendDataType_ARINC_COM);
    engine_valve_drive_signal = gArComData.status.engine_valve_drive_signal;
    mUnLock(eSendDataType_ARINC_COM);
    return engine_valve_drive_signal;
}

void setArComStatusEngineValveDriveSignal(const int engine_valve_drive_signal)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.engine_valve_drive_signal = engine_valve_drive_signal;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusEngineInitialOperation()
{
    bool engine_initial_operation;

    mLock(eSendDataType_ARINC_COM);
    engine_initial_operation = gArComData.status.engine_initial_operation;
    mUnLock(eSendDataType_ARINC_COM);
    return engine_initial_operation;
}

void setArComStatusEngineInitialOperation(const bool engine_initial_operation)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.engine_initial_operation = engine_initial_operation;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusGroundOperationMode1Command()
{
    bool ground_operation_mode_1_command;

    mLock(eSendDataType_ARINC_COM);
    ground_operation_mode_1_command = gArComData.status.ground_operation_mode_1_command;
    mUnLock(eSendDataType_ARINC_COM);
    return ground_operation_mode_1_command;
}

void setArComStatusGroundOperationMode1Command(const bool ground_operation_mode_1_command)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.ground_operation_mode_1_command = ground_operation_mode_1_command;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSequenceCheckModeCommand()
{
    bool sequence_check_mode_command;

    mLock(eSendDataType_ARINC_COM);
    sequence_check_mode_command = gArComData.status.sequence_check_mode_command;
    mUnLock(eSendDataType_ARINC_COM);
    return sequence_check_mode_command;
}

void setArComStatusSequenceCheckModeCommand(const bool sequence_check_mode_command)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.sequence_check_mode_command = sequence_check_mode_command;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusEnginePreCoolingCommand()
{
    bool engine_pre_cooling_command;

    mLock(eSendDataType_ARINC_COM);
    engine_pre_cooling_command = gArComData.status.engine_pre_cooling_command;
    mUnLock(eSendDataType_ARINC_COM);
    return engine_pre_cooling_command;
}

void setArComStatusEnginePreCoolingCommand(const bool engine_pre_cooling_command)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.engine_pre_cooling_command = engine_pre_cooling_command;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusEngineStartCommand()
{
    bool engine_start_command;

    mLock(eSendDataType_ARINC_COM);
    engine_start_command = gArComData.status.engine_start_command;
    mUnLock(eSendDataType_ARINC_COM);
    return engine_start_command;
}

void setArComStatusEngineStartCommand(const bool engine_start_command)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.engine_start_command = engine_start_command;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusStopBurningCommand()
{
    bool stop_burning_command;

    mLock(eSendDataType_ARINC_COM);
    stop_burning_command = gArComData.status.stop_burning_command;
    mUnLock(eSendDataType_ARINC_COM);
    return stop_burning_command;
}

void setArComStatusStopBurningCommand(const bool stop_burning_command)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.stop_burning_command = stop_burning_command;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusPropellantDumpCommand()
{
    bool propellant_dump_command;

    mLock(eSendDataType_ARINC_COM);
    propellant_dump_command = gArComData.status.propellant_dump_command;
    mUnLock(eSendDataType_ARINC_COM);
    return propellant_dump_command;
}

void setArComStatusPropellantDumpCommand(const bool propellant_dump_command)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.propellant_dump_command = propellant_dump_command;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusPersonnelApproachAcceptanceCommand()
{
    bool personnel_approach_acceptance_command;

    mLock(eSendDataType_ARINC_COM);
    personnel_approach_acceptance_command = gArComData.status.personnel_approach_acceptance_command;
    mUnLock(eSendDataType_ARINC_COM);
    return personnel_approach_acceptance_command;
}

void setArComStatusPersonnelApproachAcceptanceCommand(const bool personnel_approach_acceptance_command)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.personnel_approach_acceptance_command = personnel_approach_acceptance_command;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusPostLandingSafetyOrder()
{
    bool post_landing_safety_order;

    mLock(eSendDataType_ARINC_COM);
    post_landing_safety_order = gArComData.status.post_landing_safety_order;
    mUnLock(eSendDataType_ARINC_COM);
    return post_landing_safety_order;
}

void setArComStatusPostLandingSafetyOrder(const bool post_landing_safety_order)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.post_landing_safety_order = post_landing_safety_order;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusGroundOperationMode2Command()
{
    bool ground_operation_mode2_command;

    mLock(eSendDataType_ARINC_COM);
    ground_operation_mode2_command = gArComData.status.ground_operation_mode2_command;
    mUnLock(eSendDataType_ARINC_COM);
    return ground_operation_mode2_command;
}

void setArComStatusGroundOperationMode2Command(const bool ground_operation_mode2_command)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.ground_operation_mode2_command = ground_operation_mode2_command;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusLiftoffCommand()
{
    bool liftoff_command;

    mLock(eSendDataType_ARINC_COM);
    liftoff_command = gArComData.status.liftoff_command;
    mUnLock(eSendDataType_ARINC_COM);
    return liftoff_command;
}

void setArComStatusLiftoffCommand(const bool liftoff_command)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.liftoff_command = liftoff_command;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidOfdvo()
{
    bool solenoid_ofdvo;

    mLock(eSendDataType_ARINC_COM);
    solenoid_ofdvo = gArComData.status.solenoid_ofdvo;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_ofdvo;
}

void setArComStatusSolenoidOfdvo(const bool solenoid_ofdvo)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_ofdvo = solenoid_ofdvo;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidFfdvo()
{
    bool solenoid_ffdvo;

    mLock(eSendDataType_ARINC_COM);
    solenoid_ffdvo = gArComData.status.solenoid_ffdvo;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_ffdvo;
}

void setArComStatusSolenoidFfdvo(const bool solenoid_ffdvo)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_ffdvo = solenoid_ffdvo;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidOvvo()
{
    bool solenoid_ovvo;

    mLock(eSendDataType_ARINC_COM);
    solenoid_ovvo = gArComData.status.solenoid_ovvo;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_ovvo;
}

void setArComStatusSolenoidOvvo(const bool solenoid_ovvo)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_ovvo = solenoid_ovvo;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidFvvo()
{
    bool solenoid_fvvo;

    mLock(eSendDataType_ARINC_COM);
    solenoid_fvvo = gArComData.status.solenoid_fvvo;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_fvvo;
}

void setArComStatusSolenoidFvvo(const bool solenoid_fvvo)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_fvvo = solenoid_fvvo;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidOgpv()
{
    bool solenoid_ogpv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_ogpv = gArComData.status.solenoid_ogpv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_ogpv;
}

void setArComStatusSolenoidOgpv(const bool solenoid_ogpv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_ogpv = solenoid_ogpv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidFgpv()
{
    bool solenoid_fgpv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_fgpv = gArComData.status.solenoid_fgpv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_fgpv;
}

void setArComStatusSolenoidFgpv(const bool solenoid_fgpv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_fgpv = solenoid_fgpv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusHighPHeliumShutoff1()
{
    bool high_p_helium_shutoff1;

    mLock(eSendDataType_ARINC_COM);
    high_p_helium_shutoff1 = gArComData.status.high_p_helium_shutoff1;
    mUnLock(eSendDataType_ARINC_COM);
    return high_p_helium_shutoff1;
}

void setArComStatusHighPHeliumShutoff1(const bool high_p_helium_shutoff1)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.high_p_helium_shutoff1 = high_p_helium_shutoff1;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidPsv()
{
    bool solenoid_psv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_psv = gArComData.status.solenoid_psv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_psv;
}

void setArComStatusSolenoidPsv(const bool solenoid_psv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_psv = solenoid_psv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusHighPHeliumShutoff2()
{
    bool high_p_helium_shutoff2;

    mLock(eSendDataType_ARINC_COM);
    high_p_helium_shutoff2 = gArComData.status.high_p_helium_shutoff2;
    mUnLock(eSendDataType_ARINC_COM);
    return high_p_helium_shutoff2;
}

void setArComStatusHighPHeliumShutoff2(const bool high_p_helium_shutoff2)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.high_p_helium_shutoff2 = high_p_helium_shutoff2;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidRsv()
{
    bool solenoid_rsv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_rsv = gArComData.status.solenoid_rsv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_rsv;
}

void setArComStatusSolenoidRsv(const bool solenoid_rsv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_rsv = solenoid_rsv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidGn2Pump()
{
    bool solenoid_gn2_pump;

    mLock(eSendDataType_ARINC_COM);
    solenoid_gn2_pump = gArComData.status.solenoid_gn2_pump;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_gn2_pump;
}

void setArComStatusSolenoidGn2Pump(const bool solenoid_gn2_pump)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_gn2_pump = solenoid_gn2_pump;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidGn2Turbine()
{
    bool solenoid_gn2_turbine;

    mLock(eSendDataType_ARINC_COM);
    solenoid_gn2_turbine = gArComData.status.solenoid_gn2_turbine;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_gn2_turbine;
}

void setArComStatusSolenoidGn2Turbine(const bool solenoid_gn2_turbine)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_gn2_turbine = solenoid_gn2_turbine;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusExciterDriveSignal()
{
    bool exciter_drive_signal;

    mLock(eSendDataType_ARINC_COM);
    exciter_drive_signal = gArComData.status.exciter_drive_signal;
    mUnLock(eSendDataType_ARINC_COM);
    return exciter_drive_signal;
}

void setArComStatusExciterDriveSignal(const bool exciter_drive_signal)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.exciter_drive_signal = exciter_drive_signal;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidMoigv()
{
    bool solenoid_moigv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_moigv = gArComData.status.solenoid_moigv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_moigv;
}

void setArComStatusSolenoidMoigv(const bool solenoid_moigv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_moigv = solenoid_moigv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidMfigv()
{
    bool solenoid_mfigv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_mfigv = gArComData.status.solenoid_mfigv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_mfigv;
}

void setArComStatusSolenoidMfigv(const bool solenoid_mfigv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_mfigv = solenoid_mfigv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidMoigpv()
{
    bool solenoid_moigpv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_moigpv = gArComData.status.solenoid_moigpv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_moigpv;
}

void setArComStatusSolenoidMoigpv(const bool solenoid_moigpv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_moigpv = solenoid_moigpv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidMfigpv()
{
    bool solenoid_mfigpv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_mfigpv = gArComData.status.solenoid_mfigpv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_mfigpv;
}

void setArComStatusSolenoidMfigpv(const bool solenoid_mfigpv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_mfigpv = solenoid_mfigpv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidMopv()
{
    bool solenoid_mopv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_mopv = gArComData.status.solenoid_mopv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_mopv;
}

void setArComStatusSolenoidMopv(const bool solenoid_mopv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_mopv = solenoid_mopv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidMfpv()
{
    bool solenoid_mfpv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_mfpv = gArComData.status.solenoid_mfpv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_mfpv;
}

void setArComStatusSolenoidMfpv(const bool solenoid_mfpv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_mfpv = solenoid_mfpv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidOcvo()
{
    bool solenoid_ocvo;

    mLock(eSendDataType_ARINC_COM);
    solenoid_ocvo = gArComData.status.solenoid_ocvo;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_ocvo;
}

void setArComStatusSolenoidOcvo(const bool solenoid_ocvo)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_ocvo = solenoid_ocvo;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidBocvo()
{
    bool solenoid_bocvo;

    mLock(eSendDataType_ARINC_COM);
    solenoid_bocvo = gArComData.status.solenoid_bocvo;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_bocvo;
}

void setArComStatusSolenoidBocvo(const bool solenoid_bocvo)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_bocvo = solenoid_bocvo;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidBfcvo()
{
    bool solenoid_bfcvo;

    mLock(eSendDataType_ARINC_COM);
    solenoid_bfcvo = gArComData.status.solenoid_bfcvo;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_bfcvo;
}

void setArComStatusSolenoidBfcvo(const bool solenoid_bfcvo)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_bfcvo = solenoid_bfcvo;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidOxidizer()
{
    bool solenoid_oxidizer;

    mLock(eSendDataType_ARINC_COM);
    solenoid_oxidizer = gArComData.status.solenoid_oxidizer;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_oxidizer;
}

void setArComStatusSolenoidOxidizer(const bool solenoid_oxidizer)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_oxidizer = solenoid_oxidizer;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidFuelBearing()
{
    bool solenoid_fuel_bearing;

    mLock(eSendDataType_ARINC_COM);
    solenoid_fuel_bearing = gArComData.status.solenoid_fuel_bearing;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_fuel_bearing;
}

void setArComStatusSolenoidFuelBearing(const bool solenoid_fuel_bearing)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_fuel_bearing = solenoid_fuel_bearing;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidOcpv()
{
    bool solenoid_ocpv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_ocpv = gArComData.status.solenoid_ocpv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_ocpv;
}

void setArComStatusSolenoidOcpv(const bool solenoid_ocpv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_ocpv = solenoid_ocpv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidFcpv()
{
    bool solenoid_fcpv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_fcpv = gArComData.status.solenoid_fcpv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_fcpv;
}

void setArComStatusSolenoidFcpv(const bool solenoid_fcpv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_fcpv = solenoid_fcpv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidOspv()
{
    bool solenoid_ospv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_ospv = gArComData.status.solenoid_ospv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_ospv;
}

void setArComStatusSolenoidOspv(const bool solenoid_ospv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_ospv = solenoid_ospv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusSolenoidFspv()
{
    bool solenoid_fspv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_fspv = gArComData.status.solenoid_fspv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_fspv;
}

void setArComStatusSolenoidFspv(const bool solenoid_fspv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_fspv = solenoid_fspv;
    mUnLock(eSendDataType_ARINC_COM);
}

float getArComStatusSolenoidMov()
{
    float solenoid_mov;

    mLock(eSendDataType_ARINC_COM);
    solenoid_mov = gArComData.status.solenoid_mov;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_mov;
}

void setArComStatusSolenoidMov(const float solenoid_mov)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_mov = solenoid_mov;
    mUnLock(eSendDataType_ARINC_COM);
}

float getArComStatusSolenoidMfv()
{
    float solenoid_mfv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_mfv = gArComData.status.solenoid_mfv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_mfv;
}

void setArComStatusSolenoidMfv(const float solenoid_mfv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_mfv = solenoid_mfv;
    mUnLock(eSendDataType_ARINC_COM);
}

float getArComStatusSolenoidTcv()
{
    float solenoid_tcv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_tcv = gArComData.status.solenoid_tcv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_tcv;
}

void setArComStatusSolenoidTcv(const float solenoid_tcv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_tcv = solenoid_tcv;
    mUnLock(eSendDataType_ARINC_COM);
}

float getArComStatusSolenoidOcv()
{
    float solenoid_ocv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_ocv = gArComData.status.solenoid_ocv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_ocv;
}

void setArComStatusSolenoidOcv(const float solenoid_ocv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_ocv = solenoid_ocv;
    mUnLock(eSendDataType_ARINC_COM);
}

float getArComStatusSolenoidFcv()
{
    float solenoid_fcv;

    mLock(eSendDataType_ARINC_COM);
    solenoid_fcv = gArComData.status.solenoid_fcv;
    mUnLock(eSendDataType_ARINC_COM);
    return solenoid_fcv;
}

void setArComStatusSolenoidFcv(const float solenoid_fcv)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.solenoid_fcv = solenoid_fcv;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusGimbaladjustmentCommand()
{
    bool gimbaladjustment_command;

    mLock(eSendDataType_ARINC_COM);
    gimbaladjustment_command = gArComData.status.gimbaladjustment_command;
    mUnLock(eSendDataType_ARINC_COM);
    return gimbaladjustment_command;
}

void setArComStatusGimbaladjustmentCommand(const bool gimbaladjustment_command)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.gimbaladjustment_command = gimbaladjustment_command;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusTvcActuatorPowerCommand()
{
    bool tvc_actuator_power_command;

    mLock(eSendDataType_ARINC_COM);
    tvc_actuator_power_command = gArComData.status.tvc_actuator_power_command;
    mUnLock(eSendDataType_ARINC_COM);
    return tvc_actuator_power_command;
}

void setArComStatusTvcActuatorPowerCommand(const bool tvc_actuator_power_command)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.tvc_actuator_power_command = tvc_actuator_power_command;
    mUnLock(eSendDataType_ARINC_COM);
}

bool getArComStatusRecordingCommand()
{
    bool recording_command;

    mLock(eSendDataType_ARINC_COM);
    recording_command = gArComData.status.recording_command;
    mUnLock(eSendDataType_ARINC_COM);
    return recording_command;
}

void setArComStatusRecordingCommand(const bool recording_command)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status.recording_command = recording_command;
    mUnLock(eSendDataType_ARINC_COM);
}


ArDataComTimerStruct getArComTimer()
{
    ArDataComTimerStruct timer;

    mLock(eSendDataType_ARINC_COM);
    timer = gArComData.timer;
    mUnLock(eSendDataType_ARINC_COM);
    return timer;
}

ArDataComLaunchStruct getArComLaunch()
{
    ArDataComLaunchStruct launch;

    mLock(eSendDataType_ARINC_COM);
    launch = gArComData.launch;
    mUnLock(eSendDataType_ARINC_COM);
    return launch;
}

ArDataComStatusStruct getArComStatus()
{
    ArDataComStatusStruct status;

    mLock(eSendDataType_ARINC_COM);
    status = gArComData.status;
    mUnLock(eSendDataType_ARINC_COM);
    return status;
}


void setArComTimer(const ArDataComTimerStruct timer)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.timer = timer;
    mUnLock(eSendDataType_ARINC_COM);
}

void setArComLaunch(const ArDataComLaunchStruct launch)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.launch = launch;
    mUnLock(eSendDataType_ARINC_COM);
}

void setArComStatus(const ArDataComStatusStruct status)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.status = status;
    mUnLock(eSendDataType_ARINC_COM);
}

// TBD ADD START
int getArComRunMode()
{
    int run_mode;
    mLock(eSendDataType_ARINC_COM);
    run_mode = gArComData.run_mode;
    mUnLock(eSendDataType_ARINC_COM);
    return run_mode;
}
int setArComRunMode(const int run_mode)
{
    mLock(eSendDataType_ARINC_COM);
    gArComData.run_mode = run_mode;
    mUnLock(eSendDataType_ARINC_COM);
}
// TBD ADD END

///////////////////////////////////////////////////////
//Arinc Data set/get function for Data
///////////////////////////////////////////////////////
int getArDatStatusDataComputerStatus()
{
    int data_computer_status;

    mLock(eSendDataType_ARINC_DAT);
    data_computer_status = gArDatData.status.data_computer_status;
    mUnLock(eSendDataType_ARINC_DAT);
    return data_computer_status;
}

void setArDatStatusDataComputerStatus(const int data_computer_status)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.data_computer_status = data_computer_status;
    mUnLock(eSendDataType_ARINC_DAT);
}

bool getArDatStatusDrogueChuteDoorSensor()
{
    bool drogue_chute_door_sensor;

    mLock(eSendDataType_ARINC_DAT);
    drogue_chute_door_sensor = gArDatData.status.drogue_chute_door_sensor;
    mUnLock(eSendDataType_ARINC_DAT);
    return drogue_chute_door_sensor;
}

void setArDatStatusDrogueChuteDoorSensor(const bool drogue_chute_door_sensor)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.drogue_chute_door_sensor = drogue_chute_door_sensor;
    mUnLock(eSendDataType_ARINC_DAT);
}

bool getArDatStatusMainChuteDoorSensor()
{
    bool main_chute_door_sensor;

    mLock(eSendDataType_ARINC_DAT);
    main_chute_door_sensor = gArDatData.status.main_chute_door_sensor;
    mUnLock(eSendDataType_ARINC_DAT);
    return main_chute_door_sensor;
}

void setArDatStatusMainChuteDoorSensor(const bool main_chute_door_sensor)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.main_chute_door_sensor = main_chute_door_sensor;
    mUnLock(eSendDataType_ARINC_DAT);
}

bool getArDatStatusFrontAirbagDoorSensor()
{
    bool front_airbag_door_sensor;

    mLock(eSendDataType_ARINC_DAT);
    front_airbag_door_sensor = gArDatData.status.front_airbag_door_sensor;
    mUnLock(eSendDataType_ARINC_DAT);
    return front_airbag_door_sensor;
}

void setArDatStatusFrontAirbagDoorSensor(const bool front_airbag_door_sensor)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.front_airbag_door_sensor = front_airbag_door_sensor;
    mUnLock(eSendDataType_ARINC_DAT);
}

bool getArDatStatusRearAirbagLDoorSensor()
{
    bool rear_airbag_l_door_sensor;

    mLock(eSendDataType_ARINC_DAT);
    rear_airbag_l_door_sensor = gArDatData.status.rear_airbag_l_door_sensor;
    mUnLock(eSendDataType_ARINC_DAT);
    return rear_airbag_l_door_sensor;
}

void setArDatStatusRearAirbagLDoorSensor(const bool rear_airbag_l_door_sensor)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.rear_airbag_l_door_sensor = rear_airbag_l_door_sensor;
    mUnLock(eSendDataType_ARINC_DAT);
}

bool getArDatStatusRearAirbagRDoorSensor()
{
    bool rear_airbag_r_door_sensor;

    mLock(eSendDataType_ARINC_DAT);
    rear_airbag_r_door_sensor = gArDatData.status.rear_airbag_r_door_sensor;
    mUnLock(eSendDataType_ARINC_DAT);
    return rear_airbag_r_door_sensor;
}

void setArDatStatusRearAirbagRDoorSensor(const bool rear_airbag_r_door_sensor)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.rear_airbag_r_door_sensor = rear_airbag_r_door_sensor;
    mUnLock(eSendDataType_ARINC_DAT);
}

float getArDatStatusBusBatteryStatus()
{
    float bus_battery_status;

    mLock(eSendDataType_ARINC_DAT);
    bus_battery_status = gArDatData.status.bus_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
    return bus_battery_status;
}

void setArDatStatusBusBatteryStatus(const float bus_battery_status)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.bus_battery_status = bus_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
}

float getArDatStatusPropulsionBatteryStatus()
{
    float propulsion_battery_status;

    mLock(eSendDataType_ARINC_DAT);
    propulsion_battery_status = gArDatData.status.propulsion_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
    return propulsion_battery_status;
}

void setArDatStatusPropulsionBatteryStatus(const float propulsion_battery_status)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.propulsion_battery_status = propulsion_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
}

float getArDatStatusEmc1BatteryStatus()
{
    float emc1_battery_status;

    mLock(eSendDataType_ARINC_DAT);
    emc1_battery_status = gArDatData.status.emc1_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
    return emc1_battery_status;
}

void setArDatStatusEmc1BatteryStatus(const float emc1_battery_status)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.emc1_battery_status = emc1_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
}

float getArDatStatusEmc2BatteryStatus()
{
    float emc2_battery_status;

    mLock(eSendDataType_ARINC_DAT);
    emc2_battery_status = gArDatData.status.emc2_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
    return emc2_battery_status;
}

void setArDatStatusEmc2BatteryStatus(const float emc2_battery_status)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.emc2_battery_status = emc2_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
}

float getArDatStatusEmc3BatteryStatus()
{
    float emc3_battery_status;

    mLock(eSendDataType_ARINC_DAT);
    emc3_battery_status = gArDatData.status.emc3_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
    return emc3_battery_status;
}

void setArDatStatusEmc3BatteryStatus(const float emc3_battery_status)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.emc3_battery_status = emc3_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
}

float getArDatStatusEmcActuator1BatteryStatus()
{
    float emc_actuator1_battery_status;

    mLock(eSendDataType_ARINC_DAT);
    emc_actuator1_battery_status = gArDatData.status.emc_actuator1_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
    return emc_actuator1_battery_status;
}

void setArDatStatusEmcActuator1BatteryStatus(const float emc_actuator1_battery_status)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.emc_actuator1_battery_status = emc_actuator1_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
}

float getArDatStatusEmcActuator2BatteryStatus()
{
    float emc_actuator2_battery_status;

    mLock(eSendDataType_ARINC_DAT);
    emc_actuator2_battery_status = gArDatData.status.emc_actuator2_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
    return emc_actuator2_battery_status;
}

void setArDatStatusEmcActuator2BatteryStatus(const float emc_actuator2_battery_status)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.emc_actuator2_battery_status = emc_actuator2_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
}

float getArDatStatusElevonBatteryStatus()
{
    float elevon_battery_status;

    mLock(eSendDataType_ARINC_DAT);
    elevon_battery_status = gArDatData.status.elevon_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
    return elevon_battery_status;
}

void setArDatStatusElevonBatteryStatus(const float elevon_battery_status)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.elevon_battery_status = elevon_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
}

float getArDatStatusRudderBatteryStatus()
{
    float rudder_battery_status;

    mLock(eSendDataType_ARINC_DAT);
    rudder_battery_status = gArDatData.status.rudder_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
    return rudder_battery_status;
}

void setArDatStatusRudderBatteryStatus(const float rudder_battery_status)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status.rudder_battery_status = rudder_battery_status;
    mUnLock(eSendDataType_ARINC_DAT);
}


ArDataDatStatusStruct getArDatStatus()
{
    ArDataDatStatusStruct status;

    mLock(eSendDataType_ARINC_DAT);
    status = gArDatData.status;
    mUnLock(eSendDataType_ARINC_DAT);
    return status;
}


void setArDatStatus(const ArDataDatStatusStruct status)
{
    mLock(eSendDataType_ARINC_DAT);
    gArDatData.status = status;
    mUnLock(eSendDataType_ARINC_DAT);
}

///////////////////////////////////////////////////////
//Arinc Data set/get function for Engine
///////////////////////////////////////////////////////
float getArEcuTimerEngineControlComputerTimeCounter()
{
    float engine_control_computer_time_counter;

    mLock(eSendDataType_ARINC_ECU);
    engine_control_computer_time_counter = gArEcuData.timer.engine_control_computer_time_counter;
    mUnLock(eSendDataType_ARINC_ECU);
    return engine_control_computer_time_counter;
}

void setArEcuTimerEngineControlComputerTimeCounter(const float engine_control_computer_time_counter)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.timer.engine_control_computer_time_counter = engine_control_computer_time_counter;
    mUnLock(eSendDataType_ARINC_ECU);
}

bool getArEcuLaunchReleaseCommand()
{
    bool release_command;

    mLock(eSendDataType_ARINC_ECU);
    release_command = gArEcuData.launch.release_command;
    mUnLock(eSendDataType_ARINC_ECU);
    return release_command;
}

void setArEcuLaunchReleaseCommand(const bool release_command)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.launch.release_command = release_command;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusGheGasTankPressure()
{
    float ghe_gas_tank_pressure;

    mLock(eSendDataType_ARINC_ECU);
    ghe_gas_tank_pressure = gArEcuData.status.ghe_gas_tank_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return ghe_gas_tank_pressure;
}

void setArEcuStatusGheGasTankPressure(const float ghe_gas_tank_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.ghe_gas_tank_pressure = ghe_gas_tank_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusGn2GasTankPressure()
{
    float gn2_gas_tank_pressure;

    mLock(eSendDataType_ARINC_ECU);
    gn2_gas_tank_pressure = gArEcuData.status.gn2_gas_tank_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return gn2_gas_tank_pressure;
}

void setArEcuStatusGn2GasTankPressure(const float gn2_gas_tank_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.gn2_gas_tank_pressure = gn2_gas_tank_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusGheGasAirTankDownstreamPressure()
{
    float ghe_gas_air_tank_downstream_pressure;

    mLock(eSendDataType_ARINC_ECU);
    ghe_gas_air_tank_downstream_pressure = gArEcuData.status.ghe_gas_air_tank_downstream_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return ghe_gas_air_tank_downstream_pressure;
}

void setArEcuStatusGheGasAirTankDownstreamPressure(const float ghe_gas_air_tank_downstream_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.ghe_gas_air_tank_downstream_pressure = ghe_gas_air_tank_downstream_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLoxTankPressure()
{
    float lox_tank_pressure;

    mLock(eSendDataType_ARINC_ECU);
    lox_tank_pressure = gArEcuData.status.lox_tank_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return lox_tank_pressure;
}

void setArEcuStatusLoxTankPressure(const float lox_tank_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lox_tank_pressure = lox_tank_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLngTankPressure()
{
    float lng_tank_pressure;

    mLock(eSendDataType_ARINC_ECU);
    lng_tank_pressure = gArEcuData.status.lng_tank_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return lng_tank_pressure;
}

void setArEcuStatusLngTankPressure(const float lng_tank_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lng_tank_pressure = lng_tank_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusEnginePneumaticPurgePressure()
{
    float engine_pneumatic_purge_pressure;

    mLock(eSendDataType_ARINC_ECU);
    engine_pneumatic_purge_pressure = gArEcuData.status.engine_pneumatic_purge_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return engine_pneumatic_purge_pressure;
}

void setArEcuStatusEnginePneumaticPurgePressure(const float engine_pneumatic_purge_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.engine_pneumatic_purge_pressure = engine_pneumatic_purge_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusSealPurgePressure()
{
    float seal_purge_pressure;

    mLock(eSendDataType_ARINC_ECU);
    seal_purge_pressure = gArEcuData.status.seal_purge_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return seal_purge_pressure;
}

void setArEcuStatusSealPurgePressure(const float seal_purge_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.seal_purge_pressure = seal_purge_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusRcsPressureRegulationPressure()
{
    float rcs_pressure_regulation_pressure;

    mLock(eSendDataType_ARINC_ECU);
    rcs_pressure_regulation_pressure = gArEcuData.status.rcs_pressure_regulation_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return rcs_pressure_regulation_pressure;
}

void setArEcuStatusRcsPressureRegulationPressure(const float rcs_pressure_regulation_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.rcs_pressure_regulation_pressure = rcs_pressure_regulation_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLoxEngineInletPressure()
{
    float lox_engine_inlet_pressure;

    mLock(eSendDataType_ARINC_ECU);
    lox_engine_inlet_pressure = gArEcuData.status.lox_engine_inlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return lox_engine_inlet_pressure;
}

void setArEcuStatusLoxEngineInletPressure(const float lox_engine_inlet_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lox_engine_inlet_pressure = lox_engine_inlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLngEngineInletPressure()
{
    float lng_engine_inlet_pressure;

    mLock(eSendDataType_ARINC_ECU);
    lng_engine_inlet_pressure = gArEcuData.status.lng_engine_inlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return lng_engine_inlet_pressure;
}

void setArEcuStatusLngEngineInletPressure(const float lng_engine_inlet_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lng_engine_inlet_pressure = lng_engine_inlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusShutOffDownGn2PurgePressure()
{
    float shut_off_down_gn2_purge_pressure;

    mLock(eSendDataType_ARINC_ECU);
    shut_off_down_gn2_purge_pressure = gArEcuData.status.shut_off_down_gn2_purge_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return shut_off_down_gn2_purge_pressure;
}

void setArEcuStatusShutOffDownGn2PurgePressure(const float shut_off_down_gn2_purge_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.shut_off_down_gn2_purge_pressure = shut_off_down_gn2_purge_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusGheGasTankOutletTemperature()
{
    float ghe_gas_tank_outlet_temperature;

    mLock(eSendDataType_ARINC_ECU);
    ghe_gas_tank_outlet_temperature = gArEcuData.status.ghe_gas_tank_outlet_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return ghe_gas_tank_outlet_temperature;
}

void setArEcuStatusGheGasTankOutletTemperature(const float ghe_gas_tank_outlet_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.ghe_gas_tank_outlet_temperature = ghe_gas_tank_outlet_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusGheGasTankSurfaceTemperature()
{
    float ghe_gas_tank_surface_temperature;

    mLock(eSendDataType_ARINC_ECU);
    ghe_gas_tank_surface_temperature = gArEcuData.status.ghe_gas_tank_surface_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return ghe_gas_tank_surface_temperature;
}

void setArEcuStatusGheGasTankSurfaceTemperature(const float ghe_gas_tank_surface_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.ghe_gas_tank_surface_temperature = ghe_gas_tank_surface_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusGn2GasTankOutletTemperature()
{
    float gn2_gas_tank_outlet_temperature;

    mLock(eSendDataType_ARINC_ECU);
    gn2_gas_tank_outlet_temperature = gArEcuData.status.gn2_gas_tank_outlet_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return gn2_gas_tank_outlet_temperature;
}

void setArEcuStatusGn2GasTankOutletTemperature(const float gn2_gas_tank_outlet_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.gn2_gas_tank_outlet_temperature = gn2_gas_tank_outlet_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusGn2GasTankSurfaceTemperature()
{
    float gn2_gas_tank_surface_temperature;

    mLock(eSendDataType_ARINC_ECU);
    gn2_gas_tank_surface_temperature = gArEcuData.status.gn2_gas_tank_surface_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return gn2_gas_tank_surface_temperature;
}

void setArEcuStatusGn2GasTankSurfaceTemperature(const float gn2_gas_tank_surface_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.gn2_gas_tank_surface_temperature = gn2_gas_tank_surface_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLoxVentLineTemperature()
{
    float lox_vent_line_temperature;

    mLock(eSendDataType_ARINC_ECU);
    lox_vent_line_temperature = gArEcuData.status.lox_vent_line_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return lox_vent_line_temperature;
}

void setArEcuStatusLoxVentLineTemperature(const float lox_vent_line_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lox_vent_line_temperature = lox_vent_line_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLngVentLineTemperature()
{
    float lng_vent_line_temperature;

    mLock(eSendDataType_ARINC_ECU);
    lng_vent_line_temperature = gArEcuData.status.lng_vent_line_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return lng_vent_line_temperature;
}

void setArEcuStatusLngVentLineTemperature(const float lng_vent_line_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lng_vent_line_temperature = lng_vent_line_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLoxInletOutletLineTemperature()
{
    float lox_inlet_outlet_line_temperature;

    mLock(eSendDataType_ARINC_ECU);
    lox_inlet_outlet_line_temperature = gArEcuData.status.lox_inlet_outlet_line_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return lox_inlet_outlet_line_temperature;
}

void setArEcuStatusLoxInletOutletLineTemperature(const float lox_inlet_outlet_line_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lox_inlet_outlet_line_temperature = lox_inlet_outlet_line_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLngInletOutletLineTemperature()
{
    float lng_inlet_outlet_line_temperature;

    mLock(eSendDataType_ARINC_ECU);
    lng_inlet_outlet_line_temperature = gArEcuData.status.lng_inlet_outlet_line_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return lng_inlet_outlet_line_temperature;
}

void setArEcuStatusLngInletOutletLineTemperature(const float lng_inlet_outlet_line_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lng_inlet_outlet_line_temperature = lng_inlet_outlet_line_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLoxEngineInletTemperature()
{
    float lox_engine_inlet_temperature;

    mLock(eSendDataType_ARINC_ECU);
    lox_engine_inlet_temperature = gArEcuData.status.lox_engine_inlet_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return lox_engine_inlet_temperature;
}

void setArEcuStatusLoxEngineInletTemperature(const float lox_engine_inlet_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lox_engine_inlet_temperature = lox_engine_inlet_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLngEngineInletTemperature()
{
    float lng_engine_inlet_temperature;

    mLock(eSendDataType_ARINC_ECU);
    lng_engine_inlet_temperature = gArEcuData.status.lng_engine_inlet_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return lng_engine_inlet_temperature;
}

void setArEcuStatusLngEngineInletTemperature(const float lng_engine_inlet_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lng_engine_inlet_temperature = lng_engine_inlet_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLoxTankBottomTemperature()
{
    float lox_tank_bottom_temperature;

    mLock(eSendDataType_ARINC_ECU);
    lox_tank_bottom_temperature = gArEcuData.status.lox_tank_bottom_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return lox_tank_bottom_temperature;
}

void setArEcuStatusLoxTankBottomTemperature(const float lox_tank_bottom_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lox_tank_bottom_temperature = lox_tank_bottom_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLngTankBottomTemperature()
{
    float lng_tank_bottom_temperature;

    mLock(eSendDataType_ARINC_ECU);
    lng_tank_bottom_temperature = gArEcuData.status.lng_tank_bottom_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return lng_tank_bottom_temperature;
}

void setArEcuStatusLngTankBottomTemperature(const float lng_tank_bottom_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lng_tank_bottom_temperature = lng_tank_bottom_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLoxTankLiquidLevel()
{
    float lox_tank_liquid_level;

    mLock(eSendDataType_ARINC_ECU);
    lox_tank_liquid_level = gArEcuData.status.lox_tank_liquid_level;
    mUnLock(eSendDataType_ARINC_ECU);
    return lox_tank_liquid_level;
}

void setArEcuStatusLoxTankLiquidLevel(const float lox_tank_liquid_level)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lox_tank_liquid_level = lox_tank_liquid_level;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLngTankLiquidLevel()
{
    float lng_tank_liquid_level;

    mLock(eSendDataType_ARINC_ECU);
    lng_tank_liquid_level = gArEcuData.status.lng_tank_liquid_level;
    mUnLock(eSendDataType_ARINC_ECU);
    return lng_tank_liquid_level;
}

void setArEcuStatusLngTankLiquidLevel(const float lng_tank_liquid_level)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lng_tank_liquid_level = lng_tank_liquid_level;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusEngineCombustionPressure()
{
    float engine_combustion_pressure;

    mLock(eSendDataType_ARINC_ECU);
    engine_combustion_pressure = gArEcuData.status.engine_combustion_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return engine_combustion_pressure;
}

void setArEcuStatusEngineCombustionPressure(const float engine_combustion_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.engine_combustion_pressure = engine_combustion_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusIgniterCombustionPressure()
{
    float igniter_combustion_pressure;

    mLock(eSendDataType_ARINC_ECU);
    igniter_combustion_pressure = gArEcuData.status.igniter_combustion_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return igniter_combustion_pressure;
}

void setArEcuStatusIgniterCombustionPressure(const float igniter_combustion_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.igniter_combustion_pressure = igniter_combustion_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusCombustionChamberOutletPressure()
{
    float combustion_chamber_outlet_pressure;

    mLock(eSendDataType_ARINC_ECU);
    combustion_chamber_outlet_pressure = gArEcuData.status.combustion_chamber_outlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return combustion_chamber_outlet_pressure;
}

void setArEcuStatusCombustionChamberOutletPressure(const float combustion_chamber_outlet_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.combustion_chamber_outlet_pressure = combustion_chamber_outlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLoxPumpOutletPressure()
{
    float lox_pump_outlet_pressure;

    mLock(eSendDataType_ARINC_ECU);
    lox_pump_outlet_pressure = gArEcuData.status.lox_pump_outlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return lox_pump_outlet_pressure;
}

void setArEcuStatusLoxPumpOutletPressure(const float lox_pump_outlet_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lox_pump_outlet_pressure = lox_pump_outlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLngPumpOutletPressure()
{
    float lng_pump_outlet_pressure;

    mLock(eSendDataType_ARINC_ECU);
    lng_pump_outlet_pressure = gArEcuData.status.lng_pump_outlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return lng_pump_outlet_pressure;
}

void setArEcuStatusLngPumpOutletPressure(const float lng_pump_outlet_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lng_pump_outlet_pressure = lng_pump_outlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusPurgeSealLoxSideDrainChamberPressure()
{
    float purge_seal_lox_side_drain_chamber_pressure;

    mLock(eSendDataType_ARINC_ECU);
    purge_seal_lox_side_drain_chamber_pressure = gArEcuData.status.purge_seal_lox_side_drain_chamber_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return purge_seal_lox_side_drain_chamber_pressure;
}

void setArEcuStatusPurgeSealLoxSideDrainChamberPressure(const float purge_seal_lox_side_drain_chamber_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.purge_seal_lox_side_drain_chamber_pressure = purge_seal_lox_side_drain_chamber_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusPurgeSealLngSideDrainChamberPressure()
{
    float purge_seal_lng_side_drain_chamber_pressure;

    mLock(eSendDataType_ARINC_ECU);
    purge_seal_lng_side_drain_chamber_pressure = gArEcuData.status.purge_seal_lng_side_drain_chamber_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return purge_seal_lng_side_drain_chamber_pressure;
}

void setArEcuStatusPurgeSealLngSideDrainChamberPressure(const float purge_seal_lng_side_drain_chamber_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.purge_seal_lng_side_drain_chamber_pressure = purge_seal_lng_side_drain_chamber_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusPumpSidePurgeSealGheInletPressure()
{
    float pump_side_purge_seal_ghe_inlet_pressure;

    mLock(eSendDataType_ARINC_ECU);
    pump_side_purge_seal_ghe_inlet_pressure = gArEcuData.status.pump_side_purge_seal_ghe_inlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return pump_side_purge_seal_ghe_inlet_pressure;
}

void setArEcuStatusPumpSidePurgeSealGheInletPressure(const float pump_side_purge_seal_ghe_inlet_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.pump_side_purge_seal_ghe_inlet_pressure = pump_side_purge_seal_ghe_inlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusTurbineSidePurgeSealGheInletPressure()
{
    float turbine_side_purge_seal_ghe_inlet_pressure;

    mLock(eSendDataType_ARINC_ECU);
    turbine_side_purge_seal_ghe_inlet_pressure = gArEcuData.status.turbine_side_purge_seal_ghe_inlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
    return turbine_side_purge_seal_ghe_inlet_pressure;
}

void setArEcuStatusTurbineSidePurgeSealGheInletPressure(const float turbine_side_purge_seal_ghe_inlet_pressure)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.turbine_side_purge_seal_ghe_inlet_pressure = turbine_side_purge_seal_ghe_inlet_pressure;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLoxPrecoolingLineTemperature()
{
    float lox_precooling_line_temperature;

    mLock(eSendDataType_ARINC_ECU);
    lox_precooling_line_temperature = gArEcuData.status.lox_precooling_line_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return lox_precooling_line_temperature;
}

void setArEcuStatusLoxPrecoolingLineTemperature(const float lox_precooling_line_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lox_precooling_line_temperature = lox_precooling_line_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLngPrecoolingLineTemperature()
{
    float lng_precooling_line_temperature;

    mLock(eSendDataType_ARINC_ECU);
    lng_precooling_line_temperature = gArEcuData.status.lng_precooling_line_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return lng_precooling_line_temperature;
}

void setArEcuStatusLngPrecoolingLineTemperature(const float lng_precooling_line_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lng_precooling_line_temperature = lng_precooling_line_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusChamberInjectorSideManifoldOutletTemperature()
{
    float chamber_injector_side_manifold_outlet_temperature;

    mLock(eSendDataType_ARINC_ECU);
    chamber_injector_side_manifold_outlet_temperature = gArEcuData.status.chamber_injector_side_manifold_outlet_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return chamber_injector_side_manifold_outlet_temperature;
}

void setArEcuStatusChamberInjectorSideManifoldOutletTemperature(const float chamber_injector_side_manifold_outlet_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.chamber_injector_side_manifold_outlet_temperature = chamber_injector_side_manifold_outlet_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLoxBearingTemperature()
{
    float lox_bearing_temperature;

    mLock(eSendDataType_ARINC_ECU);
    lox_bearing_temperature = gArEcuData.status.lox_bearing_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return lox_bearing_temperature;
}

void setArEcuStatusLoxBearingTemperature(const float lox_bearing_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lox_bearing_temperature = lox_bearing_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLngBearingTemperature()
{
    float lng_bearing_temperature;

    mLock(eSendDataType_ARINC_ECU);
    lng_bearing_temperature = gArEcuData.status.lng_bearing_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
    return lng_bearing_temperature;
}

void setArEcuStatusLngBearingTemperature(const float lng_bearing_temperature)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lng_bearing_temperature = lng_bearing_temperature;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLoxPumpCasingTemperature1()
{
    float lox_pump_casing_temperature_1;

    mLock(eSendDataType_ARINC_ECU);
    lox_pump_casing_temperature_1 = gArEcuData.status.lox_pump_casing_temperature_1;
    mUnLock(eSendDataType_ARINC_ECU);
    return lox_pump_casing_temperature_1;
}

void setArEcuStatusLoxPumpCasingTemperature1(const float lox_pump_casing_temperature_1)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lox_pump_casing_temperature_1 = lox_pump_casing_temperature_1;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusLngPumpCasingTemperature1()
{
    float lng_pump_casing_temperature_1;

    mLock(eSendDataType_ARINC_ECU);
    lng_pump_casing_temperature_1 = gArEcuData.status.lng_pump_casing_temperature_1;
    mUnLock(eSendDataType_ARINC_ECU);
    return lng_pump_casing_temperature_1;
}

void setArEcuStatusLngPumpCasingTemperature1(const float lng_pump_casing_temperature_1)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.lng_pump_casing_temperature_1 = lng_pump_casing_temperature_1;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusTurboPumpSpeed()
{
    float turbo_pump_speed;

    mLock(eSendDataType_ARINC_ECU);
    turbo_pump_speed = gArEcuData.status.turbo_pump_speed;
    mUnLock(eSendDataType_ARINC_ECU);
    return turbo_pump_speed;
}

void setArEcuStatusTurboPumpSpeed(const float turbo_pump_speed)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.turbo_pump_speed = turbo_pump_speed;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusMotorValveStatusMovOpen()
{
    float motor_valve_status_mov_open;

    mLock(eSendDataType_ARINC_ECU);
    motor_valve_status_mov_open = gArEcuData.status.motor_valve_status_mov_open;
    mUnLock(eSendDataType_ARINC_ECU);
    return motor_valve_status_mov_open;
}

void setArEcuStatusMotorValveStatusMovOpen(const float motor_valve_status_mov_open)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.motor_valve_status_mov_open = motor_valve_status_mov_open;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusMotorValveStatusMfvOpen()
{
    float motor_valve_status_mfv_open;

    mLock(eSendDataType_ARINC_ECU);
    motor_valve_status_mfv_open = gArEcuData.status.motor_valve_status_mfv_open;
    mUnLock(eSendDataType_ARINC_ECU);
    return motor_valve_status_mfv_open;
}

void setArEcuStatusMotorValveStatusMfvOpen(const float motor_valve_status_mfv_open)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.motor_valve_status_mfv_open = motor_valve_status_mfv_open;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusMotorValveStatusOcvOpen()
{
    float motor_valve_status_ocv_open;

    mLock(eSendDataType_ARINC_ECU);
    motor_valve_status_ocv_open = gArEcuData.status.motor_valve_status_ocv_open;
    mUnLock(eSendDataType_ARINC_ECU);
    return motor_valve_status_ocv_open;
}

void setArEcuStatusMotorValveStatusOcvOpen(const float motor_valve_status_ocv_open)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.motor_valve_status_ocv_open = motor_valve_status_ocv_open;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusMotorValveStatusFcvOpen()
{
    float motor_valve_status_fcv_open;

    mLock(eSendDataType_ARINC_ECU);
    motor_valve_status_fcv_open = gArEcuData.status.motor_valve_status_fcv_open;
    mUnLock(eSendDataType_ARINC_ECU);
    return motor_valve_status_fcv_open;
}

void setArEcuStatusMotorValveStatusFcvOpen(const float motor_valve_status_fcv_open)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.motor_valve_status_fcv_open = motor_valve_status_fcv_open;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusMotorValveStatusIsmovOpenLoxLine()
{
    float motor_valve_status_ismov_open_lox_line;

    mLock(eSendDataType_ARINC_ECU);
    motor_valve_status_ismov_open_lox_line = gArEcuData.status.motor_valve_status_ismov_open_lox_line;
    mUnLock(eSendDataType_ARINC_ECU);
    return motor_valve_status_ismov_open_lox_line;
}

void setArEcuStatusMotorValveStatusIsmovOpenLoxLine(const float motor_valve_status_ismov_open_lox_line)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.motor_valve_status_ismov_open_lox_line = motor_valve_status_ismov_open_lox_line;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusMotorValveStatusIsmfvOpenLngLine()
{
    float motor_valve_status_ismfv_open_lng_line;

    mLock(eSendDataType_ARINC_ECU);
    motor_valve_status_ismfv_open_lng_line = gArEcuData.status.motor_valve_status_ismfv_open_lng_line;
    mUnLock(eSendDataType_ARINC_ECU);
    return motor_valve_status_ismfv_open_lng_line;
}

void setArEcuStatusMotorValveStatusIsmfvOpenLngLine(const float motor_valve_status_ismfv_open_lng_line)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.motor_valve_status_ismfv_open_lng_line = motor_valve_status_ismfv_open_lng_line;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusGimbalAngleAnswerPitch()
{
    float gimbal_angle_answer_pitch;

    mLock(eSendDataType_ARINC_ECU);
    gimbal_angle_answer_pitch = gArEcuData.status.gimbal_angle_answer_pitch;
    mUnLock(eSendDataType_ARINC_ECU);
    return gimbal_angle_answer_pitch;
}

void setArEcuStatusGimbalAngleAnswerPitch(const float gimbal_angle_answer_pitch)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.gimbal_angle_answer_pitch = gimbal_angle_answer_pitch;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusGimbalAngleAnswerYaw()
{
    float gimbal_angle_answer_yaw;

    mLock(eSendDataType_ARINC_ECU);
    gimbal_angle_answer_yaw = gArEcuData.status.gimbal_angle_answer_yaw;
    mUnLock(eSendDataType_ARINC_ECU);
    return gimbal_angle_answer_yaw;
}

void setArEcuStatusGimbalAngleAnswerYaw(const float gimbal_angle_answer_yaw)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.gimbal_angle_answer_yaw = gimbal_angle_answer_yaw;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusHealthMonitor1()
{
    float health_monitor_1;

    mLock(eSendDataType_ARINC_ECU);
    health_monitor_1 = gArEcuData.status.health_monitor_1;
    mUnLock(eSendDataType_ARINC_ECU);
    return health_monitor_1;
}

void setArEcuStatusHealthMonitor1(const float health_monitor_1)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.health_monitor_1 = health_monitor_1;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusHealthMonitor2()
{
    float health_monitor_2;

    mLock(eSendDataType_ARINC_ECU);
    health_monitor_2 = gArEcuData.status.health_monitor_2;
    mUnLock(eSendDataType_ARINC_ECU);
    return health_monitor_2;
}

void setArEcuStatusHealthMonitor2(const float health_monitor_2)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.health_monitor_2 = health_monitor_2;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusHealthMonitor3()
{
    float health_monitor_3;

    mLock(eSendDataType_ARINC_ECU);
    health_monitor_3 = gArEcuData.status.health_monitor_3;
    mUnLock(eSendDataType_ARINC_ECU);
    return health_monitor_3;
}

void setArEcuStatusHealthMonitor3(const float health_monitor_3)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.health_monitor_3 = health_monitor_3;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusHealthMonitor4()
{
    float health_monitor_4;

    mLock(eSendDataType_ARINC_ECU);
    health_monitor_4 = gArEcuData.status.health_monitor_4;
    mUnLock(eSendDataType_ARINC_ECU);
    return health_monitor_4;
}

void setArEcuStatusHealthMonitor4(const float health_monitor_4)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.health_monitor_4 = health_monitor_4;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusHealthMonitor5()
{
    float health_monitor_5;

    mLock(eSendDataType_ARINC_ECU);
    health_monitor_5 = gArEcuData.status.health_monitor_5;
    mUnLock(eSendDataType_ARINC_ECU);
    return health_monitor_5;
}

void setArEcuStatusHealthMonitor5(const float health_monitor_5)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.health_monitor_5 = health_monitor_5;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusSpare1()
{
    float spare1;

    mLock(eSendDataType_ARINC_ECU);
    spare1 = gArEcuData.status.spare1;
    mUnLock(eSendDataType_ARINC_ECU);
    return spare1;
}

void setArEcuStatusSpare1(const float spare1)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.spare1 = spare1;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusSpare2()
{
    float spare2;

    mLock(eSendDataType_ARINC_ECU);
    spare2 = gArEcuData.status.spare2;
    mUnLock(eSendDataType_ARINC_ECU);
    return spare2;
}

void setArEcuStatusSpare2(const float spare2)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.spare2 = spare2;
    mUnLock(eSendDataType_ARINC_ECU);
}

float getArEcuStatusSpare3()
{
    float spare3;

    mLock(eSendDataType_ARINC_ECU);
    spare3 = gArEcuData.status.spare3;
    mUnLock(eSendDataType_ARINC_ECU);
    return spare3;
}

void setArEcuStatusSpare3(const float spare3)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status.spare3 = spare3;
    mUnLock(eSendDataType_ARINC_ECU);
}


ArDataEcuTimerStruct getArEcuTimer()
{
    ArDataEcuTimerStruct timer;

    mLock(eSendDataType_ARINC_ECU);
    timer = gArEcuData.timer;
    mUnLock(eSendDataType_ARINC_ECU);
    return timer;
}

ArDataEcuLaunchStruct getArEcuLaunch()
{
    ArDataEcuLaunchStruct launch;

    mLock(eSendDataType_ARINC_ECU);
    launch = gArEcuData.launch;
    mUnLock(eSendDataType_ARINC_ECU);
    return launch;
}

ArDataEcuStatusStruct getArEcuStatus()
{
    ArDataEcuStatusStruct status;

    mLock(eSendDataType_ARINC_ECU);
    status = gArEcuData.status;
    mUnLock(eSendDataType_ARINC_ECU);
    return status;
}


void setArEcuTimer(const ArDataEcuTimerStruct timer)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.timer = timer;
    mUnLock(eSendDataType_ARINC_ECU);
}

void setArEcuLaunch(const ArDataEcuLaunchStruct launch)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.launch = launch;
    mUnLock(eSendDataType_ARINC_ECU);
}

void setArEcuStatus(const ArDataEcuStatusStruct status)
{
    mLock(eSendDataType_ARINC_ECU);
    gArEcuData.status = status;
    mUnLock(eSendDataType_ARINC_ECU);
}
