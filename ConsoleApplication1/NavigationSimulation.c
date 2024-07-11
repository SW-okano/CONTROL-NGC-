// Navigation CSC Simulation
#include <stdbool.h>
#include "NavigationSimulation.h"
#include "CoomonFunction.h"
#include "ArincData.h"

void mStartNavigationCSCSimulation()
{
    thrd_t thread;
    if (thrd_create(&thread, mTaskNavigationSimulation, NULL) != thrd_success)
    {
        printf("ƒXƒŒƒbƒh‚Ì¶¬‚ÉŽ¸”s‚µ‚Ü‚µ‚½\n");
        return;
    }
    //    thrd_join(thread, NULL);  //no wait
}
int mTaskNavigationSimulation(void* arg)
{
    mPrint("Start Nav CSC simulation\n");

    long befTimerCounter = 0;

    while (true) {
        mDelay(3000);
        long timerCounter = (long)getArGdeTimerTimeCounter();
        int run_mode = (int)eRunMode_Normal;//TBD
        int flight_phase = getArGdePhasePhaseFlag();//TBD
        mPrint(" timer Counter[:%ld], run mode[:%d], flight phase[:%d]\n", timerCounter, run_mode, flight_phase);

        if (timerCounter > befTimerCounter)
        {
            mPrint("Change timer Counter[%d]\n", timerCounter);
            mPrint(" timer Counter[%ld], run mode[%d], flight phase[%d]\n", timerCounter, run_mode, flight_phase);
            befTimerCounter = timerCounter;
        }
    }
    return 0;
}