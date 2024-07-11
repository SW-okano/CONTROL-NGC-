// Guidance CSC Simulation
#include <stdbool.h>
#include "GuidanceSimulation.h"
#include "CoomonFunction.h"
#include "ArincData.h"

void mStartGuidanceCSCSimulation()
{
    thrd_t thread;
    if (thrd_create(&thread, mTaskGuidanceSimulation, NULL) != thrd_success)
    {
        printf("ÉXÉåÉbÉhÇÃê∂ê¨Ç…é∏îsÇµÇ‹ÇµÇΩ\n");
        return;
    }
    //    thrd_join(thread, NULL);  //no wait
}
int mTaskGuidanceSimulation(void* arg)
{
    mPrint("Start Gui CRC simulation\n");

    //set base rtc
    unsigned long base_rtc = (unsigned long)mGetLocalSerial();
    setBaseRtc(base_rtc);

    //set run mode
    setRunMode(eRunMode_Normal);

    //set flight phase
    setFlightPhase(eFlightPhase_PoweredAscent);

    long timerCounter = 1;
    int bef_Flight_mode = (int)eFlightPhase_PoweredAscent;
    while (true) {
        mDelay(8000);
        //set timer counter
        setTimerCounter(timerCounter);
        if ((timerCounter % 5) == 0)
        {
            //change&set flight phase
            bef_Flight_mode++;
            setFlightPhase(bef_Flight_mode);
        }
        timerCounter++;
    }
    return 0;
}