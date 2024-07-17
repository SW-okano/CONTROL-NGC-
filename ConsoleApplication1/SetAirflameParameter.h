#ifndef _SETAIRFLAMEPARAMETER_H
#define _SETAIRFLAMEPARAMETER_H

#include <stdbool.h>

typedef struct
{
	unsigned short MAC; //空力平均翼弦(Mean Aerodynamic Chord)[m]
	unsigned short Wsp; //翼幅(Wingspan)[m]
	unsigned short WBA; //主翼基準面積(WingBaseArea)[m]
	unsigned short BLen; //胴体長(BodyLength)[m]
	unsigned short CG; //重心(Center of Gravity)
	unsigned short Mass; //質量(Mass)[kg]
	unsigned short DMass; //質量(DryMass)[kg]
	unsigned short Ixx; //x軸周り慣性モーメント[kgm2]
	unsigned short Iyy; //y軸周りの慣性モーメント[kgm2]
	unsigned short Izz; //z軸周りの慣性モーメント[kgm2]
	unsigned short Ixy; //慣性相乗モーメント
	unsigned short Ixz; //慣性相乗モーメント
	unsigned short Iyz; //慣性相乗モーメント
	unsigned short CGx; //x軸方向の重心?
	unsigned short CGy; //y軸方向の重心?
	unsigned short CGz; //z軸方向の重心?
	float dt;
	float thrust_x; //推力x
	float thrust_y; //推力y
	float thrust_z; //推力z
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