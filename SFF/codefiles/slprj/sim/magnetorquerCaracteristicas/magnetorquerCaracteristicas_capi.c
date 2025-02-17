#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "magnetorquerCaracteristicas_capi_host.h"
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
#include "magnetorquerCaracteristicas.h"
#include "magnetorquerCaracteristicas_capi.h"
#include "magnetorquerCaracteristicas_private.h"
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
, TARGET_STRING ( "magnetorquerCaracteristicas/TdTorq" ) , TARGET_STRING (
"DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , 0 , TARGET_STRING
( "magnetorquerCaracteristicas/If Action\nSubsystem/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1 , 0
} , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1
, 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 0 } ;
#ifndef HOST_CAPI_BUILD
static void magnetorquerCaracteristicas_InitializeDataAddr ( void * dataAddr
[ ] , lfb3qpjdoq * localDW , pcl5pvi4hn * localX ) { dataAddr [ 0 ] = ( void
* ) ( & localDW -> otxc30ujlv [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( &
localX -> bwh55fyyay ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void magnetorquerCaracteristicas_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void magnetorquerCaracteristicas_InitializeLoggingFunctions (
RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ;
loggingPtrs [ 1 ] = ( NULL ) ; }
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
rtcapiStoredFloats [ ] = { 0.01 , 0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap
[ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T )
0 } , } ; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void
* ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [
1 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T
) 0 } } ; static int_T rtContextSystems [ 4 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 4 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 2 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 2150385457U , 308341876U , 2043029003U , 1267744935U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * magnetorquerCaracteristicas_GetCAPIStaticMap
( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void magnetorquerCaracteristicas_InitializeSystemRan ( kd0us3tuxx *
const nyf0u4k1q4 , sysRanDType * systemRan [ ] , lfb3qpjdoq * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
nyf0u4k1q4 ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW ->
la5fsxv1hk ; systemRan [ 2 ] = ( sysRanDType * ) & localDW -> pzwzs1nmt5 ;
systemRan [ 3 ] = ( NULL ) ; systemTid [ 1 ] = nyf0u4k1q4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = nyf0u4k1q4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = nyf0u4k1q4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 1 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void magnetorquerCaracteristicas_InitializeDataMapInfo ( kd0us3tuxx * const
nyf0u4k1q4 , lfb3qpjdoq * localDW , pcl5pvi4hn * localX , void * sysRanPtr ,
int contextTid ) { rtwCAPI_SetVersion ( nyf0u4k1q4 -> DataMapInfo . mmi , 1 )
; rtwCAPI_SetStaticMap ( nyf0u4k1q4 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( nyf0u4k1q4 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; magnetorquerCaracteristicas_InitializeDataAddr (
nyf0u4k1q4 -> DataMapInfo . dataAddress , localDW , localX ) ;
rtwCAPI_SetDataAddressMap ( nyf0u4k1q4 -> DataMapInfo . mmi , nyf0u4k1q4 ->
DataMapInfo . dataAddress ) ;
magnetorquerCaracteristicas_InitializeVarDimsAddr ( nyf0u4k1q4 -> DataMapInfo
. vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( nyf0u4k1q4 -> DataMapInfo
. mmi , nyf0u4k1q4 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
nyf0u4k1q4 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
nyf0u4k1q4 -> DataMapInfo . mmi , ( NULL ) ) ;
magnetorquerCaracteristicas_InitializeLoggingFunctions ( nyf0u4k1q4 ->
DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( nyf0u4k1q4 ->
DataMapInfo . mmi , nyf0u4k1q4 -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( nyf0u4k1q4 -> DataMapInfo . mmi , &
nyf0u4k1q4 -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
nyf0u4k1q4 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
nyf0u4k1q4 -> DataMapInfo . mmi , 0 ) ;
magnetorquerCaracteristicas_InitializeSystemRan ( nyf0u4k1q4 , nyf0u4k1q4 ->
DataMapInfo . systemRan , localDW , nyf0u4k1q4 -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( nyf0u4k1q4 -> DataMapInfo .
mmi , nyf0u4k1q4 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
nyf0u4k1q4 -> DataMapInfo . mmi , nyf0u4k1q4 -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( nyf0u4k1q4 -> DataMapInfo . mmi , & nyf0u4k1q4 ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void magnetorquerCaracteristicas_host_InitializeDataMapInfo (
magnetorquerCaracteristicas_host_DataMapInfo_T * dataMap , const char * path
) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap (
dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi ,
( NULL ) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
