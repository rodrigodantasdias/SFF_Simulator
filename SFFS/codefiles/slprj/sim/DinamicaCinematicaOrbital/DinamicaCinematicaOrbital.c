#include "DinamicaCinematicaOrbital.h"
#include "rtwtypes.h"
#include "DinamicaCinematicaOrbital_private.h"
#include "mwmathutil.h"
#include "densAtm_oaZmYvmy.h"
#include <emmintrin.h>
#include "norm_kjUYsQLi.h"
#include "DinamicaCinematicaOrbital_capi.h"
#include "zero_crossing_types.h"
#include <string.h>
static RegMdlInfo rtMdlInfo_DinamicaCinematicaOrbital [ 43 ] = { {
"okb1gcgf0a4" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "himcgsuj1h" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "ovbrmbiuf3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "edjo1mvnai" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "j2fuwjohrz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "npno0gt4jm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "aygzkytbqu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "luimruxjly" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "heovcstiz3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "lzvps2jo2x" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "excd2hsglr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "la4uxtuval" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "p1yqgfuya1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "h1dz0q0gf2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "pszywcwbsj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "f1esxkgit3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "pprdl2jbt5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "hzdvvsrkxw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "n0jusqxqm2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "mtaykns3n2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "axbn2ts3ae" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "cclmzcapyf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "hqfpbwngdg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "mxgz31z1af" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "DinamicaCinematicaOrbital" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "dsqqbq5pdq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "ocg4r1mb5yw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "ecqsnbn513" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , { "fqgdhjwhge" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaOrbital" } , {
"mr_DinamicaCinematicaOrbital_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DinamicaCinematicaOrbital"
} , { "mr_DinamicaCinematicaOrbital_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DinamicaCinematicaOrbital"
} , { "mr_DinamicaCinematicaOrbital_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DinamicaCinematicaOrbital"
} , { "mr_DinamicaCinematicaOrbital_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DinamicaCinematicaOrbital"
} , { "mr_DinamicaCinematicaOrbital_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DinamicaCinematicaOrbital"
} , { "mr_DinamicaCinematicaOrbital_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DinamicaCinematicaOrbital"
} , { "mr_DinamicaCinematicaOrbital_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DinamicaCinematicaOrbital"
} , { "mr_DinamicaCinematicaOrbital_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DinamicaCinematicaOrbital"
} , { "mr_DinamicaCinematicaOrbital_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DinamicaCinematicaOrbital"
} , { "mr_DinamicaCinematicaOrbital_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DinamicaCinematicaOrbital"
} , { "mr_DinamicaCinematicaOrbital_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DinamicaCinematicaOrbital" } , {
"mr_DinamicaCinematicaOrbital_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "DinamicaCinematicaOrbital" } , {
"DinamicaCinematicaOrbital.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL )
} , { "DinamicaCinematicaOrbital.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , (
void * ) "DinamicaCinematicaOrbital" } } ; ocg4r1mb5yw ocg4r1mb5y = { 0.5 ,
0.5 , 0.0 , 0.0 , 0.0 , 0.0 } ; static void m1ugtuws4p ( real_T * lambda ) ;
static void m1ugtuws4p ( real_T * lambda ) { real_T q ; real_T x ; boolean_T
positiveInput ; boolean_T rEQ0 ; positiveInput = ( * lambda > 0.0 ) ; x = *
lambda ; if ( muDoubleScalarIsNaN ( * lambda ) || muDoubleScalarIsInf ( *
lambda ) ) { * lambda = ( rtNaN ) ; } else if ( * lambda == 0.0 ) { * lambda
= 0.0 ; } else { * lambda = muDoubleScalarRem ( * lambda , 6.2831853071795862
) ; rEQ0 = ( * lambda == 0.0 ) ; if ( ! rEQ0 ) { q = muDoubleScalarAbs ( x /
6.2831853071795862 ) ; rEQ0 = ! ( muDoubleScalarAbs ( q - muDoubleScalarFloor
( q + 0.5 ) ) > 2.2204460492503131E-16 * q ) ; } if ( rEQ0 ) { * lambda = 0.0
; } else if ( x < 0.0 ) { * lambda += 6.2831853071795862 ; } } if ( ( *
lambda == 0.0 ) && positiveInput ) { * lambda = 6.2831853071795862 ; } } void
axbn2ts3ae ( fqgdhjwhge * const ev2oqvq0xx , real_T * lcfpe54frx , real_T *
be3q2smovi , real_T * otiofmbm4k , real_T * j0cfgt43jq , real_T * fwmagcczlm
, real_T * hrflowfgj1 , real_T * nac5nrmb11 , real_T * bnbpi3m5zy ,
h1dz0q0gf2 * localB , p1yqgfuya1 * localDW , luimruxjly * localX ) {
boolean_T tmp ; * nac5nrmb11 = ocg4r1mb5y . P_36 ; localDW -> gaqihpfgvh = 1
; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { localX -> m2ckqb4qdo = 0.0 ; tmp
= slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> gaqihpfgvh = ! tmp ; } else {
localDW -> gaqihpfgvh = 1 ; } localX -> cjolpg5ogt = 0.43633231299858238 ; }
localDW -> eeb05vtv1t = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> eeb05vtv1t = ! tmp ; } else {
localDW -> eeb05vtv1t = 1 ; } localX -> p432rqp4kj = 0.0 ; } localDW ->
oe31xkoymz = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> oe31xkoymz = ! tmp ; } else {
localDW -> oe31xkoymz = 1 ; } localX -> pxxhuzxdhx = 1.70518667919846 ; }
localDW -> e4an5sv5r2 = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> e4an5sv5r2 = ! tmp ; } else {
localDW -> e4an5sv5r2 = 1 ; } localX -> cwrlfd5taf = 0.0 ; } localDW ->
bof552yuuq = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> bof552yuuq = ! tmp ; } else {
localDW -> bof552yuuq = 1 ; } localX -> doj5adsbev = 0.0 ; } localDW ->
lfjiab3rx0 = ocg4r1mb5y . P_34 ; localDW -> amkx5itglp = ocg4r1mb5y . P_35 ;
localDW -> f0vx1utodn = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> f0vx1utodn = ! tmp ; } else {
localDW -> f0vx1utodn = 1 ; } localX -> dgdb31szew = 0.0 ; } localDW ->
ibqx0tnxj5 = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> ibqx0tnxj5 = ! tmp ; } else {
localDW -> ibqx0tnxj5 = 1 ; } localX -> poae3lai5p = 0.0 ; } localDW ->
g4u5vzuzqr = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> g4u5vzuzqr = ! tmp ; } else {
localDW -> g4u5vzuzqr = 1 ; } localX -> ljdhe12bh3 = 0.0 ; } localDW ->
gdxl020oo3 = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> gdxl020oo3 = ! tmp ; } else {
localDW -> gdxl020oo3 = 1 ; } localX -> lks1v1umh4 = 1000.0 ; } localDW ->
ed45uvn34h = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> ed45uvn34h = ! tmp ; } else {
localDW -> ed45uvn34h = 1 ; } localX -> fhbckfju34 = 0.0 ; } * lcfpe54frx =
rtP_x0_ini ; localDW -> lnstazd0oc = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx
) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> lnstazd0oc = ! tmp ; } else {
localDW -> lnstazd0oc = 1 ; } localX -> dx03sczucd = 0.0 ; } localDW ->
cofdlphuyb = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> cofdlphuyb = ! tmp ; } else {
localDW -> cofdlphuyb = 1 ; } localX -> pekfmaxvjy = - 2.2139949185626997 ; }
localDW -> iwrz5goxlr = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> iwrz5goxlr = ! tmp ; } else {
localDW -> iwrz5goxlr = 1 ; } localX -> ntlqdkmwfj = 700.0 ; } localDW ->
jjbquufnup = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> jjbquufnup = ! tmp ; } else {
localDW -> jjbquufnup = 1 ; } localX -> geuo1q43mm = 0.0 ; } * otiofmbm4k =
rtP_y0_ini ; localDW -> gythfnrlpj = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx
) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> gythfnrlpj = ! tmp ; } else {
localDW -> gythfnrlpj = 1 ; } localX -> dpw155co0h = 0.0 ; } localDW ->
hullq5n03m = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> hullq5n03m = ! tmp ; } else {
localDW -> hullq5n03m = 1 ; } localX -> njak3lbjwg = 0.0 ; } localDW ->
cucihappq5 = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> cucihappq5 = ! tmp ; } else {
localDW -> cucihappq5 = 1 ; } localX -> f5d1n2ym24 = 2000.0 ; } localDW ->
jqogfe4qpa = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> jqogfe4qpa = ! tmp ; } else {
localDW -> jqogfe4qpa = 1 ; } } * fwmagcczlm = rtP_z0_ini ; * be3q2smovi =
rtP_x0_dot_ini ; * j0cfgt43jq = rtP_y0_dot_ini ; * hrflowfgj1 =
rtP_z0_dot_ini ; * bnbpi3m5zy = localB -> c2iupr0jlx ; } void mtaykns3n2 (
fqgdhjwhge * const ev2oqvq0xx , real_T * nac5nrmb11 , p1yqgfuya1 * localDW ,
luimruxjly * localX ) { boolean_T tmp ; * nac5nrmb11 = ocg4r1mb5y . P_36 ;
localDW -> gaqihpfgvh = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { localX
-> m2ckqb4qdo = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) {
tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( ev2oqvq0xx -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW
-> gaqihpfgvh = ! tmp ; } else { localDW -> gaqihpfgvh = 1 ; } localX ->
cjolpg5ogt = 0.43633231299858238 ; } localDW -> eeb05vtv1t = 1 ; if (
rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( ev2oqvq0xx -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW
-> eeb05vtv1t = ! tmp ; } else { localDW -> eeb05vtv1t = 1 ; } localX ->
p432rqp4kj = 0.0 ; } localDW -> oe31xkoymz = 1 ; if ( rtmIsFirstInitCond (
ev2oqvq0xx ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> oe31xkoymz = ! tmp ; } else {
localDW -> oe31xkoymz = 1 ; } localX -> pxxhuzxdhx = 1.70518667919846 ; }
localDW -> e4an5sv5r2 = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> e4an5sv5r2 = ! tmp ; } else {
localDW -> e4an5sv5r2 = 1 ; } localX -> cwrlfd5taf = 0.0 ; } localDW ->
bof552yuuq = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> bof552yuuq = ! tmp ; } else {
localDW -> bof552yuuq = 1 ; } localX -> doj5adsbev = 0.0 ; } localDW ->
lfjiab3rx0 = ocg4r1mb5y . P_34 ; localDW -> amkx5itglp = ocg4r1mb5y . P_35 ;
localDW -> f0vx1utodn = 1 ; if ( rtmIsFirstInitCond ( ev2oqvq0xx ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ev2oqvq0xx -> _mdlRefSfcnS ) ) ; localDW -> f0vx1utodn = ! tmp ; } else {
localDW -> f0vx1utodn = 1 ; } } } void hqfpbwngdg ( fqgdhjwhge * const
ev2oqvq0xx , real_T * nac5nrmb11 , h1dz0q0gf2 * localB , p1yqgfuya1 * localDW
, npno0gt4jm * localXdis ) { * nac5nrmb11 = ocg4r1mb5y . P_36 ; localB ->
jr4y40vd2o = rtP_i0_ini ; localB -> bzerlh0yzj = rtP_ohm0_ini ; localB ->
c2iupr0jlx = ocg4r1mb5y . P_37 ; localB -> kjy3mi420t = rtP_x0_dot_ini ;
localB -> d3gwc2yjdn = rtP_y0_ini ; localB -> mwt2jewul3 = rtP_z0_dot_ini ;
ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ; (
void ) memset ( & ( localXdis -> dgdb31szew ) , 1 , 2 * sizeof ( boolean_T )
) ; ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS )
; ( void ) memset ( & ( localXdis -> ljdhe12bh3 ) , 1 , 2 * sizeof (
boolean_T ) ) ; localDW -> f0m5ymxxjr = - 1 ; localB -> oerzxsui2p = rtP_x0_i
; localB -> d3m211gq4l = rtP_x0_dot_i ;
ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ; (
void ) memset ( & ( localXdis -> fhbckfju34 ) , 1 , 2 * sizeof ( boolean_T )
) ; ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS )
; ( void ) memset ( & ( localXdis -> pekfmaxvjy ) , 1 , 2 * sizeof (
boolean_T ) ) ; localDW -> clhrm0hulb = - 1 ; localB -> gsqcu5n5i5 = rtP_y0_i
; localB -> lzlkjx0viw = rtP_y0_dot_i ;
ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ; (
void ) memset ( & ( localXdis -> geuo1q43mm ) , 1 , 2 * sizeof ( boolean_T )
) ; ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS )
; ( void ) memset ( & ( localXdis -> njak3lbjwg ) , 1 , 2 * sizeof (
boolean_T ) ) ; localDW -> k2mpnxum4b = - 1 ; localB -> l2s1ycq251 = rtP_z0_i
; localB -> pjlu0cu41m = rtP_z0_dot_i ; } void DinamicaCinematicaOrbital (
fqgdhjwhge * const ev2oqvq0xx , const real_T * adk01p22fm , const real_T *
dz0bciprj0 , const real_T * lo0ui3luhn , const boolean_T * k1ocaxd5ig ,
real_T * lcfpe54frx , real_T * be3q2smovi , real_T * otiofmbm4k , real_T *
j0cfgt43jq , real_T * fwmagcczlm , real_T * hrflowfgj1 , real_T * mio42ppuex
, real_T * m5uepniu01 , real_T * nac5nrmb11 , real_T * p4fbia00jk , real_T *
ksygknmexr , real_T * bnbpi3m5zy , real_T * dyqrydwlzv , real_T fgvekl5jd2 [
9 ] , real_T fwkyynfl3z [ 3 ] , real_T * hf3otuiqp0 , real_T * e1uobkrlsq ,
real_T * dzncmuxjjw , h1dz0q0gf2 * localB , p1yqgfuya1 * localDW , luimruxjly
* localX , lzvps2jo2x * localZCE , npno0gt4jm * localXdis ) { __m128d tmp ;
__m128d tmp_e ; __m128d tmp_i ; __m128d tmp_m ; real_T N_vec [ 3 ] ; real_T
jcpddoykas [ 3 ] ; real_T mibdohkstk [ 3 ] ; real_T rot [ 3 ] ; real_T tmp_p
[ 2 ] ; real_T A2 ; real_T Ft_dot_tmp ; real_T Vra0 ; real_T Vra1 ; real_T
achogvbf2x_tmp_tmp ; real_T b0 ; real_T b0_tmp ; real_T b1 ; real_T b_c_tmp ;
real_T dn4xy0tmd4 ; real_T dzmzvhvq0v ; real_T e_vec_idx_0 ; real_T
e_vec_idx_1 ; real_T e_vec_idx_2 ; real_T f3teoopzo5_p ; real_T fwkyynfl3z_p
; real_T gdjhthavd5_idx_6_tmp ; real_T gdjhthavd5_tmp_tmp ; real_T
gdjhthavd5_tmp_tmp_e ; real_T gdjhthavd5_tmp_tmp_p ; real_T j2 ; real_T k1 ;
real_T k1_tmp ; real_T k1_tmp_p ; real_T k2 ; real_T k3 ; real_T k4 ; real_T
k4_tmp ; real_T k4_tmp_p ; real_T k5 ; real_T kt3axv0eoa_tmp_tmp ; real_T
kvvsss1q50 ; real_T mxvwiuuqzh ; real_T nqpr0gnmeo_tmp ; real_T oydgffphrv ;
int32_T i ; int8_T rtAction ; int8_T rtPrevAction ; boolean_T didZcEventOccur
; boolean_T fl14z2riem_p ; boolean_T o0ent5pow2_p ; if ( rtmIsMajorTimeStep (
ev2oqvq0xx ) ) { achogvbf2x_tmp_tmp = rtP_e0_ini * rtP_e0_ini ; mxvwiuuqzh =
( 1.0 - achogvbf2x_tmp_tmp ) * rtP_a0_ini ; localB -> achogvbf2x = mxvwiuuqzh
/ ( rtP_e0_ini * muDoubleScalarCos ( rtP_f0_ini ) + 1.0 ) ; localB ->
ffvugxnrmk = muDoubleScalarSqrt ( rtP_mi / mxvwiuuqzh ) * ( rtP_e0_ini *
muDoubleScalarSin ( rtP_f0_ini ) ) ; localB -> aiovwljhme = - (
achogvbf2x_tmp_tmp - 1.0 ) * rtP_mi * rtP_a0_ini ; localB -> aiovwljhme =
muDoubleScalarSqrt ( localB -> aiovwljhme ) ; localB -> cmflpre2ht =
rtP_omega0_ini + rtP_f0_ini ; } rtPrevAction = localDW -> f0m5ymxxjr ; if (
ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { if ( localDW ->
gaqihpfgvh != 0 ) { localX -> m2ckqb4qdo = localB -> achogvbf2x ; } *
mio42ppuex = localX -> m2ckqb4qdo ; rtAction = ( int8_T ) ! * k1ocaxd5ig ;
localDW -> f0m5ymxxjr = rtAction ; } else { * mio42ppuex = localX ->
m2ckqb4qdo ; rtAction = localDW -> f0m5ymxxjr ; } if ( rtPrevAction !=
rtAction ) { ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx ->
_mdlRefSfcnS ) ; if ( rtmGetTaskTime ( ev2oqvq0xx , 0 ) == rtmGetTStart (
ev2oqvq0xx ) ) { ( void ) memset ( & ( localXdis -> dgdb31szew ) , 1 , 2 *
sizeof ( boolean_T ) ) ; ( void ) memset ( & ( localXdis -> ljdhe12bh3 ) , 1
, 2 * sizeof ( boolean_T ) ) ; } switch ( rtPrevAction ) { case 0 : ( void )
memset ( & ( localXdis -> dgdb31szew ) , 1 , 2 * sizeof ( boolean_T ) ) ;
break ; case 1 : ( void ) memset ( & ( localXdis -> ljdhe12bh3 ) , 1 , 2 *
sizeof ( boolean_T ) ) ; break ; default : break ; } } if ( rtAction == 0 ) {
if ( rtPrevAction != 0 ) { if ( rtmGetTaskTime ( ev2oqvq0xx , 0 ) !=
rtmGetTStart ( ev2oqvq0xx ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
ev2oqvq0xx -> _mdlRefSfcnS ) ; } ( void ) memset ( & ( localXdis ->
dgdb31szew ) , 0 , 2 * sizeof ( boolean_T ) ) ; } achogvbf2x_tmp_tmp =
rtmGetTaskTime ( ev2oqvq0xx , 0 ) ; fl14z2riem_p = ( achogvbf2x_tmp_tmp ==
rtP_t_man ) ; o0ent5pow2_p = ( achogvbf2x_tmp_tmp == rtP_t_man ) ; if (
rtmIsMajorTimeStep ( ev2oqvq0xx ) ) { localB -> kjy3mi420t = rtP_x0_dot_ini ;
} if ( ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) {
didZcEventOccur = ( ( ( localZCE -> p15omtqpq4 == POS_ZCSIG ) != ( int32_T )
o0ent5pow2_p ) && ( localZCE -> p15omtqpq4 != UNINITIALIZED_ZCSIG ) ) ;
localZCE -> p15omtqpq4 = o0ent5pow2_p ; if ( didZcEventOccur || ( localDW ->
ibqx0tnxj5 != 0 ) ) { didZcEventOccur = ( localX -> dgdb31szew != localB ->
kjy3mi420t ) ; localX -> dgdb31szew = localB -> kjy3mi420t ; if (
didZcEventOccur ) { ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx
-> _mdlRefSfcnS ) ; } } localB -> ewi45tmprq = localX -> dgdb31szew ; } else
{ localB -> ewi45tmprq = localX -> dgdb31szew ; } if ( achogvbf2x_tmp_tmp >=
rtP_t_man ) { f3teoopzo5_p = localB -> i54ohznwps ; } else { f3teoopzo5_p =
rtP_x0_ini ; } if ( ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) {
didZcEventOccur = ( ( ( localZCE -> e0mlha2jo0 == POS_ZCSIG ) != ( int32_T )
fl14z2riem_p ) && ( localZCE -> e0mlha2jo0 != UNINITIALIZED_ZCSIG ) ) ;
localZCE -> e0mlha2jo0 = fl14z2riem_p ; if ( didZcEventOccur || ( localDW ->
g4u5vzuzqr != 0 ) ) { didZcEventOccur = ( localX -> poae3lai5p !=
f3teoopzo5_p ) ; localX -> poae3lai5p = f3teoopzo5_p ; if ( didZcEventOccur )
{ ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ;
} } * lcfpe54frx = localX -> poae3lai5p ; } else { * lcfpe54frx = localX ->
poae3lai5p ; } * be3q2smovi = localB -> ewi45tmprq ; if (
ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> j1xdkh5ug2 ) ; } } else { if ( rtAction != rtPrevAction ) { if (
rtmGetTaskTime ( ev2oqvq0xx , 0 ) != rtmGetTStart ( ev2oqvq0xx ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ; }
( void ) memset ( & ( localXdis -> ljdhe12bh3 ) , 0 , 2 * sizeof ( boolean_T
) ) ; } if ( rtmIsMajorTimeStep ( ev2oqvq0xx ) ) { localB -> oerzxsui2p =
rtP_x0_i ; localB -> d3m211gq4l = rtP_x0_dot_i ; } if (
ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { if ( localDW ->
gdxl020oo3 != 0 ) { localX -> ljdhe12bh3 = localB -> d3m211gq4l ; } localB ->
gfq0z4wnz1 = localX -> ljdhe12bh3 ; if ( localDW -> ed45uvn34h != 0 ) {
localX -> lks1v1umh4 = localB -> oerzxsui2p ; } * lcfpe54frx = localX ->
lks1v1umh4 ; } else { localB -> gfq0z4wnz1 = localX -> ljdhe12bh3 ; *
lcfpe54frx = localX -> lks1v1umh4 ; } * be3q2smovi = localB -> gfq0z4wnz1 ;
if ( ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> ihsebl21i0 ) ; } } rtPrevAction = localDW -> clhrm0hulb ; if (
ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { rtAction = ( int8_T
) ! * k1ocaxd5ig ; localDW -> clhrm0hulb = rtAction ; } else { rtAction =
localDW -> clhrm0hulb ; } if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ;
if ( rtmGetTaskTime ( ev2oqvq0xx , 0 ) == rtmGetTStart ( ev2oqvq0xx ) ) { (
void ) memset ( & ( localXdis -> fhbckfju34 ) , 1 , 2 * sizeof ( boolean_T )
) ; ( void ) memset ( & ( localXdis -> pekfmaxvjy ) , 1 , 2 * sizeof (
boolean_T ) ) ; } switch ( rtPrevAction ) { case 0 : ( void ) memset ( & (
localXdis -> fhbckfju34 ) , 1 , 2 * sizeof ( boolean_T ) ) ; break ; case 1 :
( void ) memset ( & ( localXdis -> pekfmaxvjy ) , 1 , 2 * sizeof ( boolean_T
) ) ; break ; default : break ; } } if ( rtAction == 0 ) { if ( rtPrevAction
!= 0 ) { if ( rtmGetTaskTime ( ev2oqvq0xx , 0 ) != rtmGetTStart ( ev2oqvq0xx
) ) { ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS
) ; } ( void ) memset ( & ( localXdis -> fhbckfju34 ) , 0 , 2 * sizeof (
boolean_T ) ) ; } fl14z2riem_p = ( rtmGetTaskTime ( ev2oqvq0xx , 0 ) ==
rtP_t_man ) ; if ( rtmIsMajorTimeStep ( ev2oqvq0xx ) ) { localB -> d3gwc2yjdn
= rtP_y0_ini ; f3teoopzo5_p = ( 1.0 - rtP_e0_ini * rtP_e0_ini ) * rtP_a0_ini
/ ( rtP_e0_ini * muDoubleScalarCos ( rtP_f0_ini ) + 1.0 ) ; localB ->
mp5qm0moqq = muDoubleScalarSqrt ( rtP_mi / ( ( 1.0 - rtP_e0_ini * rtP_e0_ini
) * rtP_a0_ini ) ) * ( rtP_e0_ini * muDoubleScalarSin ( rtP_f0_ini ) ) ; A2 =
muDoubleScalarSqrt ( - ( rtP_e0_ini * rtP_e0_ini - 1.0 ) * rtP_mi *
rtP_a0_ini ) ; localB -> h5jnpoyg24 = A2 / ( f3teoopzo5_p * f3teoopzo5_p ) ;
localB -> g4tkuwej40 = f3teoopzo5_p ; localB -> bgiwb1ftd4 = A2 ; }
achogvbf2x_tmp_tmp = localB -> g4tkuwej40 + localB -> bmczrqrh2o ;
achogvbf2x_tmp_tmp = ( achogvbf2x_tmp_tmp * achogvbf2x_tmp_tmp +
rtP_y0_dot_ini * rtP_y0_dot_ini ) + rtP_pcoRad * rtP_pcoRad ; if (
achogvbf2x_tmp_tmp < 0.0 ) { f3teoopzo5_p = 0.0 ; } else { f3teoopzo5_p =
rtP_mi / muDoubleScalarSqrt ( achogvbf2x_tmp_tmp ) - rtP_mi / ( localB ->
bgiwb1ftd4 * localB -> bgiwb1ftd4 / rtP_mi / ( 1.0 - rtP_e0_ini * rtP_e0_ini
) * 2.0 ) ; } A2 = ( rtP_x0_dot_ini - localB -> h5jnpoyg24 * rtP_y0_dot_ini )
+ localB -> mp5qm0moqq ; A2 = A2 * A2 - rtP_z0_dot_ini * rtP_z0_dot_ini ; if
( 2.0 * f3teoopzo5_p - A2 < 0.0 ) { f3teoopzo5_p = 0.0 ; A2 = 0.0 ; } if (
rtmGetTaskTime ( ev2oqvq0xx , 0 ) >= rtP_t_man ) { f3teoopzo5_p =
muDoubleScalarSqrt ( 2.0 * f3teoopzo5_p - A2 ) - ( localB -> bmczrqrh2o +
localB -> g4tkuwej40 ) * localB -> h5jnpoyg24 ; } else { f3teoopzo5_p =
rtP_y0_dot_ini ; } if ( ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS )
) { didZcEventOccur = ( ( ( localZCE -> dqxpaagpk1 == POS_ZCSIG ) != (
int32_T ) fl14z2riem_p ) && ( localZCE -> dqxpaagpk1 != UNINITIALIZED_ZCSIG )
) ; localZCE -> dqxpaagpk1 = fl14z2riem_p ; if ( didZcEventOccur || ( localDW
-> lnstazd0oc != 0 ) ) { didZcEventOccur = ( localX -> fhbckfju34 !=
f3teoopzo5_p ) ; localX -> fhbckfju34 = f3teoopzo5_p ; if ( didZcEventOccur )
{ ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ;
} } localB -> examipxezd = localX -> fhbckfju34 ; if ( localDW -> cofdlphuyb
!= 0 ) { localX -> dx03sczucd = localB -> d3gwc2yjdn ; } * otiofmbm4k =
localX -> dx03sczucd ; } else { localB -> examipxezd = localX -> fhbckfju34 ;
* otiofmbm4k = localX -> dx03sczucd ; } * j0cfgt43jq = localB -> examipxezd ;
if ( ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> hqs052cxrs ) ; } } else { if ( rtAction != rtPrevAction ) { if (
rtmGetTaskTime ( ev2oqvq0xx , 0 ) != rtmGetTStart ( ev2oqvq0xx ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ; }
( void ) memset ( & ( localXdis -> pekfmaxvjy ) , 0 , 2 * sizeof ( boolean_T
) ) ; } if ( rtmIsMajorTimeStep ( ev2oqvq0xx ) ) { localB -> gsqcu5n5i5 =
rtP_y0_i ; localB -> lzlkjx0viw = rtP_y0_dot_i ; } if (
ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { if ( localDW ->
iwrz5goxlr != 0 ) { localX -> pekfmaxvjy = localB -> lzlkjx0viw ; } localB ->
dxwl0uvra5 = localX -> pekfmaxvjy ; if ( localDW -> jjbquufnup != 0 ) {
localX -> ntlqdkmwfj = localB -> gsqcu5n5i5 ; } * otiofmbm4k = localX ->
ntlqdkmwfj ; } else { localB -> dxwl0uvra5 = localX -> pekfmaxvjy ; *
otiofmbm4k = localX -> ntlqdkmwfj ; } * j0cfgt43jq = localB -> dxwl0uvra5 ;
if ( ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> cs5jgwctpw ) ; } } rtPrevAction = localDW -> k2mpnxum4b ; if (
ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { rtAction = ( int8_T
) ! * k1ocaxd5ig ; localDW -> k2mpnxum4b = rtAction ; } else { rtAction =
localDW -> k2mpnxum4b ; } if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ;
if ( rtmGetTaskTime ( ev2oqvq0xx , 0 ) == rtmGetTStart ( ev2oqvq0xx ) ) { (
void ) memset ( & ( localXdis -> geuo1q43mm ) , 1 , 2 * sizeof ( boolean_T )
) ; ( void ) memset ( & ( localXdis -> njak3lbjwg ) , 1 , 2 * sizeof (
boolean_T ) ) ; } switch ( rtPrevAction ) { case 0 : ( void ) memset ( & (
localXdis -> geuo1q43mm ) , 1 , 2 * sizeof ( boolean_T ) ) ; break ; case 1 :
( void ) memset ( & ( localXdis -> njak3lbjwg ) , 1 , 2 * sizeof ( boolean_T
) ) ; break ; default : break ; } } if ( rtAction == 0 ) { if ( rtPrevAction
!= 0 ) { if ( rtmGetTaskTime ( ev2oqvq0xx , 0 ) != rtmGetTStart ( ev2oqvq0xx
) ) { ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS
) ; } ( void ) memset ( & ( localXdis -> geuo1q43mm ) , 0 , 2 * sizeof (
boolean_T ) ) ; } f3teoopzo5_p = rtmGetTaskTime ( ev2oqvq0xx , 0 ) ;
o0ent5pow2_p = ( f3teoopzo5_p == rtP_t_man ) ; fl14z2riem_p = ( f3teoopzo5_p
== rtP_t_man ) ; if ( rtmIsMajorTimeStep ( ev2oqvq0xx ) ) { localB ->
mwt2jewul3 = rtP_z0_dot_ini ; } if ( ssIsModeUpdateTimeStep ( ev2oqvq0xx ->
_mdlRefSfcnS ) ) { didZcEventOccur = ( ( ( localZCE -> ngtuby0bjh ==
POS_ZCSIG ) != ( int32_T ) o0ent5pow2_p ) && ( localZCE -> ngtuby0bjh !=
UNINITIALIZED_ZCSIG ) ) ; localZCE -> ngtuby0bjh = o0ent5pow2_p ; if (
didZcEventOccur || ( localDW -> gythfnrlpj != 0 ) ) { didZcEventOccur = (
localX -> geuo1q43mm != localB -> mwt2jewul3 ) ; localX -> geuo1q43mm =
localB -> mwt2jewul3 ; if ( didZcEventOccur ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ; }
} localB -> l0c13a0fin = localX -> geuo1q43mm ; } else { localB -> l0c13a0fin
= localX -> geuo1q43mm ; } if ( rtmGetTaskTime ( ev2oqvq0xx , 0 ) >=
rtP_t_man ) { f3teoopzo5_p = rtP_pcoRad ; } else { f3teoopzo5_p = rtP_z0_ini
; } if ( ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) {
didZcEventOccur = ( ( ( localZCE -> aytb40yu5a == POS_ZCSIG ) != ( int32_T )
fl14z2riem_p ) && ( localZCE -> aytb40yu5a != UNINITIALIZED_ZCSIG ) ) ;
localZCE -> aytb40yu5a = fl14z2riem_p ; if ( didZcEventOccur || ( localDW ->
hullq5n03m != 0 ) ) { didZcEventOccur = ( localX -> dpw155co0h !=
f3teoopzo5_p ) ; localX -> dpw155co0h = f3teoopzo5_p ; if ( didZcEventOccur )
{ ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ;
} } * fwmagcczlm = localX -> dpw155co0h ; } else { * fwmagcczlm = localX ->
dpw155co0h ; } * hrflowfgj1 = localB -> l0c13a0fin ; if (
ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> caph4ieys1 ) ; } } else { if ( rtAction != rtPrevAction ) { if (
rtmGetTaskTime ( ev2oqvq0xx , 0 ) != rtmGetTStart ( ev2oqvq0xx ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ; }
( void ) memset ( & ( localXdis -> njak3lbjwg ) , 0 , 2 * sizeof ( boolean_T
) ) ; } if ( rtmIsMajorTimeStep ( ev2oqvq0xx ) ) { localB -> l2s1ycq251 =
rtP_z0_i ; localB -> pjlu0cu41m = rtP_z0_dot_i ; } if (
ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { if ( localDW ->
cucihappq5 != 0 ) { localX -> njak3lbjwg = localB -> pjlu0cu41m ; } localB ->
aab50r2fiw = localX -> njak3lbjwg ; if ( localDW -> jqogfe4qpa != 0 ) {
localX -> f5d1n2ym24 = localB -> l2s1ycq251 ; } * fwmagcczlm = localX ->
f5d1n2ym24 ; } else { localB -> aab50r2fiw = localX -> njak3lbjwg ; *
fwmagcczlm = localX -> f5d1n2ym24 ; } * hrflowfgj1 = localB -> aab50r2fiw ;
if ( ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> gdluyylqio ) ; } } achogvbf2x_tmp_tmp = * mio42ppuex + *
lcfpe54frx ; f3teoopzo5_p = ( achogvbf2x_tmp_tmp * achogvbf2x_tmp_tmp + *
otiofmbm4k * * otiofmbm4k ) + * fwmagcczlm * * fwmagcczlm ; f3teoopzo5_p =
muDoubleScalarSqrt ( f3teoopzo5_p ) ; if ( ! rtP_drag ) { A2 = 0.0 ;
dzmzvhvq0v = 0.0 ; } else { A2 = densAtm_oaZmYvmy ( * mio42ppuex - rtP_Re ) ;
dzmzvhvq0v = densAtm_oaZmYvmy ( f3teoopzo5_p - rtP_Re ) ; } if (
ssIsModeUpdateTimeStep ( ev2oqvq0xx -> _mdlRefSfcnS ) ) { if ( localDW ->
eeb05vtv1t != 0 ) { localX -> cjolpg5ogt = localB -> bzerlh0yzj ; }
kvvsss1q50 = localX -> cjolpg5ogt ; if ( localDW -> oe31xkoymz != 0 ) {
localX -> p432rqp4kj = localB -> cmflpre2ht ; } oydgffphrv = localX ->
p432rqp4kj ; if ( localDW -> e4an5sv5r2 != 0 ) { localX -> pxxhuzxdhx =
localB -> jr4y40vd2o ; } dn4xy0tmd4 = localX -> pxxhuzxdhx ; if ( localDW ->
bof552yuuq != 0 ) { localX -> cwrlfd5taf = localB -> ffvugxnrmk ; } localB ->
orqhcxd3rc = localX -> cwrlfd5taf ; } else { kvvsss1q50 = localX ->
cjolpg5ogt ; oydgffphrv = localX -> p432rqp4kj ; dn4xy0tmd4 = localX ->
pxxhuzxdhx ; localB -> orqhcxd3rc = localX -> cwrlfd5taf ; }
gdjhthavd5_tmp_tmp = muDoubleScalarCos ( oydgffphrv ) ; gdjhthavd5_tmp_tmp_p
= muDoubleScalarSin ( oydgffphrv ) ; Ft_dot_tmp = muDoubleScalarCos (
dn4xy0tmd4 ) ; gdjhthavd5_tmp_tmp_e = muDoubleScalarSin ( dn4xy0tmd4 ) ;
gdjhthavd5_idx_6_tmp = gdjhthavd5_tmp_tmp_p * gdjhthavd5_tmp_tmp_e ; b1 =
gdjhthavd5_tmp_tmp * gdjhthavd5_tmp_tmp_e ; if ( rtmIsMajorTimeStep (
ev2oqvq0xx ) ) { * p4fbia00jk = localDW -> lfjiab3rx0 ; } k1_tmp = *
mio42ppuex * * p4fbia00jk ; k1_tmp_p = k1_tmp - Ft_dot_tmp * rtP_omega_E * *
mio42ppuex ; k2 = b1 * rtP_omega_E * * mio42ppuex ; Vra0 = muDoubleScalarSqrt
( ( localB -> orqhcxd3rc * localB -> orqhcxd3rc + k1_tmp_p * k1_tmp_p ) + k2
* k2 ) ; if ( ! rtP_J2_dist ) { j2 = 0.0 ; } else { j2 = rtP_J2 ; }
kt3axv0eoa_tmp_tmp = muDoubleScalarPower ( * mio42ppuex , 4.0 ) ; k4 =
gdjhthavd5_tmp_tmp_e * gdjhthavd5_tmp_tmp_e ; b0 = A2 / ( rtP_m0 / ( rtP_L0 *
rtP_L0 * rtP_Cd0 ) ) * 0.5 * Vra0 ; k1 = - 3.0 * rtP_mi * j2 * ( rtP_Re *
rtP_Re ) / ( 2.0 * kt3axv0eoa_tmp_tmp ) ; mxvwiuuqzh = ( 1.0 - k4 * 3.0 * (
gdjhthavd5_tmp_tmp_p * gdjhthavd5_tmp_tmp_p ) ) * k1 - b0 * localB ->
orqhcxd3rc * 0.01 ; oydgffphrv = muDoubleScalarSin ( 2.0 * oydgffphrv ) * k4
* k1 - b0 * k1_tmp_p * 0.01 ; nqpr0gnmeo_tmp = muDoubleScalarSin ( 2.0 *
dn4xy0tmd4 ) ; b0_tmp = gdjhthavd5_tmp_tmp_p * nqpr0gnmeo_tmp ; b0 = k1 *
b0_tmp - b0 * b1 * rtP_omega_E * * mio42ppuex * 0.01 ; if (
rtmIsMajorTimeStep ( ev2oqvq0xx ) ) { * m5uepniu01 = localDW -> amkx5itglp ;
} if ( ! rtP_J2_dist ) { j2 = 0.0 ; } else { j2 = rtP_J2 ; } k2 = (
achogvbf2x_tmp_tmp * gdjhthavd5_tmp_tmp_e * gdjhthavd5_tmp_tmp_p + *
otiofmbm4k * gdjhthavd5_tmp_tmp * gdjhthavd5_tmp_tmp_e ) + * fwmagcczlm *
Ft_dot_tmp ; k1 = k2 * k2 * 5.0 / ( f3teoopzo5_p * f3teoopzo5_p ) - 1.0 ; k3
= ( ( localB -> orqhcxd3rc + * be3q2smovi ) - * p4fbia00jk * * otiofmbm4k ) -
( b1 * rtP_omega_E * * fwmagcczlm - * otiofmbm4k * Ft_dot_tmp * rtP_omega_E )
; k4_tmp = * p4fbia00jk * * lcfpe54frx ; k4_tmp_p = * m5uepniu01 * *
fwmagcczlm ; k4 = ( ( ( k1_tmp + * j0cfgt43jq ) + k4_tmp ) - k4_tmp_p ) - (
achogvbf2x_tmp_tmp * Ft_dot_tmp * rtP_omega_E - * fwmagcczlm *
gdjhthavd5_idx_6_tmp * rtP_omega_E ) ; k5 = ( * m5uepniu01 * * otiofmbm4k + *
hrflowfgj1 ) - ( * otiofmbm4k * gdjhthavd5_idx_6_tmp * rtP_omega_E -
achogvbf2x_tmp_tmp * b1 * rtP_omega_E ) ; k1_tmp_p = 2.0 * k2 *
gdjhthavd5_tmp_tmp_e ; dzmzvhvq0v = dzmzvhvq0v / ( rtP_m1 / ( rtP_L1 * rtP_L1
* 1.4142135623730951 * rtP_Cd1 ) ) * 0.5 * muDoubleScalarSqrt ( ( k3 * k3 +
k4 * k4 ) + k5 * k5 ) ; j2 = 3.0 * rtP_mi * j2 * ( rtP_Re * rtP_Re ) / ( 2.0
* muDoubleScalarPower ( f3teoopzo5_p , 5.0 ) ) ; k3 = ( achogvbf2x_tmp_tmp *
k1 - k1_tmp_p * gdjhthavd5_tmp_tmp_p ) * j2 - dzmzvhvq0v * k3 * 0.01 ; k4 = (
k1 * * otiofmbm4k - k1_tmp_p * gdjhthavd5_tmp_tmp ) * j2 - dzmzvhvq0v * k4 *
0.01 ; dzmzvhvq0v = ( k1 * * fwmagcczlm - 2.0 * k2 * Ft_dot_tmp ) * j2 -
dzmzvhvq0v * k5 * 0.01 ; k1_tmp_p = muDoubleScalarCos ( kvvsss1q50 ) ;
kvvsss1q50 = muDoubleScalarSin ( kvvsss1q50 ) ; j2 = k1_tmp_p *
gdjhthavd5_tmp_tmp ; fgvekl5jd2 [ 0 ] = j2 - kvvsss1q50 *
gdjhthavd5_tmp_tmp_p * Ft_dot_tmp ; k5 = kvvsss1q50 * gdjhthavd5_tmp_tmp ;
fgvekl5jd2 [ 3 ] = k1_tmp_p * gdjhthavd5_tmp_tmp_p * Ft_dot_tmp + k5 ;
fgvekl5jd2 [ 6 ] = gdjhthavd5_idx_6_tmp ; fgvekl5jd2 [ 1 ] = - k1_tmp_p *
gdjhthavd5_tmp_tmp_p - k5 * Ft_dot_tmp ; fgvekl5jd2 [ 4 ] = j2 * Ft_dot_tmp +
- kvvsss1q50 * gdjhthavd5_tmp_tmp_p ; fgvekl5jd2 [ 7 ] = b1 ; fgvekl5jd2 [ 2
] = kvvsss1q50 * gdjhthavd5_tmp_tmp_e ; fgvekl5jd2 [ 5 ] = - k1_tmp_p *
gdjhthavd5_tmp_tmp_e ; fgvekl5jd2 [ 8 ] = Ft_dot_tmp ; j2 = fgvekl5jd2 [ 7 ]
; b1 = fgvekl5jd2 [ 8 ] ; if ( ssIsModeUpdateTimeStep ( ev2oqvq0xx ->
_mdlRefSfcnS ) ) { if ( localDW -> f0vx1utodn != 0 ) { localX -> doj5adsbev =
localB -> aiovwljhme ; } kvvsss1q50 = localX -> doj5adsbev ; } else {
kvvsss1q50 = localX -> doj5adsbev ; } if ( dn4xy0tmd4 == 0.0 ) { localB ->
lwxepuesun = 0.0 ; } else { localB -> lwxepuesun = b0 * * mio42ppuex *
gdjhthavd5_tmp_tmp_p / ( kvvsss1q50 * gdjhthavd5_tmp_tmp_e ) ; } k5 = b0 * *
mio42ppuex ; gdjhthavd5_idx_6_tmp = k5 / kvvsss1q50 ; localB -> muorhg0tha =
gdjhthavd5_idx_6_tmp * gdjhthavd5_tmp_tmp ; if ( dn4xy0tmd4 == 0.0 ) { localB
-> imdub41r43 = kvvsss1q50 / ( * mio42ppuex * * mio42ppuex ) ; } else {
localB -> imdub41r43 = kvvsss1q50 / ( * mio42ppuex * * mio42ppuex ) - k5 *
gdjhthavd5_tmp_tmp_p / ( kvvsss1q50 * gdjhthavd5_tmp_tmp_e ) * Ft_dot_tmp ; }
tmp_e = _mm_set_pd ( fgvekl5jd2 [ 3 ] , fgvekl5jd2 [ 0 ] ) ; tmp_i =
_mm_set_pd ( fgvekl5jd2 [ 4 ] , fgvekl5jd2 [ 1 ] ) ; tmp_m = _mm_set_pd (
fgvekl5jd2 [ 5 ] , fgvekl5jd2 [ 2 ] ) ; tmp = _mm_add_pd ( _mm_add_pd (
_mm_mul_pd ( tmp_e , _mm_set1_pd ( * lcfpe54frx ) ) , _mm_mul_pd ( tmp_i ,
_mm_set1_pd ( * otiofmbm4k ) ) ) , _mm_mul_pd ( tmp_m , _mm_set1_pd ( *
fwmagcczlm ) ) ) ; _mm_storeu_pd ( & tmp_p [ 0 ] , tmp ) ; k5 = ( fgvekl5jd2
[ 6 ] * * lcfpe54frx + fgvekl5jd2 [ 7 ] * * otiofmbm4k ) + fgvekl5jd2 [ 8 ] *
* fwmagcczlm ; k1_tmp_p = * m5uepniu01 ; k1 = * nac5nrmb11 ; Vra1 = *
p4fbia00jk ; for ( i = 0 ; i < 3 ; i ++ ) { k2 = fgvekl5jd2 [ 3 * i ] *
k1_tmp_p ; k2 += fgvekl5jd2 [ 3 * i + 1 ] * k1 ; N_vec [ i ] = fgvekl5jd2 [ 3
* i + 2 ] * Vra1 + k2 ; } tmp = _mm_set1_pd ( * mio42ppuex ) ; _mm_storeu_pd
( & fwkyynfl3z [ 0 ] , _mm_add_pd ( _mm_mul_pd ( tmp_e , tmp ) , _mm_set_pd (
tmp_p [ 1 ] , tmp_p [ 0 ] ) ) ) ; fwkyynfl3z [ 2 ] = fgvekl5jd2 [ 6 ] * *
mio42ppuex + k5 ; tmp_e = _mm_add_pd ( _mm_add_pd ( _mm_add_pd ( _mm_add_pd (
_mm_add_pd ( _mm_mul_pd ( _mm_mul_pd ( tmp , _mm_set_pd ( fgvekl5jd2 [ 0 ] ,
- fgvekl5jd2 [ 3 ] ) ) , _mm_set1_pd ( localB -> lwxepuesun ) ) , _mm_mul_pd
( _mm_set1_pd ( localB -> orqhcxd3rc ) , tmp_e ) ) , _mm_mul_pd ( _mm_mul_pd
( _mm_mul_pd ( _mm_mul_pd ( tmp , _mm_set_pd ( - fgvekl5jd2 [ 2 ] ,
fgvekl5jd2 [ 2 ] ) ) , _mm_set1_pd ( gdjhthavd5_tmp_tmp_p ) ) , _mm_set1_pd (
localB -> muorhg0tha ) ) , _mm_set_pd ( - 1.0 , 1.0 ) ) ) , _mm_mul_pd (
_mm_mul_pd ( tmp , tmp_i ) , _mm_set1_pd ( localB -> imdub41r43 ) ) ) ,
_mm_add_pd ( _mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd ( * be3q2smovi ) )
, _mm_mul_pd ( tmp_i , _mm_set1_pd ( * j0cfgt43jq ) ) ) , _mm_mul_pd ( tmp_m
, _mm_set1_pd ( * hrflowfgj1 ) ) ) ) , _mm_sub_pd ( _mm_mul_pd ( _mm_set_pd (
tmp_p [ 0 ] , N_vec [ 1 ] ) , _mm_set_pd ( N_vec [ 2 ] , k5 ) ) , _mm_mul_pd
( _mm_set_pd ( N_vec [ 0 ] , tmp_p [ 1 ] ) , _mm_set_pd ( k5 , N_vec [ 2 ] )
) ) ) ; _mm_storeu_pd ( & mibdohkstk [ 0 ] , tmp_e ) ; mibdohkstk [ 2 ] = ( (
( * mio42ppuex * Ft_dot_tmp * gdjhthavd5_tmp_tmp_p * localB -> muorhg0tha +
localB -> orqhcxd3rc * fgvekl5jd2 [ 6 ] ) + * mio42ppuex * fgvekl5jd2 [ 7 ] *
localB -> imdub41r43 ) + ( ( fgvekl5jd2 [ 6 ] * * be3q2smovi + fgvekl5jd2 [ 7
] * * j0cfgt43jq ) + fgvekl5jd2 [ 8 ] * * hrflowfgj1 ) ) + ( N_vec [ 0 ] *
tmp_p [ 1 ] - tmp_p [ 0 ] * N_vec [ 1 ] ) ; k2 = norm_kjUYsQLi ( fwkyynfl3z )
; k1 = norm_kjUYsQLi ( mibdohkstk ) ; tmp_e = _mm_sub_pd ( _mm_mul_pd (
_mm_set_pd ( mibdohkstk [ 0 ] , fwkyynfl3z [ 1 ] ) , _mm_set_pd ( fwkyynfl3z
[ 2 ] , mibdohkstk [ 2 ] ) ) , _mm_mul_pd ( _mm_set_pd ( fwkyynfl3z [ 0 ] ,
mibdohkstk [ 1 ] ) , _mm_set_pd ( mibdohkstk [ 2 ] , fwkyynfl3z [ 2 ] ) ) ) ;
_mm_storeu_pd ( & rot [ 0 ] , tmp_e ) ; rot [ 2 ] = fwkyynfl3z [ 0 ] *
mibdohkstk [ 1 ] - mibdohkstk [ 0 ] * fwkyynfl3z [ 1 ] ; N_vec [ 0 ] = 0.0 *
rot [ 2 ] - rot [ 1 ] ; N_vec [ 1 ] = rot [ 0 ] - 0.0 * rot [ 2 ] ; N_vec [ 2
] = 0.0 * rot [ 1 ] - 0.0 * rot [ 0 ] ; k5 = norm_kjUYsQLi ( N_vec ) ; Vra1 =
k1 * k1 ; k1 = 1.0 / rtP_mi ; b_c_tmp = fwkyynfl3z [ 0 ] * mibdohkstk [ 0 ] ;
b_c_tmp += fwkyynfl3z [ 1 ] * mibdohkstk [ 1 ] ; b_c_tmp += fwkyynfl3z [ 2 ]
* mibdohkstk [ 2 ] ; k1_tmp_p = rtP_mi / k2 ; Vra1 -= k1_tmp_p ; fwkyynfl3z_p
= fwkyynfl3z [ 0 ] ; e_vec_idx_0 = ( Vra1 * fwkyynfl3z_p - b_c_tmp *
mibdohkstk [ 0 ] ) * k1 ; jcpddoykas [ 0 ] = ( mibdohkstk [ 1 ] * rot [ 2 ] -
rot [ 1 ] * mibdohkstk [ 2 ] ) - k1_tmp_p * fwkyynfl3z_p ; fwkyynfl3z_p =
fwkyynfl3z [ 1 ] ; e_vec_idx_1 = ( Vra1 * fwkyynfl3z_p - b_c_tmp * mibdohkstk
[ 1 ] ) * k1 ; jcpddoykas [ 1 ] = ( rot [ 0 ] * mibdohkstk [ 2 ] - mibdohkstk
[ 0 ] * rot [ 2 ] ) - k1_tmp_p * fwkyynfl3z_p ; fwkyynfl3z_p = fwkyynfl3z [ 2
] ; e_vec_idx_2 = ( Vra1 * fwkyynfl3z_p - b_c_tmp * mibdohkstk [ 2 ] ) * k1 ;
jcpddoykas [ 2 ] = ( mibdohkstk [ 0 ] * rot [ 1 ] - rot [ 0 ] * mibdohkstk [
1 ] ) - k1_tmp_p * fwkyynfl3z_p ; k1 = norm_kjUYsQLi ( jcpddoykas ) / rtP_mi
; if ( ( k1 >= - 1.0E-9 ) && ( k1 <= 1.0E-9 ) ) { k1 = 0.0 ; } * hf3otuiqp0 =
muDoubleScalarAcos ( ( ( 0.0 * rot [ 0 ] + 0.0 * rot [ 1 ] ) + rot [ 2 ] ) /
norm_kjUYsQLi ( rot ) ) ; if ( ( k5 != 0.0 ) && ( k1 != 0.0 ) ) { k1_tmp_p =
( 0.0 * N_vec [ 0 ] + N_vec [ 1 ] ) + 0.0 * N_vec [ 2 ] ; if ( k1_tmp_p > 0.0
) { * e1uobkrlsq = muDoubleScalarAcos ( ( ( 0.0 * N_vec [ 1 ] + N_vec [ 0 ] )
+ 0.0 * N_vec [ 2 ] ) / k5 ) ; } else if ( k1_tmp_p < 0.0 ) { * e1uobkrlsq =
6.2831853071795862 - muDoubleScalarAcos ( ( ( 0.0 * N_vec [ 1 ] + N_vec [ 0 ]
) + 0.0 * N_vec [ 2 ] ) / k5 ) ; } else { * e1uobkrlsq = 0.0 ; } k1_tmp_p = (
0.0 * e_vec_idx_0 + 0.0 * e_vec_idx_1 ) + e_vec_idx_2 ; if ( k1_tmp_p >
0.0001 ) { k5 = muDoubleScalarAcos ( ( ( e_vec_idx_0 * N_vec [ 0 ] +
e_vec_idx_1 * N_vec [ 1 ] ) + e_vec_idx_2 * N_vec [ 2 ] ) / ( k1 * k5 ) ) ; }
else if ( k1_tmp_p < - 0.0001 ) { k5 = 6.2831853071795862 -
muDoubleScalarAcos ( ( ( e_vec_idx_0 * N_vec [ 0 ] + e_vec_idx_1 * N_vec [ 1
] ) + e_vec_idx_2 * N_vec [ 2 ] ) / ( k1 * k5 ) ) ; } else { k5 = 0.0 ; } if
( b_c_tmp >= 0.0001 ) { Vra1 = e_vec_idx_0 * fwkyynfl3z [ 0 ] ; Vra1 +=
e_vec_idx_1 * fwkyynfl3z [ 1 ] ; Vra1 += e_vec_idx_2 * fwkyynfl3z [ 2 ] ; k2
= muDoubleScalarAcos ( Vra1 / ( k1 * k2 ) ) ; } else if ( b_c_tmp <= - 0.0001
) { Vra1 = e_vec_idx_0 * fwkyynfl3z [ 0 ] ; Vra1 += e_vec_idx_1 * fwkyynfl3z
[ 1 ] ; Vra1 += e_vec_idx_2 * fwkyynfl3z [ 2 ] ; k2 = 6.2831853071795862 -
muDoubleScalarAcos ( Vra1 / ( k1 * k2 ) ) ; } else { k2 = 0.0 ; } *
dzncmuxjjw = k2 + k5 ; m1ugtuws4p ( dzncmuxjjw ) ; } else if ( ( k5 != 0.0 )
&& ( k1 == 0.0 ) ) { k1_tmp_p = ( 0.0 * N_vec [ 0 ] + N_vec [ 1 ] ) + 0.0 *
N_vec [ 2 ] ; if ( k1_tmp_p > 0.0 ) { * e1uobkrlsq = muDoubleScalarAcos ( ( (
0.0 * N_vec [ 1 ] + N_vec [ 0 ] ) + 0.0 * N_vec [ 2 ] ) / k5 ) ; } else if (
k1_tmp_p < 0.0 ) { * e1uobkrlsq = 6.2831853071795862 - muDoubleScalarAcos ( (
( 0.0 * N_vec [ 1 ] + N_vec [ 0 ] ) + 0.0 * N_vec [ 2 ] ) / k5 ) ; } else { *
e1uobkrlsq = 0.0 ; } k1_tmp_p = 0.0 * fwkyynfl3z [ 0 ] ; k1_tmp_p += 0.0 *
fwkyynfl3z [ 1 ] ; k1_tmp_p += fwkyynfl3z [ 2 ] ; if ( k1_tmp_p > 0.0 ) { k1
= fwkyynfl3z [ 0 ] * N_vec [ 0 ] ; k1 += fwkyynfl3z [ 1 ] * N_vec [ 1 ] ; k1
+= fwkyynfl3z [ 2 ] * N_vec [ 2 ] ; * dzncmuxjjw = muDoubleScalarAcos ( k1 /
( k2 * k5 ) ) ; } else if ( k1_tmp_p < 0.0 ) { k1 = fwkyynfl3z [ 0 ] * N_vec
[ 0 ] ; k1 += fwkyynfl3z [ 1 ] * N_vec [ 1 ] ; k1 += fwkyynfl3z [ 2 ] * N_vec
[ 2 ] ; * dzncmuxjjw = 6.2831853071795862 - muDoubleScalarAcos ( k1 / ( k2 *
k5 ) ) ; } else { * dzncmuxjjw = 0.0 ; } } else if ( ( k5 == 0.0 ) && ( k1 !=
0.0 ) ) { if ( b_c_tmp > 0.0 ) { k5 = e_vec_idx_0 * fwkyynfl3z [ 0 ] ; k5 +=
e_vec_idx_1 * fwkyynfl3z [ 1 ] ; k5 += e_vec_idx_2 * fwkyynfl3z [ 2 ] ; k2 =
muDoubleScalarAcos ( k5 / ( k1 * k2 ) ) ; } else if ( b_c_tmp < 0.0 ) { k5 =
e_vec_idx_0 * fwkyynfl3z [ 0 ] ; k5 += e_vec_idx_1 * fwkyynfl3z [ 1 ] ; k5 +=
e_vec_idx_2 * fwkyynfl3z [ 2 ] ; k2 = 6.2831853071795862 - muDoubleScalarAcos
( k5 / ( k1 * k2 ) ) ; } else { k2 = 0.0 ; } k1_tmp_p = ( 0.0 * e_vec_idx_0 +
e_vec_idx_1 ) + 0.0 * e_vec_idx_2 ; if ( k1_tmp_p > 0.0 ) { k1 =
muDoubleScalarAcos ( ( ( 0.0 * e_vec_idx_1 + e_vec_idx_0 ) + 0.0 *
e_vec_idx_2 ) / k1 ) ; } else if ( k1_tmp_p < 0.0 ) { k1 = 6.2831853071795862
- muDoubleScalarAcos ( ( ( 0.0 * e_vec_idx_1 + e_vec_idx_0 ) + 0.0 *
e_vec_idx_2 ) / k1 ) ; } else { k1 = 0.0 ; } * dzncmuxjjw = k1 + k2 ;
m1ugtuws4p ( dzncmuxjjw ) ; * e1uobkrlsq = k1 ; } else { k1_tmp_p = 0.0 *
fwkyynfl3z [ 0 ] ; k1_tmp_p += fwkyynfl3z [ 1 ] ; k1_tmp_p += 0.0 *
fwkyynfl3z [ 2 ] ; if ( k1_tmp_p > 0.0 ) { k1 = fwkyynfl3z [ 0 ] ; k1 += 0.0
* fwkyynfl3z [ 1 ] ; k1 += 0.0 * fwkyynfl3z [ 2 ] ; k2 = muDoubleScalarAcos (
k1 / k2 ) ; } else if ( k1_tmp_p < 0.0 ) { k1 = fwkyynfl3z [ 0 ] ; k1 += 0.0
* fwkyynfl3z [ 1 ] ; k1 += 0.0 * fwkyynfl3z [ 2 ] ; k2 = 6.2831853071795862 -
muDoubleScalarAcos ( k1 / k2 ) ; } else { k2 = 0.0 ; } * dzncmuxjjw = k2 ; *
e1uobkrlsq = k2 ; } localB -> p0zuvgg0kd = oydgffphrv * * mio42ppuex ; k2 =
muDoubleScalarPower ( * mio42ppuex , 3.0 ) ; k1 = * mio42ppuex * * mio42ppuex
; b_c_tmp = kvvsss1q50 * kvvsss1q50 ; localB -> dnd1abzfkr = ( b_c_tmp / k2 -
rtP_mi / k1 ) + mxvwiuuqzh ; k5 = rtP_J2 ; if ( ! rtP_J2_dist ) { k5 = 0.0 ;
} Vra1 = oydgffphrv / * mio42ppuex - kvvsss1q50 / k2 * 2.0 * localB ->
orqhcxd3rc ; k1_tmp -= b1 * rtP_omega_E * * mio42ppuex ; k2 = j2 *
rtP_omega_E * * mio42ppuex ; k1_tmp_p = ( localB -> imdub41r43 * -
gdjhthavd5_tmp_tmp_p * gdjhthavd5_tmp_tmp_e + gdjhthavd5_tmp_tmp * localB ->
muorhg0tha * Ft_dot_tmp ) * * mio42ppuex ; k1_tmp_p += j2 * localB ->
orqhcxd3rc ; * dyqrydwlzv = ( ( ( ( ( ( localB -> orqhcxd3rc * * p4fbia00jk +
* mio42ppuex * Vra1 ) - ( localB -> muorhg0tha * - gdjhthavd5_tmp_tmp_e * *
mio42ppuex + b1 * localB -> orqhcxd3rc ) * rtP_omega_E ) * ( k1_tmp * 2.0 ) +
2.0 * localB -> orqhcxd3rc * localB -> dnd1abzfkr ) + k2 * 2.0 * ( k1_tmp_p *
rtP_omega_E ) ) * ( muDoubleScalarPower ( ( localB -> orqhcxd3rc * localB ->
orqhcxd3rc + k1_tmp * k1_tmp ) + k2 * k2 , - 0.5 ) * 0.5 ) * j2 * *
mio42ppuex + k1_tmp_p * Vra0 ) * ( - A2 * rtP_omega_E / ( rtP_m0 / ( rtP_L0 *
rtP_L0 * rtP_Cd0 ) * 2.0 ) ) + ( ( gdjhthavd5_tmp_tmp_p * 2.0 * localB ->
muorhg0tha * muDoubleScalarCos ( 2.0 * dn4xy0tmd4 ) + localB -> imdub41r43 *
gdjhthavd5_tmp_tmp * nqpr0gnmeo_tmp ) * kt3axv0eoa_tmp_tmp - b0_tmp * 4.0 * *
mio42ppuex * localB -> orqhcxd3rc ) / muDoubleScalarPower ( * mio42ppuex ,
8.0 ) * ( - 3.0 * rtP_mi * k5 * ( rtP_Re * rtP_Re ) / 2.0 ) ) * * mio42ppuex
/ kvvsss1q50 + ( - ( b0 * oydgffphrv * k1 / b_c_tmp ) + b0 * localB ->
orqhcxd3rc / kvvsss1q50 ) ; * ksygknmexr = Vra1 ; A2 = k4_tmp - k4_tmp_p ;
f3teoopzo5_p = rtP_mi / muDoubleScalarPower ( f3teoopzo5_p , 3.0 ) ; localB
-> doz4cen3rf = ( ( ( ( ( 2.0 * * p4fbia00jk * * j0cfgt43jq + * ksygknmexr *
* otiofmbm4k ) + A2 * * p4fbia00jk ) - f3teoopzo5_p * achogvbf2x_tmp_tmp ) +
rtP_mi / k1 ) + ( k3 - mxvwiuuqzh ) ) + * adk01p22fm ; localB -> f0shfln4tw =
( ( ( ( ( ( ( * m5uepniu01 * * m5uepniu01 * * otiofmbm4k + 2.0 * * m5uepniu01
* * hrflowfgj1 ) + * p4fbia00jk * * p4fbia00jk * * otiofmbm4k ) - 2.0 * *
p4fbia00jk * * be3q2smovi ) - * ksygknmexr * * lcfpe54frx ) + * dyqrydwlzv *
* fwmagcczlm ) - f3teoopzo5_p * * otiofmbm4k ) + ( k4 - oydgffphrv ) ) + *
dz0bciprj0 ; localB -> kfpfxvzzl2 = ( ( ( ( - * dyqrydwlzv * * otiofmbm4k -
2.0 * * m5uepniu01 * * j0cfgt43jq ) - A2 * * m5uepniu01 ) - f3teoopzo5_p * *
fwmagcczlm ) + ( dzmzvhvq0v - b0 ) ) + * lo0ui3luhn ; localB -> p40dmzeew2 =
gdjhthavd5_idx_6_tmp ; localB -> m3kmq4x4xf = kvvsss1q50 / k1 ; * bnbpi3m5zy
= localB -> c2iupr0jlx ; } void DinamicaCinematicaOrbitalTID2 ( real_T *
nac5nrmb11 , h1dz0q0gf2 * localB ) { * nac5nrmb11 = ocg4r1mb5y . P_36 ;
localB -> jr4y40vd2o = rtP_i0_ini ; localB -> bzerlh0yzj = rtP_ohm0_ini ;
localB -> c2iupr0jlx = ocg4r1mb5y . P_37 ; localB -> i54ohznwps = ocg4r1mb5y
. P_32 * rtP_pcoRad ; localB -> bmczrqrh2o = ocg4r1mb5y . P_33 * rtP_pcoRad ;
} void n0jusqxqm2 ( fqgdhjwhge * const ev2oqvq0xx , h1dz0q0gf2 * localB ,
p1yqgfuya1 * localDW ) { if ( rtmIsMajorTimeStep ( ev2oqvq0xx ) ) { if (
memcmp ( ev2oqvq0xx -> nonContDerivSignal [ 0 ] . pCurrVal , ev2oqvq0xx ->
nonContDerivSignal [ 0 ] . pPrevVal , ev2oqvq0xx -> nonContDerivSignal [ 0 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ev2oqvq0xx -> nonContDerivSignal [
0 ] . pPrevVal , ev2oqvq0xx -> nonContDerivSignal [ 0 ] . pCurrVal ,
ev2oqvq0xx -> nonContDerivSignal [ 0 ] . sizeInBytes ) ;
ssSetSolverNeedsResetWithReason ( ev2oqvq0xx -> _mdlRefSfcnS , 32 ) ; } if (
memcmp ( ev2oqvq0xx -> nonContDerivSignal [ 1 ] . pCurrVal , ev2oqvq0xx ->
nonContDerivSignal [ 1 ] . pPrevVal , ev2oqvq0xx -> nonContDerivSignal [ 1 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ev2oqvq0xx -> nonContDerivSignal [
1 ] . pPrevVal , ev2oqvq0xx -> nonContDerivSignal [ 1 ] . pCurrVal ,
ev2oqvq0xx -> nonContDerivSignal [ 1 ] . sizeInBytes ) ;
ssSetSolverNeedsResetWithReason ( ev2oqvq0xx -> _mdlRefSfcnS , 32 ) ; } }
localDW -> gaqihpfgvh = 0 ; if ( localDW -> f0m5ymxxjr == 0 ) { localDW ->
ibqx0tnxj5 = 0 ; localDW -> g4u5vzuzqr = 0 ; } else { localDW -> gdxl020oo3 =
0 ; localDW -> ed45uvn34h = 0 ; } if ( localDW -> clhrm0hulb == 0 ) { localDW
-> lnstazd0oc = 0 ; localDW -> cofdlphuyb = 0 ; } else { localDW ->
iwrz5goxlr = 0 ; localDW -> jjbquufnup = 0 ; } if ( localDW -> k2mpnxum4b ==
0 ) { localDW -> gythfnrlpj = 0 ; localDW -> hullq5n03m = 0 ; } else {
localDW -> cucihappq5 = 0 ; localDW -> jqogfe4qpa = 0 ; } localDW ->
eeb05vtv1t = 0 ; localDW -> oe31xkoymz = 0 ; localDW -> e4an5sv5r2 = 0 ;
localDW -> bof552yuuq = 0 ; if ( rtmIsMajorTimeStep ( ev2oqvq0xx ) ) {
localDW -> lfjiab3rx0 = localB -> m3kmq4x4xf ; localDW -> amkx5itglp = localB
-> p40dmzeew2 ; } localDW -> f0vx1utodn = 0 ; } void hzdvvsrkxw ( h1dz0q0gf2
* localB , p1yqgfuya1 * localDW , aygzkytbqu * localXdot ) { localXdot ->
m2ckqb4qdo = localB -> orqhcxd3rc ; { real_T * dx ; int_T i1 ; dx = & (
localXdot -> dgdb31szew ) ; for ( i1 = 0 ; i1 < 2 ; i1 ++ ) { dx [ i1 ] = 0.0
; } } { real_T * dx ; int_T i1 ; dx = & ( localXdot -> ljdhe12bh3 ) ; for (
i1 = 0 ; i1 < 2 ; i1 ++ ) { dx [ i1 ] = 0.0 ; } } switch ( localDW ->
f0m5ymxxjr ) { case 0 : localXdot -> dgdb31szew = localB -> doz4cen3rf ;
localXdot -> poae3lai5p = localB -> ewi45tmprq ; break ; case 1 : localXdot
-> ljdhe12bh3 = localB -> doz4cen3rf ; localXdot -> lks1v1umh4 = localB ->
gfq0z4wnz1 ; break ; default : break ; } { real_T * dx ; int_T i1 ; dx = & (
localXdot -> fhbckfju34 ) ; for ( i1 = 0 ; i1 < 2 ; i1 ++ ) { dx [ i1 ] = 0.0
; } } { real_T * dx ; int_T i1 ; dx = & ( localXdot -> pekfmaxvjy ) ; for (
i1 = 0 ; i1 < 2 ; i1 ++ ) { dx [ i1 ] = 0.0 ; } } switch ( localDW ->
clhrm0hulb ) { case 0 : localXdot -> fhbckfju34 = localB -> f0shfln4tw ;
localXdot -> dx03sczucd = localB -> examipxezd ; break ; case 1 : localXdot
-> pekfmaxvjy = localB -> f0shfln4tw ; localXdot -> ntlqdkmwfj = localB ->
dxwl0uvra5 ; break ; default : break ; } { real_T * dx ; int_T i1 ; dx = & (
localXdot -> geuo1q43mm ) ; for ( i1 = 0 ; i1 < 2 ; i1 ++ ) { dx [ i1 ] = 0.0
; } } { real_T * dx ; int_T i1 ; dx = & ( localXdot -> njak3lbjwg ) ; for (
i1 = 0 ; i1 < 2 ; i1 ++ ) { dx [ i1 ] = 0.0 ; } } switch ( localDW ->
k2mpnxum4b ) { case 0 : localXdot -> geuo1q43mm = localB -> kfpfxvzzl2 ;
localXdot -> dpw155co0h = localB -> l0c13a0fin ; break ; case 1 : localXdot
-> njak3lbjwg = localB -> kfpfxvzzl2 ; localXdot -> f5d1n2ym24 = localB ->
aab50r2fiw ; break ; default : break ; } localXdot -> cjolpg5ogt = localB ->
lwxepuesun ; localXdot -> p432rqp4kj = localB -> imdub41r43 ; localXdot ->
pxxhuzxdhx = localB -> muorhg0tha ; localXdot -> cwrlfd5taf = localB ->
dnd1abzfkr ; localXdot -> doj5adsbev = localB -> p0zuvgg0kd ; } void
f1esxkgit3 ( fqgdhjwhge * const ev2oqvq0xx ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( ev2oqvq0xx ->
_mdlRefSfcnS , "DinamicaCinematicaOrbital" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void cclmzcapyf ( real_T
* m5uepniu01 , real_T * p4fbia00jk , SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , fqgdhjwhge * const
ev2oqvq0xx , h1dz0q0gf2 * localB , p1yqgfuya1 * localDW , luimruxjly * localX
, lzvps2jo2x * localZCE , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { ( void ) memset ( ( void * )
ev2oqvq0xx , 0 , sizeof ( fqgdhjwhge ) ) ; ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; ev2oqvq0xx -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; ev2oqvq0xx -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( ev2oqvq0xx -> _mdlRefSfcnS , "DinamicaCinematicaOrbital"
, "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> orqhcxd3rc =
0.0 ; localB -> jr4y40vd2o = 0.0 ; localB -> bzerlh0yzj = 0.0 ; localB ->
c2iupr0jlx = 0.0 ; localB -> l2s1ycq251 = 0.0 ; localB -> pjlu0cu41m = 0.0 ;
localB -> aab50r2fiw = 0.0 ; localB -> mwt2jewul3 = 0.0 ; localB ->
l0c13a0fin = 0.0 ; localB -> gsqcu5n5i5 = 0.0 ; localB -> lzlkjx0viw = 0.0 ;
localB -> dxwl0uvra5 = 0.0 ; localB -> d3gwc2yjdn = 0.0 ; localB ->
examipxezd = 0.0 ; localB -> bmczrqrh2o = 0.0 ; localB -> g4tkuwej40 = 0.0 ;
localB -> mp5qm0moqq = 0.0 ; localB -> bgiwb1ftd4 = 0.0 ; localB ->
h5jnpoyg24 = 0.0 ; localB -> oerzxsui2p = 0.0 ; localB -> d3m211gq4l = 0.0 ;
localB -> gfq0z4wnz1 = 0.0 ; localB -> kjy3mi420t = 0.0 ; localB ->
ewi45tmprq = 0.0 ; localB -> i54ohznwps = 0.0 ; localB -> p40dmzeew2 = 0.0 ;
localB -> m3kmq4x4xf = 0.0 ; localB -> doz4cen3rf = 0.0 ; localB ->
f0shfln4tw = 0.0 ; localB -> kfpfxvzzl2 = 0.0 ; localB -> p0zuvgg0kd = 0.0 ;
localB -> dnd1abzfkr = 0.0 ; localB -> lwxepuesun = 0.0 ; localB ->
imdub41r43 = 0.0 ; localB -> muorhg0tha = 0.0 ; localB -> achogvbf2x = 0.0 ;
localB -> ffvugxnrmk = 0.0 ; localB -> aiovwljhme = 0.0 ; localB ->
cmflpre2ht = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof (
p1yqgfuya1 ) ) ; localDW -> lfjiab3rx0 = 0.0 ; localDW -> amkx5itglp = 0.0 ;
DinamicaCinematicaOrbital_InitializeDataMapInfo ( ev2oqvq0xx , localDW ,
localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( ev2oqvq0xx -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
ev2oqvq0xx -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( ev2oqvq0xx -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } ev2oqvq0xx -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) ev2oqvq0xx -> NonContDerivMemory . mr_nonContSig0 ; ev2oqvq0xx ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
ev2oqvq0xx -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( &
m5uepniu01 [ 0 ] ) ; ; ev2oqvq0xx -> nonContDerivSignal [ 1 ] . pPrevVal = (
char_T * ) ev2oqvq0xx -> NonContDerivMemory . mr_nonContSig1 ; ev2oqvq0xx ->
nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
ev2oqvq0xx -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( &
p4fbia00jk [ 0 ] ) ; ; if ( mr_nonContOutputArray [ 7 ] != ( NULL ) ) {
mr_nonContOutputArray [ 7 ] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 7 ] [ 0 ] . currVal = ( char_T * ) & m5uepniu01 [ 0 ]
; mr_nonContOutputArray [ 7 ] [ 0 ] . next = ( NULL ) ; } if (
mr_nonContOutputArray [ 9 ] != ( NULL ) ) { mr_nonContOutputArray [ 9 ] [ 0 ]
. sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 9 ] [ 0 ] .
currVal = ( char_T * ) & p4fbia00jk [ 0 ] ; mr_nonContOutputArray [ 9 ] [ 0 ]
. next = ( NULL ) ; } if ( mr_nonContOutputArray [ 10 ] != ( NULL ) ) {
mr_nonContOutputArray [ 10 ] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 10 ] [ 0 ] . currVal = ( char_T * ) & p4fbia00jk [ 0
] ; mr_nonContOutputArray [ 10 ] [ 0 ] . next = ( NULL ) ; } if (
mr_nonContOutputArray [ 12 ] != ( NULL ) ) { mr_nonContOutputArray [ 12 ] [ 0
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 12 ] [ 0 ]
. currVal = ( char_T * ) & p4fbia00jk [ 0 ] ; mr_nonContOutputArray [ 12 ] [
0 ] . next = ( NULL ) ; } if ( mr_nonContOutputArray [ 14 ] != ( NULL ) ) {
mr_nonContOutputArray [ 14 ] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 14 ] [ 0 ] . currVal = ( char_T * ) & m5uepniu01 [ 0
] ; mr_nonContOutputArray [ 14 ] [ 0 ] . next = & ( mr_nonContOutputArray [
14 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 14 ] != ( NULL ) ) {
mr_nonContOutputArray [ 14 ] [ 1 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 14 ] [ 1 ] . currVal = ( char_T * ) & p4fbia00jk [ 0
] ; mr_nonContOutputArray [ 14 ] [ 1 ] . next = ( NULL ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 0
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 0 ]
. currVal = ( char_T * ) & m5uepniu01 [ 0 ] ; mr_nonContOutputArray [ 15 ] [
0 ] . next = & ( mr_nonContOutputArray [ 15 ] [ 1 ] ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 1
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 1 ]
. currVal = ( char_T * ) & p4fbia00jk [ 0 ] ; mr_nonContOutputArray [ 15 ] [
1 ] . next = ( NULL ) ; } if ( mr_nonContOutputArray [ 16 ] != ( NULL ) ) {
mr_nonContOutputArray [ 16 ] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 16 ] [ 0 ] . currVal = ( char_T * ) & m5uepniu01 [ 0
] ; mr_nonContOutputArray [ 16 ] [ 0 ] . next = & ( mr_nonContOutputArray [
16 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 16 ] != ( NULL ) ) {
mr_nonContOutputArray [ 16 ] [ 1 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 16 ] [ 1 ] . currVal = ( char_T * ) & p4fbia00jk [ 0
] ; mr_nonContOutputArray [ 16 ] [ 1 ] . next = ( NULL ) ; } if (
mr_nonContOutputArray [ 17 ] != ( NULL ) ) { mr_nonContOutputArray [ 17 ] [ 0
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 17 ] [ 0 ]
. currVal = ( char_T * ) & m5uepniu01 [ 0 ] ; mr_nonContOutputArray [ 17 ] [
0 ] . next = & ( mr_nonContOutputArray [ 17 ] [ 1 ] ) ; } if (
mr_nonContOutputArray [ 17 ] != ( NULL ) ) { mr_nonContOutputArray [ 17 ] [ 1
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 17 ] [ 1 ]
. currVal = ( char_T * ) & p4fbia00jk [ 0 ] ; mr_nonContOutputArray [ 17 ] [
1 ] . next = ( NULL ) ; } localZCE -> p15omtqpq4 = UNINITIALIZED_ZCSIG ;
localZCE -> e0mlha2jo0 = UNINITIALIZED_ZCSIG ; localZCE -> dqxpaagpk1 =
UNINITIALIZED_ZCSIG ; localZCE -> ngtuby0bjh = UNINITIALIZED_ZCSIG ; localZCE
-> aytb40yu5a = UNINITIALIZED_ZCSIG ; } void
mr_DinamicaCinematicaOrbital_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_DinamicaCinematicaOrbital , 43 ) ; * retVal = 1 ; } static void
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_DinamicaCinematicaOrbital_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_DinamicaCinematicaOrbital_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_DinamicaCinematicaOrbital_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_DinamicaCinematicaOrbital_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_DinamicaCinematicaOrbital_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_DinamicaCinematicaOrbital_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_DinamicaCinematicaOrbital_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_DinamicaCinematicaOrbital_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_DinamicaCinematicaOrbital_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_DinamicaCinematicaOrbital_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_DinamicaCinematicaOrbital_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_DinamicaCinematicaOrbital_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_DinamicaCinematicaOrbital_GetDWork (
const okb1gcgf0a4 * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] =
{ "rtb" , "rtdw" , "rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 ,
1 , 3 , ssDWFieldNames ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray (
ssDW , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW ->
rtb ) ) ; { static const char_T * rtdwDataFieldNames [ 29 ] = {
"mdlrefDW->rtdw.lfjiab3rx0" , "mdlrefDW->rtdw.amkx5itglp" ,
"mdlrefDW->rtdw.gaqihpfgvh" , "mdlrefDW->rtdw.eeb05vtv1t" ,
"mdlrefDW->rtdw.oe31xkoymz" , "mdlrefDW->rtdw.e4an5sv5r2" ,
"mdlrefDW->rtdw.bof552yuuq" , "mdlrefDW->rtdw.f0vx1utodn" ,
"mdlrefDW->rtdw.cucihappq5" , "mdlrefDW->rtdw.jqogfe4qpa" ,
"mdlrefDW->rtdw.gythfnrlpj" , "mdlrefDW->rtdw.hullq5n03m" ,
"mdlrefDW->rtdw.iwrz5goxlr" , "mdlrefDW->rtdw.jjbquufnup" ,
"mdlrefDW->rtdw.lnstazd0oc" , "mdlrefDW->rtdw.cofdlphuyb" ,
"mdlrefDW->rtdw.gdxl020oo3" , "mdlrefDW->rtdw.ed45uvn34h" ,
"mdlrefDW->rtdw.ibqx0tnxj5" , "mdlrefDW->rtdw.g4u5vzuzqr" ,
"mdlrefDW->rtdw.f0m5ymxxjr" , "mdlrefDW->rtdw.clhrm0hulb" ,
"mdlrefDW->rtdw.k2mpnxum4b" , "mdlrefDW->rtdw.gdluyylqio" ,
"mdlrefDW->rtdw.caph4ieys1" , "mdlrefDW->rtdw.cs5jgwctpw" ,
"mdlrefDW->rtdw.hqs052cxrs" , "mdlrefDW->rtdw.ihsebl21i0" ,
"mdlrefDW->rtdw.j1xdkh5ug2" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 29 , rtdwDataFieldNames ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtdw . lfjiab3rx0 ) , sizeof ( mdlrefDW -> rtdw .
lfjiab3rx0 ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . amkx5itglp ) , sizeof (
mdlrefDW -> rtdw . amkx5itglp ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( mdlrefDW -> rtdw . gaqihpfgvh ) , sizeof ( mdlrefDW -> rtdw .
gaqihpfgvh ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 3 , ( const void * ) & ( mdlrefDW -> rtdw . eeb05vtv1t ) , sizeof (
mdlrefDW -> rtdw . eeb05vtv1t ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( mdlrefDW -> rtdw . oe31xkoymz ) , sizeof ( mdlrefDW -> rtdw .
oe31xkoymz ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . e4an5sv5r2 ) , sizeof (
mdlrefDW -> rtdw . e4an5sv5r2 ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( mdlrefDW -> rtdw . bof552yuuq ) , sizeof ( mdlrefDW -> rtdw .
bof552yuuq ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 7 , ( const void * ) & ( mdlrefDW -> rtdw . f0vx1utodn ) , sizeof (
mdlrefDW -> rtdw . f0vx1utodn ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( mdlrefDW -> rtdw . cucihappq5 ) , sizeof ( mdlrefDW -> rtdw .
cucihappq5 ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 9 , ( const void * ) & ( mdlrefDW -> rtdw . jqogfe4qpa ) , sizeof (
mdlrefDW -> rtdw . jqogfe4qpa ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const
void * ) & ( mdlrefDW -> rtdw . gythfnrlpj ) , sizeof ( mdlrefDW -> rtdw .
gythfnrlpj ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 11 , ( const void * ) & ( mdlrefDW -> rtdw . hullq5n03m ) , sizeof (
mdlrefDW -> rtdw . hullq5n03m ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( mdlrefDW -> rtdw . iwrz5goxlr ) , sizeof ( mdlrefDW -> rtdw .
iwrz5goxlr ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 13 , ( const void * ) & ( mdlrefDW -> rtdw . jjbquufnup ) , sizeof (
mdlrefDW -> rtdw . jjbquufnup ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const
void * ) & ( mdlrefDW -> rtdw . lnstazd0oc ) , sizeof ( mdlrefDW -> rtdw .
lnstazd0oc ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 15 , ( const void * ) & ( mdlrefDW -> rtdw . cofdlphuyb ) , sizeof (
mdlrefDW -> rtdw . cofdlphuyb ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const
void * ) & ( mdlrefDW -> rtdw . gdxl020oo3 ) , sizeof ( mdlrefDW -> rtdw .
gdxl020oo3 ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 17 , ( const void * ) & ( mdlrefDW -> rtdw . ed45uvn34h ) , sizeof (
mdlrefDW -> rtdw . ed45uvn34h ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const
void * ) & ( mdlrefDW -> rtdw . ibqx0tnxj5 ) , sizeof ( mdlrefDW -> rtdw .
ibqx0tnxj5 ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 19 , ( const void * ) & ( mdlrefDW -> rtdw . g4u5vzuzqr ) , sizeof (
mdlrefDW -> rtdw . g4u5vzuzqr ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const
void * ) & ( mdlrefDW -> rtdw . f0m5ymxxjr ) , sizeof ( mdlrefDW -> rtdw .
f0m5ymxxjr ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 21 , ( const void * ) & ( mdlrefDW -> rtdw . clhrm0hulb ) , sizeof (
mdlrefDW -> rtdw . clhrm0hulb ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const
void * ) & ( mdlrefDW -> rtdw . k2mpnxum4b ) , sizeof ( mdlrefDW -> rtdw .
k2mpnxum4b ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 23 , ( const void * ) & ( mdlrefDW -> rtdw . gdluyylqio ) , sizeof (
mdlrefDW -> rtdw . gdluyylqio ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const
void * ) & ( mdlrefDW -> rtdw . caph4ieys1 ) , sizeof ( mdlrefDW -> rtdw .
caph4ieys1 ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 25 , ( const void * ) & ( mdlrefDW -> rtdw . cs5jgwctpw ) , sizeof (
mdlrefDW -> rtdw . cs5jgwctpw ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const
void * ) & ( mdlrefDW -> rtdw . hqs052cxrs ) , sizeof ( mdlrefDW -> rtdw .
hqs052cxrs ) ) ; mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData ,
0 , 27 , ( const void * ) & ( mdlrefDW -> rtdw . ihsebl21i0 ) , sizeof (
mdlrefDW -> rtdw . ihsebl21i0 ) ) ;
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const
void * ) & ( mdlrefDW -> rtdw . j1xdkh5ug2 ) , sizeof ( mdlrefDW -> rtdw .
j1xdkh5ug2 ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; }
mr_DinamicaCinematicaOrbital_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const void
* ) & ( mdlrefDW -> rtzce ) , sizeof ( mdlrefDW -> rtzce ) ) ; ( void )
mdlrefDW ; return ssDW ; } void mr_DinamicaCinematicaOrbital_SetDWork (
okb1gcgf0a4 * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void )
mdlrefDW ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) &
( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . lfjiab3rx0 ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw .
lfjiab3rx0 ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . amkx5itglp ) , rtdwData , 0 , 1 , sizeof (
mdlrefDW -> rtdw . amkx5itglp ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . gaqihpfgvh ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
gaqihpfgvh ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . eeb05vtv1t ) , rtdwData , 0 , 3 , sizeof (
mdlrefDW -> rtdw . eeb05vtv1t ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . oe31xkoymz ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw .
oe31xkoymz ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . e4an5sv5r2 ) , rtdwData , 0 , 5 , sizeof (
mdlrefDW -> rtdw . e4an5sv5r2 ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . bof552yuuq ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw .
bof552yuuq ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . f0vx1utodn ) , rtdwData , 0 , 7 , sizeof (
mdlrefDW -> rtdw . f0vx1utodn ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . cucihappq5 ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw .
cucihappq5 ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . jqogfe4qpa ) , rtdwData , 0 , 9 , sizeof (
mdlrefDW -> rtdw . jqogfe4qpa ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . gythfnrlpj ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw .
gythfnrlpj ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . hullq5n03m ) , rtdwData , 0 , 11 , sizeof (
mdlrefDW -> rtdw . hullq5n03m ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . iwrz5goxlr ) , rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw .
iwrz5goxlr ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . jjbquufnup ) , rtdwData , 0 , 13 , sizeof (
mdlrefDW -> rtdw . jjbquufnup ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . lnstazd0oc ) , rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw .
lnstazd0oc ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . cofdlphuyb ) , rtdwData , 0 , 15 , sizeof (
mdlrefDW -> rtdw . cofdlphuyb ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . gdxl020oo3 ) , rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw .
gdxl020oo3 ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . ed45uvn34h ) , rtdwData , 0 , 17 , sizeof (
mdlrefDW -> rtdw . ed45uvn34h ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . ibqx0tnxj5 ) , rtdwData , 0 , 18 , sizeof ( mdlrefDW -> rtdw .
ibqx0tnxj5 ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . g4u5vzuzqr ) , rtdwData , 0 , 19 , sizeof (
mdlrefDW -> rtdw . g4u5vzuzqr ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . f0m5ymxxjr ) , rtdwData , 0 , 20 , sizeof ( mdlrefDW -> rtdw .
f0m5ymxxjr ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . clhrm0hulb ) , rtdwData , 0 , 21 , sizeof (
mdlrefDW -> rtdw . clhrm0hulb ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . k2mpnxum4b ) , rtdwData , 0 , 22 , sizeof ( mdlrefDW -> rtdw .
k2mpnxum4b ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . gdluyylqio ) , rtdwData , 0 , 23 , sizeof (
mdlrefDW -> rtdw . gdluyylqio ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . caph4ieys1 ) , rtdwData , 0 , 24 , sizeof ( mdlrefDW -> rtdw .
caph4ieys1 ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . cs5jgwctpw ) , rtdwData , 0 , 25 , sizeof (
mdlrefDW -> rtdw . cs5jgwctpw ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . hqs052cxrs ) , rtdwData , 0 , 26 , sizeof ( mdlrefDW -> rtdw .
hqs052cxrs ) ) ; mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . ihsebl21i0 ) , rtdwData , 0 , 27 , sizeof (
mdlrefDW -> rtdw . ihsebl21i0 ) ) ;
mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . j1xdkh5ug2 ) , rtdwData , 0 , 28 , sizeof ( mdlrefDW -> rtdw .
j1xdkh5ug2 ) ) ; } mr_DinamicaCinematicaOrbital_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtzce ) , ssDW , 0 , 2 , sizeof ( mdlrefDW -> rtzce
) ) ; } void mr_DinamicaCinematicaOrbital_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 710354314U , 3205969955U ,
2488477419U , 4078813354U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"DinamicaCinematicaOrbital" , & chksum [ 0 ] ) ; } mxArray *
mr_DinamicaCinematicaOrbital_GetSimStateDisallowedBlocks ( ) { return ( NULL
) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
