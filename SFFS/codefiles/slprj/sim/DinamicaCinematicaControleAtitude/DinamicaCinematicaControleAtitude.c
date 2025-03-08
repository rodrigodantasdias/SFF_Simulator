#include "DinamicaCinematicaControleAtitude.h"
#include "DinamicaCinematicaControleAtitude_types.h"
#include "rtwtypes.h"
#include "DinamicaCinematicaControleAtitude_private.h"
#include <string.h>
#include "mwmathutil.h"
#include <time.h>
#include <stddef.h>
#include <emmintrin.h>
#include "rt_invd3x3_snf.h"
#include "DinamicaCinematicaControleAtitude_capi.h"
static RegMdlInfo rtMdlInfo_DinamicaCinematicaControleAtitude [ 67 ] = { {
"l04uu2snf5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "hyjfb3d4q0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "ahfjrbcqwv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "e4p0g4jjx5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "m15q0broty" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "lk0bamcc1o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "blycseynn1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "lfy0hvlr1n" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "cx4xt01uq3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "l3rsbvsnd5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "nhtodygfx5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "khk1scvm25" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "msxjw54xyk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "iqjk2gahmfr" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "kumarp2szo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "okj1xtbwos" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "gwbyxwa4tx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "cab0fr3dkp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "kgn2b3e1e5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "puo43s1gwm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "mcofgvk0eq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "htzld253p3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "dpq2b5rn4g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "anyin0xspl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "fmsywn5k3k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "ggv1uslzom" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "krigp330xt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "orfqfxv5ml" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "ahuawvdebl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "lznsn3um3w" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "aor4xhnafp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "k11bgqmkqe" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "hmf3dz3lsy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "mzdzfjacw2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "h5q2grtpc0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "iax1yymlbh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "gfhyalibc1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "pmywb0odxl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "jtgeescbrm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "knyryp1wqz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "nki5kakwlj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "jdi3khs4aj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "cegfa2unkg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "aug3s2wk5x" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "cu1nnhp3ii" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "ooql4bod4m" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Random Source1" } , {
"DinamicaCinematicaControleAtitude" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
0 , ( NULL ) } , { "jsqu1yeqk5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "DinamicaCinematicaControleAtitude" } , { "hxlpb0imdfh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "l2ujah55jg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "adbbpxjmjx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , { "dsp_simulink_RandomSource1" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_DinamicaCinematicaControleAtitude_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , {
"mr_DinamicaCinematicaControleAtitude_extractBitFieldFromCellArrayWithOffset"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , {
"mr_DinamicaCinematicaControleAtitude_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , {
"mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , {
"mr_DinamicaCinematicaControleAtitude_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , {
"mr_DinamicaCinematicaControleAtitude_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , {
"mr_DinamicaCinematicaControleAtitude_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , {
"mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , {
"mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , {
"mr_DinamicaCinematicaControleAtitude_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , {
"mr_DinamicaCinematicaControleAtitude_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "DinamicaCinematicaControleAtitude" } , {
"mr_DinamicaCinematicaControleAtitude_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "DinamicaCinematicaControleAtitude" } , { "eyuh5lmif5"
, MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DinamicaCinematicaControleAtitude" } , {
"DinamicaCinematicaControleAtitude.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , (
NULL ) } , { "DinamicaCinematicaControleAtitude.c" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( void * ) "DinamicaCinematicaControleAtitude" } } ; hxlpb0imdfh
hxlpb0imdf = { 0.0017453292519943296 , 0.0017453292519943296 ,
0.0017453292519943296 , 0.5 , 0.0 , { 0.10667 , 0.0 , 0.0 , 0.0 , 0.10667 ,
0.0 , 0.0 , 0.0 , 0.10667 } , { 0.0 , 0.0 , 0.02 } , true , { -
1.7453292519943296E-5 , 1.7453292519943296E-5 } , { - 1.7453292519943296E-5 ,
1.7453292519943296E-5 } , { - 1.7453292519943296E-5 , 1.7453292519943296E-5 }
} ; static real_T lvyi0xz0cq ( void ) ; static real_T ldp3u3vqdg ( real_T x )
; static void a1thopmkvt ( uint32_T mt [ 625 ] , uint32_T seed ) ; static
void lw5ftkhise ( uint32_T mt [ 625 ] , uint32_T u [ 2 ] ) ; static boolean_T
ipokr2iiul ( const uint32_T mt [ 625 ] ) ; static real_T cohr5aqcd5 (
khk1scvm25 * localDW ) ; static void dcuknr0azp ( eyuh5lmif5 * obj ,
khk1scvm25 * localDW ) ; static real_T lvyi0xz0cq ( void ) { time_t rawtime ;
struct tm expl_temp ; real_T dDateNum ; int32_T r ; int16_T cDaysMonthWise [
12 ] ; boolean_T guard1 ; cDaysMonthWise [ 0 ] = 0 ; cDaysMonthWise [ 1 ] =
31 ; cDaysMonthWise [ 2 ] = 59 ; cDaysMonthWise [ 3 ] = 90 ; cDaysMonthWise [
4 ] = 120 ; cDaysMonthWise [ 5 ] = 151 ; cDaysMonthWise [ 6 ] = 181 ;
cDaysMonthWise [ 7 ] = 212 ; cDaysMonthWise [ 8 ] = 243 ; cDaysMonthWise [ 9
] = 273 ; cDaysMonthWise [ 10 ] = 304 ; cDaysMonthWise [ 11 ] = 334 ; time (
& rawtime ) ; expl_temp = * localtime ( & rawtime ) ; dDateNum = ( ( ( ( (
real_T ) ( expl_temp . tm_year + 1900 ) * 365.0 + muDoubleScalarCeil ( (
real_T ) ( expl_temp . tm_year + 1900 ) / 4.0 ) ) - muDoubleScalarCeil ( (
real_T ) ( expl_temp . tm_year + 1900 ) / 100.0 ) ) + muDoubleScalarCeil ( (
real_T ) ( expl_temp . tm_year + 1900 ) / 400.0 ) ) + ( real_T )
cDaysMonthWise [ expl_temp . tm_mon ] ) + ( real_T ) expl_temp . tm_mday ; if
( expl_temp . tm_mon + 1 > 2 ) { if ( expl_temp . tm_year + 1900 == 0 ) { r =
0 ; } else { r = ( int32_T ) muDoubleScalarRem ( expl_temp . tm_year + 1900 ,
4.0 ) ; if ( ( r != 0 ) && ( expl_temp . tm_year + 1900 < 0 ) ) { r += 4 ; }
} guard1 = false ; if ( r == 0 ) { if ( expl_temp . tm_year + 1900 != 0 ) { r
= ( int32_T ) muDoubleScalarRem ( expl_temp . tm_year + 1900 , 100.0 ) ; if (
( r != 0 ) && ( expl_temp . tm_year + 1900 < 0 ) ) { r += 100 ; } } if ( r !=
0 ) { dDateNum ++ ; } else { guard1 = true ; } } else { guard1 = true ; } if
( guard1 ) { if ( expl_temp . tm_year + 1900 == 0 ) { r = 0 ; } else { r = (
int32_T ) muDoubleScalarRem ( expl_temp . tm_year + 1900 , 400.0 ) ; if ( ( r
!= 0 ) && ( expl_temp . tm_year + 1900 < 0 ) ) { r += 400 ; } } if ( r == 0 )
{ dDateNum ++ ; } } } return ( ( ( real_T ) expl_temp . tm_hour * 3600.0 + (
real_T ) expl_temp . tm_min * 60.0 ) + ( real_T ) expl_temp . tm_sec ) /
86400.0 + dDateNum ; } static real_T ldp3u3vqdg ( real_T x ) { real_T r ; if
( muDoubleScalarIsNaN ( x ) || muDoubleScalarIsInf ( x ) ) { r = ( rtNaN ) ;
} else if ( x == 0.0 ) { r = 0.0 ; } else { r = muDoubleScalarRem ( x ,
2.147483647E+9 ) ; if ( r == 0.0 ) { r = 0.0 ; } else if ( x < 0.0 ) { r +=
2.147483647E+9 ; } } return r ; } static void a1thopmkvt ( uint32_T mt [ 625
] , uint32_T seed ) { int32_T b_mti ; uint32_T r ; r = seed ; mt [ 0 ] = seed
; for ( b_mti = 0 ; b_mti < 623 ; b_mti ++ ) { r = ( ( r >> 30U ^ r ) *
1812433253U + ( uint32_T ) b_mti ) + 1U ; mt [ b_mti + 1 ] = r ; } mt [ 624 ]
= 624U ; } static void lw5ftkhise ( uint32_T mt [ 625 ] , uint32_T u [ 2 ] )
{ int32_T b_j ; int32_T b_kk ; uint32_T mti ; uint32_T y ; for ( b_j = 0 ;
b_j < 2 ; b_j ++ ) { mti = mt [ 624 ] + 1U ; if ( mt [ 624 ] + 1U >= 625U ) {
for ( b_kk = 0 ; b_kk < 227 ; b_kk ++ ) { y = ( mt [ b_kk + 1 ] & 2147483647U
) | ( mt [ b_kk ] & 2147483648U ) ; if ( ( y & 1U ) == 0U ) { mti = y >> 1U ;
} else { mti = y >> 1U ^ 2567483615U ; } mt [ b_kk ] = mt [ b_kk + 397 ] ^
mti ; } for ( b_kk = 0 ; b_kk < 396 ; b_kk ++ ) { y = ( mt [ b_kk + 227 ] &
2147483648U ) | ( mt [ b_kk + 228 ] & 2147483647U ) ; if ( ( y & 1U ) == 0U )
{ mti = y >> 1U ; } else { mti = y >> 1U ^ 2567483615U ; } mt [ b_kk + 227 ]
= mt [ b_kk ] ^ mti ; } y = ( mt [ 623 ] & 2147483648U ) | ( mt [ 0 ] &
2147483647U ) ; if ( ( y & 1U ) == 0U ) { mti = y >> 1U ; } else { mti = y >>
1U ^ 2567483615U ; } mt [ 623 ] = mt [ 396 ] ^ mti ; mti = 1U ; } y = mt [ (
int32_T ) mti - 1 ] ; mt [ 624 ] = mti ; y ^= y >> 11U ; y ^= y << 7U &
2636928640U ; y ^= y << 15U & 4022730752U ; u [ b_j ] = y >> 18U ^ y ; } }
static boolean_T ipokr2iiul ( const uint32_T mt [ 625 ] ) { int32_T k ;
boolean_T exitg1 ; boolean_T isvalid ; if ( ( mt [ 624 ] >= 1U ) && ( mt [
624 ] < 625U ) ) { isvalid = false ; k = 0 ; exitg1 = false ; while ( ( !
exitg1 ) && ( k + 1 < 625 ) ) { if ( mt [ k ] == 0U ) { k ++ ; } else {
isvalid = true ; exitg1 = true ; } } } else { isvalid = false ; } return
isvalid ; } static real_T cohr5aqcd5 ( khk1scvm25 * localDW ) { real_T r ;
int32_T b_mti ; int32_T exitg1 ; uint32_T b_u [ 2 ] ; uint32_T hi ; uint32_T
r_p ; if ( localDW -> lova5natot == 4U ) { hi = localDW -> c2uwwswwrz /
127773U ; r_p = ( localDW -> c2uwwswwrz - hi * 127773U ) * 16807U ; hi *=
2836U ; if ( r_p < hi ) { r_p = ~ ( hi - r_p ) & 2147483647U ; } else { r_p
-= hi ; } r = ( real_T ) r_p * 4.6566128752457969E-10 ; localDW -> c2uwwswwrz
= r_p ; } else if ( localDW -> lova5natot == 5U ) { r_p = 69069U * localDW ->
lpjepc432n [ 0 ] + 1234567U ; hi = localDW -> lpjepc432n [ 1 ] << 13 ^
localDW -> lpjepc432n [ 1 ] ; hi ^= hi >> 17 ; hi ^= hi << 5 ; localDW ->
lpjepc432n [ 0 ] = r_p ; localDW -> lpjepc432n [ 1 ] = hi ; r = ( real_T ) (
r_p + hi ) * 2.328306436538696E-10 ; } else { do { exitg1 = 0 ; lw5ftkhise (
localDW -> b33jgqukxo , b_u ) ; r = ( ( real_T ) ( b_u [ 0 ] >> 5U ) *
6.7108864E+7 + ( real_T ) ( b_u [ 1 ] >> 6U ) ) * 1.1102230246251565E-16 ; if
( r == 0.0 ) { if ( ! ipokr2iiul ( localDW -> b33jgqukxo ) ) { r_p = 5489U ;
localDW -> b33jgqukxo [ 0 ] = 5489U ; for ( b_mti = 0 ; b_mti < 623 ; b_mti
++ ) { r_p = ( ( r_p >> 30U ^ r_p ) * 1812433253U + ( uint32_T ) b_mti ) + 1U
; localDW -> b33jgqukxo [ b_mti + 1 ] = r_p ; } localDW -> b33jgqukxo [ 624 ]
= 624U ; } } else { exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } return r ; }
static void dcuknr0azp ( eyuh5lmif5 * obj , khk1scvm25 * localDW ) { time_t
eTime ; time_t eTime_p ; real_T s ; real_T x ; int32_T exitg1 ; int32_T i ;
uint32_T state [ 625 ] ; uint32_T seed ; uint32_T tmethod ; if ( localDW ->
ldulomjtq2 == 4U ) { tmethod = localDW -> lova5natot | 16384U ; } else if (
localDW -> ldulomjtq2 == 5U ) { tmethod = localDW -> lova5natot | 32768U ; }
else { tmethod = localDW -> lova5natot ; } if ( localDW -> lova5natot == 7U )
{ memcpy ( & state [ 0 ] , & localDW -> b33jgqukxo [ 0 ] , 625U * sizeof (
uint32_T ) ) ; } else { memset ( & state [ 0 ] , 0 , 625U * sizeof ( uint32_T
) ) ; if ( localDW -> lova5natot == 4U ) { state [ 0 ] = localDW ->
c2uwwswwrz ; } else { state [ 0 ] = localDW -> lpjepc432n [ 0 ] ; state [ 1 ]
= localDW -> lpjepc432n [ 1 ] ; } } x = lvyi0xz0cq ( ) * 8.64E+6 ; s =
ldp3u3vqdg ( muDoubleScalarFloor ( x ) ) ; eTime = time ( NULL ) ; do {
exitg1 = 0 ; eTime_p = time ( NULL ) ; if ( ( int32_T ) eTime_p <= ( int32_T
) eTime + 1 ) { x = lvyi0xz0cq ( ) * 8.64E+6 ; if ( s != ldp3u3vqdg (
muDoubleScalarFloor ( x ) ) ) { exitg1 = 1 ; } } else { exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; x = muDoubleScalarRound ( s ) ; if ( x <
4.294967296E+9 ) { if ( x >= 0.0 ) { seed = ( uint32_T ) x ; } else { seed =
0U ; } } else if ( x >= 4.294967296E+9 ) { seed = MAX_uint32_T ; } else {
seed = 0U ; } if ( seed == 0U ) { seed = 5489U ; } a1thopmkvt ( localDW ->
b33jgqukxo , seed ) ; localDW -> jwkog5tsy0 = seed ; localDW -> lova5natot =
7U ; a1thopmkvt ( localDW -> b33jgqukxo , localDW -> jwkog5tsy0 ) ; localDW
-> ldulomjtq2 = 0U ; x = cohr5aqcd5 ( localDW ) ; if ( ( tmethod & 16384U )
!= 0U ) { localDW -> ldulomjtq2 = 4U ; } else if ( ( tmethod & 32768U ) != 0U
) { localDW -> ldulomjtq2 = 5U ; } tmethod &= 16383U ; localDW -> lova5natot
= tmethod ; if ( tmethod == 7U ) { memcpy ( & localDW -> b33jgqukxo [ 0 ] , &
state [ 0 ] , 625U * sizeof ( uint32_T ) ) ; } else if ( tmethod == 5U ) {
localDW -> lpjepc432n [ 0 ] = state [ 0 ] ; localDW -> lpjepc432n [ 1 ] =
state [ 1 ] ; } else if ( tmethod == 4U ) { localDW -> c2uwwswwrz = state [ 0
] ; } memset ( & obj -> pRandStream [ 0 ] , 0 , 625U * sizeof ( uint32_T ) )
; x = muDoubleScalarFloor ( x * 1.048576E+6 ) + 1.0 ; if ( x < 4.294967296E+9
) { if ( x >= 0.0 ) { tmethod = ( uint32_T ) x ; } else { tmethod = 0U ; } }
else if ( x >= 4.294967296E+9 ) { tmethod = MAX_uint32_T ; } else { tmethod =
0U ; } obj -> pRandStream [ 0 ] = tmethod ; for ( i = 0 ; i < 623 ; i ++ ) {
tmethod = ( ( tmethod >> 30U ^ tmethod ) * 1812433253U + ( uint32_T ) i ) +
1U ; obj -> pRandStream [ i + 1 ] = tmethod ; } obj -> pRandStream [ 624 ] =
624U ; } void jdi3khs4aj ( khk1scvm25 * localDW ) { dcuknr0azp ( & localDW ->
khdlnzzcpl , localDW ) ; } void aug3s2wk5x ( khk1scvm25 * localDW ,
nhtodygfx5 * localP ) { static const uint32_T tmp [ 625 ] = { 5489U ,
1301868182U , 2938499221U , 2950281878U , 1875628136U , 751856242U ,
944701696U , 2243192071U , 694061057U , 219885934U , 2066767472U ,
3182869408U , 485472502U , 2336857883U , 1071588843U , 3418470598U ,
951210697U , 3693558366U , 2923482051U , 1793174584U , 2982310801U ,
1586906132U , 1951078751U , 1808158765U , 1733897588U , 431328322U ,
4202539044U , 530658942U , 1714810322U , 3025256284U , 3342585396U ,
1937033938U , 2640572511U , 1654299090U , 3692403553U , 4233871309U ,
3497650794U , 862629010U , 2943236032U , 2426458545U , 1603307207U ,
1133453895U , 3099196360U , 2208657629U , 2747653927U , 931059398U ,
761573964U , 3157853227U , 785880413U , 730313442U , 124945756U , 2937117055U
, 3295982469U , 1724353043U , 3021675344U , 3884886417U , 4010150098U ,
4056961966U , 699635835U , 2681338818U , 1339167484U , 720757518U ,
2800161476U , 2376097373U , 1532957371U , 3902664099U , 1238982754U ,
3725394514U , 3449176889U , 3570962471U , 4287636090U , 4087307012U ,
3603343627U , 202242161U , 2995682783U , 1620962684U , 3704723357U ,
371613603U , 2814834333U , 2111005706U , 624778151U , 2094172212U ,
4284947003U , 1211977835U , 991917094U , 1570449747U , 2962370480U ,
1259410321U , 170182696U , 146300961U , 2836829791U , 619452428U ,
2723670296U , 1881399711U , 1161269684U , 1675188680U , 4132175277U ,
780088327U , 3409462821U , 1036518241U , 1834958505U , 3048448173U ,
161811569U , 618488316U , 44795092U , 3918322701U , 1924681712U , 3239478144U
, 383254043U , 4042306580U , 2146983041U , 3992780527U , 3518029708U ,
3545545436U , 3901231469U , 1896136409U , 2028528556U , 2339662006U ,
501326714U , 2060962201U , 2502746480U , 561575027U , 581893337U ,
3393774360U , 1778912547U , 3626131687U , 2175155826U , 319853231U ,
986875531U , 819755096U , 2915734330U , 2688355739U , 3482074849U , 2736559U
, 2296975761U , 1029741190U , 2876812646U , 690154749U , 579200347U ,
4027461746U , 1285330465U , 2701024045U , 4117700889U , 759495121U ,
3332270341U , 2313004527U , 2277067795U , 4131855432U , 2722057515U ,
1264804546U , 3848622725U , 2211267957U , 4100593547U , 959123777U ,
2130745407U , 3194437393U , 486673947U , 1377371204U , 17472727U , 352317554U
, 3955548058U , 159652094U , 1232063192U , 3835177280U , 49423123U ,
3083993636U , 733092U , 2120519771U , 2573409834U , 1112952433U , 3239502554U
, 761045320U , 1087580692U , 2540165110U , 641058802U , 1792435497U ,
2261799288U , 1579184083U , 627146892U , 2165744623U , 2200142389U ,
2167590760U , 2381418376U , 1793358889U , 3081659520U , 1663384067U ,
2009658756U , 2689600308U , 739136266U , 2304581039U , 3529067263U ,
591360555U , 525209271U , 3131882996U , 294230224U , 2076220115U ,
3113580446U , 1245621585U , 1386885462U , 3203270426U , 123512128U ,
12350217U , 354956375U , 4282398238U , 3356876605U , 3888857667U , 157639694U
, 2616064085U , 1563068963U , 2762125883U , 4045394511U , 4180452559U ,
3294769488U , 1684529556U , 1002945951U , 3181438866U , 22506664U ,
691783457U , 2685221343U , 171579916U , 3878728600U , 2475806724U ,
2030324028U , 3331164912U , 1708711359U , 1970023127U , 2859691344U ,
2588476477U , 2748146879U , 136111222U , 2967685492U , 909517429U ,
2835297809U , 3206906216U , 3186870716U , 341264097U , 2542035121U ,
3353277068U , 548223577U , 3170936588U , 1678403446U , 297435620U ,
2337555430U , 466603495U , 1132321815U , 1208589219U , 696392160U ,
894244439U , 2562678859U , 470224582U , 3306867480U , 201364898U ,
2075966438U , 1767227936U , 2929737987U , 3674877796U , 2654196643U ,
3692734598U , 3528895099U , 2796780123U , 3048728353U , 842329300U ,
191554730U , 2922459673U , 3489020079U , 3979110629U , 1022523848U ,
2202932467U , 3583655201U , 3565113719U , 587085778U , 4176046313U ,
3013713762U , 950944241U , 396426791U , 3784844662U , 3477431613U ,
3594592395U , 2782043838U , 3392093507U , 3106564952U , 2829419931U ,
1358665591U , 2206918825U , 3170783123U , 31522386U , 2988194168U ,
1782249537U , 1105080928U , 843500134U , 1225290080U , 1521001832U ,
3605886097U , 2802786495U , 2728923319U , 3996284304U , 903417639U ,
1171249804U , 1020374987U , 2824535874U , 423621996U , 1988534473U ,
2493544470U , 1008604435U , 1756003503U , 1488867287U , 1386808992U ,
732088248U , 1780630732U , 2482101014U , 976561178U , 1543448953U ,
2602866064U , 2021139923U , 1952599828U , 2360242564U , 2117959962U ,
2753061860U , 2388623612U , 4138193781U , 2962920654U , 2284970429U ,
766920861U , 3457264692U , 2879611383U , 815055854U , 2332929068U ,
1254853997U , 3740375268U , 3799380844U , 4091048725U , 2006331129U ,
1982546212U , 686850534U , 1907447564U , 2682801776U , 2780821066U ,
998290361U , 1342433871U , 4195430425U , 607905174U , 3902331779U ,
2454067926U , 1708133115U , 1170874362U , 2008609376U , 3260320415U ,
2211196135U , 433538229U , 2728786374U , 2189520818U , 262554063U ,
1182318347U , 3710237267U , 1221022450U , 715966018U , 2417068910U ,
2591870721U , 2870691989U , 3418190842U , 4238214053U , 1540704231U ,
1575580968U , 2095917976U , 4078310857U , 2313532447U , 2110690783U ,
4056346629U , 4061784526U , 1123218514U , 551538993U , 597148360U ,
4120175196U , 3581618160U , 3181170517U , 422862282U , 3227524138U ,
1713114790U , 662317149U , 1230418732U , 928171837U , 1324564878U ,
1928816105U , 1786535431U , 2878099422U , 3290185549U , 539474248U ,
1657512683U , 552370646U , 1671741683U , 3655312128U , 1552739510U ,
2605208763U , 1441755014U , 181878989U , 3124053868U , 1447103986U ,
3183906156U , 1728556020U , 3502241336U , 3055466967U , 1013272474U ,
818402132U , 1715099063U , 2900113506U , 397254517U , 4194863039U ,
1009068739U , 232864647U , 2540223708U , 2608288560U , 2415367765U ,
478404847U , 3455100648U , 3182600021U , 2115988978U , 434269567U ,
4117179324U , 3461774077U , 887256537U , 3545801025U , 286388911U ,
3451742129U , 1981164769U , 786667016U , 3310123729U , 3097811076U ,
2224235657U , 2959658883U , 3370969234U , 2514770915U , 3345656436U ,
2677010851U , 2206236470U , 271648054U , 2342188545U , 4292848611U ,
3646533909U , 3754009956U , 3803931226U , 4160647125U , 1477814055U ,
4043852216U , 1876372354U , 3133294443U , 3871104810U , 3177020907U ,
2074304428U , 3479393793U , 759562891U , 164128153U , 1839069216U ,
2114162633U , 3989947309U , 3611054956U , 1333547922U , 835429831U ,
494987340U , 171987910U , 1252001001U , 370809172U , 3508925425U ,
2535703112U , 1276855041U , 1922855120U , 835673414U , 3030664304U ,
613287117U , 171219893U , 3423096126U , 3376881639U , 2287770315U ,
1658692645U , 1262815245U , 3957234326U , 1168096164U , 2968737525U ,
2655813712U , 2132313144U , 3976047964U , 326516571U , 353088456U ,
3679188938U , 3205649712U , 2654036126U , 1249024881U , 880166166U ,
691800469U , 2229503665U , 1673458056U , 4032208375U , 1851778863U ,
2563757330U , 376742205U , 1794655231U , 340247333U , 1505873033U ,
396524441U , 879666767U , 3335579166U , 3260764261U , 3335999539U ,
506221798U , 4214658741U , 975887814U , 2080536343U , 3360539560U ,
571586418U , 138896374U , 4234352651U , 2737620262U , 3928362291U ,
1516365296U , 38056726U , 3599462320U , 3585007266U , 3850961033U ,
471667319U , 1536883193U , 2310166751U , 1861637689U , 2530999841U ,
4139843801U , 2710569485U , 827578615U , 2012334720U , 2907369459U ,
3029312804U , 2820112398U , 1965028045U , 35518606U , 2478379033U ,
643747771U , 1924139484U , 4123405127U , 3811735531U , 3429660832U ,
3285177704U , 1948416081U , 1311525291U , 1183517742U , 1739192232U ,
3979815115U , 2567840007U , 4116821529U , 213304419U , 4125718577U ,
1473064925U , 2442436592U , 1893310111U , 4195361916U , 3747569474U ,
828465101U , 2991227658U , 750582866U , 1205170309U , 1409813056U ,
678418130U , 1171531016U , 3821236156U , 354504587U , 4202874632U ,
3882511497U , 1893248677U , 1903078632U , 26340130U , 2069166240U ,
3657122492U , 3725758099U , 831344905U , 811453383U , 3447711422U ,
2434543565U , 4166886888U , 3358210805U , 4142984013U , 2988152326U ,
3527824853U , 982082992U , 2809155763U , 190157081U , 3340214818U ,
2365432395U , 2548636180U , 2894533366U , 3474657421U , 2372634704U ,
2845748389U , 43024175U , 2774226648U , 1987702864U , 3186502468U ,
453610222U , 4204736567U , 1392892630U , 2471323686U , 2470534280U ,
3541393095U , 4269885866U , 3909911300U , 759132955U , 1482612480U ,
667715263U , 1795580598U , 2337923983U , 3390586366U , 581426223U ,
1515718634U , 476374295U , 705213300U , 363062054U , 2084697697U ,
2407503428U , 2292957699U , 2426213835U , 2199989172U , 1987356470U ,
4026755612U , 2147252133U , 270400031U , 1367820199U , 2369854699U ,
2844269403U , 79981964U , 624U } ; localDW -> fcl0i4s23y = true ; localDW ->
lova5natot = 7U ; localDW -> owudl4s4vs = true ; localDW -> ldulomjtq2 = 0U ;
localDW -> c5axmpduuz = true ; localDW -> gakqowpeu0 [ 0 ] = 362436069U ;
localDW -> gakqowpeu0 [ 1 ] = 521288629U ; localDW -> n0ya0gspe2 = true ;
memcpy ( & localDW -> b33jgqukxo [ 0 ] , & tmp [ 0 ] , 625U * sizeof (
uint32_T ) ) ; localDW -> j1ajf5oks5 = true ; localDW -> c2uwwswwrz =
1144108930U ; localDW -> hai52o34ao = true ; localDW -> lpjepc432n [ 0 ] =
362436069U ; localDW -> lpjepc432n [ 1 ] = 521288629U ; localDW -> gacsk4ue1c
= true ; localDW -> khdlnzzcpl . TunablePropsChanged = false ; localDW ->
khdlnzzcpl . tunablePropertyChanged [ 0 ] = false ; localDW -> khdlnzzcpl .
tunablePropertyChanged [ 1 ] = false ; localDW -> khdlnzzcpl .
tunablePropertyChanged [ 2 ] = false ; localDW -> khdlnzzcpl .
tunablePropertyChanged [ 3 ] = false ; localDW -> agdmtiie2i = true ; localDW
-> khdlnzzcpl . MinVal = localP -> P_0 ; localDW -> khdlnzzcpl . MaxVal =
localP -> P_1 ; localDW -> khdlnzzcpl . isInitialized = 1 ; localDW ->
khdlnzzcpl . pA = 1.0 ; localDW -> khdlnzzcpl . pB = 0.0 ; dcuknr0azp ( &
localDW -> khdlnzzcpl , localDW ) ; localDW -> khdlnzzcpl . pA = localDW ->
khdlnzzcpl . MaxVal - localDW -> khdlnzzcpl . MinVal ; localDW -> khdlnzzcpl
. pB = localDW -> khdlnzzcpl . MinVal ; localDW -> khdlnzzcpl .
TunablePropsChanged = false ; } void ooql4bod4m ( msxjw54xyk * localB ,
khk1scvm25 * localDW , nhtodygfx5 * localP ) { real_T b_r ; int32_T exitg2 ;
int32_T i ; uint32_T varargin_1 [ 625 ] ; uint32_T b_u [ 2 ] ; uint32_T r ;
boolean_T flag [ 4 ] ; boolean_T exitg1 ; boolean_T propChanged ; if (
localDW -> khdlnzzcpl . MinVal != localP -> P_0 ) { if ( localDW ->
khdlnzzcpl . isInitialized == 1 ) { localDW -> khdlnzzcpl .
TunablePropsChanged = true ; localDW -> khdlnzzcpl . tunablePropertyChanged [
0 ] = true ; } localDW -> khdlnzzcpl . MinVal = localP -> P_0 ; } if (
localDW -> khdlnzzcpl . MaxVal != localP -> P_1 ) { if ( localDW ->
khdlnzzcpl . isInitialized == 1 ) { localDW -> khdlnzzcpl .
TunablePropsChanged = true ; localDW -> khdlnzzcpl . tunablePropertyChanged [
1 ] = true ; } localDW -> khdlnzzcpl . MaxVal = localP -> P_1 ; } if (
localDW -> khdlnzzcpl . TunablePropsChanged ) { localDW -> khdlnzzcpl .
TunablePropsChanged = false ; flag [ 0 ] = localDW -> khdlnzzcpl .
tunablePropertyChanged [ 1 ] ; flag [ 1 ] = localDW -> khdlnzzcpl .
tunablePropertyChanged [ 0 ] ; flag [ 2 ] = localDW -> khdlnzzcpl .
tunablePropertyChanged [ 2 ] ; flag [ 3 ] = localDW -> khdlnzzcpl .
tunablePropertyChanged [ 3 ] ; propChanged = false ; i = 0 ; exitg1 = false ;
while ( ( ! exitg1 ) && ( i < 4 ) ) { if ( flag [ i ] ) { propChanged = true
; exitg1 = true ; } else { i ++ ; } } if ( propChanged ) { localDW ->
khdlnzzcpl . pA = localDW -> khdlnzzcpl . MaxVal - localDW -> khdlnzzcpl .
MinVal ; localDW -> khdlnzzcpl . pB = localDW -> khdlnzzcpl . MinVal ; }
localDW -> khdlnzzcpl . tunablePropertyChanged [ 0 ] = false ; localDW ->
khdlnzzcpl . tunablePropertyChanged [ 1 ] = false ; localDW -> khdlnzzcpl .
tunablePropertyChanged [ 2 ] = false ; localDW -> khdlnzzcpl .
tunablePropertyChanged [ 3 ] = false ; } memcpy ( & varargin_1 [ 0 ] , &
localDW -> khdlnzzcpl . pRandStream [ 0 ] , 625U * sizeof ( uint32_T ) ) ; do
{ exitg2 = 0 ; lw5ftkhise ( varargin_1 , b_u ) ; b_r = ( ( real_T ) ( b_u [ 0
] >> 5U ) * 6.7108864E+7 + ( real_T ) ( b_u [ 1 ] >> 6U ) ) *
1.1102230246251565E-16 ; if ( b_r == 0.0 ) { if ( ! ipokr2iiul ( varargin_1 )
) { r = 5489U ; varargin_1 [ 0 ] = 5489U ; for ( i = 0 ; i < 623 ; i ++ ) { r
= ( ( r >> 30U ^ r ) * 1812433253U + ( uint32_T ) i ) + 1U ; varargin_1 [ i +
1 ] = r ; } varargin_1 [ 624 ] = 624U ; } } else { exitg2 = 1 ; } } while (
exitg2 == 0 ) ; memcpy ( & localDW -> khdlnzzcpl . pRandStream [ 0 ] , &
varargin_1 [ 0 ] , 625U * sizeof ( uint32_T ) ) ; localB -> etz5jvvdvx = b_r
* localDW -> khdlnzzcpl . pA + localDW -> khdlnzzcpl . pB ; } void mzdzfjacw2
( adbbpxjmjx * const bwldjdcyog , krigp330xt * localB , ggv1uslzom * localDW
, mcofgvk0eq * localX ) { boolean_T tmp ; localDW -> igh2jm43a3 = 1 ; if (
rtmIsFirstInitCond ( bwldjdcyog ) ) { localX -> dg5bug3ja3 [ 0 ] = 0.0 ;
localX -> dg5bug3ja3 [ 1 ] = 0.0 ; localX -> dg5bug3ja3 [ 2 ] = 0.02 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
bwldjdcyog -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
bwldjdcyog -> _mdlRefSfcnS ) ) ; localDW -> igh2jm43a3 = ! tmp ; } else {
localDW -> igh2jm43a3 = 1 ; } localX -> fqwmftubxu [ 0 ] = 0.0 ; localX ->
fqwmftubxu [ 1 ] = 0.0 ; localX -> fqwmftubxu [ 2 ] = 0.0 ; localX ->
fqwmftubxu [ 3 ] = 0.0 ; } localDW -> ktu3yynb2h = 1 ; if (
rtmIsFirstInitCond ( bwldjdcyog ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( bwldjdcyog -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( bwldjdcyog -> _mdlRefSfcnS ) ) ; localDW
-> ktu3yynb2h = ! tmp ; } else { localDW -> ktu3yynb2h = 1 ; } } jdi3khs4aj (
& localDW -> ooql4bod4mp ) ; jdi3khs4aj ( & localDW -> ooql4bod4mpe ) ;
jdi3khs4aj ( & localDW -> ooql4bod4mpe3 ) ; localB -> cnptw5zkjt [ 0 ] =
hxlpb0imdf . P_8 ; localB -> cnptw5zkjt [ 1 ] = hxlpb0imdf . P_8 ; localB ->
cnptw5zkjt [ 2 ] = hxlpb0imdf . P_8 ; } void hmf3dz3lsy ( adbbpxjmjx * const
bwldjdcyog , ggv1uslzom * localDW , mcofgvk0eq * localX ) { boolean_T tmp ;
localDW -> igh2jm43a3 = 1 ; if ( rtmIsFirstInitCond ( bwldjdcyog ) ) { localX
-> dg5bug3ja3 [ 0 ] = 0.0 ; localX -> dg5bug3ja3 [ 1 ] = 0.0 ; localX ->
dg5bug3ja3 [ 2 ] = 0.02 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp
) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( bwldjdcyog -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( bwldjdcyog -> _mdlRefSfcnS ) ) ; localDW
-> igh2jm43a3 = ! tmp ; } else { localDW -> igh2jm43a3 = 1 ; } localX ->
fqwmftubxu [ 0 ] = 0.0 ; localX -> fqwmftubxu [ 1 ] = 0.0 ; localX ->
fqwmftubxu [ 2 ] = 0.0 ; localX -> fqwmftubxu [ 3 ] = 0.0 ; } localDW ->
ktu3yynb2h = 1 ; if ( rtmIsFirstInitCond ( bwldjdcyog ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
bwldjdcyog -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
bwldjdcyog -> _mdlRefSfcnS ) ) ; localDW -> ktu3yynb2h = ! tmp ; } else {
localDW -> ktu3yynb2h = 1 ; } } } void iax1yymlbh ( krigp330xt * localB ,
ggv1uslzom * localDW ) { aug3s2wk5x ( & localDW -> ooql4bod4mp , & hxlpb0imdf
. ooql4bod4mp ) ; aug3s2wk5x ( & localDW -> ooql4bod4mpe , & hxlpb0imdf .
ooql4bod4mpe ) ; aug3s2wk5x ( & localDW -> ooql4bod4mpe3 , & hxlpb0imdf .
ooql4bod4mpe3 ) ; localB -> irqqacjbdh [ 0 ] = hxlpb0imdf . P_10 [ 0 ] ;
localB -> irqqacjbdh [ 1 ] = hxlpb0imdf . P_10 [ 1 ] ; localB -> irqqacjbdh [
2 ] = hxlpb0imdf . P_10 [ 2 ] ; localDW -> mnhgxgkor0 = - 1 ; } void
DinamicaCinematicaControleAtitude ( adbbpxjmjx * const bwldjdcyog , const
real_T on2ibsjoos [ 3 ] , const real_T lkylav03iq [ 3 ] , const real_T
gmh2shhhu1 [ 3 ] , real_T gxeo5z4vjr [ 4 ] , real_T jbatu2thoe [ 9 ] , real_T
amddzjakg1 [ 3 ] , krigp330xt * localB , ggv1uslzom * localDW , mcofgvk0eq *
localX ) { __m128d tmp_e ; __m128d tmp_g ; __m128d tmp_i ; __m128d tmp_p ;
real_T tmp [ 16 ] ; real_T bgebyldi05 [ 6 ] ; real_T c_p [ 6 ] ; real_T s_p [
6 ] ; real_T c [ 3 ] ; real_T s [ 3 ] ; real_T tmp_m [ 2 ] ; real_T
gmh2shhhu1_e ; real_T gmh2shhhu1_p ; real_T gxeo5z4vjr_e ; real_T
gxeo5z4vjr_i ; real_T gxeo5z4vjr_p ; real_T s_e ; int32_T i ; const char_T *
arg1 ; int8_T rtAction ; int8_T rtPrevAction ; void * S ; void * diag ; if (
rtmIsMajorTimeStep ( bwldjdcyog ) ) { c [ 0 ] = muDoubleScalarCos ( rtP_phi_i
/ 2.0 ) ; s [ 0 ] = muDoubleScalarSin ( rtP_phi_i / 2.0 ) ; c [ 1 ] =
muDoubleScalarCos ( rtP_theta_i / 2.0 ) ; s [ 1 ] = muDoubleScalarSin (
rtP_theta_i / 2.0 ) ; c [ 2 ] = muDoubleScalarCos ( rtP_psi_i / 2.0 ) ; s_e =
muDoubleScalarSin ( rtP_psi_i / 2.0 ) ; tmp_g = _mm_set_pd ( 1.0 , - 1.0 ) ;
_mm_storeu_pd ( & localB -> jw1g4aa0iu [ 0 ] , _mm_add_pd ( _mm_mul_pd (
_mm_mul_pd ( _mm_set1_pd ( c [ 0 ] ) , _mm_set_pd ( s [ 1 ] , c [ 1 ] ) ) ,
_mm_set_pd ( c [ 2 ] , s_e ) ) , _mm_mul_pd ( _mm_mul_pd ( _mm_mul_pd (
_mm_set1_pd ( s [ 0 ] ) , _mm_set_pd ( c [ 1 ] , s [ 1 ] ) ) , _mm_set_pd (
s_e , c [ 2 ] ) ) , tmp_g ) ) ) ; _mm_storeu_pd ( & localB -> jw1g4aa0iu [ 2
] , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd ( _mm_set_pd ( c [ 0 ] , s [ 0 ] ) ,
_mm_set1_pd ( c [ 1 ] ) ) , _mm_set1_pd ( c [ 2 ] ) ) , _mm_mul_pd (
_mm_mul_pd ( _mm_mul_pd ( _mm_set_pd ( s [ 0 ] , c [ 0 ] ) , _mm_set1_pd ( s
[ 1 ] ) ) , _mm_set1_pd ( s_e ) ) , tmp_g ) ) ) ; } if (
ssIsModeUpdateTimeStep ( bwldjdcyog -> _mdlRefSfcnS ) ) { if ( localDW ->
igh2jm43a3 != 0 ) { localX -> dg5bug3ja3 [ 0 ] = localB -> irqqacjbdh [ 0 ] ;
localX -> dg5bug3ja3 [ 1 ] = localB -> irqqacjbdh [ 1 ] ; localX ->
dg5bug3ja3 [ 2 ] = localB -> irqqacjbdh [ 2 ] ; } amddzjakg1 [ 0 ] = localX
-> dg5bug3ja3 [ 0 ] ; amddzjakg1 [ 1 ] = localX -> dg5bug3ja3 [ 1 ] ;
amddzjakg1 [ 2 ] = localX -> dg5bug3ja3 [ 2 ] ; if ( localDW -> ktu3yynb2h !=
0 ) { localX -> fqwmftubxu [ 0 ] = localB -> jw1g4aa0iu [ 0 ] ; localX ->
fqwmftubxu [ 1 ] = localB -> jw1g4aa0iu [ 1 ] ; localX -> fqwmftubxu [ 2 ] =
localB -> jw1g4aa0iu [ 2 ] ; localX -> fqwmftubxu [ 3 ] = localB ->
jw1g4aa0iu [ 3 ] ; } gxeo5z4vjr [ 0 ] = localX -> fqwmftubxu [ 0 ] ;
gxeo5z4vjr [ 1 ] = localX -> fqwmftubxu [ 1 ] ; gxeo5z4vjr [ 2 ] = localX ->
fqwmftubxu [ 2 ] ; gxeo5z4vjr [ 3 ] = localX -> fqwmftubxu [ 3 ] ; } else {
amddzjakg1 [ 0 ] = localX -> dg5bug3ja3 [ 0 ] ; amddzjakg1 [ 1 ] = localX ->
dg5bug3ja3 [ 1 ] ; amddzjakg1 [ 2 ] = localX -> dg5bug3ja3 [ 2 ] ; gxeo5z4vjr
[ 0 ] = localX -> fqwmftubxu [ 0 ] ; gxeo5z4vjr [ 1 ] = localX -> fqwmftubxu
[ 1 ] ; gxeo5z4vjr [ 2 ] = localX -> fqwmftubxu [ 2 ] ; gxeo5z4vjr [ 3 ] =
localX -> fqwmftubxu [ 3 ] ; } tmp [ 0 ] = 0.0 ; tmp [ 4 ] = amddzjakg1 [ 2 ]
; tmp [ 8 ] = - amddzjakg1 [ 1 ] ; tmp [ 12 ] = amddzjakg1 [ 0 ] ; tmp [ 1 ]
= - amddzjakg1 [ 2 ] ; tmp [ 5 ] = 0.0 ; tmp [ 9 ] = amddzjakg1 [ 0 ] ; tmp [
13 ] = amddzjakg1 [ 1 ] ; tmp [ 2 ] = amddzjakg1 [ 1 ] ; tmp [ 6 ] = -
amddzjakg1 [ 0 ] ; tmp [ 10 ] = 0.0 ; tmp [ 14 ] = amddzjakg1 [ 2 ] ; tmp [ 3
] = - amddzjakg1 [ 0 ] ; tmp [ 7 ] = - amddzjakg1 [ 1 ] ; tmp [ 11 ] = -
amddzjakg1 [ 2 ] ; tmp [ 15 ] = 0.0 ; s_e = gxeo5z4vjr [ 1 ] ; gxeo5z4vjr_p =
gxeo5z4vjr [ 0 ] ; gxeo5z4vjr_e = gxeo5z4vjr [ 2 ] ; gxeo5z4vjr_i =
gxeo5z4vjr [ 3 ] ; for ( i = 0 ; i <= 2 ; i += 2 ) { tmp_g = _mm_loadu_pd ( &
tmp [ i + 4 ] ) ; tmp_p = _mm_loadu_pd ( & tmp [ i ] ) ; tmp_e = _mm_loadu_pd
( & tmp [ i + 8 ] ) ; tmp_i = _mm_loadu_pd ( & tmp [ i + 12 ] ) ;
_mm_storeu_pd ( & localB -> aw1p0aoahi [ i ] , _mm_mul_pd ( _mm_add_pd (
_mm_add_pd ( _mm_add_pd ( _mm_mul_pd ( tmp_g , _mm_set1_pd ( s_e ) ) ,
_mm_mul_pd ( tmp_p , _mm_set1_pd ( gxeo5z4vjr_p ) ) ) , _mm_mul_pd ( tmp_e ,
_mm_set1_pd ( gxeo5z4vjr_e ) ) ) , _mm_mul_pd ( tmp_i , _mm_set1_pd (
gxeo5z4vjr_i ) ) ) , _mm_set1_pd ( hxlpb0imdf . P_7 ) ) ) ; } s_e =
gxeo5z4vjr [ 0 ] * gxeo5z4vjr [ 0 ] ; gxeo5z4vjr_p = gxeo5z4vjr [ 1 ] *
gxeo5z4vjr [ 1 ] ; gxeo5z4vjr_e = gxeo5z4vjr [ 2 ] * gxeo5z4vjr [ 2 ] ;
gxeo5z4vjr_i = gxeo5z4vjr [ 3 ] * gxeo5z4vjr [ 3 ] ; jbatu2thoe [ 0 ] = ( (
s_e - gxeo5z4vjr_p ) - gxeo5z4vjr_e ) + gxeo5z4vjr_i ; tmp_g = _mm_set1_pd (
gxeo5z4vjr [ 3 ] ) ; tmp_p = _mm_set1_pd ( 2.0 ) ; tmp_e = _mm_mul_pd (
_mm_add_pd ( _mm_mul_pd ( _mm_set1_pd ( gxeo5z4vjr [ 0 ] ) , _mm_loadu_pd ( &
gxeo5z4vjr [ 1 ] ) ) , _mm_mul_pd ( _mm_mul_pd ( _mm_set_pd ( gxeo5z4vjr [ 1
] , gxeo5z4vjr [ 2 ] ) , tmp_g ) , _mm_set_pd ( - 1.0 , 1.0 ) ) ) , tmp_p ) ;
_mm_storeu_pd ( & tmp_m [ 0 ] , tmp_e ) ; jbatu2thoe [ 3 ] = tmp_m [ 0 ] ;
jbatu2thoe [ 6 ] = tmp_m [ 1 ] ; jbatu2thoe [ 1 ] = ( gxeo5z4vjr [ 0 ] *
gxeo5z4vjr [ 1 ] - gxeo5z4vjr [ 2 ] * gxeo5z4vjr [ 3 ] ) * 2.0 ; jbatu2thoe [
4 ] = ( ( - s_e + gxeo5z4vjr_p ) - gxeo5z4vjr_e ) + gxeo5z4vjr_i ; tmp_g =
_mm_mul_pd ( _mm_add_pd ( _mm_mul_pd ( _mm_set_pd ( gxeo5z4vjr [ 0 ] ,
gxeo5z4vjr [ 1 ] ) , _mm_set1_pd ( gxeo5z4vjr [ 2 ] ) ) , _mm_mul_pd (
_mm_loadu_pd ( & gxeo5z4vjr [ 0 ] ) , tmp_g ) ) , tmp_p ) ; _mm_storeu_pd ( &
tmp_m [ 0 ] , tmp_g ) ; jbatu2thoe [ 7 ] = tmp_m [ 0 ] ; jbatu2thoe [ 2 ] =
tmp_m [ 1 ] ; jbatu2thoe [ 5 ] = ( gxeo5z4vjr [ 1 ] * gxeo5z4vjr [ 2 ] -
gxeo5z4vjr [ 0 ] * gxeo5z4vjr [ 3 ] ) * 2.0 ; jbatu2thoe [ 8 ] = ( ( - s_e -
gxeo5z4vjr_p ) + gxeo5z4vjr_e ) + gxeo5z4vjr_i ; gxeo5z4vjr_p = lkylav03iq [
1 ] ; gxeo5z4vjr_e = lkylav03iq [ 0 ] ; gxeo5z4vjr_i = lkylav03iq [ 2 ] ; for
( i = 0 ; i < 3 ; i ++ ) { s_e = ( jbatu2thoe [ i + 3 ] * gxeo5z4vjr_p +
jbatu2thoe [ i ] * gxeo5z4vjr_e ) + jbatu2thoe [ i + 6 ] * gxeo5z4vjr_i ; s [
i ] = s_e ; c [ i ] = s_e + amddzjakg1 [ i ] ; } if ( rtmIsMajorTimeStep (
bwldjdcyog ) ) { rtPrevAction = localDW -> mnhgxgkor0 ; if (
ssIsModeUpdateTimeStep ( bwldjdcyog -> _mdlRefSfcnS ) ) { rtAction = ( int8_T
) ! ( localB -> lq03oho0f4 != 0.0F ) ; localDW -> mnhgxgkor0 = rtAction ; }
else { rtAction = localDW -> mnhgxgkor0 ; } if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( bwldjdcyog -> _mdlRefSfcnS ) ; }
if ( rtAction == 0 ) { ooql4bod4m ( & localB -> ooql4bod4mp , & localDW ->
ooql4bod4mp , & hxlpb0imdf . ooql4bod4mp ) ; localB -> cnptw5zkjt [ 0 ] = (
hxlpb0imdf . P_4 + c [ 0 ] ) + localB -> ooql4bod4mp . etz5jvvdvx ;
ooql4bod4m ( & localB -> ooql4bod4mpe , & localDW -> ooql4bod4mpe , &
hxlpb0imdf . ooql4bod4mpe ) ; localB -> cnptw5zkjt [ 1 ] = ( hxlpb0imdf . P_5
+ c [ 1 ] ) + localB -> ooql4bod4mpe . etz5jvvdvx ; ooql4bod4m ( & localB ->
ooql4bod4mpe3 , & localDW -> ooql4bod4mpe3 , & hxlpb0imdf . ooql4bod4mpe3 ) ;
localB -> cnptw5zkjt [ 2 ] = ( hxlpb0imdf . P_6 + c [ 2 ] ) + localB ->
ooql4bod4mpe3 . etz5jvvdvx ; if ( ssIsModeUpdateTimeStep ( bwldjdcyog ->
_mdlRefSfcnS ) ) { srUpdateBC ( localDW -> csrasjj5cf ) ; } } else { localB
-> cnptw5zkjt [ 0 ] = c [ 0 ] ; localB -> cnptw5zkjt [ 1 ] = c [ 1 ] ; localB
-> cnptw5zkjt [ 2 ] = c [ 2 ] ; if ( ssIsModeUpdateTimeStep ( bwldjdcyog ->
_mdlRefSfcnS ) ) { srUpdateBC ( localDW -> la0x4crr0r ) ; } } s_e = localB ->
cnptw5zkjt [ 1 ] ; gxeo5z4vjr_p = localB -> cnptw5zkjt [ 0 ] ; gxeo5z4vjr_e =
localB -> cnptw5zkjt [ 2 ] ; for ( i = 0 ; i <= 0 ; i += 2 ) { _mm_storeu_pd
( & c [ i ] , _mm_add_pd ( _mm_add_pd ( _mm_mul_pd ( _mm_loadu_pd ( &
hxlpb0imdf . P_9 [ i + 3 ] ) , _mm_set1_pd ( s_e ) ) , _mm_mul_pd (
_mm_loadu_pd ( & hxlpb0imdf . P_9 [ i ] ) , _mm_set1_pd ( gxeo5z4vjr_p ) ) )
, _mm_mul_pd ( _mm_loadu_pd ( & hxlpb0imdf . P_9 [ i + 6 ] ) , _mm_set1_pd (
gxeo5z4vjr_e ) ) ) ) ; } for ( i = 2 ; i < 3 ; i ++ ) { c [ i ] = (
hxlpb0imdf . P_9 [ i + 3 ] * s_e + hxlpb0imdf . P_9 [ i ] * gxeo5z4vjr_p ) +
hxlpb0imdf . P_9 [ i + 6 ] * gxeo5z4vjr_e ; } s_p [ 2 ] = localB ->
cnptw5zkjt [ 0 ] ; s_p [ 3 ] = localB -> cnptw5zkjt [ 2 ] ; c_p [ 0 ] = c [ 2
] ; s_p [ 0 ] = localB -> cnptw5zkjt [ 1 ] ; s_p [ 4 ] = localB -> cnptw5zkjt
[ 0 ] ; c_p [ 1 ] = c [ 0 ] ; c_p [ 3 ] = c [ 1 ] ; s_p [ 1 ] = localB ->
cnptw5zkjt [ 2 ] ; s_p [ 5 ] = localB -> cnptw5zkjt [ 1 ] ; c_p [ 2 ] = c [ 1
] ; c_p [ 4 ] = c [ 2 ] ; c_p [ 5 ] = c [ 0 ] ; for ( i = 0 ; i <= 4 ; i += 2
) { tmp_g = _mm_loadu_pd ( & s_p [ i ] ) ; tmp_p = _mm_loadu_pd ( & c_p [ i ]
) ; _mm_storeu_pd ( & bgebyldi05 [ i ] , _mm_mul_pd ( tmp_g , tmp_p ) ) ; }
tmp_g = _mm_sub_pd ( _mm_loadu_pd ( & bgebyldi05 [ 0 ] ) , _mm_loadu_pd ( &
bgebyldi05 [ 3 ] ) ) ; _mm_storeu_pd ( & localB -> aae2zgo4tm [ 0 ] , tmp_g )
; localB -> aae2zgo4tm [ 2 ] = bgebyldi05 [ 2 ] - bgebyldi05 [ 5 ] ; } s_p [
2 ] = s [ 0 ] ; s_p [ 3 ] = s [ 2 ] ; c_p [ 0 ] = amddzjakg1 [ 2 ] ; s_p [ 0
] = s [ 1 ] ; s_p [ 4 ] = s [ 0 ] ; c_p [ 1 ] = amddzjakg1 [ 0 ] ; c_p [ 3 ]
= amddzjakg1 [ 1 ] ; s_p [ 1 ] = s [ 2 ] ; s_p [ 5 ] = s [ 1 ] ; c_p [ 2 ] =
amddzjakg1 [ 1 ] ; c_p [ 4 ] = amddzjakg1 [ 2 ] ; c_p [ 5 ] = amddzjakg1 [ 0
] ; for ( i = 0 ; i <= 4 ; i += 2 ) { tmp_g = _mm_loadu_pd ( & s_p [ i ] ) ;
tmp_p = _mm_loadu_pd ( & c_p [ i ] ) ; _mm_storeu_pd ( & bgebyldi05 [ i ] ,
_mm_mul_pd ( tmp_g , tmp_p ) ) ; } tmp_g = _mm_sub_pd ( _mm_loadu_pd ( &
on2ibsjoos [ 0 ] ) , _mm_loadu_pd ( & localB -> aae2zgo4tm [ 0 ] ) ) ;
_mm_storeu_pd ( & tmp_m [ 0 ] , tmp_g ) ; s_e = tmp_m [ 0 ] ; gxeo5z4vjr_p =
tmp_m [ 1 ] ; gxeo5z4vjr_e = on2ibsjoos [ 2 ] - localB -> aae2zgo4tm [ 2 ] ;
gxeo5z4vjr_i = gmh2shhhu1 [ 1 ] ; gmh2shhhu1_p = gmh2shhhu1 [ 0 ] ;
gmh2shhhu1_e = gmh2shhhu1 [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { localB ->
bgzfxadhjc [ i ] = ( ( ( localB -> oztino51gc [ i + 3 ] * gxeo5z4vjr_p +
localB -> oztino51gc [ i ] * s_e ) + localB -> oztino51gc [ i + 6 ] *
gxeo5z4vjr_e ) - ( ( jbatu2thoe [ i + 3 ] * gxeo5z4vjr_i + jbatu2thoe [ i ] *
gmh2shhhu1_p ) + jbatu2thoe [ i + 6 ] * gmh2shhhu1_e ) ) - ( bgebyldi05 [ i ]
- bgebyldi05 [ i + 3 ] ) ; } if ( rtmIsMajorTimeStep ( bwldjdcyog ) &&
hxlpb0imdf . P_11 && ( ! ( localB -> pxyrv4obcm != 0.0 ) ) ) { S = bwldjdcyog
-> _mdlRefSfcnS ; arg1 = rt_CreateFullPathToTop ( bwldjdcyog -> DataMapInfo .
mmi . InstanceMap . fullPath ,
 "DinamicaCinematicaControleAtitude/DinamicaAtitudeSeguidor/Invert  3x3 Matrix2/Assertion"
) ; diag = CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2
, 5 , arg1 , 2 , rtmGetTaskTime ( bwldjdcyog , 0 ) ) ; rt_ssSet_slErrMsg ( S
, diag ) ; ssSetStopRequested ( bwldjdcyog -> _mdlRefSfcnS , ( int )
rtmGetTaskTime ( bwldjdcyog , 0 ) ) ; } } void
DinamicaCinematicaControleAtitudeTID2 ( krigp330xt * localB ) { localB ->
lq03oho0f4 = ( real32_T ) rtP_giro ; localB -> pxyrv4obcm = ( ( ( (
hxlpb0imdf . P_9 [ 0 ] * hxlpb0imdf . P_9 [ 4 ] * hxlpb0imdf . P_9 [ 8 ] -
hxlpb0imdf . P_9 [ 0 ] * hxlpb0imdf . P_9 [ 5 ] * hxlpb0imdf . P_9 [ 7 ] ) -
hxlpb0imdf . P_9 [ 1 ] * hxlpb0imdf . P_9 [ 3 ] * hxlpb0imdf . P_9 [ 8 ] ) +
hxlpb0imdf . P_9 [ 2 ] * hxlpb0imdf . P_9 [ 3 ] * hxlpb0imdf . P_9 [ 7 ] ) +
hxlpb0imdf . P_9 [ 1 ] * hxlpb0imdf . P_9 [ 5 ] * hxlpb0imdf . P_9 [ 6 ] ) -
hxlpb0imdf . P_9 [ 2 ] * hxlpb0imdf . P_9 [ 4 ] * hxlpb0imdf . P_9 [ 6 ] ;
rt_invd3x3_snf ( hxlpb0imdf . P_9 , localB -> oztino51gc ) ; localB ->
irqqacjbdh [ 0 ] = hxlpb0imdf . P_10 [ 0 ] ; localB -> irqqacjbdh [ 1 ] =
hxlpb0imdf . P_10 [ 1 ] ; localB -> irqqacjbdh [ 2 ] = hxlpb0imdf . P_10 [ 2
] ; } void k11bgqmkqe ( adbbpxjmjx * const bwldjdcyog , ggv1uslzom * localDW
) { if ( rtmIsMajorTimeStep ( bwldjdcyog ) ) { if ( memcmp ( bwldjdcyog ->
nonContDerivSignal [ 0 ] . pCurrVal , bwldjdcyog -> nonContDerivSignal [ 0 ]
. pPrevVal , bwldjdcyog -> nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) {
( void ) memcpy ( bwldjdcyog -> nonContDerivSignal [ 0 ] . pPrevVal ,
bwldjdcyog -> nonContDerivSignal [ 0 ] . pCurrVal , bwldjdcyog ->
nonContDerivSignal [ 0 ] . sizeInBytes ) ; ssSetSolverNeedsResetWithReason (
bwldjdcyog -> _mdlRefSfcnS , 32 ) ; } } localDW -> igh2jm43a3 = 0 ; localDW
-> ktu3yynb2h = 0 ; } void aor4xhnafp ( krigp330xt * localB , puo43s1gwm *
localXdot ) { localXdot -> dg5bug3ja3 [ 0 ] = localB -> bgzfxadhjc [ 0 ] ;
localXdot -> dg5bug3ja3 [ 1 ] = localB -> bgzfxadhjc [ 1 ] ; localXdot ->
dg5bug3ja3 [ 2 ] = localB -> bgzfxadhjc [ 2 ] ; localXdot -> fqwmftubxu [ 0 ]
= localB -> aw1p0aoahi [ 0 ] ; localXdot -> fqwmftubxu [ 1 ] = localB ->
aw1p0aoahi [ 1 ] ; localXdot -> fqwmftubxu [ 2 ] = localB -> aw1p0aoahi [ 2 ]
; localXdot -> fqwmftubxu [ 3 ] = localB -> aw1p0aoahi [ 3 ] ; } void
ahuawvdebl ( adbbpxjmjx * const bwldjdcyog ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( bwldjdcyog ->
_mdlRefSfcnS , "DinamicaCinematicaControleAtitude" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void h5q2grtpc0 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , adbbpxjmjx * const bwldjdcyog , krigp330xt * localB ,
ggv1uslzom * localDW , mcofgvk0eq * localX , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { ( void ) memset
( ( void * ) bwldjdcyog , 0 , sizeof ( adbbpxjmjx ) ) ; bwldjdcyog -> Timing
. mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; bwldjdcyog -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; bwldjdcyog -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; bwldjdcyog -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( bwldjdcyog -> _mdlRefSfcnS ,
"DinamicaCinematicaControleAtitude" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { int32_T i ; for ( i = 0 ; i
< 9 ; i ++ ) { localB -> oztino51gc [ i ] = 0.0 ; } localB -> aw1p0aoahi [ 0
] = 0.0 ; localB -> aw1p0aoahi [ 1 ] = 0.0 ; localB -> aw1p0aoahi [ 2 ] = 0.0
; localB -> aw1p0aoahi [ 3 ] = 0.0 ; localB -> cnptw5zkjt [ 0 ] = 0.0 ;
localB -> cnptw5zkjt [ 1 ] = 0.0 ; localB -> cnptw5zkjt [ 2 ] = 0.0 ; localB
-> aae2zgo4tm [ 0 ] = 0.0 ; localB -> aae2zgo4tm [ 1 ] = 0.0 ; localB ->
aae2zgo4tm [ 2 ] = 0.0 ; localB -> bgzfxadhjc [ 0 ] = 0.0 ; localB ->
bgzfxadhjc [ 1 ] = 0.0 ; localB -> bgzfxadhjc [ 2 ] = 0.0 ; localB ->
pxyrv4obcm = 0.0 ; localB -> irqqacjbdh [ 0 ] = 0.0 ; localB -> irqqacjbdh [
1 ] = 0.0 ; localB -> irqqacjbdh [ 2 ] = 0.0 ; localB -> jw1g4aa0iu [ 0 ] =
0.0 ; localB -> jw1g4aa0iu [ 1 ] = 0.0 ; localB -> jw1g4aa0iu [ 2 ] = 0.0 ;
localB -> jw1g4aa0iu [ 3 ] = 0.0 ; localB -> lq03oho0f4 = 0.0F ; localB ->
ooql4bod4mpe3 . etz5jvvdvx = 0.0 ; localB -> ooql4bod4mpe . etz5jvvdvx = 0.0
; localB -> ooql4bod4mp . etz5jvvdvx = 0.0 ; } ( void ) memset ( ( void * )
localDW , 0 , sizeof ( ggv1uslzom ) ) ; { int32_T i ; for ( i = 0 ; i < 9 ; i
++ ) { localDW -> ej2or4wkc4 [ i ] = 0.0 ; } }
DinamicaCinematicaControleAtitude_InitializeDataMapInfo ( bwldjdcyog ,
localDW , localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL )
) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( bwldjdcyog -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
bwldjdcyog -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( bwldjdcyog -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } bwldjdcyog -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) bwldjdcyog -> NonContDerivMemory . mr_nonContSig0 ; bwldjdcyog ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 3 * sizeof ( real_T ) ) ;
bwldjdcyog -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> aae2zgo4tm [ 0 ] ) ; ; } void
mr_DinamicaCinematicaControleAtitude_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS
, char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_DinamicaCinematicaControleAtitude , 67 ) ; * retVal = 1 ; } static
void mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( mxArray
* destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_DinamicaCinematicaControleAtitude_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_DinamicaCinematicaControleAtitude_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber (
destArray , i , j , mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static
uint_T mr_DinamicaCinematicaControleAtitude_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static
uint_T mr_DinamicaCinematicaControleAtitude_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_DinamicaCinematicaControleAtitude_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_DinamicaCinematicaControleAtitude_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) ; static void
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArrayWithOffset ( void
* destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_DinamicaCinematicaControleAtitude_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) ; static void
mr_DinamicaCinematicaControleAtitude_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_DinamicaCinematicaControleAtitude_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) ; static uint_T
mr_DinamicaCinematicaControleAtitude_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray *
mr_DinamicaCinematicaControleAtitude_GetDWork ( const iqjk2gahmfr * mdlrefDW
) { static const char_T * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" ,
"NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray (
ssDW , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW ->
rtb ) ) ; { static const char_T * rtdwDataFieldNames [ 55 ] = {
"mdlrefDW->rtdw.ej2or4wkc4" , "mdlrefDW->rtdw.e11rk5ntpu" ,
"mdlrefDW->rtdw.igh2jm43a3" , "mdlrefDW->rtdw.ktu3yynb2h" ,
"mdlrefDW->rtdw.mnhgxgkor0" , "mdlrefDW->rtdw.la0x4crr0r" ,
"mdlrefDW->rtdw.csrasjj5cf" , "mdlrefDW->rtdw.ooql4bod4mpe3.khdlnzzcpl" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.jwkog5tsy0" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.c2uwwswwrz" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.ldulomjtq2" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.gakqowpeu0" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.b33jgqukxo" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.lova5natot" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.lpjepc432n" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.agdmtiie2i" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.fcl0i4s23y" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.gacsk4ue1c" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.hai52o34ao" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.j1ajf5oks5" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.n0ya0gspe2" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.c5axmpduuz" ,
"mdlrefDW->rtdw.ooql4bod4mpe3.owudl4s4vs" ,
"mdlrefDW->rtdw.ooql4bod4mpe.khdlnzzcpl" ,
"mdlrefDW->rtdw.ooql4bod4mpe.jwkog5tsy0" ,
"mdlrefDW->rtdw.ooql4bod4mpe.c2uwwswwrz" ,
"mdlrefDW->rtdw.ooql4bod4mpe.ldulomjtq2" ,
"mdlrefDW->rtdw.ooql4bod4mpe.gakqowpeu0" ,
"mdlrefDW->rtdw.ooql4bod4mpe.b33jgqukxo" ,
"mdlrefDW->rtdw.ooql4bod4mpe.lova5natot" ,
"mdlrefDW->rtdw.ooql4bod4mpe.lpjepc432n" ,
"mdlrefDW->rtdw.ooql4bod4mpe.agdmtiie2i" ,
"mdlrefDW->rtdw.ooql4bod4mpe.fcl0i4s23y" ,
"mdlrefDW->rtdw.ooql4bod4mpe.gacsk4ue1c" ,
"mdlrefDW->rtdw.ooql4bod4mpe.hai52o34ao" ,
"mdlrefDW->rtdw.ooql4bod4mpe.j1ajf5oks5" ,
"mdlrefDW->rtdw.ooql4bod4mpe.n0ya0gspe2" ,
"mdlrefDW->rtdw.ooql4bod4mpe.c5axmpduuz" ,
"mdlrefDW->rtdw.ooql4bod4mpe.owudl4s4vs" ,
"mdlrefDW->rtdw.ooql4bod4mp.khdlnzzcpl" ,
"mdlrefDW->rtdw.ooql4bod4mp.jwkog5tsy0" ,
"mdlrefDW->rtdw.ooql4bod4mp.c2uwwswwrz" ,
"mdlrefDW->rtdw.ooql4bod4mp.ldulomjtq2" ,
"mdlrefDW->rtdw.ooql4bod4mp.gakqowpeu0" ,
"mdlrefDW->rtdw.ooql4bod4mp.b33jgqukxo" ,
"mdlrefDW->rtdw.ooql4bod4mp.lova5natot" ,
"mdlrefDW->rtdw.ooql4bod4mp.lpjepc432n" ,
"mdlrefDW->rtdw.ooql4bod4mp.agdmtiie2i" ,
"mdlrefDW->rtdw.ooql4bod4mp.fcl0i4s23y" ,
"mdlrefDW->rtdw.ooql4bod4mp.gacsk4ue1c" ,
"mdlrefDW->rtdw.ooql4bod4mp.hai52o34ao" ,
"mdlrefDW->rtdw.ooql4bod4mp.j1ajf5oks5" ,
"mdlrefDW->rtdw.ooql4bod4mp.n0ya0gspe2" ,
"mdlrefDW->rtdw.ooql4bod4mp.c5axmpduuz" ,
"mdlrefDW->rtdw.ooql4bod4mp.owudl4s4vs" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 55 , rtdwDataFieldNames ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 0 ,
( const void * ) & ( mdlrefDW -> rtdw . ej2or4wkc4 ) , sizeof ( mdlrefDW ->
rtdw . ej2or4wkc4 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 1 ,
( const void * ) & ( mdlrefDW -> rtdw . e11rk5ntpu ) , sizeof ( mdlrefDW ->
rtdw . e11rk5ntpu ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 2 ,
( const void * ) & ( mdlrefDW -> rtdw . igh2jm43a3 ) , sizeof ( mdlrefDW ->
rtdw . igh2jm43a3 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 3 ,
( const void * ) & ( mdlrefDW -> rtdw . ktu3yynb2h ) , sizeof ( mdlrefDW ->
rtdw . ktu3yynb2h ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 4 ,
( const void * ) & ( mdlrefDW -> rtdw . mnhgxgkor0 ) , sizeof ( mdlrefDW ->
rtdw . mnhgxgkor0 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 5 ,
( const void * ) & ( mdlrefDW -> rtdw . la0x4crr0r ) , sizeof ( mdlrefDW ->
rtdw . la0x4crr0r ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 6 ,
( const void * ) & ( mdlrefDW -> rtdw . csrasjj5cf ) , sizeof ( mdlrefDW ->
rtdw . csrasjj5cf ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 7 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . khdlnzzcpl ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . khdlnzzcpl ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 8 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . jwkog5tsy0 ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . jwkog5tsy0 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 9 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . c2uwwswwrz ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . c2uwwswwrz ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 10 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . ldulomjtq2 ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . ldulomjtq2 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 11 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . gakqowpeu0 ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . gakqowpeu0 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 12 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . b33jgqukxo ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . b33jgqukxo ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 13 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . lova5natot ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . lova5natot ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 14 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . lpjepc432n ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . lpjepc432n ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 15 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . agdmtiie2i ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . agdmtiie2i ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 16 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . fcl0i4s23y ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . fcl0i4s23y ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 17 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . gacsk4ue1c ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . gacsk4ue1c ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 18 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . hai52o34ao ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . hai52o34ao ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 19 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . j1ajf5oks5 ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . j1ajf5oks5 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 20 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . n0ya0gspe2 ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . n0ya0gspe2 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 21 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . c5axmpduuz ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . c5axmpduuz ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 22 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe3 . owudl4s4vs ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . owudl4s4vs ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 23 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . khdlnzzcpl ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . khdlnzzcpl ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 24 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . jwkog5tsy0 ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . jwkog5tsy0 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 25 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . c2uwwswwrz ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . c2uwwswwrz ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 26 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . ldulomjtq2 ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . ldulomjtq2 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 27 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . gakqowpeu0 ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . gakqowpeu0 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 28 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . b33jgqukxo ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . b33jgqukxo ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 29 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . lova5natot ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . lova5natot ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 30 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . lpjepc432n ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . lpjepc432n ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 31 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . agdmtiie2i ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . agdmtiie2i ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 32 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . fcl0i4s23y ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . fcl0i4s23y ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 33 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . gacsk4ue1c ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . gacsk4ue1c ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 34 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . hai52o34ao ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . hai52o34ao ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 35 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . j1ajf5oks5 ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . j1ajf5oks5 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 36 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . n0ya0gspe2 ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . n0ya0gspe2 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 37 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . c5axmpduuz ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . c5axmpduuz ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 38 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mpe . owudl4s4vs ) , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe . owudl4s4vs ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 39 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . khdlnzzcpl ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . khdlnzzcpl ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 40 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . jwkog5tsy0 ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . jwkog5tsy0 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 41 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . c2uwwswwrz ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . c2uwwswwrz ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 42 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . ldulomjtq2 ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . ldulomjtq2 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 43 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . gakqowpeu0 ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . gakqowpeu0 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 44 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . b33jgqukxo ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . b33jgqukxo ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 45 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . lova5natot ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . lova5natot ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 46 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . lpjepc432n ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . lpjepc432n ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 47 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . agdmtiie2i ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . agdmtiie2i ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 48 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . fcl0i4s23y ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . fcl0i4s23y ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 49 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . gacsk4ue1c ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . gacsk4ue1c ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 50 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . hai52o34ao ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . hai52o34ao ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 51 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . j1ajf5oks5 ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . j1ajf5oks5 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 52 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . n0ya0gspe2 ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . n0ya0gspe2 ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 53 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . c5axmpduuz ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . c5axmpduuz ) ) ;
mr_DinamicaCinematicaControleAtitude_cacheDataAsMxArray ( rtdwData , 0 , 54 ,
( const void * ) & ( mdlrefDW -> rtdw . ooql4bod4mp . owudl4s4vs ) , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . owudl4s4vs ) ) ; mxSetFieldByNumber ( ssDW ,
0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void
mr_DinamicaCinematicaControleAtitude_SetDWork ( iqjk2gahmfr * mdlrefDW ,
const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ej2or4wkc4 ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW ->
rtdw . ej2or4wkc4 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . e11rk5ntpu ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW ->
rtdw . e11rk5ntpu ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . igh2jm43a3 ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW ->
rtdw . igh2jm43a3 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ktu3yynb2h ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW ->
rtdw . ktu3yynb2h ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mnhgxgkor0 ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW ->
rtdw . mnhgxgkor0 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . la0x4crr0r ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW ->
rtdw . la0x4crr0r ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . csrasjj5cf ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW ->
rtdw . csrasjj5cf ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . khdlnzzcpl ) , rtdwData , 0 , 7 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe3 . khdlnzzcpl ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . jwkog5tsy0 ) , rtdwData , 0 , 8 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe3 . jwkog5tsy0 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . c2uwwswwrz ) , rtdwData , 0 , 9 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe3 . c2uwwswwrz ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . ldulomjtq2 ) , rtdwData , 0 , 10 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . ldulomjtq2 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . gakqowpeu0 ) , rtdwData , 0 , 11 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . gakqowpeu0 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . b33jgqukxo ) , rtdwData , 0 , 12 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . b33jgqukxo ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . lova5natot ) , rtdwData , 0 , 13 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . lova5natot ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . lpjepc432n ) , rtdwData , 0 , 14 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . lpjepc432n ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . agdmtiie2i ) , rtdwData , 0 , 15 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . agdmtiie2i ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . fcl0i4s23y ) , rtdwData , 0 , 16 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . fcl0i4s23y ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . gacsk4ue1c ) , rtdwData , 0 , 17 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . gacsk4ue1c ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . hai52o34ao ) , rtdwData , 0 , 18 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . hai52o34ao ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . j1ajf5oks5 ) , rtdwData , 0 , 19 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . j1ajf5oks5 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . n0ya0gspe2 ) , rtdwData , 0 , 20 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . n0ya0gspe2 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . c5axmpduuz ) , rtdwData , 0 , 21 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . c5axmpduuz ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe3 . owudl4s4vs ) , rtdwData , 0 , 22 , sizeof
( mdlrefDW -> rtdw . ooql4bod4mpe3 . owudl4s4vs ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . khdlnzzcpl ) , rtdwData , 0 , 23 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . khdlnzzcpl ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . jwkog5tsy0 ) , rtdwData , 0 , 24 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . jwkog5tsy0 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . c2uwwswwrz ) , rtdwData , 0 , 25 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . c2uwwswwrz ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . ldulomjtq2 ) , rtdwData , 0 , 26 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . ldulomjtq2 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . gakqowpeu0 ) , rtdwData , 0 , 27 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . gakqowpeu0 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . b33jgqukxo ) , rtdwData , 0 , 28 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . b33jgqukxo ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . lova5natot ) , rtdwData , 0 , 29 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . lova5natot ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . lpjepc432n ) , rtdwData , 0 , 30 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . lpjepc432n ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . agdmtiie2i ) , rtdwData , 0 , 31 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . agdmtiie2i ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . fcl0i4s23y ) , rtdwData , 0 , 32 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . fcl0i4s23y ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . gacsk4ue1c ) , rtdwData , 0 , 33 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . gacsk4ue1c ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . hai52o34ao ) , rtdwData , 0 , 34 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . hai52o34ao ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . j1ajf5oks5 ) , rtdwData , 0 , 35 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . j1ajf5oks5 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . n0ya0gspe2 ) , rtdwData , 0 , 36 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . n0ya0gspe2 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . c5axmpduuz ) , rtdwData , 0 , 37 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . c5axmpduuz ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mpe . owudl4s4vs ) , rtdwData , 0 , 38 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mpe . owudl4s4vs ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . khdlnzzcpl ) , rtdwData , 0 , 39 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . khdlnzzcpl ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . jwkog5tsy0 ) , rtdwData , 0 , 40 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . jwkog5tsy0 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . c2uwwswwrz ) , rtdwData , 0 , 41 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . c2uwwswwrz ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . ldulomjtq2 ) , rtdwData , 0 , 42 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . ldulomjtq2 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . gakqowpeu0 ) , rtdwData , 0 , 43 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . gakqowpeu0 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . b33jgqukxo ) , rtdwData , 0 , 44 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . b33jgqukxo ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . lova5natot ) , rtdwData , 0 , 45 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . lova5natot ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . lpjepc432n ) , rtdwData , 0 , 46 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . lpjepc432n ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . agdmtiie2i ) , rtdwData , 0 , 47 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . agdmtiie2i ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . fcl0i4s23y ) , rtdwData , 0 , 48 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . fcl0i4s23y ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . gacsk4ue1c ) , rtdwData , 0 , 49 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . gacsk4ue1c ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . hai52o34ao ) , rtdwData , 0 , 50 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . hai52o34ao ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . j1ajf5oks5 ) , rtdwData , 0 , 51 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . j1ajf5oks5 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . n0ya0gspe2 ) , rtdwData , 0 , 52 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . n0ya0gspe2 ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . c5axmpduuz ) , rtdwData , 0 , 53 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . c5axmpduuz ) ) ;
mr_DinamicaCinematicaControleAtitude_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ooql4bod4mp . owudl4s4vs ) , rtdwData , 0 , 54 , sizeof (
mdlrefDW -> rtdw . ooql4bod4mp . owudl4s4vs ) ) ; } } void
mr_DinamicaCinematicaControleAtitude_RegisterSimStateChecksum ( SimStruct * S
) { const uint32_T chksum [ 4 ] = { 3841397476U , 1585794562U , 109277494U ,
1850270650U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"DinamicaCinematicaControleAtitude" , & chksum [ 0 ] ) ; } mxArray *
mr_DinamicaCinematicaControleAtitude_GetSimStateDisallowedBlocks ( ) {
mxArray * data = mxCreateCellMatrix ( 3 , 3 ) ; mwIndex subs [ 2 ] , offset ;
{ static const char_T * blockType [ 3 ] = { "MATLABSystem" , "MATLABSystem" ,
"MATLABSystem" , } ; static const char_T * blockPath [ 3 ] = {
 "DinamicaCinematicaControleAtitude/DinamicaAtitudeSeguidor/Girosc&#xF3;pio/If Action Subsystem/giroSensor/Random Source1"
,
 "DinamicaCinematicaControleAtitude/DinamicaAtitudeSeguidor/Girosc&#xF3;pio/If Action Subsystem/giroSensor1/Random Source1"
,
 "DinamicaCinematicaControleAtitude/DinamicaAtitudeSeguidor/Girosc&#xF3;pio/If Action Subsystem/giroSensor2/Random Source1"
, } ; static const int reason [ 3 ] = { 6 , 6 , 6 , } ; for ( subs [ 0 ] = 0
; subs [ 0 ] < 3 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } } return data
; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
