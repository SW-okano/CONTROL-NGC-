#ifndef _SETNAVISTATE_H
#define _SETNAVISTATE_H

typedef struct
{
	double dU; //�n����W�nX���������x
	double dV; //�n����W�nY���������x
	double dW; //�n����W�nZ���������x
	double pitch_Gim; //�W���o���s�b�`�p
	double yaw_Gim; //�W���o�����[�p
	double pitch_dGim; //�W���o���s�b�`�p���x
	double yaw_dGim; //�W���o�����[�p���x
	double g; //�d��

}WIRESNaviState;


WIRESNaviState WIRESNavi;

#endif//_SETNAVISTATE_H