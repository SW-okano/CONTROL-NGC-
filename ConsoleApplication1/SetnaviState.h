#ifndef _SETNAVISTATE_H
#define _SETNAVISTATE_H

typedef struct
{
	double dU; //地上座標系X軸方向速度
	double dV; //地上座標系Y軸方向速度
	double dW; //地上座標系Z軸方向速度
	double pitch_Gim; //ジンバルピッチ角
	double yaw_Gim; //ジンバルヨー角
	double pitch_dGim; //ジンバルピッチ角速度
	double yaw_dGim; //ジンバルヨー角速度
	double g; //重力

}WIRESNaviState;


WIRESNaviState WIRESNavi;

#endif//_SETNAVISTATE_H