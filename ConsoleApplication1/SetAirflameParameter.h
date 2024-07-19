#ifndef _SETAIRFLAMEPARAMETER_H
#define _SETAIRFLAMEPARAMETER_H

#include <stdbool.h>

typedef struct
{
	double MAC; //��͕��ϗ���(Mean Aerodynamic Chord)[m]
	double Wsp; //����(Wingspan)[m]
	double WBA; //�嗃��ʐ�(WingBaseArea)[m]
	double BLen; //���̒�(BodyLength)[m]
	double CG; //�d�S(Center of Gravity)
	double Mass; //����(Mass)[kg]
	double DMass; //����(DryMass)[kg]
	double Ixx; //x�����芵�����[�����g[kgm2]
	double Iyy; //y������̊������[�����g[kgm2]
	double Izz; //z������̊������[�����g[kgm2]
	double Ixy; //�������惂�[�����g
	double Ixz; //�������惂�[�����g
	double Iyz; //�������惂�[�����g
	double CGx; //x�������̏d�S?
	double CGy; //y�������̏d�S?
	double CGz; //z�������̏d�S?
	double dt;
	double thrust_x; //����x
	double thrust_y; //����y
	double thrust_z; //����z
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