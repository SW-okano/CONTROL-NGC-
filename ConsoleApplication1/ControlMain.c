#include "SetAirflameParameter.h"
#include "SetNaviState.h"
#include "ArincData.h"
#include <stdio.h>

void controlMain()
{
	//SetAirflameParameter.h‚Å’è‹`
	WIRESCondition wiresPram;
	WIRESConditionRCS wiresPramRcs;

	//ArincData.h‚Å’è‹`
	ArDataAirFadsStruct wiresAirPram;
	ArDataNavInsStruct wiresNaviPram;
	ArDataCtrLaunchStruct wiresCtrlPram;

	//SetNaviState.h‚Å’è‹`
	WIRESNaviState wiresNaviData;
	
	
	SetAirflameParameter(&wiresPram, &wiresPramRcs);
	
	SetNaviState(&wiresAirPram, &wiresNaviPram, &wiresCtrlPram, &wiresNaviData);
	//SetAeroData();
	//AeroCoefficient();
	//GimbalResponseModel();
	//test
}