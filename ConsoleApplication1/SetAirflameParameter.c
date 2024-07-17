#include "SetairflameParameter.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*********************************
* ’l‚É‚Â‚¢‚Ä‚ÍSetParameter.m‚ðŽQÆ
************************************/
void SetAirflameParameter(WIRESCondition* pram, WIRESConditionRCS* pramRCS)
{

	pram -> MAC = 1.072;
	pram -> Wsp = 2.88;
	pram -> WBA = 2.68;
	pram -> BLen = 4;
	pram -> CG = 62.9125;
	pram -> DMass = 769.3;
	pram -> Mass = 1000;
	pram -> Ixx = 95.53;
	pram -> Iyy = 1784.95;
	pram -> Izz = 1785.89;
	pram -> Ixy = 0;
	pram -> Ixz = 0;
	pram -> Iyz = 0;
	pram -> thrust_x = 3.5;
	pram -> thrust_y = 0;
	pram -> thrust_z = 0;
	pram -> p0 = 0.1013;
	pram -> Ae = 14998;
	pram -> INI_Force = 15.11;
	pram -> CGx = 2.5717;
	pram -> CGy = 0;
	pram -> CGz = 0;
	pram -> dt = 0.02;
	pram -> AeroCG = 64;

	pram -> DI_AlpHz = 1;
	pram -> DI_AlpZeta = 0.7;
	pram -> DI_BetHz = 1;
	pram -> DI_BetZeta = 0.7;
	pram -> DI_PhiHz = 1;
	pram -> DI_PhiZeta = 0.7;
	pram -> DI_GainSpan = 0.02;
	pram -> DI_TheHz = 1;
	pram -> DI_TheZeta = 0.7;
	pram -> DI_PsiHz = 1;
	pram -> DI_PsiZeta = 0.7;

	pram -> SM_ReqGain = 6;
	pram -> SM_ReqPhase = 45;

	pram -> Refpit = 90;
	pram -> EleOmega = 25.13;
	pram -> EleZeta = 0.70;
	pram -> RudderOmega = 25.13;
	pram -> RudderZeta = 0.70;
	pram -> GimbalOmega = 41.7832;
	pram -> GimbalZeta = 1.2533;
	
	pram -> LimitAile = 20;
	pram -> LimitEle = 20;
	pram -> LimitRud = 20;
	pram -> LimitGim = 5;

	pramRCS -> Deadx = 0.01;
	pramRCS -> Deady = 0.01;
	pramRCS -> Deadz = 0.01;
	pramRCS -> taux = 1.35;
	pramRCS -> tauy = 1.40;
	pramRCS -> tauz = 6.10;
	pramRCS -> roll = 0;
	pramRCS -> pitch = -70;
	pramRCS -> yaw = 0;
}