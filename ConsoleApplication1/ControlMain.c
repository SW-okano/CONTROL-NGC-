#include "SetairflameParameter.h"
#include <stdio.h>

void controlMain()
{
	WIRESCondition wiresPram;
	WIRESConditionRCS wiresPramRcs;
	
	SetAirflameParameter(&wiresPram, &wiresPramRcs);
	
	//SetnaviState();
	//SetAeroData();
	//AeroCoefficient();
	//GimbalResponseModel();
	//test
}