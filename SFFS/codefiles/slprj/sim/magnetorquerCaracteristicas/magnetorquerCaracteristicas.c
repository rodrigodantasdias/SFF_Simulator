#include "magnetorquerCaracteristicas.h"
#include "rtwtypes.h"
#include "magnetorquerCaracteristicas_private.h"
#include "magnetorquerCaracteristicas_capi.h"
#include <string.h>
static RegMdlInfo rtMdlInfo_magnetorquerCaracteristicas [ 43 ] = { {
"entaxp45pma" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "ffkaz3jm11" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "mdb2zxnvbc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "bzyjmabseq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "dzlznfc0z5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "dojuiak3rm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "elachqatwo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "pcl5pvi4hn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "eano4ucr4p" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "a4dnzzx0mc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "gvtbwdg3qj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "g1vvliovdx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "lfb3qpjdoq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "knlxdqzha3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "nxuhjfxni5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "bgaq4fu3pp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "bhn1tyfdih" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "lwhnm3fa1l" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "ocf4ffprop" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "gpidghel0r" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "fxs2dixnjs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "n2x5puuvrd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "f3upvb2lgk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "fayriitpmb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "magnetorquerCaracteristicas" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "a3fbm4upq2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "psjb02rbeph" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "oh02qsfq5k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "kd0us3tuxx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , {
"mr_magnetorquerCaracteristicas_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , {
"mr_magnetorquerCaracteristicas_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , {
"mr_magnetorquerCaracteristicas_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , {
"mr_magnetorquerCaracteristicas_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , {
"mr_magnetorquerCaracteristicas_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , {
"mr_magnetorquerCaracteristicas_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , {
"mr_magnetorquerCaracteristicas_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , {
"mr_magnetorquerCaracteristicas_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , {
"mr_magnetorquerCaracteristicas_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , {
"mr_magnetorquerCaracteristicas_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "mr_magnetorquerCaracteristicas_SetDWork"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "mr_magnetorquerCaracteristicas_GetDWork"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"magnetorquerCaracteristicas" } , { "magnetorquerCaracteristicas.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"magnetorquerCaracteristicas.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void
* ) "magnetorquerCaracteristicas" } } ; psjb02rbeph psjb02rbep = { 0.0 } ;
void fxs2dixnjs ( lfb3qpjdoq * localDW , pcl5pvi4hn * localX ) { localDW ->
i1tixxcmjx = true ; localX -> bwh55fyyay = psjb02rbep . P_2 ; } void
gpidghel0r ( lfb3qpjdoq * localDW ) { localDW -> i1tixxcmjx = true ; } void
f3upvb2lgk ( kd0us3tuxx * const nyf0u4k1q4 , lfb3qpjdoq * localDW ,
dojuiak3rm * localXdis ) { ssSetBlockStateForSolverChangedAtMajorStep (
nyf0u4k1q4 -> _mdlRefSfcnS ) ; ( void ) memset ( & ( localXdis -> bwh55fyyay
) , 1 , 1 * sizeof ( boolean_T ) ) ; localDW -> fs3dsh3w5g = - 1 ; } void
magnetorquerCaracteristicas ( kd0us3tuxx * const nyf0u4k1q4 , const real_T *
ebsmjwgzwm , real_T * lxk51vn15i , knlxdqzha3 * localB , lfb3qpjdoq * localDW
, pcl5pvi4hn * localX , dojuiak3rm * localXdis ) { real_T u0 ; int32_T i ;
int8_T rtAction ; int8_T rtPrevAction ; u0 = * ebsmjwgzwm ; if ( u0 >
rtP_sat_torquerod ) { localB -> pzmsl3g0xe = rtP_sat_torquerod ; } else if (
u0 < - rtP_sat_torquerod ) { localB -> pzmsl3g0xe = - rtP_sat_torquerod ; }
else { localB -> pzmsl3g0xe = u0 ; } if ( rtmIsMajorTimeStep ( nyf0u4k1q4 ) )
{ if ( localDW -> i1tixxcmjx ) { for ( i = 0 ; i < 10 ; i ++ ) { localDW ->
otxc30ujlv [ i ] = localB -> pzmsl3g0xe ; } } localB -> palc2qme1c = localDW
-> otxc30ujlv [ 0 ] ; } rtPrevAction = localDW -> fs3dsh3w5g ; if (
ssIsModeUpdateTimeStep ( nyf0u4k1q4 -> _mdlRefSfcnS ) ) { rtAction = ( int8_T
) ! ( rtP_TpulseTorq != 0.0 ) ; localDW -> fs3dsh3w5g = rtAction ; } else {
rtAction = localDW -> fs3dsh3w5g ; } if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( nyf0u4k1q4 -> _mdlRefSfcnS ) ;
if ( rtmGetTaskTime ( nyf0u4k1q4 , 0 ) == rtmGetTStart ( nyf0u4k1q4 ) ) { (
void ) memset ( & ( localXdis -> bwh55fyyay ) , 1 , 1 * sizeof ( boolean_T )
) ; } if ( rtPrevAction == 0 ) { ( void ) memset ( & ( localXdis ->
bwh55fyyay ) , 1 , 1 * sizeof ( boolean_T ) ) ; } } if ( rtAction == 0 ) { if
( rtPrevAction != 0 ) { if ( rtmGetTaskTime ( nyf0u4k1q4 , 0 ) !=
rtmGetTStart ( nyf0u4k1q4 ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
nyf0u4k1q4 -> _mdlRefSfcnS ) ; } ( void ) memset ( & ( localXdis ->
bwh55fyyay ) , 0 , 1 * sizeof ( boolean_T ) ) ; } localB -> kuwgd3guea = (
localB -> palc2qme1c - localX -> bwh55fyyay ) / rtP_TpulseTorq ; * lxk51vn15i
= localX -> bwh55fyyay ; if ( ssIsModeUpdateTimeStep ( nyf0u4k1q4 ->
_mdlRefSfcnS ) ) { srUpdateBC ( localDW -> la5fsxv1hk ) ; } } else { if (
rtmIsMajorTimeStep ( nyf0u4k1q4 ) ) { * lxk51vn15i = localB -> palc2qme1c ; }
if ( ssIsModeUpdateTimeStep ( nyf0u4k1q4 -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> pzwzs1nmt5 ) ; } } } void ocf4ffprop ( kd0us3tuxx * const
nyf0u4k1q4 , knlxdqzha3 * localB , lfb3qpjdoq * localDW ) { int32_T idxDelay
; if ( rtmIsMajorTimeStep ( nyf0u4k1q4 ) ) { if ( memcmp ( nyf0u4k1q4 ->
nonContDerivSignal [ 0 ] . pCurrVal , nyf0u4k1q4 -> nonContDerivSignal [ 0 ]
. pPrevVal , nyf0u4k1q4 -> nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) {
( void ) memcpy ( nyf0u4k1q4 -> nonContDerivSignal [ 0 ] . pPrevVal ,
nyf0u4k1q4 -> nonContDerivSignal [ 0 ] . pCurrVal , nyf0u4k1q4 ->
nonContDerivSignal [ 0 ] . sizeInBytes ) ; ssSetSolverNeedsResetWithReason (
nyf0u4k1q4 -> _mdlRefSfcnS , 32 ) ; } } if ( rtmIsMajorTimeStep ( nyf0u4k1q4
) ) { localDW -> i1tixxcmjx = false ; for ( idxDelay = 0 ; idxDelay < 9 ;
idxDelay ++ ) { localDW -> otxc30ujlv [ ( uint32_T ) idxDelay ] = localDW ->
otxc30ujlv [ ( uint32_T ) idxDelay + 1U ] ; } localDW -> otxc30ujlv [ 9 ] =
localB -> pzmsl3g0xe ; } } void lwhnm3fa1l ( knlxdqzha3 * localB , lfb3qpjdoq
* localDW , elachqatwo * localXdot ) { localXdot -> bwh55fyyay = 0.0 ; if (
localDW -> fs3dsh3w5g == 0 ) { localXdot -> bwh55fyyay = localB -> kuwgd3guea
; } } void bgaq4fu3pp ( kd0us3tuxx * const nyf0u4k1q4 ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( nyf0u4k1q4 ->
_mdlRefSfcnS , "magnetorquerCaracteristicas" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void n2x5puuvrd (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , kd0us3tuxx *
const nyf0u4k1q4 , knlxdqzha3 * localB , lfb3qpjdoq * localDW , pcl5pvi4hn *
localX , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { ( void ) memset ( ( void * ) nyf0u4k1q4 , 0 , sizeof (
kd0us3tuxx ) ) ; nyf0u4k1q4 -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0
; nyf0u4k1q4 -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; nyf0u4k1q4 ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( nyf0u4k1q4 -> _mdlRefSfcnS ,
"magnetorquerCaracteristicas" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ;
} { localB -> pzmsl3g0xe = 0.0 ; localB -> palc2qme1c = 0.0 ; localB ->
kuwgd3guea = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof (
lfb3qpjdoq ) ) ; { int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) { localDW ->
otxc30ujlv [ i ] = 0.0 ; } }
magnetorquerCaracteristicas_InitializeDataMapInfo ( nyf0u4k1q4 , localDW ,
localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( nyf0u4k1q4 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
nyf0u4k1q4 -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( nyf0u4k1q4 -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } nyf0u4k1q4 -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) nyf0u4k1q4 -> NonContDerivMemory . mr_nonContSig0 ; nyf0u4k1q4 ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
nyf0u4k1q4 -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> palc2qme1c ) ; ; if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 0 ] [ 0 ] . currVal = ( char_T * ) & localB ->
palc2qme1c ; mr_nonContOutputArray [ 0 ] [ 0 ] . next = ( NULL ) ; } } void
mr_magnetorquerCaracteristicas_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_magnetorquerCaracteristicas , 43 ) ; * retVal = 1 ; } static void
mr_magnetorquerCaracteristicas_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_magnetorquerCaracteristicas_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_magnetorquerCaracteristicas_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_magnetorquerCaracteristicas_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy (
( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_magnetorquerCaracteristicas_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_magnetorquerCaracteristicas_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_magnetorquerCaracteristicas_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_magnetorquerCaracteristicas_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_magnetorquerCaracteristicas_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_magnetorquerCaracteristicas_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_magnetorquerCaracteristicas_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_magnetorquerCaracteristicas_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_magnetorquerCaracteristicas_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_magnetorquerCaracteristicas_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_magnetorquerCaracteristicas_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_magnetorquerCaracteristicas_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_magnetorquerCaracteristicas_GetDWork
( const entaxp45pma * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ]
= { "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_magnetorquerCaracteristicas_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static
const char_T * rtdwDataFieldNames [ 5 ] = { "mdlrefDW->rtdw.otxc30ujlv" ,
"mdlrefDW->rtdw.fs3dsh3w5g" , "mdlrefDW->rtdw.pzwzs1nmt5" ,
"mdlrefDW->rtdw.la5fsxv1hk" , "mdlrefDW->rtdw.i1tixxcmjx" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 5 , rtdwDataFieldNames ) ;
mr_magnetorquerCaracteristicas_cacheDataAsMxArray ( rtdwData , 0 , 0 , (
const void * ) & ( mdlrefDW -> rtdw . otxc30ujlv ) , sizeof ( mdlrefDW ->
rtdw . otxc30ujlv ) ) ; mr_magnetorquerCaracteristicas_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . fs3dsh3w5g ) ,
sizeof ( mdlrefDW -> rtdw . fs3dsh3w5g ) ) ;
mr_magnetorquerCaracteristicas_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const void * ) & ( mdlrefDW -> rtdw . pzwzs1nmt5 ) , sizeof ( mdlrefDW ->
rtdw . pzwzs1nmt5 ) ) ; mr_magnetorquerCaracteristicas_cacheDataAsMxArray (
rtdwData , 0 , 3 , ( const void * ) & ( mdlrefDW -> rtdw . la5fsxv1hk ) ,
sizeof ( mdlrefDW -> rtdw . la5fsxv1hk ) ) ;
mr_magnetorquerCaracteristicas_cacheDataAsMxArray ( rtdwData , 0 , 4 , (
const void * ) & ( mdlrefDW -> rtdw . i1tixxcmjx ) , sizeof ( mdlrefDW ->
rtdw . i1tixxcmjx ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } (
void ) mdlrefDW ; return ssDW ; } void
mr_magnetorquerCaracteristicas_SetDWork ( entaxp45pma * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_magnetorquerCaracteristicas_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_magnetorquerCaracteristicas_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . otxc30ujlv ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW ->
rtdw . otxc30ujlv ) ) ; mr_magnetorquerCaracteristicas_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . fs3dsh3w5g ) , rtdwData , 0 , 1 , sizeof
( mdlrefDW -> rtdw . fs3dsh3w5g ) ) ;
mr_magnetorquerCaracteristicas_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . pzwzs1nmt5 ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW ->
rtdw . pzwzs1nmt5 ) ) ; mr_magnetorquerCaracteristicas_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . la5fsxv1hk ) , rtdwData , 0 , 3 , sizeof
( mdlrefDW -> rtdw . la5fsxv1hk ) ) ;
mr_magnetorquerCaracteristicas_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . i1tixxcmjx ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW ->
rtdw . i1tixxcmjx ) ) ; } } void
mr_magnetorquerCaracteristicas_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 614449035U , 3808918447U , 3787841310U ,
2375017645U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"magnetorquerCaracteristicas" , & chksum [ 0 ] ) ; } mxArray *
mr_magnetorquerCaracteristicas_GetSimStateDisallowedBlocks ( ) { return (
NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
