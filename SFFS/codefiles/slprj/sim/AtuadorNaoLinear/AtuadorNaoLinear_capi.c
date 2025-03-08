#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "AtuadorNaoLinear_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 19
#endif
#ifndef SS_INT64
#define SS_INT64 20
#endif
#else
#include "builtin_typeid_types.h"
#include "AtuadorNaoLinear.h"
#include "AtuadorNaoLinear_capi.h"
#include "AtuadorNaoLinear_private.h"
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
, TARGET_STRING ( "AtuadorNaoLinear/Detect\nIncrease/Delay Input1" ) ,
TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , -
1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void AtuadorNaoLinear_InitializeDataAddr ( void * dataAddr [ ] ,
kqdghramcw * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
e513volrap [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void AtuadorNaoLinear_InitializeVarDimsAddr ( int32_T * vardimsAddr [
] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void AtuadorNaoLinear_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 12 ,
1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.1 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 1 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 4 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 4 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 2840580145U , 1371396487U , 3888024675U , 1688192625U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * AtuadorNaoLinear_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void AtuadorNaoLinear_InitializeSystemRan ( jxg1wrv0wn * const
pjzki5njc0 , sysRanDType * systemRan [ ] , kqdghramcw * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
pjzki5njc0 ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemTid [ 1 ] = pjzki5njc0 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = pjzki5njc0 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = pjzki5njc0 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void AtuadorNaoLinear_InitializeDataMapInfo ( jxg1wrv0wn * const pjzki5njc0 ,
kqdghramcw * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( pjzki5njc0 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( pjzki5njc0 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( pjzki5njc0 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; AtuadorNaoLinear_InitializeDataAddr ( pjzki5njc0 ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
pjzki5njc0 -> DataMapInfo . mmi , pjzki5njc0 -> DataMapInfo . dataAddress ) ;
AtuadorNaoLinear_InitializeVarDimsAddr ( pjzki5njc0 -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( pjzki5njc0 -> DataMapInfo .
mmi , pjzki5njc0 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
pjzki5njc0 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
pjzki5njc0 -> DataMapInfo . mmi , ( NULL ) ) ;
AtuadorNaoLinear_InitializeLoggingFunctions ( pjzki5njc0 -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( pjzki5njc0 -> DataMapInfo . mmi ,
pjzki5njc0 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
pjzki5njc0 -> DataMapInfo . mmi , & pjzki5njc0 -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( pjzki5njc0 -> DataMapInfo .
mmi , pjzki5njc0 -> DataMapInfo . childMMI ) ; rtwCAPI_SetChildMMIArrayLen (
pjzki5njc0 -> DataMapInfo . mmi , 13 ) ; AtuadorNaoLinear_InitializeSystemRan
( pjzki5njc0 , pjzki5njc0 -> DataMapInfo . systemRan , localDW , pjzki5njc0
-> DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan
( pjzki5njc0 -> DataMapInfo . mmi , pjzki5njc0 -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( pjzki5njc0 -> DataMapInfo . mmi , pjzki5njc0 ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( pjzki5njc0 ->
DataMapInfo . mmi , & pjzki5njc0 -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void AtuadorNaoLinear_host_InitializeDataMapInfo (
AtuadorNaoLinear_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi )
; Propulsor_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"AtuadorNaoLinear/PWM/Model" ) ; dataMap -> childMMI [ 1 ] = & ( dataMap ->
child1 . mmi ) ; Propulsor_host_InitializeDataMapInfo ( & ( dataMap -> child1
) , "AtuadorNaoLinear/PWM/Model1" ) ; dataMap -> childMMI [ 2 ] = & ( dataMap
-> child2 . mmi ) ; Propulsor_host_InitializeDataMapInfo ( & ( dataMap ->
child2 ) , "AtuadorNaoLinear/PWM/Model10" ) ; dataMap -> childMMI [ 3 ] = & (
dataMap -> child3 . mmi ) ; Propulsor_host_InitializeDataMapInfo ( & (
dataMap -> child3 ) , "AtuadorNaoLinear/PWM/Model11" ) ; dataMap -> childMMI
[ 4 ] = & ( dataMap -> child4 . mmi ) ; Propulsor_host_InitializeDataMapInfo
( & ( dataMap -> child4 ) , "AtuadorNaoLinear/PWM/Model2" ) ; dataMap ->
childMMI [ 5 ] = & ( dataMap -> child5 . mmi ) ;
Propulsor_host_InitializeDataMapInfo ( & ( dataMap -> child5 ) ,
"AtuadorNaoLinear/PWM/Model3" ) ; dataMap -> childMMI [ 6 ] = & ( dataMap ->
child6 . mmi ) ; Propulsor_host_InitializeDataMapInfo ( & ( dataMap -> child6
) , "AtuadorNaoLinear/PWM/Model4" ) ; dataMap -> childMMI [ 7 ] = & ( dataMap
-> child7 . mmi ) ; Propulsor_host_InitializeDataMapInfo ( & ( dataMap ->
child7 ) , "AtuadorNaoLinear/PWM/Model5" ) ; dataMap -> childMMI [ 8 ] = & (
dataMap -> child8 . mmi ) ; Propulsor_host_InitializeDataMapInfo ( & (
dataMap -> child8 ) , "AtuadorNaoLinear/PWM/Model6" ) ; dataMap -> childMMI [
9 ] = & ( dataMap -> child9 . mmi ) ; Propulsor_host_InitializeDataMapInfo (
& ( dataMap -> child9 ) , "AtuadorNaoLinear/PWM/Model7" ) ; dataMap ->
childMMI [ 10 ] = & ( dataMap -> child10 . mmi ) ;
Propulsor_host_InitializeDataMapInfo ( & ( dataMap -> child10 ) ,
"AtuadorNaoLinear/PWM/Model8" ) ; dataMap -> childMMI [ 11 ] = & ( dataMap ->
child11 . mmi ) ; Propulsor_host_InitializeDataMapInfo ( & ( dataMap ->
child11 ) , "AtuadorNaoLinear/PWM/Model9" ) ; dataMap -> childMMI [ 12 ] = &
( dataMap -> child12 . mmi ) ; TempoAcioProp_host_InitializeDataMapInfo ( & (
dataMap -> child12 ) , "AtuadorNaoLinear/TempoAcioProp" ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 13 ) ; }
#ifdef __cplusplus
}
#endif
#endif
