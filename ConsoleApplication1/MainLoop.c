#include <stdio.h>
#include <windows.h>
#include <threads.h>
#include <stdbool.h>
#include <time.h>
#include "ArincData.h"
#include "GuidanceSimulation.h"
#include "CoomonFunction.h"
#include "Rs422Data.h"

void startup();

int main()
{
    startup();

    mPrint("Start main loop\n");
    long befTimerCounter = 0;
    bool commandSafetyProcessCommand = false;
    long timerCounter;
    int run_mode;
    int flight_phase;

    while (!commandSafetyProcessCommand) {
        mDelay(3000);
        commandSafetyProcessCommand = getArGdeCommandSafetyProcessCommand();

        timerCounter = (long)getArGdeTimerTimeCounter();
        run_mode = getArComRunMode();
        flight_phase = getArGdePhasePhaseFlag();
        mPrint(" timer Counter[:%ld], run mode[:%d], flight phase[:%d], commandSafetyProcessCommand[:%d]\n", timerCounter, run_mode, flight_phase, commandSafetyProcessCommand);

        if (timerCounter > befTimerCounter)
        {
            mPrint("Change timer Counter[%d]\n", timerCounter);
            mPrint(" timer Counter[%ld], run mode[%d], flight phase[%d]\n", timerCounter, run_mode, flight_phase);
            befTimerCounter = timerCounter;
        }
    }
    return 0;
}

void startup()
{
    mLockUnlockInit(eSendDataType_RS422);
    mLockUnlockInit(eSendDataType_ARINC_GDE);
    mLockUnlockInit(eSendDataType_ARINC_COM);

    mStartGuidanceCSCSimulation(); //start guidance CSC Simulation
    mStartCommunicationCSCSimulation(); //start communication CSC Simulation

    //get rtc time
    unsigned long localSerialTime = mGetLocalSerial();
    mPrint(" base rtc[%ld]\n", localSerialTime);

    //mPrintMemory((const void*)&localSerialTime, sizeof(localSerialTime));
}

