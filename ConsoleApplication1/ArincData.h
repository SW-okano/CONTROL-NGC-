#ifndef _ARINCDATA_H
#define _ARINCDATA_H

#include <stdbool.h>

typedef enum
{
    eCSCBord_NAV, //航法CSC
    eCSCBord_CTL, //制御CSC
    eCSCBord_GDE, //誘導CSC
    eCSCBord_AIR, //エアCSC
    eCSCBord_DAT, //データCSC
    eCSCBord_COM, //通信CSC
    eCSCBord_ECU  //ECU
}eCSCBord;

typedef enum
{
    eFlightPhase_PoweredAscent,   //動力上昇フェーズ TVC/EL Q<Qmin
    eFlightPhase_InertialClimb,   //慣性上昇フェーズ RCS Q>Qmin
    eFlightPhase_BallisticFlight, //弾道飛行フェーズ
    eFlightPhase_Reentry,         //再突入フェーズ 
    eFlightPhase_ReturnGlide,     //帰還滑空フェーズ  
    eFlightPhase_ChuteLanding     //パラシュート着陸フェーズ  
 }eFlightPhase;

typedef enum
{
    eRunMode_Normal,
    eRunMode_Hils,
    eRunMode_Sils
}eRunMode;

///////////////////////////////////////////////////////
//Arinc Data for Air
///////////////////////////////////////////////////////
typedef struct
{
    float    time_counter;        //Time Counter
}ArDataAirTimerStruct;

typedef struct
{
    bool    release_command;        //Release Command
}ArDataAirLaunchStruct;

typedef struct
{
    int    airdata_computer_status;        //AirData Computer Status
}ArDataAirStatusStruct;

typedef struct
{
    int    d1;        //D1
    int    d2;        //D2
    int    d3;        //D3
    int    d4;        //D4
    int    d5;        //D5
    int    d6;        //D6
    int    d7;        //D7
    int    d8;        //D8
    int    d9;        //D9
    int    a1;        //A１
    int    a2;        //A２
    int    a3;        //A３
    int    a4;        //A４
    float    angle_of_attack;        //Angle of Attack
    float    side_slip_angel;        //Side Slip Angle
    float    air_speed;        //Airspeed
    float    mach;        //Mach
    bool    system_failure_flag;        //System-failure flag
    bool    low_accuracy_flag;        //Low-accuracy flag
    float    pressure_altitude;        //Pressure Altitude
}ArDataAirFadsStruct;

typedef struct
{
    ArDataAirTimerStruct    timer;
    ArDataAirLaunchStruct    launch;
    ArDataAirStatusStruct    status;
    ArDataAirFadsStruct    fads;
}ArDataAirStrunt;

ArDataAirStrunt gArAirData;

///////////////////////////////////////////////////////
//Arinc Data for Navigation
///////////////////////////////////////////////////////
typedef struct
{
    float    time_counter;        //Time Counter
}ArDataNavTimerStruct;

typedef struct
{
    bool    release_command;        //Release Command
}ArDataNavLaunchStruct;

typedef struct
{
    int    navigation_computer_status;        //Navigation Computer Status
}ArDataNavStatusStruct;

typedef struct
{
    float    roll;        //Roll
    float    pitch;        //Pitch
    float    yaw;        //Yaw
    float    roll_rate;        //Roll Rate
    float    pitch_rate;        //Pitch Rate
    float    yaw_rate;        //Yaw Rate
    float    x_acc;        //X Acc
    float    y_acc;        //Y Acc
    float    z_acc;        //Z Acc
    float    ground_velocity_u;        //Ground Velocity U
    float    ground_velocity_v;        //Ground Velocity V
    float    ground_velocity_w;        //Ground Velocity W
    float    ground_speed;        //Ground Speed
    float    quaternion0;        //Quaternion0
    float    quaternion1;        //Quaternion1
    float    quaternion2;        //Quaternion2
    float    quaternion3;        //Quaternion3
    float    ins_gnss_utc;        //INS/GNSS_UTC
    float    ins_gnss_latitude;        //INS/GNSS_Latitude
    float    ins_gnss_longitude;        //INS/GNSS_Longitude
    float    ins_gnss_altitude;        //INS/GNSS_Altitude
    bool    ins_gnss_status;        //INS/GNSS_Status
    float    ins_gnss_ground_speed;        //INS/GNSS_Ground Speed
    float    raw_roll;        //Roll
    float    raw_pitch;        //Pitch
    float    raw_yaw;        //Yaw
    float    raw_roll_rate;        //Roll Rate
    float    raw_pitch_rate;        //Pitch Rate
    float    raw_yaw_rate;        //Yaw Rate
    float    raw_x_acc;        //X Acc
    float    raw_y_acc;        //Y Acc
    float    raw_z_acc;        //Z Acc
    float    raw_ground_vlocity_u;        //Ground Velocity U
    float    raw_ground_velocity_v;        //Ground Velocity V
    float    raw_ground_velocity_w;        //Ground Velocity W
    float    raw_ground_speed;        //Ground Speed
    float    raw_quaternion0;        //Quaternion0
    float    raw_quaternion1;        //Quaternion1
    float    raw_quaternion2;        //Quaternion2
    float    raw_quaternion3;        //Quaternion3
    float    raw_ins_gnss_latitude;        //INS/GNSS_Latitude
    float    raw_ins_gnss_longitude;        //INS/GNSS_Longitude
    float    raw_ins_gnss_altitude;        //INS/GNSS_Altitude
    int    ins_gnss_svs;        //INS/GNSS_SVs
}ArDataNavInsStruct;

typedef struct
{
    float    gps1_utc;        //GPS1_UTC
    float    gps1_latitude;        //GPS1_Latitude
    float    gps1_longitude;        //GPS1_Longitude
    float    gps1_altitude;        //GPS1_Altitude
    bool    gps1_status;        //GPS1 Status
    float    gps1_ground_speed;        //GPS1_Ground Speed
    float    raw_gps1_latitude;        //GPS1_Latitude
    float    raw_gps1_longitude;        //GPS1_Longitude
    float    raw_gps1_altitude;        //GPS1_Altitude
    int    gps1_svs;        //GPS1_SVs
}ArDataNavGps1Struct;

typedef struct
{
    float    gps2_utc;        //GPS2_UTC
    float    gps2_latitude;        //GPS2_Latitude
    float    gps2_longitude;        //GPS2_Longitude
    float    gps2_altitude;        //GPS2_Altitude
    bool    gps2_status;        //GPS2 Status
    float    gps2_ground_speed;        //GPS2 Ground Speed
    float    raw_gps2_latitude;        //GPS2_Latitude
    float    raw_gps2_longitude;        //GPS2_Longitude
    float    raw_gps2_altitude;        //GPS2_Altitude
    int    gps2_svs;        //GPS2_SVs
}ArDataNavGps2Struct;

typedef struct
{
    ArDataNavTimerStruct    timer;
    ArDataNavLaunchStruct    launch;
    ArDataNavStatusStruct    status;
    ArDataNavInsStruct    ins;
    ArDataNavGps1Struct    gps1;
    ArDataNavGps2Struct    gps2;
}ArDataNavStrunt;

ArDataNavStrunt gArNavData;

///////////////////////////////////////////////////////
//Arinc Data for Guidance
///////////////////////////////////////////////////////
typedef struct
{
    float    time_counter;        //Time Counter(誘導コンピュータの開始時刻について確認する必要有)
}ArDataGdeTimerStruct;

typedef struct
{
    int    phase_flag;        //Phase Flag
}ArDataGdePhaseStruct;

typedef struct
{
    float    release_timer;        //Release Timer
    int    guidance_computer_status;        //Guidance Computer Status
    float    ins_gnss_latitude;        //INS/GNSS_Latitude
    float    ins_gnss_longitude;        //INS/GNSS_Longitude
    float    ins_gnss_altitude;        //INS/GNSS_Altitude
    float    ground_velocity_u;        //Ground Velocity U
    float    ground_velocity_v;        //Ground Velocity V
    float    ground_velocity_w;        //Ground Velocity W
    float    ground_speed;        //Ground Speed(不要な可能性有)
    float    quaternion0;        //Quaternion0
    float    quaternion1;        //Quaternion1
    float    quaternion2;        //Quaternion2
    float    quaternion3;        //Quaternion3
}ArDataGdeLaunchStruct;

typedef struct
{
    float    angle_of_attack_command;        //Angle of Attack Command
    float    quaternion_0_command;        //Quaternion0 Command
    float    quaternion_1_command;        //Quaternion1 Command
    float    quaternion_2_command;        //Quaternion2 Command
    float    quaternion_3_command;        //Quaternion3 Command
    int    recover_system_status;        //Recovery System Status(回収班に確認の必要有)
    bool    safety_process_command;        //安全化処理指令(アビオ班に確認)
    float    angle_of_attack_command_time_history[50];    //Angle of Attack Command time history
    float    quaternion0_command_time_history[50];        //Quaternion0 Command time history
    float    quaternion1_command_time_history[50];        //Quaternion1 Command time history
    float    quaternion2_command_time_history[50];        //Quaternion2 Command time history
    float    quaternion3_command_time_history[50];        //Quaternion3 Command time history
}ArDataGdeCommandStruct;

typedef struct
{
    float    geneticinformation1;        //Genetic Information 1
    float    geneticinformation2;        //Genetic Information 2
    float    geneticinformation3;        //Genetic Information 3
    float    geneticinformation4;        //Genetic Information 4
    float    geneticinformation5;        //Genetic Information 5
    float    geneticinformation6;        //Genetic Information 6
    float    geneticinformation7;        //Genetic Information 7
    float    geneticinformation8;        //Genetic Information 8
    float    geneticinformation9;        //Genetic Information 9
    float    geneticinformation10;        //Genetic Information 10
    float    geneticinformation11;        //Genetic Information 11
    float    geneticinformation12;        //Genetic Information 12
    float    geneticinformation13;        //Genetic Information 13
    float    geneticinformation14;        //Genetic Information 14
    float    geneticinformation15;        //Genetic Information 15
    float    geneticinformation16;        //Genetic Information 16
    float    geneticinformation17;        //Genetic Information 17
    float    geneticinformation18;        //Genetic Information 18
    float    geneticinformation19;        //Genetic Information 19
    float    geneticinformation20;        //Genetic Information 20
    float    geneticinformation21;        //Genetic Information 21
    float    geneticinformation22;        //Genetic Information 22
    float    geneticinformation23;        //Genetic Information 23
    float    geneticinformation24;        //Genetic Information 24
    float    geneticinformation25;        //Genetic Information 25
    float    geneticinformation26;        //Genetic Information 26
    float    geneticinformation27;        //Genetic Information 27
    float    geneticinformation28;        //Genetic Information 28
    float    geneticinformationforthecalculation[21][100][100];        //Genetic Information for the Calculation
}ArDataGdeGeneStruct;

typedef struct
{
    ArDataGdeTimerStruct    timer;
    ArDataGdePhaseStruct    phase;
    ArDataGdeLaunchStruct    launch;
    ArDataGdeCommandStruct    command;
    ArDataGdeGeneStruct    gene;
}ArDataGdeStrunt;

ArDataGdeStrunt gArGdeData;

///////////////////////////////////////////////////////
//Arinc Data for Control
///////////////////////////////////////////////////////
typedef struct
{
    int    phase_flag;        //Phase Flag
}ArDataCtrPhaseStruct;

typedef struct
{
    float    control_time_counter;        //Control Time Counter
    float    time_log;        //Time Log
}ArDataCtrTimerStruct;

typedef struct
{
    bool    release_command;        //Release Command
    int    control_computer_status;        //Control Computer Status
    int    recovery_command;        //Recovery_Command
    bool    airbag_door_command;        //Airbag Door_Command
    bool    airbag_command;        //Airbag_Command
    bool    drogue_chute_command;        //Drogue Chute_Command
    bool    main_chute_command;        //Main Chute_Command
    float    elevon_l_command;        //Elevon_L Command
    float    elevon_l_answer;        //Elevon_L Answer
    float    elevon_r_command;        //Elevon_R Command
    float    elevon_r_answer;        //Elevon_R Answer
    float    rudder_l_r_command;        //Rudder_L/R Command
    float    rudder_l_r_answer;        //Rudder_L/R Answer
    float    s_elevon_l_command;        //Elevon_L Command
    float    s_elevon_r_command;        //Elevon_R Command
    float    s_rudder_l_r_command;        //Rudder_L/R Command
    int    rcs_command;        //RCS Command
    bool    rcs_1_command;        //RCS_1 Command
    bool    rcs_2_command;        //RCS_2 Command
    bool    rcs_3_command;        //RCS_3 Command
    bool    rcs_4_command;        //RCS_4 Command
    bool    rcs_5_command;        //RCS_5 Command
    bool    rcs_6_command;        //RCS_6 Command
    float    angle_of_gimbal_pitch_command;        //Angle of Gimbal_Pitch Command
    float    angle_of_gimbal_yaw_command;        //Angle of Gimbal_Yaw Command
    float    roll_p_gain;        //Roll P-Gain
    float    pitch_p_gain;        //Pitch P-Gain
    float    yaw_p_gain;        //Yaw P-Gain
    float    angle_of_attack_p_gain;        //Angle of Attack P-Gain
    float    side_slip_angle_p_gain;        //Side Slip Angle P-Gain
    float    roll_d_gain;        //Roll D-Gain
    float    pitch_d_gain;        //Pitch D-Gain
    float    yaw_d_gain;        //Yaw D-Gain
    float    angle_of_attack_d_gain;        //Angle of Attack D-Gain
    float    side_slip_angle_d_gain;        //Side Slip Angle D-Gain
    bool    system_failure_flag;        //System-failure flag
    bool    low_accuracy_flag;        //Low-accuracy flag
    float    airspeed;        //Airspeed
    float    angle_of_attack;        //Angle of Attack
    float    mach;        //Mach
    float    side_slip_angle;        //Side Slip Angle
    float    roll_rate;        //Roll Rate
    float    pitch_rate;        //Pitch Rate
    float    yaw_rate;        //Yaw Rate
    float    roll;        //Roll
    float    pitch;        //Pitch
    float    yaw;        //Yaw
    float    quaternion0;        //Quaternion0
    float    quaternion1;        //Quaternion1
    float    quaternion2;        //Quaternion2
    float    quaternion3;        //Quaternion3
    float    ins_gnss_altitude;        //INS/GNSS_Altitude
    float    ground_velocity_u;        //Ground Velocity U
    float    ground_velocity_v;        //Ground Velocity V
    float    ground_velocity_w;        //Ground Velocity W
    float    angle_of_attack_command;        //Angle of Attack Command
    float    quaternion1_command;        //Quaternion1 Command
    float    quaternion2_command;        //Quaternion2 Command
    float    quaternion3_command;        //Quaternion3 Command
}ArDataCtrLaunchStruct;

typedef struct
{
    ArDataCtrPhaseStruct    phase;
    ArDataCtrTimerStruct    timer;
    ArDataCtrLaunchStruct    launch;
}ArDataCtrStrunt;

ArDataCtrStrunt gArCtrData;

///////////////////////////////////////////////////////
//Arinc Data for Communication
///////////////////////////////////////////////////////
typedef struct
{
    float    communication_time_counter;        //Communication Time Counter
}ArDataComTimerStruct;

typedef struct
{
    bool    release_command_status;        //Release Command Status
    bool    ignition_status;        //Ignition Status
}ArDataComLaunchStruct;

typedef struct
{
    int    communication_command_status;        //Communication Computer Status
    bool    emergency_stop_command_a;        //非常停止A CMD
    bool    uplink_establishment_confirmation;        //アップリンク確立確認
    int    system_commands;        //システム指令
    int    propulsion_valve_drive_signal;        //推進系バルブ駆動信号
    int    engine_valve_drive_signal;        //エンジンバルブ駆動信号
    bool    engine_initial_operation;        //エンジン初期動作
    bool    ground_operation_mode_1_command;        //地上運用モード1指令
    bool    sequence_check_mode_command;        //シーケンス確認モード指令
    bool    engine_pre_cooling_command;        //エンジン予冷指令
    bool    engine_start_command;        //エンジン始動指令
    bool    stop_burning_command;        //燃焼停止指令
    bool    propellant_dump_command;        //推進薬投棄指令
    bool    personnel_approach_acceptance_command;        //人員接近受入指令
    bool    post_landing_safety_order;        //着陸後安全化指令
    bool    ground_operation_mode2_command;        //地上運用モード2指令
    bool    liftoff_command;        //リフトオフ指令
    bool    solenoid_ofdvo;        //電磁弁駆動信号-OFDVO
    bool    solenoid_ffdvo;        //電磁弁駆動信号-FFDVO
    bool    solenoid_ovvo;        //電磁弁駆動信号-OVVO
    bool    solenoid_fvvo;        //電磁弁駆動信号-FVVO
    bool    solenoid_ogpv;        //電磁弁駆動信号-OGPV
    bool    solenoid_fgpv;        //電磁弁駆動信号-FGPV
    bool    high_p_helium_shutoff1;        //電磁弁駆動信号-高圧ヘリウムライン遮断弁(1)
    bool    solenoid_psv;        //電磁弁駆動信号-PSV
    bool    high_p_helium_shutoff2;        //電磁弁駆動信号-高圧ヘリウムライン遮断弁(2)
    bool    solenoid_rsv;        //電磁弁駆動信号-RSV
    bool    solenoid_gn2_pump;        //電磁弁駆動信号-GN2ポンプ側シールパージ弁
    bool    solenoid_gn2_turbine;        //電磁弁駆動信号-GN2タービン側シールパージ弁
    bool    exciter_drive_signal;        //エキサイタ駆動信号
    bool    solenoid_moigv;        //電磁弁駆動信号-MOIGV
    bool    solenoid_mfigv;        //電磁弁駆動信号-MFIGV
    bool    solenoid_moigpv;        //電磁弁駆動信号-MOIGPV
    bool    solenoid_mfigpv;        //電磁弁駆動信号-MFIGPV
    bool    solenoid_mopv;        //電磁弁駆動信号-MOPV
    bool    solenoid_mfpv;        //電磁弁駆動信号-MFPV
    bool    solenoid_ocvo;        //電磁弁駆動信号-OCVO
    bool    solenoid_bocvo;        //電磁弁駆動信号-BOCVO
    bool    solenoid_bfcvo;        //電磁弁駆動信号-BFCVO
    bool    solenoid_oxidizer;        //電磁弁駆動信号-酸化剤軸受予冷弁
    bool    solenoid_fuel_bearing;        //電磁弁駆動信号-燃料軸受予冷弁
    bool    solenoid_ocpv;        //電磁弁駆動信号-OCPV
    bool    solenoid_fcpv;        //電磁弁駆動信号-FCPV
    bool    solenoid_ospv;        //電磁弁駆動信号-OSPV
    bool    solenoid_fspv;        //電磁弁駆動信号-FSPV
    float    solenoid_mov;        //電動弁開度信号-MOV
    float    solenoid_mfv;        //電動弁開度信号-MFV
    float    solenoid_tcv;        //電動弁開度信号-TCV
    float    solenoid_ocv;        //電動弁開度信号-OCV
    float    solenoid_fcv;        //電動弁開度信号-FCV
    bool    gimbaladjustment_command;        //ジンバル原点合わせ指令
    bool    tvc_actuator_power_command;        //TVCアクチュエータ電源指令
    bool    recording_command;        //記録指令
}ArDataComStatusStruct;

typedef struct
{
    ArDataComTimerStruct    timer;
    ArDataComLaunchStruct    launch;
    ArDataComStatusStruct    status;
    //TBD ADD START
    int     run_mode;       //動作モード
    //TBD ADD END
}ArDataComStrunt;

ArDataComStrunt gArComData;

///////////////////////////////////////////////////////
//Arinc Data for Data
///////////////////////////////////////////////////////
typedef struct
{
    int    data_computer_status;        //Data Computer Status
    bool    drogue_chute_door_sensor;        //Drogue Chute Door Sensor
    bool    main_chute_door_sensor;        //Main Chute Door Sensor
    bool    front_airbag_door_sensor;        //Front Airbag Door Sensor
    bool    rear_airbag_l_door_sensor;        //Rear Airbag L Door Sensor
    bool    rear_airbag_r_door_sensor;        //Rear Airbag R Door Sensor
    float    bus_battery_status;        //Bus Battery Status
    float    propulsion_battery_status;        //Propulsion Battery Status
    float    emc1_battery_status;        //EMC1 Battery Status
    float    emc2_battery_status;        //EMC2 Battery Status
    float    emc3_battery_status;        //EMC3 Battery Status
    float    emc_actuator1_battery_status;        //EMC Actuator1 Battery Status
    float    emc_actuator2_battery_status;        //EMC Actuator2 Battery Status
    float    elevon_battery_status;        //Elevon Battery Status
    float    rudder_battery_status;        //Rudder Battery Status
}ArDataDatStatusStruct;

typedef struct
{
    ArDataDatStatusStruct    status;
}ArDataDatStrunt;

ArDataDatStrunt gArDatData;

///////////////////////////////////////////////////////
//Arinc Data for Engine
///////////////////////////////////////////////////////
typedef struct
{
    float    engine_control_computer_time_counter;        //Engine Control Computer Time Counter
}ArDataEcuTimerStruct;

typedef struct
{
    bool    release_command;        //Release Command
}ArDataEcuLaunchStruct;

typedef struct
{
    float    ghe_gas_tank_pressure;        //GHe気蓄器圧力
    float    gn2_gas_tank_pressure;        //GN2気蓄器圧力
    float    ghe_gas_air_tank_downstream_pressure;        //GHe気蓄器調圧弁下流圧力
    float    lox_tank_pressure;        //LOXタンク圧力
    float    lng_tank_pressure;        //LNGタンク圧力
    float    engine_pneumatic_purge_pressure;        //エンジン系ﾆｭｰﾏﾁｯｸ・ﾊﾟｰｼﾞ圧力
    float    seal_purge_pressure;        //シールパージ圧力
    float    rcs_pressure_regulation_pressure;        //RCS調圧圧力
    float    lox_engine_inlet_pressure;        //LOXエンジン入口圧力
    float    lng_engine_inlet_pressure;        //LNGエンジン入口圧力
    float    shut_off_down_gn2_purge_pressure;        //遮断弁下流GN2パージ圧力
    float    ghe_gas_tank_outlet_temperature;        //GHe気蓄器出口温度
    float    ghe_gas_tank_surface_temperature;        //GHe気蓄器表面温度
    float    gn2_gas_tank_outlet_temperature;        //GN2気蓄器出口温度
    float    gn2_gas_tank_surface_temperature;        //GN2気蓄器表面温度
    float    lox_vent_line_temperature;        //LOXベントライン温度
    float    lng_vent_line_temperature;        //LNGベントライン温度
    float    lox_inlet_outlet_line_temperature;        //LOX注排液ライン温度
    float    lng_inlet_outlet_line_temperature;        //LNG注排液ライン温度
    float    lox_engine_inlet_temperature;        //LOXエンジン入口温度
    float    lng_engine_inlet_temperature;        //LNGエンジン入口温度
    float    lox_tank_bottom_temperature;        //LOXタンク底面温度
    float    lng_tank_bottom_temperature;        //LNGタンク底面温度
    float    lox_tank_liquid_level;        //LOXタンク液位
    float    lng_tank_liquid_level;        //LNGタンク液位
    float    engine_combustion_pressure;        //エンジン燃焼圧力
    float    igniter_combustion_pressure;        //点火器燃焼圧力
    float    combustion_chamber_outlet_pressure;        //燃焼室出口圧力
    float    lox_pump_outlet_pressure;        //LOXポンプ出口圧力
    float    lng_pump_outlet_pressure;        //LNGポンプ出口圧力
    float    purge_seal_lox_side_drain_chamber_pressure;        //パージシールLOX側ドレイン室圧力
    float    purge_seal_lng_side_drain_chamber_pressure;        //パージシールLNG側ドレイン室圧力
    float    pump_side_purge_seal_ghe_inlet_pressure;        //ポンプ側パージシールGHe入口圧力
    float    turbine_side_purge_seal_ghe_inlet_pressure;        //タービン側パージシールGHe入口圧力
    float    lox_precooling_line_temperature;        //LOX予冷ライン温度
    float    lng_precooling_line_temperature;        //LNG予冷ライン温度
    float    chamber_injector_side_manifold_outlet_temperature;        //燃焼室噴射器側ﾏﾆﾎｰﾙﾄﾞ出口温度
    float    lox_bearing_temperature;        //LOX軸受温度
    float    lng_bearing_temperature;        //LNG軸受温度
    float    lox_pump_casing_temperature_1;        //LOXポンプケーシング温度1
    float    lng_pump_casing_temperature_1;        //LNGポンプケーシング温度1
    float    turbo_pump_speed;        //ターボポンプ回転数
    float    motor_valve_status_mov_open;        //電動弁ステータス-MOV開
    float    motor_valve_status_mfv_open;        //電動弁ステータス-MFV開
    float    motor_valve_status_ocv_open;        //電動弁ステータス-OCV開
    float    motor_valve_status_fcv_open;        //電動弁ステータス-FCV開
    float    motor_valve_status_ismov_open_lox_line;        //電動弁ステータス-ISMOV開（LOXライン）
    float    motor_valve_status_ismfv_open_lng_line;        //電動弁ステータス-ISMFV開（LNGライン）
    float    gimbal_angle_answer_pitch;        //ジンバル角アンサ-ピッチ
    float    gimbal_angle_answer_yaw;        //ジンバル角アンサ-ヨー
    float    health_monitor_1;        //ヘルスモニタ1
    float    health_monitor_2;        //ヘルスモニタ2
    float    health_monitor_3;        //ヘルスモニタ3
    float    health_monitor_4;        //ヘルスモニタ4
    float    health_monitor_5;        //ヘルスモニタ5
    float    spare1;        //spare
    float    spare2;        //spare
    float    spare3;        //spare
}ArDataEcuStatusStruct;

typedef struct
{
    ArDataEcuTimerStruct    timer;
    ArDataEcuLaunchStruct    launch;
    ArDataEcuStatusStruct    status;
}ArDataEcuStrunt;

ArDataEcuStrunt gArEcuData;

///////////////////////////////////////////////////////
//Arinc Data set/get function for Air
///////////////////////////////////////////////////////
float getArAirTimerTimeCounter();
void setArAirTimerTimeCounter(const float time_counter);
bool getArAirLaunchReleaseCommand();
void setArAirLaunchReleaseCommand(const bool release_command);
int getArAirStatusAirdataComputerStatus();
void setArAirStatusAirdataComputerStatus(const int airdata_computer_status);
int getArAirFadsD1();
void setArAirFadsD1(const int d1);
int getArAirFadsD2();
void setArAirFadsD2(const int d2);
int getArAirFadsD3();
void setArAirFadsD3(const int d3);
int getArAirFadsD4();
void setArAirFadsD4(const int d4);
int getArAirFadsD5();
void setArAirFadsD5(const int d5);
int getArAirFadsD6();
void setArAirFadsD6(const int d6);
int getArAirFadsD7();
void setArAirFadsD7(const int d7);
int getArAirFadsD8();
void setArAirFadsD8(const int d8);
int getArAirFadsD9();
void setArAirFadsD9(const int d9);
int getArAirFadsA1();
void setArAirFadsA1(const int a1);
int getArAirFadsA2();
void setArAirFadsA2(const int a2);
int getArAirFadsA3();
void setArAirFadsA3(const int a3);
int getArAirFadsA4();
void setArAirFadsA4(const int a4);
float getArAirFadsAngleOfAttack();
void setArAirFadsAngleOfAttack(const float angle_of_attack);
float getArAirFadsSideSlipAngel();
void setArAirFadsSideSlipAngel(const float side_slip_angel);
float getArAirFadsAirSpeed();
void setArAirFadsAirSpeed(const float air_speed);
float getArAirFadsMach();
void setArAirFadsMach(const float mach);
bool getArAirFadsSystemFailureFlag();
void setArAirFadsSystemFailureFlag(const bool system_failure_flag);
bool getArAirFadsLowAccuracyFlag();
void setArAirFadsLowAccuracyFlag(const bool low_accuracy_flag);
float getArAirFadsPressureAltitude();
void setArAirFadsPressureAltitude(const float pressure_altitude);

ArDataAirTimerStruct getArAirTimer();
ArDataAirLaunchStruct getArAirLaunch();
ArDataAirStatusStruct getArAirStatus();
ArDataAirFadsStruct getArAirFads();

void setArAirTimer(const ArDataAirTimerStruct timer);
void setArAirLaunch(const ArDataAirLaunchStruct launch);
void setArAirStatus(const ArDataAirStatusStruct status);
void setArAirFads(const ArDataAirFadsStruct fads);

///////////////////////////////////////////////////////
//Arinc Data set/get function for Navigation
///////////////////////////////////////////////////////
float getArNavTimerTimeCounter();
void setArNavTimerTimeCounter(const float time_counter);
bool getArNavLaunchReleaseCommand();
void setArNavLaunchReleaseCommand(const bool release_command);
int getArNavStatusNavigationComputerStatus();
void setArNavStatusNavigationComputerStatus(const int navigation_computer_status);
float getArNavInsRoll();
void setArNavInsRoll(const float roll);
float getArNavInsPitch();
void setArNavInsPitch(const float pitch);
float getArNavInsYaw();
void setArNavInsYaw(const float yaw);
float getArNavInsRollRate();
void setArNavInsRollRate(const float roll_rate);
float getArNavInsPitchRate();
void setArNavInsPitchRate(const float pitch_rate);
float getArNavInsYawRate();
void setArNavInsYawRate(const float yaw_rate);
float getArNavInsXAcc();
void setArNavInsXAcc(const float x_acc);
float getArNavInsYAcc();
void setArNavInsYAcc(const float y_acc);
float getArNavInsZAcc();
void setArNavInsZAcc(const float z_acc);
float getArNavInsGroundVelocityU();
void setArNavInsGroundVelocityU(const float ground_velocity_u);
float getArNavInsGroundVelocityV();
void setArNavInsGroundVelocityV(const float ground_velocity_v);
float getArNavInsGroundVelocityW();
void setArNavInsGroundVelocityW(const float ground_velocity_w);
float getArNavInsGroundSpeed();
void setArNavInsGroundSpeed(const float ground_speed);
float getArNavInsQuaternion0();
void setArNavInsQuaternion0(const float quaternion0);
float getArNavInsQuaternion1();
void setArNavInsQuaternion1(const float quaternion1);
float getArNavInsQuaternion2();
void setArNavInsQuaternion2(const float quaternion2);
float getArNavInsQuaternion3();
void setArNavInsQuaternion3(const float quaternion3);
float getArNavInsInsGnssUtc();
void setArNavInsInsGnssUtc(const float ins_gnss_utc);
float getArNavInsInsGnssLatitude();
void setArNavInsInsGnssLatitude(const float ins_gnss_latitude);
float getArNavInsInsGnssLongitude();
void setArNavInsInsGnssLongitude(const float ins_gnss_longitude);
float getArNavInsInsGnssAltitude();
void setArNavInsInsGnssAltitude(const float ins_gnss_altitude);
bool getArNavInsInsGnssStatus();
void setArNavInsInsGnssStatus(const bool ins_gnss_status);
float getArNavInsInsGnssGroundSpeed();
void setArNavInsInsGnssGroundSpeed(const float ins_gnss_ground_speed);
float getArNavInsRawRoll();
void setArNavInsRawRoll(const float raw_roll);
float getArNavInsRawPitch();
void setArNavInsRawPitch(const float raw_pitch);
float getArNavInsRawYaw();
void setArNavInsRawYaw(const float raw_yaw);
float getArNavInsRawRollRate();
void setArNavInsRawRollRate(const float raw_roll_rate);
float getArNavInsRawPitchRate();
void setArNavInsRawPitchRate(const float raw_pitch_rate);
float getArNavInsRawYawRate();
void setArNavInsRawYawRate(const float raw_yaw_rate);
float getArNavInsRawXAcc();
void setArNavInsRawXAcc(const float raw_x_acc);
float getArNavInsRawYAcc();
void setArNavInsRawYAcc(const float raw_y_acc);
float getArNavInsRawZAcc();
void setArNavInsRawZAcc(const float raw_z_acc);
float getArNavInsRawGroundVlocityU();
void setArNavInsRawGroundVlocityU(const float raw_ground_vlocity_u);
float getArNavInsRawGroundVelocityV();
void setArNavInsRawGroundVelocityV(const float raw_ground_velocity_v);
float getArNavInsRawGroundVelocityW();
void setArNavInsRawGroundVelocityW(const float raw_ground_velocity_w);
float getArNavInsRawGroundSpeed();
void setArNavInsRawGroundSpeed(const float raw_ground_speed);
float getArNavInsRawQuaternion0();
void setArNavInsRawQuaternion0(const float raw_quaternion0);
float getArNavInsRawQuaternion1();
void setArNavInsRawQuaternion1(const float raw_quaternion1);
float getArNavInsRawQuaternion2();
void setArNavInsRawQuaternion2(const float raw_quaternion2);
float getArNavInsRawQuaternion3();
void setArNavInsRawQuaternion3(const float raw_quaternion3);
float getArNavInsRawInsGnssLatitude();
void setArNavInsRawInsGnssLatitude(const float raw_ins_gnss_latitude);
float getArNavInsRawInsGnssLongitude();
void setArNavInsRawInsGnssLongitude(const float raw_ins_gnss_longitude);
float getArNavInsRawInsGnssAltitude();
void setArNavInsRawInsGnssAltitude(const float raw_ins_gnss_altitude);
int getArNavInsInsGnssSvs();
void setArNavInsInsGnssSvs(const int ins_gnss_svs);
float getArNavGps1Gps1Utc();
void setArNavGps1Gps1Utc(const float gps1_utc);
float getArNavGps1Gps1Latitude();
void setArNavGps1Gps1Latitude(const float gps1_latitude);
float getArNavGps1Gps1Longitude();
void setArNavGps1Gps1Longitude(const float gps1_longitude);
float getArNavGps1Gps1Altitude();
void setArNavGps1Gps1Altitude(const float gps1_altitude);
bool getArNavGps1Gps1Status();
void setArNavGps1Gps1Status(const bool gps1_status);
float getArNavGps1Gps1GroundSpeed();
void setArNavGps1Gps1GroundSpeed(const float gps1_ground_speed);
float getArNavGps1RawGps1Latitude();
void setArNavGps1RawGps1Latitude(const float raw_gps1_latitude);
float getArNavGps1RawGps1Longitude();
void setArNavGps1RawGps1Longitude(const float raw_gps1_longitude);
float getArNavGps1RawGps1Altitude();
void setArNavGps1RawGps1Altitude(const float raw_gps1_altitude);
int getArNavGps1Gps1Svs();
void setArNavGps1Gps1Svs(const int gps1_svs);
float getArNavGps2Gps2Utc();
void setArNavGps2Gps2Utc(const float gps2_utc);
float getArNavGps2Gps2Latitude();
void setArNavGps2Gps2Latitude(const float gps2_latitude);
float getArNavGps2Gps2Longitude();
void setArNavGps2Gps2Longitude(const float gps2_longitude);
float getArNavGps2Gps2Altitude();
void setArNavGps2Gps2Altitude(const float gps2_altitude);
bool getArNavGps2Gps2Status();
void setArNavGps2Gps2Status(const bool gps2_status);
float getArNavGps2Gps2GroundSpeed();
void setArNavGps2Gps2GroundSpeed(const float gps2_ground_speed);
float getArNavGps2RawGps2Latitude();
void setArNavGps2RawGps2Latitude(const float raw_gps2_latitude);
float getArNavGps2RawGps2Longitude();
void setArNavGps2RawGps2Longitude(const float raw_gps2_longitude);
float getArNavGps2RawGps2Altitude();
void setArNavGps2RawGps2Altitude(const float raw_gps2_altitude);
int getArNavGps2Gps2Svs();
void setArNavGps2Gps2Svs(const int gps2_svs);

ArDataNavTimerStruct getArNavTimer();
ArDataNavLaunchStruct getArNavLaunch();
ArDataNavStatusStruct getArNavStatus();
ArDataNavInsStruct getArNavIns();
ArDataNavGps1Struct getArNavGps1();
ArDataNavGps2Struct getArNavGps2();

void setArNavTimer(const ArDataNavTimerStruct timer);
void setArNavLaunch(const ArDataNavLaunchStruct launch);
void setArNavStatus(const ArDataNavStatusStruct status);
void setArNavIns(const ArDataNavInsStruct ins);
void setArNavGps1(const ArDataNavGps1Struct gps1);
void setArNavGps2(const ArDataNavGps2Struct gps2);

///////////////////////////////////////////////////////
//Arinc Data set/get function for Guidance
///////////////////////////////////////////////////////
float getArGdeTimerTimeCounter();
void setArGdeTimerTimeCounter(const float time_counter);
int getArGdePhasePhaseFlag();
void setArGdePhasePhaseFlag(const int phase_flag);
float getArGdeLaunchReleaseTimer();
void setArGdeLaunchReleaseTimer(const float release_timer);
int getArGdeLaunchGuidanceComputerStatus();
void setArGdeLaunchGuidanceComputerStatus(const int guidance_computer_status);
float getArGdeLaunchInsGnssLatitude();
void setArGdeLaunchInsGnssLatitude(const float ins_gnss_latitude);
float getArGdeLaunchInsGnssLongitude();
void setArGdeLaunchInsGnssLongitude(const float ins_gnss_longitude);
float getArGdeLaunchInsGnssAltitude();
void setArGdeLaunchInsGnssAltitude(const float ins_gnss_altitude);
float getArGdeLaunchGroundVelocityU();
void setArGdeLaunchGroundVelocityU(const float ground_velocity_u);
float getArGdeLaunchGroundVelocityV();
void setArGdeLaunchGroundVelocityV(const float ground_velocity_v);
float getArGdeLaunchGroundVelocityW();
void setArGdeLaunchGroundVelocityW(const float ground_velocity_w);
float getArGdeLaunchGroundSpeed();
void setArGdeLaunchGroundSpeed(const float ground_speed);
float getArGdeLaunchQuaternion0();
void setArGdeLaunchQuaternion0(const float quaternion0);
float getArGdeLaunchQuaternion1();
void setArGdeLaunchQuaternion1(const float quaternion1);
float getArGdeLaunchQuaternion2();
void setArGdeLaunchQuaternion2(const float quaternion2);
float getArGdeLaunchQuaternion3();
void setArGdeLaunchQuaternion3(const float quaternion3);
float getArGdeCommandAngleOfAttackCommand();
void setArGdeCommandAngleOfAttackCommand(const float angle_of_attack_command);
float getArGdeCommandQuaternion0Command();
void setArGdeCommandQuaternion0Command(const float quaternion_0_command);
float getArGdeCommandQuaternion1Command();
void setArGdeCommandQuaternion1Command(const float quaternion_1_command);
float getArGdeCommandQuaternion2Command();
void setArGdeCommandQuaternion2Command(const float quaternion_2_command);
float getArGdeCommandQuaternion3Command();
void setArGdeCommandQuaternion3Command(const float quaternion_3_command);
int getArGdeCommandRecoverSystemStatus();
void setArGdeCommandRecoverSystemStatus(const int recover_system_status);
bool getArGdeCommandSafetyProcessCommand();
void setArGdeCommandSafetyProcessCommand(const bool safety_process_command);
float getArGdeCommandAngleOfAttackCommandTimeHistory();
void setArGdeCommandAngleOfAttackCommandTimeHistory(const float angle_of_attack_command_time_history);
float getArGdeCommandQuaternion0CommandTimeHistory();
void setArGdeCommandQuaternion0CommandTimeHistory(const float quaternion0_command_time_history);
float getArGdeCommandQuaternion1CommandTimeHistory();
void setArGdeCommandQuaternion1CommandTimeHistory(const float quaternion1_command_time_history);
float getArGdeCommandQuaternion2CommandTimeHistory();
void setArGdeCommandQuaternion2CommandTimeHistory(const float quaternion2_command_time_history);
float getArGdeCommandQuaternion3CommandTimeHistory();
void setArGdeCommandQuaternion3CommandTimeHistory(const float quaternion3_command_time_history);
float getArGdeGeneGeneticinformation1();
void setArGdeGeneGeneticinformation1(const float geneticinformation1);
float getArGdeGeneGeneticinformation2();
void setArGdeGeneGeneticinformation2(const float geneticinformation2);
float getArGdeGeneGeneticinformation3();
void setArGdeGeneGeneticinformation3(const float geneticinformation3);
float getArGdeGeneGeneticinformation4();
void setArGdeGeneGeneticinformation4(const float geneticinformation4);
float getArGdeGeneGeneticinformation5();
void setArGdeGeneGeneticinformation5(const float geneticinformation5);
float getArGdeGeneGeneticinformation6();
void setArGdeGeneGeneticinformation6(const float geneticinformation6);
float getArGdeGeneGeneticinformation7();
void setArGdeGeneGeneticinformation7(const float geneticinformation7);
float getArGdeGeneGeneticinformation8();
void setArGdeGeneGeneticinformation8(const float geneticinformation8);
float getArGdeGeneGeneticinformation9();
void setArGdeGeneGeneticinformation9(const float geneticinformation9);
float getArGdeGeneGeneticinformation10();
void setArGdeGeneGeneticinformation10(const float geneticinformation10);
float getArGdeGeneGeneticinformation11();
void setArGdeGeneGeneticinformation11(const float geneticinformation11);
float getArGdeGeneGeneticinformation12();
void setArGdeGeneGeneticinformation12(const float geneticinformation12);
float getArGdeGeneGeneticinformation13();
void setArGdeGeneGeneticinformation13(const float geneticinformation13);
float getArGdeGeneGeneticinformation14();
void setArGdeGeneGeneticinformation14(const float geneticinformation14);
float getArGdeGeneGeneticinformation15();
void setArGdeGeneGeneticinformation15(const float geneticinformation15);
float getArGdeGeneGeneticinformation16();
void setArGdeGeneGeneticinformation16(const float geneticinformation16);
float getArGdeGeneGeneticinformation17();
void setArGdeGeneGeneticinformation17(const float geneticinformation17);
float getArGdeGeneGeneticinformation18();
void setArGdeGeneGeneticinformation18(const float geneticinformation18);
float getArGdeGeneGeneticinformation19();
void setArGdeGeneGeneticinformation19(const float geneticinformation19);
float getArGdeGeneGeneticinformation20();
void setArGdeGeneGeneticinformation20(const float geneticinformation20);
float getArGdeGeneGeneticinformation21();
void setArGdeGeneGeneticinformation21(const float geneticinformation21);
float getArGdeGeneGeneticinformation22();
void setArGdeGeneGeneticinformation22(const float geneticinformation22);
float getArGdeGeneGeneticinformation23();
void setArGdeGeneGeneticinformation23(const float geneticinformation23);
float getArGdeGeneGeneticinformation24();
void setArGdeGeneGeneticinformation24(const float geneticinformation24);
float getArGdeGeneGeneticinformation25();
void setArGdeGeneGeneticinformation25(const float geneticinformation25);
float getArGdeGeneGeneticinformation26();
void setArGdeGeneGeneticinformation26(const float geneticinformation26);
float getArGdeGeneGeneticinformation27();
void setArGdeGeneGeneticinformation27(const float geneticinformation27);
float getArGdeGeneGeneticinformation28();
void setArGdeGeneGeneticinformation28(const float geneticinformation28);
float getArGdeGeneGeneticinformationforthecalculation();
void setArGdeGeneGeneticinformationforthecalculation(const float geneticinformationforthecalculation);

ArDataGdeTimerStruct getArGdeTimer();
ArDataGdePhaseStruct getArGdePhase();
ArDataGdeLaunchStruct getArGdeLaunch();
ArDataGdeCommandStruct getArGdeCommand();
ArDataGdeGeneStruct getArGdeGene();

void setArGdeTimer(const ArDataGdeTimerStruct timer);
void setArGdePhase(const ArDataGdePhaseStruct phase);
void setArGdeLaunch(const ArDataGdeLaunchStruct launch);
void setArGdeCommand(const ArDataGdeCommandStruct command);
void setArGdeGene(const ArDataGdeGeneStruct gene);

///////////////////////////////////////////////////////
//Arinc Data set/get function for Control
///////////////////////////////////////////////////////
int getArCtrPhasePhaseFlag();
void setArCtrPhasePhaseFlag(const int phase_flag);
float getArCtrTimerControlTimeCounter();
void setArCtrTimerControlTimeCounter(const float control_time_counter);
float getArCtrTimerTimeLog();
void setArCtrTimerTimeLog(const float time_log);
bool getArCtrLaunchReleaseCommand();
void setArCtrLaunchReleaseCommand(const bool release_command);
int getArCtrLaunchControlComputerStatus();
void setArCtrLaunchControlComputerStatus(const int control_computer_status);
int getArCtrLaunchRecoveryCommand();
void setArCtrLaunchRecoveryCommand(const int recovery_command);
bool getArCtrLaunchAirbagDoorCommand();
void setArCtrLaunchAirbagDoorCommand(const bool airbag_door_command);
bool getArCtrLaunchAirbagCommand();
void setArCtrLaunchAirbagCommand(const bool airbag_command);
bool getArCtrLaunchDrogueChuteCommand();
void setArCtrLaunchDrogueChuteCommand(const bool drogue_chute_command);
bool getArCtrLaunchMainChuteCommand();
void setArCtrLaunchMainChuteCommand(const bool main_chute_command);
float getArCtrLaunchElevonLCommand();
void setArCtrLaunchElevonLCommand(const float elevon_l_command);
float getArCtrLaunchElevonLAnswer();
void setArCtrLaunchElevonLAnswer(const float elevon_l_answer);
float getArCtrLaunchElevonRCommand();
void setArCtrLaunchElevonRCommand(const float elevon_r_command);
float getArCtrLaunchElevonRAnswer();
void setArCtrLaunchElevonRAnswer(const float elevon_r_answer);
float getArCtrLaunchRudderLRCommand();
void setArCtrLaunchRudderLRCommand(const float rudder_l_r_command);
float getArCtrLaunchRudderLRAnswer();
void setArCtrLaunchRudderLRAnswer(const float rudder_l_r_answer);
float getArCtrLaunchSElevonLCommand();
void setArCtrLaunchSElevonLCommand(const float s_elevon_l_command);
float getArCtrLaunchSElevonRCommand();
void setArCtrLaunchSElevonRCommand(const float s_elevon_r_command);
float getArCtrLaunchSRudderLRCommand();
void setArCtrLaunchSRudderLRCommand(const float s_rudder_l_r_command);
int getArCtrLaunchRcsCommand();
void setArCtrLaunchRcsCommand(const int rcs_command);
bool getArCtrLaunchRcs1Command();
void setArCtrLaunchRcs1Command(const bool rcs_1_command);
bool getArCtrLaunchRcs2Command();
void setArCtrLaunchRcs2Command(const bool rcs_2_command);
bool getArCtrLaunchRcs3Command();
void setArCtrLaunchRcs3Command(const bool rcs_3_command);
bool getArCtrLaunchRcs4Command();
void setArCtrLaunchRcs4Command(const bool rcs_4_command);
bool getArCtrLaunchRcs5Command();
void setArCtrLaunchRcs5Command(const bool rcs_5_command);
bool getArCtrLaunchRcs6Command();
void setArCtrLaunchRcs6Command(const bool rcs_6_command);
float getArCtrLaunchAngleOfGimbalPitchCommand();
void setArCtrLaunchAngleOfGimbalPitchCommand(const float angle_of_gimbal_pitch_command);
float getArCtrLaunchAngleOfGimbalYawCommand();
void setArCtrLaunchAngleOfGimbalYawCommand(const float angle_of_gimbal_yaw_command);
float getArCtrLaunchRollPGain();
void setArCtrLaunchRollPGain(const float roll_p_gain);
float getArCtrLaunchPitchPGain();
void setArCtrLaunchPitchPGain(const float pitch_p_gain);
float getArCtrLaunchYawPGain();
void setArCtrLaunchYawPGain(const float yaw_p_gain);
float getArCtrLaunchAngleOfAttackPGain();
void setArCtrLaunchAngleOfAttackPGain(const float angle_of_attack_p_gain);
float getArCtrLaunchSideSlipAnglePGain();
void setArCtrLaunchSideSlipAnglePGain(const float side_slip_angle_p_gain);
float getArCtrLaunchRollDGain();
void setArCtrLaunchRollDGain(const float roll_d_gain);
float getArCtrLaunchPitchDGain();
void setArCtrLaunchPitchDGain(const float pitch_d_gain);
float getArCtrLaunchYawDGain();
void setArCtrLaunchYawDGain(const float yaw_d_gain);
float getArCtrLaunchAngleOfAttackDGain();
void setArCtrLaunchAngleOfAttackDGain(const float angle_of_attack_d_gain);
float getArCtrLaunchSideSlipAngleDGain();
void setArCtrLaunchSideSlipAngleDGain(const float side_slip_angle_d_gain);
bool getArCtrLaunchSystemFailureFlag();
void setArCtrLaunchSystemFailureFlag(const bool system_failure_flag);
bool getArCtrLaunchLowAccuracyFlag();
void setArCtrLaunchLowAccuracyFlag(const bool low_accuracy_flag);
float getArCtrLaunchAirspeed();
void setArCtrLaunchAirspeed(const float airspeed);
float getArCtrLaunchAngleOfAttack();
void setArCtrLaunchAngleOfAttack(const float angle_of_attack);
float getArCtrLaunchMach();
void setArCtrLaunchMach(const float mach);
float getArCtrLaunchSideSlipAngle();
void setArCtrLaunchSideSlipAngle(const float side_slip_angle);
float getArCtrLaunchRollRate();
void setArCtrLaunchRollRate(const float roll_rate);
float getArCtrLaunchPitchRate();
void setArCtrLaunchPitchRate(const float pitch_rate);
float getArCtrLaunchYawRate();
void setArCtrLaunchYawRate(const float yaw_rate);
float getArCtrLaunchRoll();
void setArCtrLaunchRoll(const float roll);
float getArCtrLaunchPitch();
void setArCtrLaunchPitch(const float pitch);
float getArCtrLaunchYaw();
void setArCtrLaunchYaw(const float yaw);
float getArCtrLaunchQuaternion0();
void setArCtrLaunchQuaternion0(const float quaternion0);
float getArCtrLaunchQuaternion1();
void setArCtrLaunchQuaternion1(const float quaternion1);
float getArCtrLaunchQuaternion2();
void setArCtrLaunchQuaternion2(const float quaternion2);
float getArCtrLaunchQuaternion3();
void setArCtrLaunchQuaternion3(const float quaternion3);
float getArCtrLaunchInsGnssAltitude();
void setArCtrLaunchInsGnssAltitude(const float ins_gnss_altitude);
float getArCtrLaunchGroundVelocityU();
void setArCtrLaunchGroundVelocityU(const float ground_velocity_u);
float getArCtrLaunchGroundVelocityV();
void setArCtrLaunchGroundVelocityV(const float ground_velocity_v);
float getArCtrLaunchGroundVelocityW();
void setArCtrLaunchGroundVelocityW(const float ground_velocity_w);
float getArCtrLaunchAngleOfAttackCommand();
void setArCtrLaunchAngleOfAttackCommand(const float angle_of_attack_command);
float getArCtrLaunchQuaternion1Command();
void setArCtrLaunchQuaternion1Command(const float quaternion1_command);
float getArCtrLaunchQuaternion2Command();
void setArCtrLaunchQuaternion2Command(const float quaternion2_command);
float getArCtrLaunchQuaternion3Command();
void setArCtrLaunchQuaternion3Command(const float quaternion3_command);

ArDataCtrPhaseStruct getArCtrPhase();
ArDataCtrTimerStruct getArCtrTimer();
ArDataCtrLaunchStruct getArCtrLaunch();

void setArCtrPhase(const ArDataCtrPhaseStruct phase);
void setArCtrTimer(const ArDataCtrTimerStruct timer);
void setArCtrLaunch(const ArDataCtrLaunchStruct launch);

///////////////////////////////////////////////////////
//Arinc Data set/get function for Communication
///////////////////////////////////////////////////////
float getArComTimerCommunicationTimeCounter();
void setArComTimerCommunicationTimeCounter(const float communication_time_counter);
bool getArComLaunchReleaseCommandStatus();
void setArComLaunchReleaseCommandStatus(const bool release_command_status);
bool getArComLaunchIgnitionStatus();
void setArComLaunchIgnitionStatus(const bool ignition_status);
int getArComStatusCommunicationCommandStatus();
void setArComStatusCommunicationCommandStatus(const int communication_command_status);
bool getArComStatusEmergencyStopCommandA();
void setArComStatusEmergencyStopCommandA(const bool emergency_stop_command_a);
bool getArComStatusUplinkEstablishmentConfirmation();
void setArComStatusUplinkEstablishmentConfirmation(const bool uplink_establishment_confirmation);
int getArComStatusSystemCommands();
void setArComStatusSystemCommands(const int system_commands);
int getArComStatusPropulsionValveDriveSignal();
void setArComStatusPropulsionValveDriveSignal(const int propulsion_valve_drive_signal);
int getArComStatusEngineValveDriveSignal();
void setArComStatusEngineValveDriveSignal(const int engine_valve_drive_signal);
bool getArComStatusEngineInitialOperation();
void setArComStatusEngineInitialOperation(const bool engine_initial_operation);
bool getArComStatusGroundOperationMode1Command();
void setArComStatusGroundOperationMode1Command(const bool ground_operation_mode_1_command);
bool getArComStatusSequenceCheckModeCommand();
void setArComStatusSequenceCheckModeCommand(const bool sequence_check_mode_command);
bool getArComStatusEnginePreCoolingCommand();
void setArComStatusEnginePreCoolingCommand(const bool engine_pre_cooling_command);
bool getArComStatusEngineStartCommand();
void setArComStatusEngineStartCommand(const bool engine_start_command);
bool getArComStatusStopBurningCommand();
void setArComStatusStopBurningCommand(const bool stop_burning_command);
bool getArComStatusPropellantDumpCommand();
void setArComStatusPropellantDumpCommand(const bool propellant_dump_command);
bool getArComStatusPersonnelApproachAcceptanceCommand();
void setArComStatusPersonnelApproachAcceptanceCommand(const bool personnel_approach_acceptance_command);
bool getArComStatusPostLandingSafetyOrder();
void setArComStatusPostLandingSafetyOrder(const bool post_landing_safety_order);
bool getArComStatusGroundOperationMode2Command();
void setArComStatusGroundOperationMode2Command(const bool ground_operation_mode2_command);
bool getArComStatusLiftoffCommand();
void setArComStatusLiftoffCommand(const bool liftoff_command);
bool getArComStatusSolenoidOfdvo();
void setArComStatusSolenoidOfdvo(const bool solenoid_ofdvo);
bool getArComStatusSolenoidFfdvo();
void setArComStatusSolenoidFfdvo(const bool solenoid_ffdvo);
bool getArComStatusSolenoidOvvo();
void setArComStatusSolenoidOvvo(const bool solenoid_ovvo);
bool getArComStatusSolenoidFvvo();
void setArComStatusSolenoidFvvo(const bool solenoid_fvvo);
bool getArComStatusSolenoidOgpv();
void setArComStatusSolenoidOgpv(const bool solenoid_ogpv);
bool getArComStatusSolenoidFgpv();
void setArComStatusSolenoidFgpv(const bool solenoid_fgpv);
bool getArComStatusHighPHeliumShutoff1();
void setArComStatusHighPHeliumShutoff1(const bool high_p_helium_shutoff1);
bool getArComStatusSolenoidPsv();
void setArComStatusSolenoidPsv(const bool solenoid_psv);
bool getArComStatusHighPHeliumShutoff2();
void setArComStatusHighPHeliumShutoff2(const bool high_p_helium_shutoff2);
bool getArComStatusSolenoidRsv();
void setArComStatusSolenoidRsv(const bool solenoid_rsv);
bool getArComStatusSolenoidGn2Pump();
void setArComStatusSolenoidGn2Pump(const bool solenoid_gn2_pump);
bool getArComStatusSolenoidGn2Turbine();
void setArComStatusSolenoidGn2Turbine(const bool solenoid_gn2_turbine);
bool getArComStatusExciterDriveSignal();
void setArComStatusExciterDriveSignal(const bool exciter_drive_signal);
bool getArComStatusSolenoidMoigv();
void setArComStatusSolenoidMoigv(const bool solenoid_moigv);
bool getArComStatusSolenoidMfigv();
void setArComStatusSolenoidMfigv(const bool solenoid_mfigv);
bool getArComStatusSolenoidMoigpv();
void setArComStatusSolenoidMoigpv(const bool solenoid_moigpv);
bool getArComStatusSolenoidMfigpv();
void setArComStatusSolenoidMfigpv(const bool solenoid_mfigpv);
bool getArComStatusSolenoidMopv();
void setArComStatusSolenoidMopv(const bool solenoid_mopv);
bool getArComStatusSolenoidMfpv();
void setArComStatusSolenoidMfpv(const bool solenoid_mfpv);
bool getArComStatusSolenoidOcvo();
void setArComStatusSolenoidOcvo(const bool solenoid_ocvo);
bool getArComStatusSolenoidBocvo();
void setArComStatusSolenoidBocvo(const bool solenoid_bocvo);
bool getArComStatusSolenoidBfcvo();
void setArComStatusSolenoidBfcvo(const bool solenoid_bfcvo);
bool getArComStatusSolenoidOxidizer();
void setArComStatusSolenoidOxidizer(const bool solenoid_oxidizer);
bool getArComStatusSolenoidFuelBearing();
void setArComStatusSolenoidFuelBearing(const bool solenoid_fuel_bearing);
bool getArComStatusSolenoidOcpv();
void setArComStatusSolenoidOcpv(const bool solenoid_ocpv);
bool getArComStatusSolenoidFcpv();
void setArComStatusSolenoidFcpv(const bool solenoid_fcpv);
bool getArComStatusSolenoidOspv();
void setArComStatusSolenoidOspv(const bool solenoid_ospv);
bool getArComStatusSolenoidFspv();
void setArComStatusSolenoidFspv(const bool solenoid_fspv);
float getArComStatusSolenoidMov();
void setArComStatusSolenoidMov(const float solenoid_mov);
float getArComStatusSolenoidMfv();
void setArComStatusSolenoidMfv(const float solenoid_mfv);
float getArComStatusSolenoidTcv();
void setArComStatusSolenoidTcv(const float solenoid_tcv);
float getArComStatusSolenoidOcv();
void setArComStatusSolenoidOcv(const float solenoid_ocv);
float getArComStatusSolenoidFcv();
void setArComStatusSolenoidFcv(const float solenoid_fcv);
bool getArComStatusGimbaladjustmentCommand();
void setArComStatusGimbaladjustmentCommand(const bool gimbaladjustment_command);
bool getArComStatusTvcActuatorPowerCommand();
void setArComStatusTvcActuatorPowerCommand(const bool tvc_actuator_power_command);
bool getArComStatusRecordingCommand();
void setArComStatusRecordingCommand(const bool recording_command);
// TBD ADD START
int getArComRunMode();
int setArComRunMode(const int run_mode);
// TBD ADD END

ArDataComTimerStruct getArComTimer();
ArDataComLaunchStruct getArComLaunch();
ArDataComStatusStruct getArComStatus();

void setArComTimer(const ArDataComTimerStruct timer);
void setArComLaunch(const ArDataComLaunchStruct launch);
void setArComStatus(const ArDataComStatusStruct status);

///////////////////////////////////////////////////////
//Arinc Data set/get function for Data
///////////////////////////////////////////////////////
int getArDatStatusDataComputerStatus();
void setArDatStatusDataComputerStatus(const int data_computer_status);
bool getArDatStatusDrogueChuteDoorSensor();
void setArDatStatusDrogueChuteDoorSensor(const bool drogue_chute_door_sensor);
bool getArDatStatusMainChuteDoorSensor();
void setArDatStatusMainChuteDoorSensor(const bool main_chute_door_sensor);
bool getArDatStatusFrontAirbagDoorSensor();
void setArDatStatusFrontAirbagDoorSensor(const bool front_airbag_door_sensor);
bool getArDatStatusRearAirbagLDoorSensor();
void setArDatStatusRearAirbagLDoorSensor(const bool rear_airbag_l_door_sensor);
bool getArDatStatusRearAirbagRDoorSensor();
void setArDatStatusRearAirbagRDoorSensor(const bool rear_airbag_r_door_sensor);
float getArDatStatusBusBatteryStatus();
void setArDatStatusBusBatteryStatus(const float bus_battery_status);
float getArDatStatusPropulsionBatteryStatus();
void setArDatStatusPropulsionBatteryStatus(const float propulsion_battery_status);
float getArDatStatusEmc1BatteryStatus();
void setArDatStatusEmc1BatteryStatus(const float emc1_battery_status);
float getArDatStatusEmc2BatteryStatus();
void setArDatStatusEmc2BatteryStatus(const float emc2_battery_status);
float getArDatStatusEmc3BatteryStatus();
void setArDatStatusEmc3BatteryStatus(const float emc3_battery_status);
float getArDatStatusEmcActuator1BatteryStatus();
void setArDatStatusEmcActuator1BatteryStatus(const float emc_actuator1_battery_status);
float getArDatStatusEmcActuator2BatteryStatus();
void setArDatStatusEmcActuator2BatteryStatus(const float emc_actuator2_battery_status);
float getArDatStatusElevonBatteryStatus();
void setArDatStatusElevonBatteryStatus(const float elevon_battery_status);
float getArDatStatusRudderBatteryStatus();
void setArDatStatusRudderBatteryStatus(const float rudder_battery_status);

ArDataDatStatusStruct getArDatStatus();

void setArDatStatus(const ArDataDatStatusStruct status);

///////////////////////////////////////////////////////
//Arinc Data set/get function for Engine
///////////////////////////////////////////////////////
float getArEcuTimerEngineControlComputerTimeCounter();
void setArEcuTimerEngineControlComputerTimeCounter(const float engine_control_computer_time_counter);
bool getArEcuLaunchReleaseCommand();
void setArEcuLaunchReleaseCommand(const bool release_command);
float getArEcuStatusGheGasTankPressure();
void setArEcuStatusGheGasTankPressure(const float ghe_gas_tank_pressure);
float getArEcuStatusGn2GasTankPressure();
void setArEcuStatusGn2GasTankPressure(const float gn2_gas_tank_pressure);
float getArEcuStatusGheGasAirTankDownstreamPressure();
void setArEcuStatusGheGasAirTankDownstreamPressure(const float ghe_gas_air_tank_downstream_pressure);
float getArEcuStatusLoxTankPressure();
void setArEcuStatusLoxTankPressure(const float lox_tank_pressure);
float getArEcuStatusLngTankPressure();
void setArEcuStatusLngTankPressure(const float lng_tank_pressure);
float getArEcuStatusEnginePneumaticPurgePressure();
void setArEcuStatusEnginePneumaticPurgePressure(const float engine_pneumatic_purge_pressure);
float getArEcuStatusSealPurgePressure();
void setArEcuStatusSealPurgePressure(const float seal_purge_pressure);
float getArEcuStatusRcsPressureRegulationPressure();
void setArEcuStatusRcsPressureRegulationPressure(const float rcs_pressure_regulation_pressure);
float getArEcuStatusLoxEngineInletPressure();
void setArEcuStatusLoxEngineInletPressure(const float lox_engine_inlet_pressure);
float getArEcuStatusLngEngineInletPressure();
void setArEcuStatusLngEngineInletPressure(const float lng_engine_inlet_pressure);
float getArEcuStatusShutOffDownGn2PurgePressure();
void setArEcuStatusShutOffDownGn2PurgePressure(const float shut_off_down_gn2_purge_pressure);
float getArEcuStatusGheGasTankOutletTemperature();
void setArEcuStatusGheGasTankOutletTemperature(const float ghe_gas_tank_outlet_temperature);
float getArEcuStatusGheGasTankSurfaceTemperature();
void setArEcuStatusGheGasTankSurfaceTemperature(const float ghe_gas_tank_surface_temperature);
float getArEcuStatusGn2GasTankOutletTemperature();
void setArEcuStatusGn2GasTankOutletTemperature(const float gn2_gas_tank_outlet_temperature);
float getArEcuStatusGn2GasTankSurfaceTemperature();
void setArEcuStatusGn2GasTankSurfaceTemperature(const float gn2_gas_tank_surface_temperature);
float getArEcuStatusLoxVentLineTemperature();
void setArEcuStatusLoxVentLineTemperature(const float lox_vent_line_temperature);
float getArEcuStatusLngVentLineTemperature();
void setArEcuStatusLngVentLineTemperature(const float lng_vent_line_temperature);
float getArEcuStatusLoxInletOutletLineTemperature();
void setArEcuStatusLoxInletOutletLineTemperature(const float lox_inlet_outlet_line_temperature);
float getArEcuStatusLngInletOutletLineTemperature();
void setArEcuStatusLngInletOutletLineTemperature(const float lng_inlet_outlet_line_temperature);
float getArEcuStatusLoxEngineInletTemperature();
void setArEcuStatusLoxEngineInletTemperature(const float lox_engine_inlet_temperature);
float getArEcuStatusLngEngineInletTemperature();
void setArEcuStatusLngEngineInletTemperature(const float lng_engine_inlet_temperature);
float getArEcuStatusLoxTankBottomTemperature();
void setArEcuStatusLoxTankBottomTemperature(const float lox_tank_bottom_temperature);
float getArEcuStatusLngTankBottomTemperature();
void setArEcuStatusLngTankBottomTemperature(const float lng_tank_bottom_temperature);
float getArEcuStatusLoxTankLiquidLevel();
void setArEcuStatusLoxTankLiquidLevel(const float lox_tank_liquid_level);
float getArEcuStatusLngTankLiquidLevel();
void setArEcuStatusLngTankLiquidLevel(const float lng_tank_liquid_level);
float getArEcuStatusEngineCombustionPressure();
void setArEcuStatusEngineCombustionPressure(const float engine_combustion_pressure);
float getArEcuStatusIgniterCombustionPressure();
void setArEcuStatusIgniterCombustionPressure(const float igniter_combustion_pressure);
float getArEcuStatusCombustionChamberOutletPressure();
void setArEcuStatusCombustionChamberOutletPressure(const float combustion_chamber_outlet_pressure);
float getArEcuStatusLoxPumpOutletPressure();
void setArEcuStatusLoxPumpOutletPressure(const float lox_pump_outlet_pressure);
float getArEcuStatusLngPumpOutletPressure();
void setArEcuStatusLngPumpOutletPressure(const float lng_pump_outlet_pressure);
float getArEcuStatusPurgeSealLoxSideDrainChamberPressure();
void setArEcuStatusPurgeSealLoxSideDrainChamberPressure(const float purge_seal_lox_side_drain_chamber_pressure);
float getArEcuStatusPurgeSealLngSideDrainChamberPressure();
void setArEcuStatusPurgeSealLngSideDrainChamberPressure(const float purge_seal_lng_side_drain_chamber_pressure);
float getArEcuStatusPumpSidePurgeSealGheInletPressure();
void setArEcuStatusPumpSidePurgeSealGheInletPressure(const float pump_side_purge_seal_ghe_inlet_pressure);
float getArEcuStatusTurbineSidePurgeSealGheInletPressure();
void setArEcuStatusTurbineSidePurgeSealGheInletPressure(const float turbine_side_purge_seal_ghe_inlet_pressure);
float getArEcuStatusLoxPrecoolingLineTemperature();
void setArEcuStatusLoxPrecoolingLineTemperature(const float lox_precooling_line_temperature);
float getArEcuStatusLngPrecoolingLineTemperature();
void setArEcuStatusLngPrecoolingLineTemperature(const float lng_precooling_line_temperature);
float getArEcuStatusChamberInjectorSideManifoldOutletTemperature();
void setArEcuStatusChamberInjectorSideManifoldOutletTemperature(const float chamber_injector_side_manifold_outlet_temperature);
float getArEcuStatusLoxBearingTemperature();
void setArEcuStatusLoxBearingTemperature(const float lox_bearing_temperature);
float getArEcuStatusLngBearingTemperature();
void setArEcuStatusLngBearingTemperature(const float lng_bearing_temperature);
float getArEcuStatusLoxPumpCasingTemperature1();
void setArEcuStatusLoxPumpCasingTemperature1(const float lox_pump_casing_temperature_1);
float getArEcuStatusLngPumpCasingTemperature1();
void setArEcuStatusLngPumpCasingTemperature1(const float lng_pump_casing_temperature_1);
float getArEcuStatusTurboPumpSpeed();
void setArEcuStatusTurboPumpSpeed(const float turbo_pump_speed);
float getArEcuStatusMotorValveStatusMovOpen();
void setArEcuStatusMotorValveStatusMovOpen(const float motor_valve_status_mov_open);
float getArEcuStatusMotorValveStatusMfvOpen();
void setArEcuStatusMotorValveStatusMfvOpen(const float motor_valve_status_mfv_open);
float getArEcuStatusMotorValveStatusOcvOpen();
void setArEcuStatusMotorValveStatusOcvOpen(const float motor_valve_status_ocv_open);
float getArEcuStatusMotorValveStatusFcvOpen();
void setArEcuStatusMotorValveStatusFcvOpen(const float motor_valve_status_fcv_open);
float getArEcuStatusMotorValveStatusIsmovOpenLoxLine();
void setArEcuStatusMotorValveStatusIsmovOpenLoxLine(const float motor_valve_status_ismov_open_lox_line);
float getArEcuStatusMotorValveStatusIsmfvOpenLngLine();
void setArEcuStatusMotorValveStatusIsmfvOpenLngLine(const float motor_valve_status_ismfv_open_lng_line);
float getArEcuStatusGimbalAngleAnswerPitch();
void setArEcuStatusGimbalAngleAnswerPitch(const float gimbal_angle_answer_pitch);
float getArEcuStatusGimbalAngleAnswerYaw();
void setArEcuStatusGimbalAngleAnswerYaw(const float gimbal_angle_answer_yaw);
float getArEcuStatusHealthMonitor1();
void setArEcuStatusHealthMonitor1(const float health_monitor_1);
float getArEcuStatusHealthMonitor2();
void setArEcuStatusHealthMonitor2(const float health_monitor_2);
float getArEcuStatusHealthMonitor3();
void setArEcuStatusHealthMonitor3(const float health_monitor_3);
float getArEcuStatusHealthMonitor4();
void setArEcuStatusHealthMonitor4(const float health_monitor_4);
float getArEcuStatusHealthMonitor5();
void setArEcuStatusHealthMonitor5(const float health_monitor_5);
float getArEcuStatusSpare1();
void setArEcuStatusSpare1(const float spare1);
float getArEcuStatusSpare2();
void setArEcuStatusSpare2(const float spare2);
float getArEcuStatusSpare3();
void setArEcuStatusSpare3(const float spare3);

ArDataEcuTimerStruct getArEcuTimer();
ArDataEcuLaunchStruct getArEcuLaunch();
ArDataEcuStatusStruct getArEcuStatus();

void setArEcuTimer(const ArDataEcuTimerStruct timer);
void setArEcuLaunch(const ArDataEcuLaunchStruct launch);
void setArEcuStatus(const ArDataEcuStatusStruct status);
#endif // ARINCDATA_H