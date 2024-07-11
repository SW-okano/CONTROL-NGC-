#include "CoomonFunction.h"

void mDelay(const unsigned int milliSec)
{
    Sleep(milliSec);
}

// printf‚Ìƒ‰ƒbƒp[ŠÖ”
void mPrint(const char* format, ...) 
{
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}



void mPrintMemory(const void* address, unsigned int numBytes) {
    const unsigned char* bytePtr = (const unsigned char*)address;
    for (int i = 0; i < numBytes; i++) {
        //printf("%p: 0x%02x\n", (void*)(bytePtr + i), bytePtr[i]);
        printf("0x%02x\n", (void*)(bytePtr + i), bytePtr[i]);
    }
}

int mGetLocalSerial() {
    time_t rawtime = time(NULL);
    return rawtime;
}


// Lock/Unlock
void mLockUnlockInit(enum eSendDataType senddataType)
{
    if (senddataType == eSendDataType_ARINC_NAV)
    {
        mtx_init(&gMutexArincNav, mtx_plain);
    }
    if (senddataType == eSendDataType_ARINC_GDE)
    {
        mtx_init(&gMutexArincGde, mtx_plain);
    }
    if (senddataType == eSendDataType_ARINC_COM)
    {
        mtx_init(&gMutexArincCom, mtx_plain);
    }
    if (senddataType == eSendDataType_ARINC_AIR)
    {
        mtx_init(&gMutexArincAir, mtx_plain);
    }
    if (senddataType == eSendDataType_ARINC_ECU)
    {
        mtx_init(&gMutexArincEcu, mtx_plain);
    }
    if (senddataType == eSendDataType_ARINC_CTR)
    {
        mtx_init(&gMutexArincCtr, mtx_plain);
    }
    if (senddataType == eSendDataType_ARINC_DAT)
    {
        mtx_init(&gMutexArincDat, mtx_plain);
    }

    if (senddataType == eSendDataType_RS422)
    {
        mtx_init(&gMutexRs422, mtx_plain);
    }
}

void mLock(enum eSendDataType senddataType)
{
    if (senddataType == eSendDataType_ARINC_NAV)
    {
        mtx_lock(&gMutexArincNav);
    }
    if (senddataType == eSendDataType_ARINC_GDE)
    {
        mtx_lock(&gMutexArincGde);
    }
    if (senddataType == eSendDataType_ARINC_COM)
    {
        mtx_lock(&gMutexArincCom);
    }
    if (senddataType == eSendDataType_ARINC_AIR)
    {
        mtx_lock(&gMutexArincAir);
    }
    if (senddataType == eSendDataType_ARINC_ECU)
    {
        mtx_lock(&gMutexArincEcu);
    }
    if (senddataType == eSendDataType_ARINC_CTR)
    {
        mtx_lock(&gMutexArincCtr);
    }
    if (senddataType == eSendDataType_ARINC_DAT)
    {
        mtx_lock(&gMutexArincDat);
    }

    if (senddataType == eSendDataType_RS422)
    {
        mtx_lock(&gMutexRs422);
    }
}

void mUnLock(enum eSendDataType senddataType)
{
    if (senddataType == eSendDataType_ARINC_NAV)
    {
        mtx_unlock(&gMutexArincNav);
    }
    if (senddataType == eSendDataType_ARINC_GDE)
    {
        mtx_unlock(&gMutexArincGde);
    }
    if (senddataType == eSendDataType_ARINC_COM)
    {
        mtx_unlock(&gMutexArincCom);
    }
    if (senddataType == eSendDataType_ARINC_AIR)
    {
        mtx_unlock(&gMutexArincAir);
    }
    if (senddataType == eSendDataType_ARINC_ECU)
    {
        mtx_unlock(&gMutexArincEcu);
    }
    if (senddataType == eSendDataType_ARINC_CTR)
    {
        mtx_unlock(&gMutexArincCtr);
    }
    if (senddataType == eSendDataType_ARINC_DAT)
    {
        mtx_unlock(&gMutexArincDat);
    }

    if (senddataType == eSendDataType_RS422)
    {
        mtx_unlock(&gMutexRs422);
    }
}
