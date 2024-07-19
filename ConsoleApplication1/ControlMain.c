#include "SetAirflameParameter.h"
#include "SetNaviState.h"
#include "ArincData.h"
#include <stdio.h>

void controlMain()
{
	//SetAirflameParameter.h�Œ�`
	WIRESCondition wiresPram;
	WIRESConditionRCS wiresPramRcs;

	//ArincData.h�Œ�`
	ArDataAirFadsStruct wiresAirPram;
	ArDataNavInsStruct wiresNaviPram;
	ArDataCtrLaunchStruct wiresCtrlPram;

	//SetNaviState.h�Œ�`
	WIRESNaviState wiresNaviData;
	
	
	SetAirflameParameter(&wiresPram, &wiresPramRcs);
	
	SetNaviState(&wiresAirPram, &wiresNaviPram, &wiresCtrlPram, &wiresNaviData);
	//SetAeroData();
	//AeroCoefficient();
	//GimbalResponseModel();
	//test
}