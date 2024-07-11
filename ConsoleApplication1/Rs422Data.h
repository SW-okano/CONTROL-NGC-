#ifndef _RS422DATA_H
#define _RS422DATA_H

//RS422 Data
enum eRS422
{
    eRS422_INS_GNSS, //INS/GNSS
    eRS422_GNSS1,    //GNSS1
    eRS422_GNSS2,    //GNSS2
    eRS422_FPGA      //FPGA
};
char gRs422Data[2];
#endif//_RS422DATA_H