#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Propulsor_capi_host.h"
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
#include "Propulsor.h"
#include "Propulsor_capi.h"
#include "Propulsor_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING ( "Propulsor/Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 ,
0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 , TARGET_STRING (
"Propulsor/Unit Delay1" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 ,
0 , 0 , - 1 , 0 } , { 2 , - 1 , TARGET_STRING (
"Propulsor/Detect\nDecrease/Delay Input1" ) , TARGET_STRING ( "DSTATE" ) , ""
, 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 3 , 0 , TARGET_STRING (
"Propulsor/If Action\nSubsystem/Integrator1" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1 , 0 } , { 0 , - 1 , ( NULL
) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 2 , 1 , 3 , 0 } ;
#ifndef HOST_CAPI_BUILD
static void Propulsor_InitializeDataAddr ( void * dataAddr [ ] , badsi1hmia *
localDW , jo4unm3m5g * localX ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
ijra2dyz05 [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> pw3wjofd4q )
; dataAddr [ 2 ] = ( void * ) ( & localDW -> jt3tjalxnb ) ; dataAddr [ 3 ] =
( void * ) ( & localX -> fbmh4qw3zl ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Propulsor_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Propulsor_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 10 , 1 , 1 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.1 , 0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap [
] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0
} , } ; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1
] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T )
0 } } ; static int_T rtContextSystems [ 6 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 6 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 4 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 2059914792U , 699993615U , 4163817092U , 1062157465U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Propulsor_GetCAPIStaticMap ( void ) { return
& mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void Propulsor_InitializeSystemRan ( idm52sgviy * const egnxxymnym ,
sysRanDType * systemRan [ ] , badsi1hmia * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( egnxxymnym ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW -> jxwdrgb2ll ;
systemRan [ 2 ] = ( sysRanDType * ) & localDW -> htitws2jba ; systemRan [ 3 ]
= ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = ( NULL ) ;
systemTid [ 1 ] = egnxxymnym -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
2 ] = egnxxymnym -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] =
egnxxymnym -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = egnxxymnym
-> Timing . mdlref_GlobalTID [ 1 ] ; systemTid [ 5 ] = egnxxymnym -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 1 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [
5 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void Propulsor_InitializeDataMapInfo ( idm52sgviy * const egnxxymnym ,
badsi1hmia * localDW , jo4unm3m5g * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( egnxxymnym -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( egnxxymnym -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( egnxxymnym -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; Propulsor_InitializeDataAddr ( egnxxymnym ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
egnxxymnym -> DataMapInfo . mmi , egnxxymnym -> DataMapInfo . dataAddress ) ;
Propulsor_InitializeVarDimsAddr ( egnxxymnym -> DataMapInfo . vardimsAddress
) ; rtwCAPI_SetVarDimsAddressMap ( egnxxymnym -> DataMapInfo . mmi ,
egnxxymnym -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( egnxxymnym
-> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( egnxxymnym ->
DataMapInfo . mmi , ( NULL ) ) ; Propulsor_InitializeLoggingFunctions (
egnxxymnym -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs (
egnxxymnym -> DataMapInfo . mmi , egnxxymnym -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( egnxxymnym -> DataMapInfo . mmi , &
egnxxymnym -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
egnxxymnym -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
egnxxymnym -> DataMapInfo . mmi , 0 ) ; Propulsor_InitializeSystemRan (
egnxxymnym , egnxxymnym -> DataMapInfo . systemRan , localDW , egnxxymnym ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
egnxxymnym -> DataMapInfo . mmi , egnxxymnym -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( egnxxymnym -> DataMapInfo . mmi , egnxxymnym ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( egnxxymnym ->
DataMapInfo . mmi , & egnxxymnym -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Propulsor_host_InitializeDataMapInfo ( Propulsor_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
