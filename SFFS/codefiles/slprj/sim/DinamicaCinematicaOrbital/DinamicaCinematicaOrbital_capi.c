#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DinamicaCinematicaOrbital_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "DinamicaCinematicaOrbital.h"
#include "DinamicaCinematicaOrbital_capi.h"
#include "DinamicaCinematicaOrbital_private.h"
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
"DinamicaCinematicaOrbital/Estados do Líder e\n Estados Relativos/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 1 , 2 , TARGET_STRING (
"DinamicaCinematicaOrbital/Estados do Líder e\n Estados Relativos/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 2 , 1 , TARGET_STRING (
"DinamicaCinematicaOrbital/Estados do Líder e\n Estados Relativos/Integrator2"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 3 , 4 , TARGET_STRING (
"DinamicaCinematicaOrbital/Estados do Líder e\n Estados Relativos/Integrator3"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 4 , 0 , TARGET_STRING (
"DinamicaCinematicaOrbital/Estados do Líder e\n Estados Relativos/Integrator4"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 5 , 5 , TARGET_STRING (
"DinamicaCinematicaOrbital/Estados do Líder e\n Estados Relativos/Integrator5"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 6 , - 1 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Estados do L&#xED;der e\n Estados Relativos/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 7
, - 1 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Estados do L&#xED;der e\n Estados Relativos/Unit Delay1"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 8
, 16 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Posições // Velocidades Relativas \ne Manobra Orbital/If Action\nSubsystem/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 9 , 17 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Posições // Velocidades Relativas \ne Manobra Orbital/If Action\nSubsystem/Integrator6"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 10 , 14 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Posições // Velocidades Relativas \ne Manobra Orbital/If Action\nSubsystem1/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 11 , 15 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Posições // Velocidades Relativas \ne Manobra Orbital/If Action\nSubsystem1/Integrator6"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 12 , 12 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Posições // Velocidades Relativas \ne Manobra Orbital/If Action\nSubsystem2/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 13 , 13 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Posições // Velocidades Relativas \ne Manobra Orbital/If Action\nSubsystem2/Integrator6"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 14 , 10 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Posições // Velocidades Relativas \ne Manobra Orbital/If Action\nSubsystem3/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 15 , 11 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Posições // Velocidades Relativas \ne Manobra Orbital/If Action\nSubsystem3/Integrator6"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 16 , 8 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Posições // Velocidades Relativas \ne Manobra Orbital/If Action\nSubsystem4/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 17 , 9 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Posições // Velocidades Relativas \ne Manobra Orbital/If Action\nSubsystem4/Integrator6"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 18 , 6 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Posições // Velocidades Relativas \ne Manobra Orbital/If Action\nSubsystem5/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 19 , 7 , TARGET_STRING (
 "DinamicaCinematicaOrbital/Posições // Velocidades Relativas \ne Manobra Orbital/If Action\nSubsystem5/Integrator6"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 3 , 2 , 1 , 4 , 0 ,
5 , 0 , 1 , 16 , 17 , 14 , 15 , 12 , 13 , 10 , 11 , 8 , 9 , 6 , 7 } ;
#ifndef HOST_CAPI_BUILD
static void DinamicaCinematicaOrbital_InitializeDataAddr ( void * dataAddr [
] , p1yqgfuya1 * localDW , luimruxjly * localX ) { dataAddr [ 0 ] = ( void *
) ( & localX -> pxxhuzxdhx ) ; dataAddr [ 1 ] = ( void * ) ( & localX ->
p432rqp4kj ) ; dataAddr [ 2 ] = ( void * ) ( & localX -> cjolpg5ogt ) ;
dataAddr [ 3 ] = ( void * ) ( & localX -> cwrlfd5taf ) ; dataAddr [ 4 ] = (
void * ) ( & localX -> m2ckqb4qdo ) ; dataAddr [ 5 ] = ( void * ) ( & localX
-> doj5adsbev ) ; dataAddr [ 6 ] = ( void * ) ( & localDW -> lfjiab3rx0 ) ;
dataAddr [ 7 ] = ( void * ) ( & localDW -> amkx5itglp ) ; dataAddr [ 8 ] = (
void * ) ( & localX -> dgdb31szew ) ; dataAddr [ 9 ] = ( void * ) ( & localX
-> poae3lai5p ) ; dataAddr [ 10 ] = ( void * ) ( & localX -> ljdhe12bh3 ) ;
dataAddr [ 11 ] = ( void * ) ( & localX -> lks1v1umh4 ) ; dataAddr [ 12 ] = (
void * ) ( & localX -> fhbckfju34 ) ; dataAddr [ 13 ] = ( void * ) ( & localX
-> dx03sczucd ) ; dataAddr [ 14 ] = ( void * ) ( & localX -> pekfmaxvjy ) ;
dataAddr [ 15 ] = ( void * ) ( & localX -> ntlqdkmwfj ) ; dataAddr [ 16 ] = (
void * ) ( & localX -> geuo1q43mm ) ; dataAddr [ 17 ] = ( void * ) ( & localX
-> dpw155co0h ) ; dataAddr [ 18 ] = ( void * ) ( & localX -> njak3lbjwg ) ;
dataAddr [ 19 ] = ( void * ) ( & localX -> f5d1n2ym24 ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DinamicaCinematicaOrbital_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DinamicaCinematicaOrbital_InitializeLoggingFunctions (
RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ;
loggingPtrs [ 1 ] = ( NULL ) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3
] = ( NULL ) ; loggingPtrs [ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ;
loggingPtrs [ 6 ] = ( NULL ) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8
] = ( NULL ) ; loggingPtrs [ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ;
loggingPtrs [ 11 ] = ( NULL ) ; loggingPtrs [ 12 ] = ( NULL ) ; loggingPtrs [
13 ] = ( NULL ) ; loggingPtrs [ 14 ] = ( NULL ) ; loggingPtrs [ 15 ] = ( NULL
) ; loggingPtrs [ 16 ] = ( NULL ) ; loggingPtrs [ 17 ] = ( NULL ) ;
loggingPtrs [ 18 ] = ( NULL ) ; loggingPtrs [ 19 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 0.01 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 1 , ( uint8_T ) 0
} } ; static int_T rtContextSystems [ 27 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 27 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 20 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 255274658U , 2846818081U , 1916708291U , 2437979774U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * DinamicaCinematicaOrbital_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void DinamicaCinematicaOrbital_InitializeSystemRan ( fqgdhjwhge *
const ev2oqvq0xx , sysRanDType * systemRan [ ] , p1yqgfuya1 * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
ev2oqvq0xx ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = (
NULL ) ; systemRan [ 6 ] = ( NULL ) ; systemRan [ 7 ] = ( NULL ) ; systemRan
[ 8 ] = ( NULL ) ; systemRan [ 9 ] = ( NULL ) ; systemRan [ 10 ] = ( NULL ) ;
systemRan [ 11 ] = ( NULL ) ; systemRan [ 12 ] = ( NULL ) ; systemRan [ 13 ]
= ( NULL ) ; systemRan [ 14 ] = ( NULL ) ; systemRan [ 15 ] = ( NULL ) ;
systemRan [ 16 ] = ( NULL ) ; systemRan [ 17 ] = ( NULL ) ; systemRan [ 18 ]
= ( sysRanDType * ) & localDW -> j1xdkh5ug2 ; systemRan [ 19 ] = (
sysRanDType * ) & localDW -> ihsebl21i0 ; systemRan [ 20 ] = ( NULL ) ;
systemRan [ 21 ] = ( NULL ) ; systemRan [ 22 ] = ( sysRanDType * ) & localDW
-> hqs052cxrs ; systemRan [ 23 ] = ( sysRanDType * ) & localDW -> cs5jgwctpw
; systemRan [ 24 ] = ( sysRanDType * ) & localDW -> caph4ieys1 ; systemRan [
25 ] = ( sysRanDType * ) & localDW -> gdluyylqio ; systemRan [ 26 ] = ( NULL
) ; systemTid [ 1 ] = ev2oqvq0xx -> Timing . mdlref_GlobalTID [ 0 ] ;
systemTid [ 2 ] = ev2oqvq0xx -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
3 ] = ev2oqvq0xx -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] =
ev2oqvq0xx -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = ev2oqvq0xx
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 9 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 11 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 12 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 13 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 14 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 15 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 16 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 17 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 18 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 19 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 20 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 21 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 22 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 23 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 24 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 25 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 26 ] = ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [
5 ] = 0 ; rtContextSystems [ 6 ] = 0 ; rtContextSystems [ 7 ] = 0 ;
rtContextSystems [ 8 ] = 0 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [
10 ] = 0 ; rtContextSystems [ 11 ] = 0 ; rtContextSystems [ 12 ] = 0 ;
rtContextSystems [ 13 ] = 0 ; rtContextSystems [ 14 ] = 0 ; rtContextSystems
[ 15 ] = 0 ; rtContextSystems [ 16 ] = 0 ; rtContextSystems [ 17 ] = 0 ;
rtContextSystems [ 18 ] = 18 ; rtContextSystems [ 19 ] = 19 ;
rtContextSystems [ 20 ] = 22 ; rtContextSystems [ 21 ] = 22 ;
rtContextSystems [ 22 ] = 22 ; rtContextSystems [ 23 ] = 23 ;
rtContextSystems [ 24 ] = 24 ; rtContextSystems [ 25 ] = 25 ;
rtContextSystems [ 26 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void DinamicaCinematicaOrbital_InitializeDataMapInfo ( fqgdhjwhge * const
ev2oqvq0xx , p1yqgfuya1 * localDW , luimruxjly * localX , void * sysRanPtr ,
int contextTid ) { rtwCAPI_SetVersion ( ev2oqvq0xx -> DataMapInfo . mmi , 1 )
; rtwCAPI_SetStaticMap ( ev2oqvq0xx -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ev2oqvq0xx -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; DinamicaCinematicaOrbital_InitializeDataAddr (
ev2oqvq0xx -> DataMapInfo . dataAddress , localDW , localX ) ;
rtwCAPI_SetDataAddressMap ( ev2oqvq0xx -> DataMapInfo . mmi , ev2oqvq0xx ->
DataMapInfo . dataAddress ) ; DinamicaCinematicaOrbital_InitializeVarDimsAddr
( ev2oqvq0xx -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap
( ev2oqvq0xx -> DataMapInfo . mmi , ev2oqvq0xx -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetPath ( ev2oqvq0xx -> DataMapInfo . mmi , ( NULL
) ) ; rtwCAPI_SetFullPath ( ev2oqvq0xx -> DataMapInfo . mmi , ( NULL ) ) ;
DinamicaCinematicaOrbital_InitializeLoggingFunctions ( ev2oqvq0xx ->
DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( ev2oqvq0xx ->
DataMapInfo . mmi , ev2oqvq0xx -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( ev2oqvq0xx -> DataMapInfo . mmi , &
ev2oqvq0xx -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
ev2oqvq0xx -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
ev2oqvq0xx -> DataMapInfo . mmi , 0 ) ;
DinamicaCinematicaOrbital_InitializeSystemRan ( ev2oqvq0xx , ev2oqvq0xx ->
DataMapInfo . systemRan , localDW , ev2oqvq0xx -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( ev2oqvq0xx -> DataMapInfo .
mmi , ev2oqvq0xx -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
ev2oqvq0xx -> DataMapInfo . mmi , ev2oqvq0xx -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( ev2oqvq0xx -> DataMapInfo . mmi , & ev2oqvq0xx ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DinamicaCinematicaOrbital_host_InitializeDataMapInfo (
DinamicaCinematicaOrbital_host_DataMapInfo_T * dataMap , const char * path )
{ rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap
-> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL
) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
