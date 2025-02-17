#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DinamicaCinematicaControleAtitude_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 18
#endif
#ifndef SS_INT64
#define SS_INT64 19
#endif
#else
#include "builtin_typeid_types.h"
#include "DinamicaCinematicaControleAtitude.h"
#include "DinamicaCinematicaControleAtitude_capi.h"
#include "DinamicaCinematicaControleAtitude_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 3 ,
TARGET_STRING (
"DinamicaCinematicaControleAtitude/CinematicaAtitudeSeguidor/Integrator5" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 1 , 0 , TARGET_STRING (
"DinamicaCinematicaControleAtitude/DinamicaAtitudeSeguidor/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0
} , { 2 , 7 , TARGET_STRING (
"DinamicaCinematicaControleAtitude/Subsystem1/Spacecraft BUS1/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 3 , 11 , TARGET_STRING (
 "DinamicaCinematicaControleAtitude/Subsystem1/LeaderEulerRef/Spacecraft BUS/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 4 , 18 , TARGET_STRING (
 "DinamicaCinematicaControleAtitude/Subsystem1/Spacecraft BUS1/Dinâmica/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 5 , 15 , TARGET_STRING (
 "DinamicaCinematicaControleAtitude/Subsystem1/LeaderEulerRef/Spacecraft BUS/Dinâmica/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 1 , 0 , 2 , 3 , 5 ,
4 } ;
#ifndef HOST_CAPI_BUILD
static void DinamicaCinematicaControleAtitude_InitializeDataAddr ( void *
dataAddr [ ] , ggv1uslzom * localDW , mcofgvk0eq * localX ) { dataAddr [ 0 ]
= ( void * ) ( & localX -> fqwmftubxu [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) (
& localX -> dg5bug3ja3 [ 0 ] ) ; dataAddr [ 2 ] = ( void * ) ( & localX ->
j4xd5u3n0w [ 0 ] ) ; dataAddr [ 3 ] = ( void * ) ( & localX -> bztxdjvraq [ 0
] ) ; dataAddr [ 4 ] = ( void * ) ( & localX -> drrg20ihu3 [ 0 ] ) ; dataAddr
[ 5 ] = ( void * ) ( & localX -> k02tgfg05z [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DinamicaCinematicaControleAtitude_InitializeVarDimsAddr ( int32_T
* vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DinamicaCinematicaControleAtitude_InitializeLoggingFunctions (
RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ;
loggingPtrs [ 1 ] = ( NULL ) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3
] = ( NULL ) ; loggingPtrs [ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ;
}
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 4 , 1 , 3 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap [ ] = {
{ ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , }
; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 23 ] ;
static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ;
static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 23 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 6 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 4243983744U , 1911850158U , 3489089849U , 4276026521U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo *
DinamicaCinematicaControleAtitude_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void DinamicaCinematicaControleAtitude_InitializeSystemRan (
adbbpxjmjx * const bwldjdcyog , sysRanDType * systemRan [ ] , ggv1uslzom *
localDW , int_T systemTid [ ] , void * rootSysRanPtr , int rootTid ) {
UNUSED_PARAMETER ( bwldjdcyog ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemRan [ 2 ] = ( NULL ) ; systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = (
NULL ) ; systemRan [ 5 ] = ( NULL ) ; systemRan [ 6 ] = ( NULL ) ; systemRan
[ 7 ] = ( sysRanDType * ) & localDW -> csrasjj5cf ; systemRan [ 8 ] = (
sysRanDType * ) & localDW -> la0x4crr0r ; systemRan [ 9 ] = ( NULL ) ;
systemRan [ 10 ] = ( NULL ) ; systemRan [ 11 ] = ( NULL ) ; systemRan [ 12 ]
= ( NULL ) ; systemRan [ 13 ] = ( NULL ) ; systemRan [ 14 ] = ( NULL ) ;
systemRan [ 15 ] = ( NULL ) ; systemRan [ 16 ] = ( NULL ) ; systemRan [ 17 ]
= ( NULL ) ; systemRan [ 18 ] = ( NULL ) ; systemRan [ 19 ] = ( NULL ) ;
systemRan [ 20 ] = ( NULL ) ; systemRan [ 21 ] = ( NULL ) ; systemRan [ 22 ]
= ( NULL ) ; systemTid [ 1 ] = bwldjdcyog -> Timing . mdlref_GlobalTID [ 1 ]
; systemTid [ 2 ] = bwldjdcyog -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid
[ 3 ] = bwldjdcyog -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] =
bwldjdcyog -> Timing . mdlref_GlobalTID [ 1 ] ; systemTid [ 5 ] = bwldjdcyog
-> Timing . mdlref_GlobalTID [ 1 ] ; systemTid [ 6 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 7 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 8 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 9 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 11 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 12 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 17 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 13 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 14 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 16 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 15 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 21 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 18 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 19 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 20 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 22 ] = bwldjdcyog -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 7 ; rtContextSystems [
5 ] = 7 ; rtContextSystems [ 6 ] = 7 ; rtContextSystems [ 7 ] = 7 ;
rtContextSystems [ 8 ] = 8 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [
10 ] = 0 ; rtContextSystems [ 11 ] = 0 ; rtContextSystems [ 12 ] = 0 ;
rtContextSystems [ 13 ] = 0 ; rtContextSystems [ 14 ] = 0 ; rtContextSystems
[ 15 ] = 0 ; rtContextSystems [ 16 ] = 0 ; rtContextSystems [ 17 ] = 0 ;
rtContextSystems [ 18 ] = 0 ; rtContextSystems [ 19 ] = 0 ; rtContextSystems
[ 20 ] = 0 ; rtContextSystems [ 21 ] = 0 ; rtContextSystems [ 22 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void DinamicaCinematicaControleAtitude_InitializeDataMapInfo ( adbbpxjmjx *
const bwldjdcyog , ggv1uslzom * localDW , mcofgvk0eq * localX , void *
sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( bwldjdcyog -> DataMapInfo
. mmi , 1 ) ; rtwCAPI_SetStaticMap ( bwldjdcyog -> DataMapInfo . mmi , &
mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( bwldjdcyog -> DataMapInfo . mmi ,
& mmiStaticInfoLogging ) ;
DinamicaCinematicaControleAtitude_InitializeDataAddr ( bwldjdcyog ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
bwldjdcyog -> DataMapInfo . mmi , bwldjdcyog -> DataMapInfo . dataAddress ) ;
DinamicaCinematicaControleAtitude_InitializeVarDimsAddr ( bwldjdcyog ->
DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( bwldjdcyog ->
DataMapInfo . mmi , bwldjdcyog -> DataMapInfo . vardimsAddress ) ;
rtwCAPI_SetPath ( bwldjdcyog -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetFullPath ( bwldjdcyog -> DataMapInfo . mmi , ( NULL ) ) ;
DinamicaCinematicaControleAtitude_InitializeLoggingFunctions ( bwldjdcyog ->
DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( bwldjdcyog ->
DataMapInfo . mmi , bwldjdcyog -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( bwldjdcyog -> DataMapInfo . mmi , &
bwldjdcyog -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
bwldjdcyog -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
bwldjdcyog -> DataMapInfo . mmi , 0 ) ;
DinamicaCinematicaControleAtitude_InitializeSystemRan ( bwldjdcyog ,
bwldjdcyog -> DataMapInfo . systemRan , localDW , bwldjdcyog -> DataMapInfo .
systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( bwldjdcyog ->
DataMapInfo . mmi , bwldjdcyog -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( bwldjdcyog -> DataMapInfo . mmi , bwldjdcyog ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( bwldjdcyog ->
DataMapInfo . mmi , & bwldjdcyog -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DinamicaCinematicaControleAtitude_host_InitializeDataMapInfo (
DinamicaCinematicaControleAtitude_host_DataMapInfo_T * dataMap , const char *
path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap (
dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi ,
( NULL ) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
