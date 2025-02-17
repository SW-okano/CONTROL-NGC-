#ifndef _SETAIRFLAMEPARAMETER_H
#define _SETAIRFLAMEPARAMETER_H

#include <stdbool.h>

typedef struct
{
	double MAC; //óÍ˝Ďˇ(Mean Aerodynamic Chord)[m]
	double Wsp; //(Wingspan)[m]
	double WBA; //ĺîĘĎ(WingBaseArea)[m]
	double BLen; //ˇĚˇ(BodyLength)[m]
	double CG; //dS(Center of Gravity)
	double Mass; //żĘ(Mass)[kg]
	double DMass; //żĘ(DryMass)[kg]
	double Ixx; //x˛üčľŤ[g[kgm2]
	double Iyy; //y˛üčĚľŤ[g[kgm2]
	double Izz; //z˛üčĚľŤ[g[kgm2]
	double Ixy; //ľŤć[g
	double Ixz; //ľŤć[g
	double Iyz; //ľŤć[g
	double CGx; //x˛űüĚdS?
	double CGy; //y˛űüĚdS?
	double CGz; //z˛űüĚdS?
	double dt;
	double thrust_x; //Íx
	double thrust_y; //Íy
	double thrust_z; //Íz
	double p0;
	double Ae;
	double INI_Force;
	double DI_AlpHz;
	double DI_AlpZeta;
	double DI_BetHz;
	double DI_BetZeta;
	double DI_PhiHz;
	double DI_PhiZeta;
	double DI_TheHz;
	double DI_TheZeta;
	double DI_PsiHz;
	double DI_PsiZeta;
	double DI_GainSpan;
	double SM_ReqGain;
	double SM_ReqPhase;
	double Refpit;
	double LimitAile;
	double LimitEle;
	double LimitRud;
	double LimitGim;
	double EleOmega;
	double EleZeta;
	double RudderOmega;
	double RudderZeta;
	double GimbalOmega;
	double GimbalZeta;
	double AeroCG;

}WIRESCondition;

typedef struct
{
	double Deadx;
	double Deady;
	double Deadz;
	double taux;
	double tauy;
	double tauz;
	double roll;
	double pitch;
	double yaw;
	

}WIRESConditionRCS;

typedef struct
{
	WIRESCondition condition;
	WIRESConditionRCS conditionRCS;
}WIRESCtrl;

WIRESCtrl WIRES;

#endif//_SETAIRFLAMEPARAMETER_H