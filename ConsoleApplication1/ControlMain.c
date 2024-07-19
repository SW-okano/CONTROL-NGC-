#include "SetAirflameParameter.h"
#include "SetNaviState.h"
#include "ArincData.h"
#include <stdio.h>

void controlMain()
{
	//SetAirflameParameter.hで定義
	WIRESCondition wiresPram;
	WIRESConditionRCS wiresPramRcs;

	//ArincData.hで定義
	ArDataAirFadsStruct wiresAirPram;
	ArDataNavInsStruct wiresNaviPram;
	ArDataCtrLaunchStruct wiresCtrlPram;

	//SetNaviState.hで定義
	WIRESNaviState wiresNaviData;
	
	
	SetAirflameParameter(&wiresPram, &wiresPramRcs);
	
	SetNaviState(&wiresAirPram, &wiresNaviPram, &wiresCtrlPram, &wiresNaviData);
	//SetAeroData();
	//AeroCoefficient();
	//GimbalResponseModel();
	//test
}