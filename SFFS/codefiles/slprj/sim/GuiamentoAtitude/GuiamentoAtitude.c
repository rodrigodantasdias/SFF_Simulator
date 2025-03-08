#include "GuiamentoAtitude.h"
#include "rtwtypes.h"
#include "GuiamentoAtitude_private.h"
#include "norm_ADV8jKvt.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include "GuiamentoAtitude_capi.h"
static RegMdlInfo rtMdlInfo_GuiamentoAtitude [ 41 ] = { { "ljgbgmm0igs" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "GuiamentoAtitude" } , {
"cngn0nercx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GuiamentoAtitude" } , { "niwkeghubt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "GuiamentoAtitude" } , { "kujx5pjyfu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GuiamentoAtitude" }
, { "pcqmcxa3be" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GuiamentoAtitude" } , { "ieb2a2il0d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "GuiamentoAtitude" } , { "pdou14vy2u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GuiamentoAtitude" }
, { "pqpwc0vrzi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GuiamentoAtitude" } , { "g2c5tt1gcx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "GuiamentoAtitude" } , { "ev4aqzgvj3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GuiamentoAtitude" }
, { "ffrokcbud1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GuiamentoAtitude" } , { "kxa5kenejk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "GuiamentoAtitude" } , { "cxzdzmsfga" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GuiamentoAtitude" }
, { "a0vwti53dy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GuiamentoAtitude" } , { "h4vv0eictx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "GuiamentoAtitude" } , { "absjvhvs1i" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GuiamentoAtitude" }
, { "m5u3ve5oa4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GuiamentoAtitude" } , { "dmf4dhpwtc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "GuiamentoAtitude" } , { "mxbe4jbwo5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GuiamentoAtitude" }
, { "i3xwcayboo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GuiamentoAtitude" } , { "ndn1cpexdm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "GuiamentoAtitude" } , { "icjlmm5wg4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GuiamentoAtitude" }
, { "GuiamentoAtitude" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL )
} , { "endoy3z3x4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GuiamentoAtitude" } , { "ghbcvejhpsz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "GuiamentoAtitude" } , { "puki4i2khe" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GuiamentoAtitude" }
, { "czus43m2u0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GuiamentoAtitude" } , { "mr_GuiamentoAtitude_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GuiamentoAtitude" } , {
"mr_GuiamentoAtitude_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GuiamentoAtitude" } , {
"mr_GuiamentoAtitude_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GuiamentoAtitude" } , {
"mr_GuiamentoAtitude_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GuiamentoAtitude" } , {
"mr_GuiamentoAtitude_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GuiamentoAtitude" } , {
"mr_GuiamentoAtitude_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "GuiamentoAtitude" } , {
"mr_GuiamentoAtitude_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "GuiamentoAtitude" } , {
"mr_GuiamentoAtitude_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "GuiamentoAtitude" } , {
"mr_GuiamentoAtitude_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "GuiamentoAtitude" } , {
"mr_GuiamentoAtitude_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "GuiamentoAtitude" } , { "mr_GuiamentoAtitude_SetDWork"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GuiamentoAtitude" } , {
"mr_GuiamentoAtitude_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "GuiamentoAtitude" } , { "GuiamentoAtitude.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "GuiamentoAtitude.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "GuiamentoAtitude" } } ;
ghbcvejhpsz ghbcvejhps = { 0.0 } ; void mxbe4jbwo5 ( real_T * ptmhoidr3i ) {
* ptmhoidr3i = ghbcvejhps . P_1 ; } void dmf4dhpwtc ( real_T * ptmhoidr3i ) {
* ptmhoidr3i = ghbcvejhps . P_1 ; } void ndn1cpexdm ( real_T * ptmhoidr3i ) {
* ptmhoidr3i = ghbcvejhps . P_1 ; } void GuiamentoAtitude ( const real_T
iml32izsgx [ 9 ] , const real_T * okt1znrs3o , const real_T * pts32kjaxp ,
const real_T * cdlhzhavyd , const real_T * crtnqnokdt , const real_T
nh3pwphn31 [ 3 ] , real_T * mvog0ntr2d , real_T * egr3c4maaa , real_T *
ptmhoidr3i ) { __m128d tmp ; real_T Fx_tmp_i [ 9 ] ; real_T Fx [ 3 ] ; real_T
SNl [ 3 ] ; real_T SO [ 3 ] ; real_T r0_vec_I [ 3 ] ; real_T Fx_tmp ; real_T
Fx_tmp_e ; real_T Fx_tmp_p ; real_T Fx_tmp_tmp ; real_T Fx_tmp_tmp_e ; real_T
Fx_tmp_tmp_i ; real_T Fx_tmp_tmp_p ; real_T s ; real_T s_tmp ; int32_T i ; Fx
[ 0 ] = * okt1znrs3o ; for ( i = 0 ; i < 3 ; i ++ ) { SO [ i ] = - nh3pwphn31
[ i ] ; s = iml32izsgx [ i * 3 ] * Fx [ 0 ] ; s += iml32izsgx [ i * 3 + 1 ] *
0.0 ; r0_vec_I [ i ] = iml32izsgx [ i * 3 + 2 ] * 0.0 + s ; } s =
norm_ADV8jKvt ( r0_vec_I ) ; s_tmp = muDoubleScalarSin ( * pts32kjaxp ) ;
Fx_tmp_tmp = muDoubleScalarCos ( * crtnqnokdt ) ; Fx_tmp_tmp_p =
muDoubleScalarCos ( * pts32kjaxp ) ; Fx_tmp = muDoubleScalarSin ( *
crtnqnokdt ) ; Fx_tmp_p = muDoubleScalarCos ( * cdlhzhavyd ) ; Fx_tmp_e =
muDoubleScalarSin ( * cdlhzhavyd ) ; Fx_tmp_tmp_i = Fx_tmp_tmp_p * Fx_tmp_tmp
; Fx_tmp_i [ 0 ] = Fx_tmp_tmp_i - s_tmp * Fx_tmp * Fx_tmp_p ; Fx_tmp_tmp_e =
s_tmp * Fx_tmp_tmp ; Fx_tmp_i [ 1 ] = Fx_tmp_tmp_p * Fx_tmp * Fx_tmp_p +
Fx_tmp_tmp_e ; Fx_tmp_i [ 2 ] = Fx_tmp * Fx_tmp_e ; Fx_tmp_i [ 3 ] = -
Fx_tmp_tmp_p * Fx_tmp - Fx_tmp_tmp_e * Fx_tmp_p ; Fx_tmp_i [ 4 ] =
Fx_tmp_tmp_i * Fx_tmp_p + - s_tmp * Fx_tmp ; Fx_tmp_i [ 5 ] = Fx_tmp_tmp *
Fx_tmp_e ; Fx_tmp_i [ 6 ] = s_tmp * Fx_tmp_e ; Fx_tmp_i [ 7 ] = -
Fx_tmp_tmp_p * Fx_tmp_e ; Fx_tmp_i [ 8 ] = Fx_tmp_p ; for ( i = 0 ; i <= 0 ;
i += 2 ) { tmp = _mm_add_pd ( _mm_mul_pd ( _mm_div_pd ( _mm_loadu_pd ( &
r0_vec_I [ i ] ) , _mm_set1_pd ( s ) ) , _mm_set1_pd ( rtP_Re ) ) ,
_mm_loadu_pd ( & SO [ i ] ) ) ; _mm_storeu_pd ( & SNl [ i ] , tmp ) ; tmp =
_mm_set1_pd ( 6.123233995736766E-17 ) ; tmp = _mm_add_pd ( _mm_add_pd (
_mm_mul_pd ( _mm_loadu_pd ( & Fx_tmp_i [ i ] ) , tmp ) , _mm_loadu_pd ( &
Fx_tmp_i [ i + 3 ] ) ) , _mm_mul_pd ( _mm_loadu_pd ( & Fx_tmp_i [ i + 6 ] ) ,
tmp ) ) ; _mm_storeu_pd ( & Fx [ i ] , tmp ) ; } for ( i = 2 ; i < 3 ; i ++ )
{ SNl [ i ] = r0_vec_I [ i ] / s * rtP_Re + SO [ i ] ; Fx [ i ] = ( Fx_tmp_i
[ i ] * 6.123233995736766E-17 + Fx_tmp_i [ i + 3 ] ) + Fx_tmp_i [ i + 6 ] *
6.123233995736766E-17 ; } tmp = _mm_sub_pd ( _mm_mul_pd ( _mm_set_pd ( SNl [
0 ] , SO [ 1 ] ) , _mm_set_pd ( SO [ 2 ] , SNl [ 2 ] ) ) , _mm_mul_pd (
_mm_set_pd ( SO [ 0 ] , SNl [ 1 ] ) , _mm_set_pd ( SNl [ 2 ] , SO [ 2 ] ) ) )
; _mm_storeu_pd ( & r0_vec_I [ 0 ] , tmp ) ; s_tmp = SO [ 0 ] * SNl [ 1 ] -
SNl [ 0 ] * SO [ 1 ] ; r0_vec_I [ 2 ] = s_tmp ; s = norm_ADV8jKvt ( r0_vec_I
) ; _mm_storeu_pd ( & r0_vec_I [ 0 ] , _mm_div_pd ( tmp , _mm_set1_pd ( s ) )
) ; r0_vec_I [ 2 ] = s_tmp / s ; s = - ( ( ( Fx [ 0 ] * r0_vec_I [ 0 ] + Fx [
1 ] * r0_vec_I [ 1 ] ) + Fx [ 2 ] * r0_vec_I [ 2 ] ) / ( norm_ADV8jKvt ( Fx )
* norm_ADV8jKvt ( r0_vec_I ) ) ) ; if ( s >= 1.0 ) { s = 1.0 ; } else if ( s
<= - 1.0 ) { s = - 1.0 ; } * mvog0ntr2d = s ; * mvog0ntr2d =
muDoubleScalarAcos ( * mvog0ntr2d ) ; * egr3c4maaa = ( ( SNl [ 0 ] * SO [ 0 ]
+ SNl [ 1 ] * SO [ 1 ] ) + SNl [ 2 ] * SO [ 2 ] ) / ( norm_ADV8jKvt ( SNl ) *
norm_ADV8jKvt ( SO ) ) ; * egr3c4maaa = muDoubleScalarAcos ( * egr3c4maaa ) ;
* ptmhoidr3i = ghbcvejhps . P_1 ; } void absjvhvs1i ( czus43m2u0 * const
g3kp0yjyvk ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( g3kp0yjyvk -> _mdlRefSfcnS , "GuiamentoAtitude" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void i3xwcayboo (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , czus43m2u0 * const g3kp0yjyvk
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
( void ) memset ( ( void * ) g3kp0yjyvk , 0 , sizeof ( czus43m2u0 ) ) ;
g3kp0yjyvk -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; g3kp0yjyvk ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( g3kp0yjyvk -> _mdlRefSfcnS , "GuiamentoAtitude" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
GuiamentoAtitude_InitializeDataMapInfo ( g3kp0yjyvk , sysRanPtr , contextTid
) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( g3kp0yjyvk ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( g3kp0yjyvk -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( g3kp0yjyvk ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_GuiamentoAtitude_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_GuiamentoAtitude , 41 ) ; * retVal = 1 ;
} static void mr_GuiamentoAtitude_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_GuiamentoAtitude_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_GuiamentoAtitude_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_GuiamentoAtitude_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_GuiamentoAtitude_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_GuiamentoAtitude_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_GuiamentoAtitude_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_GuiamentoAtitude_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_GuiamentoAtitude_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_GuiamentoAtitude_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_GuiamentoAtitude_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_GuiamentoAtitude_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_GuiamentoAtitude_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_GuiamentoAtitude_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_GuiamentoAtitude_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_GuiamentoAtitude_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_GuiamentoAtitude_GetDWork ( const
ljgbgmm0igs * mdlrefDW ) { ( void ) mdlrefDW ; return ( NULL ) ; } void
mr_GuiamentoAtitude_SetDWork ( ljgbgmm0igs * mdlrefDW , const mxArray * ssDW
) { ( void ) ssDW ; ( void ) mdlrefDW ; } void
mr_GuiamentoAtitude_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 600979273U , 298156947U , 4163614501U , 237460385U
, } ; slmrModelRefRegisterSimStateChecksum ( S , "GuiamentoAtitude" , &
chksum [ 0 ] ) ; } mxArray * mr_GuiamentoAtitude_GetSimStateDisallowedBlocks
( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
