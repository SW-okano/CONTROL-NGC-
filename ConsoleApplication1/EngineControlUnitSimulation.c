// Engine Control Unit CSC Simulation
#include <stdbool.h>
#include "EngineControlUnitSimulation.h"
#include "CoomonFunction.h"
#include "ArincData.h"

void mStartEngineControlUnitCSCSimulation()
{
    thrd_t thread;
    if (thrd_create(&thread, mTaskEngineControlUnitSimulation, NULL) != thrd_success)
    {
        printf("ÉXÉåÉbÉhÇÃê∂ê¨Ç…é∏îsÇµÇ‹ÇµÇΩ\n");
        return;
    }
    //    thrd_join(thread, NULL);  //no wait
}

int mTaskEngineControlUnitSimulation(void* arg)
{
    mPrint("Start Ecu CSC simulation\n");
    return 0;
}