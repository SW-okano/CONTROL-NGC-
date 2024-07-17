#ifndef _SETAIRFLAMEPARAMETER_H
#define _SETAIRFLAMEPARAMETER_H

#include <stdbool.h>

typedef struct
{
	unsigned short MAC; //��͕��ϗ���(Mean Aerodynamic Chord)[m]
	unsigned short Wsp; //����(Wingspan)[m]
	unsigned short WBA; //�嗃��ʐ�(WingBaseArea)[m]
	unsigned short BLen; //���̒�(BodyLength)[m]
	unsigned short CG; //�d�S(Center of Gravity)
	unsigned short Mass; //����(Mass)[kg]
	unsigned short DMass; //����(DryMass)[kg]
	unsigned short Ixx; //x�����芵�����[�����g[kgm2]
	unsigned short Iyy; //y������̊������[�����g[kgm2]
	unsigned short Izz; //z������̊������[�����g[kgm2]
	unsigned short Ixy; //�������惂�[�����g
	unsigned short Ixz; //�������惂�[�����g
	unsigned short Iyz; //�������惂�[�����g
	unsigned short CGx; //x�������̏d�S?
	unsigned short CGy; //y�������̏d�S?
	unsigned short CGz; //z�������̏d�S?
	float dt;
	float thrust_x; //����x
	float thrust_y; //����y
	float thrust_z; //����z
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