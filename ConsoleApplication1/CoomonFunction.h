#ifndef _COMMONFUNCTION_H
#define _COMMONFUNCTION_H

#include <windows.h>
#include <threads.h>
#include <stdio.h>
#include <time.h>

void mDelay(const unsigned int milliSec);
void mPrint(const char* printData);
void mPrintMemory(const void* address, unsigned int numBytes);
int mGetLocalSerial();

void mLockUnlockInit(enum eSendDataType senddataType);
void mLock(enum eSendDataType senddataType);
void mUnLock(enum eSendDataType senddataType);
mtx_t gMutexArincNav;
mtx_t gMutexArincGde;
mtx_t gMutexArincCom;
mtx_t gMutexArincAir;
mtx_t gMutexArincEcu;
mtx_t gMutexArincCtr;
mtx_t gMutexArincDat;
mtx_t gMutexRs422;

//SEND DATA TYPE
typedef enum
{
    eSendDataType_RS422,
    eSendDataType_ARINC_NAV,
    eSendDataType_ARINC_GDE,
    eSendDataType_ARINC_COM,
    eSendDataType_ARINC_AIR,
    eSendDataType_ARINC_ECU,
    eSendDataType_ARINC_CTR,
    eSendDataType_ARINC_DAT
}eSendDataType;
#endif // _COMMONFUNCTION_H