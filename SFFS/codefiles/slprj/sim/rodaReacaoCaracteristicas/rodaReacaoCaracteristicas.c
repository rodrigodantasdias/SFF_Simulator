#include "rodaReacaoCaracteristicas.h"
#include "rtwtypes.h"
#include "rodaReacaoCaracteristicas_private.h"
#include "rodaReacaoCaracteristicas_capi.h"
#include <string.h>
static RegMdlInfo rtMdlInfo_rodaReacaoCaracteristicas [ 44 ] = { {
"eaaovtek212" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "gxf20y0sb0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "njh3n44ubu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "a2cssxsbs4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "kjotdhnmk3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "mp4kendnp5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "fdpbkfvbjo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "dacvrdqnkd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "mn4vidrb3r" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "pibmfuujw0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "p3zx3q2404" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "js2mcixm0g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "jl0ssgue0g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "j4c4z5iltj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "j2kkaattwb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "avvafwszbq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "nmxeyjg4wr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "bh421im5yn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "pdbps1tivb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "jjvved0e4i" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "biwmeiw20u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "mr3j1o0jrs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "c430lexmmh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "o5ea2kxzhq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "lhtudrdggu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "rodaReacaoCaracteristicas" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "lscwbmic1t" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "al2vmacaoq4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "aomefuyc44" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , { "iaetpnbwgc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"rodaReacaoCaracteristicas" } , {
"mr_rodaReacaoCaracteristicas_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "rodaReacaoCaracteristicas"
} , { "mr_rodaReacaoCaracteristicas_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "rodaReacaoCaracteristicas"
} , { "mr_rodaReacaoCaracteristicas_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "rodaReacaoCaracteristicas"
} , { "mr_rodaReacaoCaracteristicas_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "rodaReacaoCaracteristicas"
} , { "mr_rodaReacaoCaracteristicas_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "rodaReacaoCaracteristicas"
} , { "mr_rodaReacaoCaracteristicas_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "rodaReacaoCaracteristicas"
} , { "mr_rodaReacaoCaracteristicas_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "rodaReacaoCaracteristicas"
} , { "mr_rodaReacaoCaracteristicas_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "rodaReacaoCaracteristicas"
} , { "mr_rodaReacaoCaracteristicas_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "rodaReacaoCaracteristicas"
} , { "mr_rodaReacaoCaracteristicas_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "rodaReacaoCaracteristicas"
} , { "mr_rodaReacaoCaracteristicas_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "rodaReacaoCaracteristicas" } , {
"mr_rodaReacaoCaracteristicas_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "rodaReacaoCaracteristicas" } , {
"rodaReacaoCaracteristicas.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL )
} , { "rodaReacaoCaracteristicas.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , (
void * ) "rodaReacaoCaracteristicas" } } ; al2vmacaoq4 al2vmacaoq = { 0.0 ,
0.0 , 9.5492965855137211 , 0.0 , 0.0 , - 1.0 } ; void mr3j1o0jrs ( dacvrdqnkd
* localX ) { localX -> i0badr502f = al2vmacaoq . P_15 ; localX -> nve0xpld5q
= al2vmacaoq . P_17 ; localX -> c22pgfareg = al2vmacaoq . P_18 ; localX ->
hloxtuzpld = al2vmacaoq . P_14 ; } void biwmeiw20u ( dacvrdqnkd * localX ) {
localX -> i0badr502f = al2vmacaoq . P_15 ; localX -> nve0xpld5q = al2vmacaoq
. P_17 ; localX -> c22pgfareg = al2vmacaoq . P_18 ; } void bh421im5yn (
iaetpnbwgc * const fhvr4fppzo , jl0ssgue0g * localDW , mp4kendnp5 * localXdis
) { ssSetBlockStateForSolverChangedAtMajorStep ( fhvr4fppzo -> _mdlRefSfcnS )
; if ( rtmGetTaskTime ( fhvr4fppzo , 0 ) == rtmGetTStart ( fhvr4fppzo ) ) { (
void ) memset ( & ( localXdis -> hloxtuzpld ) , 1 , 1 * sizeof ( boolean_T )
) ; } if ( localDW -> m5ugsmaxfg == 0 ) { ( void ) memset ( & ( localXdis ->
hloxtuzpld ) , 1 , 1 * sizeof ( boolean_T ) ) ; } localDW -> m5ugsmaxfg = - 1
; } void o5ea2kxzhq ( iaetpnbwgc * const fhvr4fppzo , jl0ssgue0g * localDW ,
mp4kendnp5 * localXdis ) { ssSetBlockStateForSolverChangedAtMajorStep (
fhvr4fppzo -> _mdlRefSfcnS ) ; ( void ) memset ( & ( localXdis -> hloxtuzpld
) , 1 , 1 * sizeof ( boolean_T ) ) ; localDW -> m5ugsmaxfg = - 1 ; } void
rodaReacaoCaracteristicas ( iaetpnbwgc * const fhvr4fppzo , const real_T *
jboyr2i3j4 , real_T * mispgguh4z , j4c4z5iltj * localB , jl0ssgue0g * localDW
, dacvrdqnkd * localX , mp4kendnp5 * localXdis ) { real_T hnpwlbfmzr ; real_T
pyc2fn0h2x ; real_T u2 ; int8_T rtAction ; int8_T rtPrevAction ; pyc2fn0h2x =
1.0 / rtP_Iw * localX -> i0badr502f ; hnpwlbfmzr = - rtP_RotMax * 2.0 *
3.1415926535897931 / 60.0 ; u2 = rtP_RotMax * 2.0 * 3.1415926535897931 / 60.0
; if ( pyc2fn0h2x > u2 ) { pyc2fn0h2x = u2 ; } else if ( pyc2fn0h2x <
hnpwlbfmzr ) { pyc2fn0h2x = hnpwlbfmzr ; } localB -> p2lt2scmoe = al2vmacaoq
. P_16 * pyc2fn0h2x ; if ( rtmIsMajorTimeStep ( fhvr4fppzo ) ) { } hnpwlbfmzr
= pyc2fn0h2x - localX -> nve0xpld5q ; if ( localX -> c22pgfareg > rtP_limVolt
) { pyc2fn0h2x = rtP_limVolt ; } else if ( localX -> c22pgfareg < -
rtP_limVolt ) { pyc2fn0h2x = - rtP_limVolt ; } else { pyc2fn0h2x = localX ->
c22pgfareg ; } pyc2fn0h2x = ( pyc2fn0h2x - rtP_Kv * hnpwlbfmzr ) * ( 1.0 /
rtP_Rm ) ; if ( rtmIsMajorTimeStep ( fhvr4fppzo ) ) { hnpwlbfmzr = rtP_Km *
pyc2fn0h2x - rtP_B * hnpwlbfmzr ; if ( hnpwlbfmzr > rtP_Tmax ) { localB ->
jksrdzd5gm = rtP_Tmax ; } else if ( hnpwlbfmzr < - rtP_Tmax ) { localB ->
jksrdzd5gm = - rtP_Tmax ; } else { localB -> jksrdzd5gm = hnpwlbfmzr ; } }
rtPrevAction = localDW -> m5ugsmaxfg ; if ( ssIsModeUpdateTimeStep (
fhvr4fppzo -> _mdlRefSfcnS ) ) { rtAction = ( int8_T ) ! ( rtP_TpulseRod !=
0.0 ) ; localDW -> m5ugsmaxfg = rtAction ; } else { rtAction = localDW ->
m5ugsmaxfg ; } if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( fhvr4fppzo -> _mdlRefSfcnS ) ;
if ( rtmGetTaskTime ( fhvr4fppzo , 0 ) == rtmGetTStart ( fhvr4fppzo ) ) { (
void ) memset ( & ( localXdis -> hloxtuzpld ) , 1 , 1 * sizeof ( boolean_T )
) ; } if ( rtPrevAction == 0 ) { ( void ) memset ( & ( localXdis ->
hloxtuzpld ) , 1 , 1 * sizeof ( boolean_T ) ) ; } } if ( rtAction == 0 ) { if
( rtPrevAction != 0 ) { if ( rtmGetTaskTime ( fhvr4fppzo , 0 ) !=
rtmGetTStart ( fhvr4fppzo ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
fhvr4fppzo -> _mdlRefSfcnS ) ; } ( void ) memset ( & ( localXdis ->
hloxtuzpld ) , 0 , 1 * sizeof ( boolean_T ) ) ; } localB -> ecfp1p0uth = (
localB -> jksrdzd5gm - localX -> hloxtuzpld ) / rtP_TpulseRod ; * mispgguh4z
= localX -> hloxtuzpld ; if ( ssIsModeUpdateTimeStep ( fhvr4fppzo ->
_mdlRefSfcnS ) ) { srUpdateBC ( localDW -> eyc5oac1ta ) ; } } else { if (
rtmIsMajorTimeStep ( fhvr4fppzo ) ) { * mispgguh4z = localB -> jksrdzd5gm ; }
if ( ssIsModeUpdateTimeStep ( fhvr4fppzo -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> m35ietcpnq ) ; } } if ( rtmIsMajorTimeStep ( fhvr4fppzo ) ) { }
hnpwlbfmzr = 1.0 / rtP_Km * * jboyr2i3j4 ; if ( hnpwlbfmzr > rtP_limCorrente
) { hnpwlbfmzr = rtP_limCorrente ; } else if ( hnpwlbfmzr < - rtP_limCorrente
) { hnpwlbfmzr = - rtP_limCorrente ; } localB -> lnjqpkej1x = ( hnpwlbfmzr -
pyc2fn0h2x ) * rtP_RodKi ; pyc2fn0h2x = al2vmacaoq . P_19 * * mispgguh4z ;
localB -> d0t02wpg3a = 1.0 / ( ( rtP_Ixx + rtP_Iyy ) + rtP_Izz ) * pyc2fn0h2x
; } void jjvved0e4i ( iaetpnbwgc * const fhvr4fppzo ) { if (
rtmIsMajorTimeStep ( fhvr4fppzo ) ) { if ( memcmp ( fhvr4fppzo ->
nonContDerivSignal [ 0 ] . pCurrVal , fhvr4fppzo -> nonContDerivSignal [ 0 ]
. pPrevVal , fhvr4fppzo -> nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) {
( void ) memcpy ( fhvr4fppzo -> nonContDerivSignal [ 0 ] . pPrevVal ,
fhvr4fppzo -> nonContDerivSignal [ 0 ] . pCurrVal , fhvr4fppzo ->
nonContDerivSignal [ 0 ] . sizeInBytes ) ; ssSetSolverNeedsResetWithReason (
fhvr4fppzo -> _mdlRefSfcnS , 32 ) ; } } } void pdbps1tivb ( real_T *
mispgguh4z , j4c4z5iltj * localB , jl0ssgue0g * localDW , fdpbkfvbjo *
localXdot ) { localXdot -> i0badr502f = * mispgguh4z ; localXdot ->
nve0xpld5q = localB -> d0t02wpg3a ; localXdot -> c22pgfareg = localB ->
lnjqpkej1x ; localXdot -> hloxtuzpld = 0.0 ; if ( localDW -> m5ugsmaxfg == 0
) { localXdot -> hloxtuzpld = localB -> ecfp1p0uth ; } } void avvafwszbq (
iaetpnbwgc * const fhvr4fppzo ) { if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( fhvr4fppzo -> _mdlRefSfcnS ,
"rodaReacaoCaracteristicas" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" )
; } } void c430lexmmh ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , iaetpnbwgc * const fhvr4fppzo , j4c4z5iltj
* localB , jl0ssgue0g * localDW , dacvrdqnkd * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { ( void ) memset
( ( void * ) fhvr4fppzo , 0 , sizeof ( iaetpnbwgc ) ) ; fhvr4fppzo -> Timing
. mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; fhvr4fppzo -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; fhvr4fppzo -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( fhvr4fppzo -> _mdlRefSfcnS , "rodaReacaoCaracteristicas"
, "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> p2lt2scmoe =
0.0 ; localB -> jksrdzd5gm = 0.0 ; localB -> lnjqpkej1x = 0.0 ; localB ->
d0t02wpg3a = 0.0 ; localB -> ecfp1p0uth = 0.0 ; } ( void ) memset ( ( void *
) localDW , 0 , sizeof ( jl0ssgue0g ) ) ;
rodaReacaoCaracteristicas_InitializeDataMapInfo ( fhvr4fppzo , localDW ,
localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( fhvr4fppzo -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
fhvr4fppzo -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( fhvr4fppzo -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } fhvr4fppzo -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) fhvr4fppzo -> NonContDerivMemory . mr_nonContSig0 ; fhvr4fppzo ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
fhvr4fppzo -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> jksrdzd5gm ) ; ; if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 0 ] [ 0 ] . currVal = ( char_T * ) & localB ->
jksrdzd5gm ; mr_nonContOutputArray [ 0 ] [ 0 ] . next = ( NULL ) ; } } void
mr_rodaReacaoCaracteristicas_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_rodaReacaoCaracteristicas , 44 ) ; * retVal = 1 ; } static void
mr_rodaReacaoCaracteristicas_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_rodaReacaoCaracteristicas_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_rodaReacaoCaracteristicas_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_rodaReacaoCaracteristicas_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_rodaReacaoCaracteristicas_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_rodaReacaoCaracteristicas_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_rodaReacaoCaracteristicas_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_rodaReacaoCaracteristicas_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_rodaReacaoCaracteristicas_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_rodaReacaoCaracteristicas_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_rodaReacaoCaracteristicas_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_rodaReacaoCaracteristicas_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_rodaReacaoCaracteristicas_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_rodaReacaoCaracteristicas_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_rodaReacaoCaracteristicas_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_rodaReacaoCaracteristicas_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_rodaReacaoCaracteristicas_GetDWork (
const eaaovtek212 * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] =
{ "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix
( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_rodaReacaoCaracteristicas_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void
* ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const
char_T * rtdwDataFieldNames [ 3 ] = { "mdlrefDW->rtdw.m5ugsmaxfg" ,
"mdlrefDW->rtdw.m35ietcpnq" , "mdlrefDW->rtdw.eyc5oac1ta" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 3 , rtdwDataFieldNames ) ;
mr_rodaReacaoCaracteristicas_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtdw . m5ugsmaxfg ) , sizeof ( mdlrefDW -> rtdw .
m5ugsmaxfg ) ) ; mr_rodaReacaoCaracteristicas_cacheDataAsMxArray ( rtdwData ,
0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . m35ietcpnq ) , sizeof (
mdlrefDW -> rtdw . m35ietcpnq ) ) ;
mr_rodaReacaoCaracteristicas_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( mdlrefDW -> rtdw . eyc5oac1ta ) , sizeof ( mdlrefDW -> rtdw .
eyc5oac1ta ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void )
mdlrefDW ; return ssDW ; } void mr_rodaReacaoCaracteristicas_SetDWork (
eaaovtek212 * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void )
mdlrefDW ; mr_rodaReacaoCaracteristicas_restoreDataFromMxArray ( ( void * ) &
( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_rodaReacaoCaracteristicas_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . m5ugsmaxfg ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw .
m5ugsmaxfg ) ) ; mr_rodaReacaoCaracteristicas_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . m35ietcpnq ) , rtdwData , 0 , 1 , sizeof (
mdlrefDW -> rtdw . m35ietcpnq ) ) ;
mr_rodaReacaoCaracteristicas_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . eyc5oac1ta ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
eyc5oac1ta ) ) ; } } void
mr_rodaReacaoCaracteristicas_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 1345249757U , 85441217U , 1346491499U ,
2394459971U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"rodaReacaoCaracteristicas" , & chksum [ 0 ] ) ; } mxArray *
mr_rodaReacaoCaracteristicas_GetSimStateDisallowedBlocks ( ) { return ( NULL
) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
