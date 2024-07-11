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
//    ArDataGdeTimerStrunt timer;
//    timer.base_time = mGetLocalSerial();
//    getArGdeTimerTimeCounter(timer);

    int running_mode;  //TBR
    int flight_phase; //TBR

    //set run mode & set flight phase
//    phase.running_mode = (int)eRunMode_Normal;
    flight_phase = (int)eFlightPhase_PoweredAscent;
    setArGdePhasePhaseFlag(flight_phase);

    long timerCounter = 1;
    int bef_Flight_mode = (int)eFlightPhase_PoweredAscent;
    while (true) {
        mDelay(8000);
        //set timer counter
        float timerCounter_f =  (float)(timerCounter);
        setArGdeTimerTimeCounter(timerCounter_f);
        if ((timerCounter % 5) == 0)
        {
            //change&set flight phase
            bef_Flight_mode++;
            setArGdePhasePhaseFlag(bef_Flight_mode);
        }
        timerCounter++;
    }
    mPrint("End Gui CRC simulation\n");
    return 0;
}