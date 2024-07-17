#ifndef _SETAIRFLAMEPARAMETER_H
#define _SETAIRFLAMEPARAMETER_H

#include <stdbool.h>

typedef struct
{
	unsigned short MAC; //óÍ˝Ďˇ(Mean Aerodynamic Chord)[m]
	unsigned short Wsp; //(Wingspan)[m]
	unsigned short WBA; //ĺîĘĎ(WingBaseArea)[m]
	unsigned short BLen; //ˇĚˇ(BodyLength)[m]
	unsigned short CG; //dS(Center of Gravity)
	unsigned short Mass; //żĘ(Mass)[kg]
	unsigned short DMass; //żĘ(DryMass)[kg]
	unsigned short Ixx; //x˛üčľŤ[g[kgm2]
	unsigned short Iyy; //y˛üčĚľŤ[g[kgm2]
	unsigned short Izz; //z˛üčĚľŤ[g[kgm2]
	unsigned short Ixy; //ľŤć[g
	unsigned short Ixz; //ľŤć[g
	unsigned short Iyz; //ľŤć[g
	unsigned short CGx; //x˛űüĚdS?
	unsigned short CGy; //y˛űüĚdS?
	unsigned short CGz; //z˛űüĚdS?
	float dt;
	float thrust_x; //Íx
	float thrust_y; //Íy
	float thrust_z; //Íz
	float p0;
	float Ae;
	float INI_Force;
	float DI_AlpHz;
	float DI_AlpZeta;
	float DI_BetHz;
	float DI_BetZeta;
	float DI_PhiHz;
	float DI_PhiZeta;
	float DI_TheHz;
	float DI_TheZeta;
	float DI_PsiHz;
	float DI_PsiZeta;
	float DI_GainSpan;
	float SM_ReqGain;
	float SM_ReqPhase;
	float Refpit;
	float LimitAile;
	float LimitEle;
	float LimitRud;
	float LimitGim;
	float EleOmega;
	float EleZeta;
	float RudderOmega;
	float RudderZeta;
	float GimbalOmega;
	float GimbalZeta;
	float AeroCG;

}WIRESCondition;

typedef struct
{
	float Deadx;
	float Deady;
	float Deadz;
	float taux;
	float tauy;
	float tauz;
	float roll;
	float pitch;
	float yaw;
	

}WIRESConditionRCS;

typedef struct
{
	WIRESCondition condition;
	WIRESConditionRCS conditionRCS;
}WIRESCtrl;

WIRESCtrl WIRES;

#endif//_SETAIRFLAMEPARAMETER_H