// Communication CSC Simulation
#include <stdbool.h>
#include "CommunicationSimulation.h"
#include "CoomonFunction.h"
#include "ArincData.h"

void mStartCommunicationCSCSimulation()
{
    thrd_t thread;
    if (thrd_create(&thread, mTaskCommunicationSimulation, NULL) != thrd_success)
    {
        printf("ƒXƒŒƒbƒh‚Ì¶¬‚ÉŽ¸”s‚µ‚Ü‚µ‚½\n");
        return;
    }
    //    thrd_join(thread, NULL);  //no wait
}

int mTaskCommunicationSimulation(void* arg)
{
    mPrint("Start Com CSC simulation\n");
    
    int run_mode = eRunMode_Normal;
    setArComRunMode(eRunMode_Normal);

    long befTimerCounter = 0;
    while (true) {
        mDelay(3000);
        long timerCounter = (long)getArGdeTimerTimeCounter();
        int flight_phase = getArGdePhasePhaseFlag();
        //        mPrint(" timer Counter[:%ld], run mode[:%d], flight phase[:%d]\n", timerCounter, run_mode, flight_phase);

        if (timerCounter > befTimerCounter)
        {
//            mPrint("Change timer Counter[%d]\n", timerCounter);
//            mPrint(" timer Counter[%ld], run mode[%d], flight phase[%d]\n", timerCounter, run_mode, flight_phase);
            befTimerCounter = timerCounter;

            if (timerCounter == 10)
            {
                setArGdeCommandSafetyProcessCommand(true);
                break;
            }
        }
    }
    mPrint("End Com CSC simulation\n");
    return 0;
}