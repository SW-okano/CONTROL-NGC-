#include "SetNaviState.h"
#include "ArincData.h"

void SetNaviState(ArDataAirFadsStruct* airPram, ArDataNavInsStruct* naviPram,
				  ArDataCtrLaunchStruct* ctrlPram, WIRESNaviState* naviState)
{
	airPram->air_speed = 56.15;
	airPram->angle_of_attack = 2.8393277694887e-2;
	airPram->side_slip_angel = -3.79109263300949e-4;
	naviPram->roll_rate = -2.41394333175488e-5;
	naviPram->pitch_rate = -9.27202259623899e-3;
	naviPram->yaw_rate = 4.43670504748290e-5;
	naviPram->roll = -1.95496340847188e-3;
	naviPram->pitch = 1.41225181651922;
	naviPram->yaw = -2.16852065919094e-3;
	ctrlPram->elevon_l_answer = 6.7155189960629e-2;
	ctrlPram->elevon_r_answer = 6.7416353578218e-2;
	ctrlPram->rudder_l_r_answer = -9.095792609517244e-4;
	naviPram->ground_velocity_u = 56.1284948109407;
	naviPram->ground_velocity_v = -2.12874134854790e-2;
	naviPram->ground_velocity_w = 1.59410033911174;
	naviState->dU = 0;
	naviState->dV = 0;
	naviState->dW = 0;
	naviPram->quaternion0 = 7.60881319509369e-1;
	naviPram->quaternion1 = -4.01809211098633e-5;
	naviPram->quaternion2 = 6.48891038338422e-1;
	naviPram->quaternion3 = -1.90714476122831e-4;
	airPram->mach = 0.1655;
	naviPram->ins_gnss_altitude = 274.4235; 
	naviState->g = 9.80665 * ((6378000/(6378000+naviPram->ins_gnss_altitude)) * (6378000 / (6378000 + naviPram->ins_gnss_altitude))); //g0 = 9.80665,earth_radius = 6378.0E3 ‚×‚«æ‚ÌŒvŽZ

	naviState->pitch_Gim = 2.4918048027769e-2;
	naviState->yaw_Gim = 5.504983099313687e-6;
	naviState->pitch_dGim = 1.695513810682950e-15;
	naviState->yaw_dGim = -1.481742846796130e-21;
	//d_roll_rate,d_pitch_rate,d_yaw_rate 

}