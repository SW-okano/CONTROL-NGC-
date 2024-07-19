#ifndef _SETAIRFLAMEPARAMETER_H
#define _SETAIRFLAMEPARAMETER_H

#include <stdbool.h>

typedef struct
{
	double MAC; //空力平均翼弦(Mean Aerodynamic Chord)[m]
	double Wsp; //翼幅(Wingspan)[m]
	double WBA; //主翼基準面積(WingBaseArea)[m]
	double BLen; //胴体長(BodyLength)[m]
	double CG; //重心(Center of Gravity)
	double Mass; //質量(Mass)[kg]
	double DMass; //質量(DryMass)[kg]
	double Ixx; //x軸周り慣性モーメント[kgm2]
	double Iyy; //y軸周りの慣性モーメント[kgm2]
	double Izz; //z軸周りの慣性モーメント[kgm2]
	double Ixy; //慣性相乗モーメント
	double Ixz; //慣性相乗モーメント
	double Iyz; //慣性相乗モーメント
	double CGx; //x軸方向の重心?
	double CGy; //y軸方向の重心?
	double CGz; //z軸方向の重心?
	double dt;
	double thrust_x; //推力x
	double thrust_y; //推力y
	double thrust_z; //推力z
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