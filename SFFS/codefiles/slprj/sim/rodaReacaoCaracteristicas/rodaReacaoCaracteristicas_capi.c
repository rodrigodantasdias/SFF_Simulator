#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "rodaReacaoCaracteristicas_capi_host.h"
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
#include "rodaReacaoCaracteristicas.h"
#include "rodaReacaoCaracteristicas_capi.h"
#include "rodaReacaoCaracteristicas_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 0 ,
TARGET_STRING ( "rodaReacaoCaracteristicas/Integrator1" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 1 , 1 ,
TARGET_STRING ( "rodaReacaoCaracteristicas/Integrator2" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 2 , 3 ,
TARGET_STRING ( "rodaReacaoCaracteristicas/If Action\nSubsystem/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 3 , 2 , TARGET_STRING (
"rodaReacaoCaracteristicas/Controlador Integral/Controlador Integral/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 3 , 2 } ;
#ifndef HOST_CAPI_BUILD
static void rodaReacaoCaracteristicas_InitializeDataAddr ( void * dataAddr [
] , jl0ssgue0g * localDW , dacvrdqnkd * localX ) { dataAddr [ 0 ] = ( void *
) ( & localX -> i0badr502f ) ; dataAddr [ 1 ] = ( void * ) ( & localX ->
nve0xpld5q ) ; dataAddr [ 2 ] = ( void * ) ( & localX -> hloxtuzpld ) ;
dataAddr [ 3 ] = ( void * ) ( & localX -> c22pgfareg ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void rodaReacaoCaracteristicas_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void rodaReacaoCaracteristicas_InitializeLoggingFunctions (
RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ;
loggingPtrs [ 1 ] = ( NULL ) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3
] = ( NULL ) ; }
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
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 4 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 4 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 4 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 3607431872U , 2831209020U , 1796098503U , 822914035U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * rodaReacaoCaracteristicas_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void rodaReacaoCaracteristicas_InitializeSystemRan ( iaetpnbwgc *
const fhvr4fppzo , sysRanDType * systemRan [ ] , jl0ssgue0g * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
fhvr4fppzo ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW ->
eyc5oac1ta ; systemRan [ 2 ] = ( sysRanDType * ) & localDW -> m35ietcpnq ;
systemRan [ 3 ] = ( NULL ) ; systemTid [ 1 ] = fhvr4fppzo -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = fhvr4fppzo -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = fhvr4fppzo -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 1 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void rodaReacaoCaracteristicas_InitializeDataMapInfo ( iaetpnbwgc * const
fhvr4fppzo , jl0ssgue0g * localDW , dacvrdqnkd * localX , void * sysRanPtr ,
int contextTid ) { rtwCAPI_SetVersion ( fhvr4fppzo -> DataMapInfo . mmi , 1 )
; rtwCAPI_SetStaticMap ( fhvr4fppzo -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( fhvr4fppzo -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; rodaReacaoCaracteristicas_InitializeDataAddr (
fhvr4fppzo -> DataMapInfo . dataAddress , localDW , localX ) ;
rtwCAPI_SetDataAddressMap ( fhvr4fppzo -> DataMapInfo . mmi , fhvr4fppzo ->
DataMapInfo . dataAddress ) ; rodaReacaoCaracteristicas_InitializeVarDimsAddr
( fhvr4fppzo -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap
( fhvr4fppzo -> DataMapInfo . mmi , fhvr4fppzo -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetPath ( fhvr4fppzo -> DataMapInfo . mmi , ( NULL
) ) ; rtwCAPI_SetFullPath ( fhvr4fppzo -> DataMapInfo . mmi , ( NULL ) ) ;
rodaReacaoCaracteristicas_InitializeLoggingFunctions ( fhvr4fppzo ->
DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( fhvr4fppzo ->
DataMapInfo . mmi , fhvr4fppzo -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( fhvr4fppzo -> DataMapInfo . mmi , &
fhvr4fppzo -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
fhvr4fppzo -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
fhvr4fppzo -> DataMapInfo . mmi , 0 ) ;
rodaReacaoCaracteristicas_InitializeSystemRan ( fhvr4fppzo , fhvr4fppzo ->
DataMapInfo . systemRan , localDW , fhvr4fppzo -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( fhvr4fppzo -> DataMapInfo .
mmi , fhvr4fppzo -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
fhvr4fppzo -> DataMapInfo . mmi , fhvr4fppzo -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( fhvr4fppzo -> DataMapInfo . mmi , & fhvr4fppzo ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void rodaReacaoCaracteristicas_host_InitializeDataMapInfo (
rodaReacaoCaracteristicas_host_DataMapInfo_T * dataMap , const char * path )
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
