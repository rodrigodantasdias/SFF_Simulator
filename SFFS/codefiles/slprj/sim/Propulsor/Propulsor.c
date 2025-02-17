#include "Propulsor.h"
#include "rtwtypes.h"
#include "Propulsor_types.h"
#include "Propulsor_private.h"
#include <string.h>
#include "mwmathutil.h"
#include <time.h>
#include <stddef.h>
#include "Propulsor_capi.h"
static RegMdlInfo rtMdlInfo_Propulsor [ 45 ] = { { "kqdtm1plmi2" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Propulsor" } , {
"h013s4aptt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Propulsor" } , { "g4qo4fua3t" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Propulsor" } , { "arvab4gcnz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Propulsor" } , { "etdzyluy3l" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Propulsor" } , {
"ajyahdeuyo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Propulsor" } , { "dcmsala1mj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Propulsor" } , { "jo4unm3m5g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Propulsor" } , { "feb54btzsm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Propulsor" } , {
"ehvl4ohekf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Propulsor" } , { "fsw2jnp2mz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Propulsor" } , { "k52gs2yzn4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Propulsor" } , { "badsi1hmia" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Propulsor" } , {
"djo0io2ayt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Propulsor" } , { "kzoql2zofh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Propulsor" } , { "bgcteftzsf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Propulsor" } , { "jhb1lste1j" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Propulsor" } , {
"fxb2slckzk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Propulsor" } , { "inmzgbaou4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Propulsor" } , { "npi5eyt2xv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Propulsor" } , { "io4yjhha3x" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Propulsor" } , {
"gf4m412xvp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Propulsor" } , { "cm1sx1eabq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Propulsor" } , { "pas1bsdkvf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Propulsor" } , { "Propulsor" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "lbfq1z4cel" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Propulsor" } , {
"jpocpupbvwg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Propulsor" } , { "iksdokfgp1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Propulsor" } , { "idm52sgviy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Propulsor" } , { "dsp_simulink_RandomSource1" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_Propulsor_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Propulsor" } , {
"mr_Propulsor_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Propulsor" } , {
"mr_Propulsor_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Propulsor" } , {
"mr_Propulsor_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Propulsor" } , {
"mr_Propulsor_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Propulsor" } , {
"mr_Propulsor_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Propulsor" } , { "mr_Propulsor_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Propulsor" } , {
"mr_Propulsor_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Propulsor" } , { "mr_Propulsor_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Propulsor" } , {
"mr_Propulsor_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Propulsor" } , { "mr_Propulsor_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Propulsor" } , {
"mr_Propulsor_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Propulsor" } , { "fqblr2yw1g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Propulsor" } , { "Propulsor.h" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( NULL ) } , { "Propulsor.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void
* ) "Propulsor" } } ; jpocpupbvwg jpocpupbvw = { 0.0 , 0.0 , 0.0 } ; static
real_T bsf5ronva5 ( void ) ; static real_T kuiqvh3qee ( real_T x ) ; static
void byei4cxkms ( uint32_T mt [ 625 ] , uint32_T seed ) ; static void
loae1zlb0u ( uint32_T mt [ 625 ] , uint32_T u [ 2 ] ) ; static boolean_T
lbu3hzyfqf ( const uint32_T mt [ 625 ] ) ; static real_T e1m3eiidz2 (
badsi1hmia * localDW ) ; static void d5le3mt413 ( fqblr2yw1g * obj ,
badsi1hmia * localDW ) ; static real_T bsf5ronva5 ( void ) { time_t rawtime ;
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
86400.0 + dDateNum ; } static real_T kuiqvh3qee ( real_T x ) { real_T r ; if
( muDoubleScalarIsNaN ( x ) || muDoubleScalarIsInf ( x ) ) { r = ( rtNaN ) ;
} else if ( x == 0.0 ) { r = 0.0 ; } else { r = muDoubleScalarRem ( x ,
2.147483647E+9 ) ; if ( r == 0.0 ) { r = 0.0 ; } else if ( x < 0.0 ) { r +=
2.147483647E+9 ; } } return r ; } static void byei4cxkms ( uint32_T mt [ 625
] , uint32_T seed ) { int32_T b_mti ; uint32_T r ; r = seed ; mt [ 0 ] = seed
; for ( b_mti = 0 ; b_mti < 623 ; b_mti ++ ) { r = ( ( r >> 30U ^ r ) *
1812433253U + ( uint32_T ) b_mti ) + 1U ; mt [ b_mti + 1 ] = r ; } mt [ 624 ]
= 624U ; } static void loae1zlb0u ( uint32_T mt [ 625 ] , uint32_T u [ 2 ] )
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
static boolean_T lbu3hzyfqf ( const uint32_T mt [ 625 ] ) { int32_T k ;
boolean_T exitg1 ; boolean_T isvalid ; if ( ( mt [ 624 ] >= 1U ) && ( mt [
624 ] < 625U ) ) { isvalid = false ; k = 0 ; exitg1 = false ; while ( ( !
exitg1 ) && ( k + 1 < 625 ) ) { if ( mt [ k ] == 0U ) { k ++ ; } else {
isvalid = true ; exitg1 = true ; } } } else { isvalid = false ; } return
isvalid ; } static real_T e1m3eiidz2 ( badsi1hmia * localDW ) { real_T r ;
int32_T b_mti ; int32_T exitg1 ; uint32_T b_u [ 2 ] ; uint32_T hi ; uint32_T
r_p ; if ( localDW -> cnc2uf4o4h == 4U ) { hi = localDW -> o4noju3p5o /
127773U ; r_p = ( localDW -> o4noju3p5o - hi * 127773U ) * 16807U ; hi *=
2836U ; if ( r_p < hi ) { r_p = ~ ( hi - r_p ) & 2147483647U ; } else { r_p
-= hi ; } r = ( real_T ) r_p * 4.6566128752457969E-10 ; localDW -> o4noju3p5o
= r_p ; } else if ( localDW -> cnc2uf4o4h == 5U ) { r_p = 69069U * localDW ->
jrcnye2rjj [ 0 ] + 1234567U ; hi = localDW -> jrcnye2rjj [ 1 ] << 13 ^
localDW -> jrcnye2rjj [ 1 ] ; hi ^= hi >> 17 ; hi ^= hi << 5 ; localDW ->
jrcnye2rjj [ 0 ] = r_p ; localDW -> jrcnye2rjj [ 1 ] = hi ; r = ( real_T ) (
r_p + hi ) * 2.328306436538696E-10 ; } else { do { exitg1 = 0 ; loae1zlb0u (
localDW -> k3w4qii5po , b_u ) ; r = ( ( real_T ) ( b_u [ 0 ] >> 5U ) *
6.7108864E+7 + ( real_T ) ( b_u [ 1 ] >> 6U ) ) * 1.1102230246251565E-16 ; if
( r == 0.0 ) { if ( ! lbu3hzyfqf ( localDW -> k3w4qii5po ) ) { r_p = 5489U ;
localDW -> k3w4qii5po [ 0 ] = 5489U ; for ( b_mti = 0 ; b_mti < 623 ; b_mti
++ ) { r_p = ( ( r_p >> 30U ^ r_p ) * 1812433253U + ( uint32_T ) b_mti ) + 1U
; localDW -> k3w4qii5po [ b_mti + 1 ] = r_p ; } localDW -> k3w4qii5po [ 624 ]
= 624U ; } } else { exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } return r ; }
static void d5le3mt413 ( fqblr2yw1g * obj , badsi1hmia * localDW ) { time_t
eTime ; time_t eTime_p ; real_T s ; real_T x ; int32_T exitg1 ; int32_T i ;
uint32_T state [ 625 ] ; uint32_T seed ; uint32_T tmethod ; if ( localDW ->
ahhxqv0wya == 4U ) { tmethod = localDW -> cnc2uf4o4h | 16384U ; } else if (
localDW -> ahhxqv0wya == 5U ) { tmethod = localDW -> cnc2uf4o4h | 32768U ; }
else { tmethod = localDW -> cnc2uf4o4h ; } if ( localDW -> cnc2uf4o4h == 7U )
{ memcpy ( & state [ 0 ] , & localDW -> k3w4qii5po [ 0 ] , 625U * sizeof (
uint32_T ) ) ; } else { memset ( & state [ 0 ] , 0 , 625U * sizeof ( uint32_T
) ) ; if ( localDW -> cnc2uf4o4h == 4U ) { state [ 0 ] = localDW ->
o4noju3p5o ; } else { state [ 0 ] = localDW -> jrcnye2rjj [ 0 ] ; state [ 1 ]
= localDW -> jrcnye2rjj [ 1 ] ; } } x = bsf5ronva5 ( ) * 8.64E+6 ; s =
kuiqvh3qee ( muDoubleScalarFloor ( x ) ) ; eTime = time ( NULL ) ; do {
exitg1 = 0 ; eTime_p = time ( NULL ) ; if ( ( int32_T ) eTime_p <= ( int32_T
) eTime + 1 ) { x = bsf5ronva5 ( ) * 8.64E+6 ; if ( s != kuiqvh3qee (
muDoubleScalarFloor ( x ) ) ) { exitg1 = 1 ; } } else { exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; x = muDoubleScalarRound ( s ) ; if ( x <
4.294967296E+9 ) { if ( x >= 0.0 ) { seed = ( uint32_T ) x ; } else { seed =
0U ; } } else if ( x >= 4.294967296E+9 ) { seed = MAX_uint32_T ; } else {
seed = 0U ; } if ( seed == 0U ) { seed = 5489U ; } byei4cxkms ( localDW ->
k3w4qii5po , seed ) ; localDW -> apvciaxirr = seed ; localDW -> cnc2uf4o4h =
7U ; byei4cxkms ( localDW -> k3w4qii5po , localDW -> apvciaxirr ) ; localDW
-> ahhxqv0wya = 0U ; x = e1m3eiidz2 ( localDW ) ; if ( ( tmethod & 16384U )
!= 0U ) { localDW -> ahhxqv0wya = 4U ; } else if ( ( tmethod & 32768U ) != 0U
) { localDW -> ahhxqv0wya = 5U ; } tmethod &= 16383U ; localDW -> cnc2uf4o4h
= tmethod ; if ( tmethod == 7U ) { memcpy ( & localDW -> k3w4qii5po [ 0 ] , &
state [ 0 ] , 625U * sizeof ( uint32_T ) ) ; } else if ( tmethod == 5U ) {
localDW -> jrcnye2rjj [ 0 ] = state [ 0 ] ; localDW -> jrcnye2rjj [ 1 ] =
state [ 1 ] ; } else if ( tmethod == 4U ) { localDW -> o4noju3p5o = state [ 0
] ; } memset ( & obj -> pRandStream [ 0 ] , 0 , 625U * sizeof ( uint32_T ) )
; x = muDoubleScalarFloor ( x * 1.048576E+6 ) + 1.0 ; if ( x < 4.294967296E+9
) { if ( x >= 0.0 ) { tmethod = ( uint32_T ) x ; } else { tmethod = 0U ; } }
else if ( x >= 4.294967296E+9 ) { tmethod = MAX_uint32_T ; } else { tmethod =
0U ; } obj -> pRandStream [ 0 ] = tmethod ; for ( i = 0 ; i < 623 ; i ++ ) {
tmethod = ( ( tmethod >> 30U ^ tmethod ) * 1812433253U + ( uint32_T ) i ) +
1U ; obj -> pRandStream [ i + 1 ] = tmethod ; } obj -> pRandStream [ 624 ] =
624U ; } void io4yjhha3x ( badsi1hmia * localDW , jo4unm3m5g * localX ) {
localDW -> pw3wjofd4q = jpocpupbvw . P_7 ; localDW -> mgzfkf5p3j = true ;
localDW -> jt3tjalxnb = jpocpupbvw . P_5 ; localDW -> an15000nu4 = rtP_Fn ;
localX -> fbmh4qw3zl = jpocpupbvw . P_6 ; d5le3mt413 ( & localDW ->
mrtgw2nthg , localDW ) ; } void npi5eyt2xv ( badsi1hmia * localDW ) { localDW
-> pw3wjofd4q = jpocpupbvw . P_7 ; localDW -> mgzfkf5p3j = true ; localDW ->
jt3tjalxnb = jpocpupbvw . P_5 ; localDW -> an15000nu4 = rtP_Fn ; d5le3mt413 (
& localDW -> mrtgw2nthg , localDW ) ; } void cm1sx1eabq ( idm52sgviy * const
egnxxymnym , badsi1hmia * localDW , ajyahdeuyo * localXdis ) { static const
uint32_T tmp [ 625 ] = { 5489U , 1301868182U , 2938499221U , 2950281878U ,
1875628136U , 751856242U , 944701696U , 2243192071U , 694061057U , 219885934U
, 2066767472U , 3182869408U , 485472502U , 2336857883U , 1071588843U ,
3418470598U , 951210697U , 3693558366U , 2923482051U , 1793174584U ,
2982310801U , 1586906132U , 1951078751U , 1808158765U , 1733897588U ,
431328322U , 4202539044U , 530658942U , 1714810322U , 3025256284U ,
3342585396U , 1937033938U , 2640572511U , 1654299090U , 3692403553U ,
4233871309U , 3497650794U , 862629010U , 2943236032U , 2426458545U ,
1603307207U , 1133453895U , 3099196360U , 2208657629U , 2747653927U ,
931059398U , 761573964U , 3157853227U , 785880413U , 730313442U , 124945756U
, 2937117055U , 3295982469U , 1724353043U , 3021675344U , 3884886417U ,
4010150098U , 4056961966U , 699635835U , 2681338818U , 1339167484U ,
720757518U , 2800161476U , 2376097373U , 1532957371U , 3902664099U ,
1238982754U , 3725394514U , 3449176889U , 3570962471U , 4287636090U ,
4087307012U , 3603343627U , 202242161U , 2995682783U , 1620962684U ,
3704723357U , 371613603U , 2814834333U , 2111005706U , 624778151U ,
2094172212U , 4284947003U , 1211977835U , 991917094U , 1570449747U ,
2962370480U , 1259410321U , 170182696U , 146300961U , 2836829791U ,
619452428U , 2723670296U , 1881399711U , 1161269684U , 1675188680U ,
4132175277U , 780088327U , 3409462821U , 1036518241U , 1834958505U ,
3048448173U , 161811569U , 618488316U , 44795092U , 3918322701U , 1924681712U
, 3239478144U , 383254043U , 4042306580U , 2146983041U , 3992780527U ,
3518029708U , 3545545436U , 3901231469U , 1896136409U , 2028528556U ,
2339662006U , 501326714U , 2060962201U , 2502746480U , 561575027U ,
581893337U , 3393774360U , 1778912547U , 3626131687U , 2175155826U ,
319853231U , 986875531U , 819755096U , 2915734330U , 2688355739U ,
3482074849U , 2736559U , 2296975761U , 1029741190U , 2876812646U , 690154749U
, 579200347U , 4027461746U , 1285330465U , 2701024045U , 4117700889U ,
759495121U , 3332270341U , 2313004527U , 2277067795U , 4131855432U ,
2722057515U , 1264804546U , 3848622725U , 2211267957U , 4100593547U ,
959123777U , 2130745407U , 3194437393U , 486673947U , 1377371204U , 17472727U
, 352317554U , 3955548058U , 159652094U , 1232063192U , 3835177280U ,
49423123U , 3083993636U , 733092U , 2120519771U , 2573409834U , 1112952433U ,
3239502554U , 761045320U , 1087580692U , 2540165110U , 641058802U ,
1792435497U , 2261799288U , 1579184083U , 627146892U , 2165744623U ,
2200142389U , 2167590760U , 2381418376U , 1793358889U , 3081659520U ,
1663384067U , 2009658756U , 2689600308U , 739136266U , 2304581039U ,
3529067263U , 591360555U , 525209271U , 3131882996U , 294230224U ,
2076220115U , 3113580446U , 1245621585U , 1386885462U , 3203270426U ,
123512128U , 12350217U , 354956375U , 4282398238U , 3356876605U , 3888857667U
, 157639694U , 2616064085U , 1563068963U , 2762125883U , 4045394511U ,
4180452559U , 3294769488U , 1684529556U , 1002945951U , 3181438866U ,
22506664U , 691783457U , 2685221343U , 171579916U , 3878728600U , 2475806724U
, 2030324028U , 3331164912U , 1708711359U , 1970023127U , 2859691344U ,
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
2844269403U , 79981964U , 624U } ; ssSetBlockStateForSolverChangedAtMajorStep
( egnxxymnym -> _mdlRefSfcnS ) ; ( void ) memset ( & ( localXdis ->
fbmh4qw3zl ) , 1 , 1 * sizeof ( boolean_T ) ) ; localDW -> jypkwgov1i = - 1 ;
localDW -> apvciaxirr = 0U ; localDW -> f2lwi2ca1a = true ; localDW ->
cnc2uf4o4h = 7U ; localDW -> ohtlwjnutg = true ; localDW -> ahhxqv0wya = 0U ;
localDW -> inionp4ncy = true ; localDW -> dnm13dz2ax [ 0 ] = 362436069U ;
localDW -> dnm13dz2ax [ 1 ] = 521288629U ; localDW -> btjdqxe4rl = true ;
memcpy ( & localDW -> k3w4qii5po [ 0 ] , & tmp [ 0 ] , 625U * sizeof (
uint32_T ) ) ; localDW -> ocqntevs0g = true ; localDW -> o4noju3p5o =
1144108930U ; localDW -> jhwrgfx3t0 = true ; localDW -> jrcnye2rjj [ 0 ] =
362436069U ; localDW -> jrcnye2rjj [ 1 ] = 521288629U ; localDW -> it1f3ijavg
= true ; localDW -> mrtgw2nthg . TunablePropsChanged = false ; localDW ->
mrtgw2nthg . isInitialized = 0 ; localDW -> mrtgw2nthg .
tunablePropertyChanged [ 0 ] = false ; localDW -> mrtgw2nthg .
tunablePropertyChanged [ 1 ] = false ; localDW -> mrtgw2nthg .
tunablePropertyChanged [ 2 ] = false ; localDW -> mrtgw2nthg .
tunablePropertyChanged [ 3 ] = false ; localDW -> d4xx3vji4n = true ; if (
localDW -> mrtgw2nthg . isInitialized == 1 ) { localDW -> mrtgw2nthg .
TunablePropsChanged = true ; localDW -> mrtgw2nthg . tunablePropertyChanged [
0 ] = true ; } localDW -> mrtgw2nthg . MinVal = 1.0 - rtP_peak_prop / 100.0 ;
if ( localDW -> mrtgw2nthg . isInitialized == 1 ) { localDW -> mrtgw2nthg .
TunablePropsChanged = true ; localDW -> mrtgw2nthg . tunablePropertyChanged [
1 ] = true ; } localDW -> mrtgw2nthg . MaxVal = rtP_peak_prop / 100.0 + 1.0 ;
localDW -> mrtgw2nthg . isInitialized = 1 ; localDW -> mrtgw2nthg . pA = 1.0
; localDW -> mrtgw2nthg . pB = 0.0 ; d5le3mt413 ( & localDW -> mrtgw2nthg ,
localDW ) ; localDW -> mrtgw2nthg . pA = localDW -> mrtgw2nthg . MaxVal -
localDW -> mrtgw2nthg . MinVal ; localDW -> mrtgw2nthg . pB = localDW ->
mrtgw2nthg . MinVal ; localDW -> mrtgw2nthg . TunablePropsChanged = false ; }
void Propulsor ( idm52sgviy * const egnxxymnym , const real_T * ifrc3wggig ,
real_T * gwwwd5ymuk , djo0io2ayt * localB , badsi1hmia * localDW , jo4unm3m5g
* localX , ajyahdeuyo * localXdis ) { real_T q ; real_T tmp ; real_T x ;
int32_T exitg2 ; int32_T i ; uint32_T varargin_1 [ 625 ] ; uint32_T b_u [ 2 ]
; uint32_T r ; int8_T rtAction ; int8_T rtPrevAction ; boolean_T flag [ 4 ] ;
boolean_T exitg1 ; boolean_T propChanged ; boolean_T rEQ0 ; if (
rtmIsMajorTimeStep ( egnxxymnym ) ) { localB -> gutio4nps3 = localDW ->
pw3wjofd4q ; } if ( rtP_mib / localB -> gutio4nps3 >= * ifrc3wggig ) { localB
-> bf2wfhi4jc = 0.0 ; } else { x = 1.0 / rtP_tc * 6.2831853071795862 *
rtmGetTaskTime ( egnxxymnym , 0 ) ; if ( muDoubleScalarIsNaN ( x ) ||
muDoubleScalarIsInf ( x ) ) { tmp = ( rtNaN ) ; } else if ( x == 0.0 ) { tmp
= 0.0 ; } else { tmp = muDoubleScalarRem ( x , 6.2831853071795862 ) ; rEQ0 =
( tmp == 0.0 ) ; if ( ! rEQ0 ) { q = muDoubleScalarAbs ( x /
6.2831853071795862 ) ; rEQ0 = ! ( muDoubleScalarAbs ( q - muDoubleScalarFloor
( q + 0.5 ) ) > 2.2204460492503131E-16 * q ) ; } if ( rEQ0 ) { tmp = 0.0 ; }
else if ( x < 0.0 ) { tmp += 6.2831853071795862 ; } } localB -> bf2wfhi4jc =
( ( real_T ) ( tmp < * ifrc3wggig * localB -> gutio4nps3 * rtP_tc / localB ->
gutio4nps3 * 100.0 / rtP_tc * 6.2831853071795862 / 100.0 ) * 2.0 - 1.0 ) *
localB -> gutio4nps3 ; if ( localB -> bf2wfhi4jc <= 0.0 ) { localB ->
bf2wfhi4jc = 0.0 ; } } if ( rtmIsMajorTimeStep ( egnxxymnym ) ) { if (
localDW -> mgzfkf5p3j ) { for ( i = 0 ; i < 10 ; i ++ ) { localDW ->
ijra2dyz05 [ i ] = localB -> bf2wfhi4jc ; } } localB -> bls4tif30l = localDW
-> ijra2dyz05 [ 0 ] ; localB -> ef0xyjxe45 = localDW -> jt3tjalxnb ; } rEQ0 =
( localB -> bf2wfhi4jc < localB -> ef0xyjxe45 ) ; rtPrevAction = localDW ->
jypkwgov1i ; if ( ssIsModeUpdateTimeStep ( egnxxymnym -> _mdlRefSfcnS ) ) {
rtAction = ( int8_T ) ! ( rtP_Tpulse != 0.0 ) ; localDW -> jypkwgov1i =
rtAction ; } else { rtAction = localDW -> jypkwgov1i ; } if ( rtPrevAction !=
rtAction ) { ssSetBlockStateForSolverChangedAtMajorStep ( egnxxymnym ->
_mdlRefSfcnS ) ; if ( rtmGetTaskTime ( egnxxymnym , 0 ) == rtmGetTStart (
egnxxymnym ) ) { ( void ) memset ( & ( localXdis -> fbmh4qw3zl ) , 1 , 1 *
sizeof ( boolean_T ) ) ; } if ( rtPrevAction == 0 ) { ( void ) memset ( & (
localXdis -> fbmh4qw3zl ) , 1 , 1 * sizeof ( boolean_T ) ) ; } } if (
rtAction == 0 ) { if ( rtPrevAction != 0 ) { if ( rtmGetTaskTime ( egnxxymnym
, 0 ) != rtmGetTStart ( egnxxymnym ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( egnxxymnym -> _mdlRefSfcnS ) ; }
( void ) memset ( & ( localXdis -> fbmh4qw3zl ) , 0 , 1 * sizeof ( boolean_T
) ) ; } localB -> asphu4mscc = ( localB -> bls4tif30l - localX -> fbmh4qw3zl
) / rtP_Tpulse ; * gwwwd5ymuk = localX -> fbmh4qw3zl ; if (
ssIsModeUpdateTimeStep ( egnxxymnym -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> jxwdrgb2ll ) ; } } else { if ( rtmIsMajorTimeStep ( egnxxymnym ) )
{ * gwwwd5ymuk = localB -> bls4tif30l ; } if ( ssIsModeUpdateTimeStep (
egnxxymnym -> _mdlRefSfcnS ) ) { srUpdateBC ( localDW -> htitws2jba ) ; } }
if ( rtmIsMajorTimeStep ( egnxxymnym ) ) { localB -> p1r50emq1s = localDW ->
an15000nu4 ; if ( 1.0 - rtP_peak_prop / 100.0 != localDW -> mrtgw2nthg .
MinVal ) { if ( localDW -> mrtgw2nthg . isInitialized == 1 ) { localDW ->
mrtgw2nthg . TunablePropsChanged = true ; localDW -> mrtgw2nthg .
tunablePropertyChanged [ 0 ] = true ; } localDW -> mrtgw2nthg . MinVal = 1.0
- rtP_peak_prop / 100.0 ; } if ( rtP_peak_prop / 100.0 + 1.0 != localDW ->
mrtgw2nthg . MaxVal ) { if ( localDW -> mrtgw2nthg . isInitialized == 1 ) {
localDW -> mrtgw2nthg . TunablePropsChanged = true ; localDW -> mrtgw2nthg .
tunablePropertyChanged [ 1 ] = true ; } localDW -> mrtgw2nthg . MaxVal =
rtP_peak_prop / 100.0 + 1.0 ; } if ( localDW -> mrtgw2nthg .
TunablePropsChanged ) { localDW -> mrtgw2nthg . TunablePropsChanged = false ;
flag [ 0 ] = localDW -> mrtgw2nthg . tunablePropertyChanged [ 1 ] ; flag [ 1
] = localDW -> mrtgw2nthg . tunablePropertyChanged [ 0 ] ; flag [ 2 ] =
localDW -> mrtgw2nthg . tunablePropertyChanged [ 2 ] ; flag [ 3 ] = localDW
-> mrtgw2nthg . tunablePropertyChanged [ 3 ] ; propChanged = false ; i = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( i < 4 ) ) { if ( flag [ i ] ) {
propChanged = true ; exitg1 = true ; } else { i ++ ; } } if ( propChanged ) {
localDW -> mrtgw2nthg . pA = localDW -> mrtgw2nthg . MaxVal - localDW ->
mrtgw2nthg . MinVal ; localDW -> mrtgw2nthg . pB = localDW -> mrtgw2nthg .
MinVal ; } localDW -> mrtgw2nthg . tunablePropertyChanged [ 0 ] = false ;
localDW -> mrtgw2nthg . tunablePropertyChanged [ 1 ] = false ; localDW ->
mrtgw2nthg . tunablePropertyChanged [ 2 ] = false ; localDW -> mrtgw2nthg .
tunablePropertyChanged [ 3 ] = false ; } memcpy ( & varargin_1 [ 0 ] , &
localDW -> mrtgw2nthg . pRandStream [ 0 ] , 625U * sizeof ( uint32_T ) ) ; do
{ exitg2 = 0 ; loae1zlb0u ( varargin_1 , b_u ) ; x = ( ( real_T ) ( b_u [ 0 ]
>> 5U ) * 6.7108864E+7 + ( real_T ) ( b_u [ 1 ] >> 6U ) ) *
1.1102230246251565E-16 ; if ( x == 0.0 ) { if ( ! lbu3hzyfqf ( varargin_1 ) )
{ r = 5489U ; varargin_1 [ 0 ] = 5489U ; for ( i = 0 ; i < 623 ; i ++ ) { r =
( ( r >> 30U ^ r ) * 1812433253U + ( uint32_T ) i ) + 1U ; varargin_1 [ i + 1
] = r ; } varargin_1 [ 624 ] = 624U ; } } else { exitg2 = 1 ; } } while (
exitg2 == 0 ) ; memcpy ( & localDW -> mrtgw2nthg . pRandStream [ 0 ] , &
varargin_1 [ 0 ] , 625U * sizeof ( uint32_T ) ) ; localB -> ou5c44smff = ( x
* localDW -> mrtgw2nthg . pA + localDW -> mrtgw2nthg . pB ) * rtP_Fn ; } if (
rEQ0 ) { localB -> boz3xcsbjt = localB -> ou5c44smff ; } else { localB ->
boz3xcsbjt = localB -> p1r50emq1s ; } } void inmzgbaou4 ( idm52sgviy * const
egnxxymnym , djo0io2ayt * localB , badsi1hmia * localDW ) { int32_T idxDelay
; if ( rtmIsMajorTimeStep ( egnxxymnym ) ) { if ( memcmp ( egnxxymnym ->
nonContDerivSignal [ 0 ] . pCurrVal , egnxxymnym -> nonContDerivSignal [ 0 ]
. pPrevVal , egnxxymnym -> nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) {
( void ) memcpy ( egnxxymnym -> nonContDerivSignal [ 0 ] . pPrevVal ,
egnxxymnym -> nonContDerivSignal [ 0 ] . pCurrVal , egnxxymnym ->
nonContDerivSignal [ 0 ] . sizeInBytes ) ; ssSetSolverNeedsResetWithReason (
egnxxymnym -> _mdlRefSfcnS , 32 ) ; } } if ( rtmIsMajorTimeStep ( egnxxymnym
) ) { localDW -> pw3wjofd4q = localB -> boz3xcsbjt ; localDW -> mgzfkf5p3j =
false ; for ( idxDelay = 0 ; idxDelay < 9 ; idxDelay ++ ) { localDW ->
ijra2dyz05 [ ( uint32_T ) idxDelay ] = localDW -> ijra2dyz05 [ ( uint32_T )
idxDelay + 1U ] ; } localDW -> ijra2dyz05 [ 9 ] = localB -> bf2wfhi4jc ;
localDW -> jt3tjalxnb = localB -> bf2wfhi4jc ; localDW -> an15000nu4 = localB
-> boz3xcsbjt ; } } void fxb2slckzk ( djo0io2ayt * localB , badsi1hmia *
localDW , dcmsala1mj * localXdot ) { localXdot -> fbmh4qw3zl = 0.0 ; if (
localDW -> jypkwgov1i == 0 ) { localXdot -> fbmh4qw3zl = localB -> asphu4mscc
; } } void bgcteftzsf ( idm52sgviy * const egnxxymnym ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( egnxxymnym ->
_mdlRefSfcnS , "Propulsor" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ;
} } void gf4m412xvp ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , idm52sgviy * const egnxxymnym , djo0io2ayt
* localB , badsi1hmia * localDW , jo4unm3m5g * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { ( void ) memset
( ( void * ) egnxxymnym , 0 , sizeof ( idm52sgviy ) ) ; egnxxymnym -> Timing
. mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; egnxxymnym -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; egnxxymnym -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( egnxxymnym -> _mdlRefSfcnS , "Propulsor" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> gutio4nps3 = 0.0
; localB -> bls4tif30l = 0.0 ; localB -> ef0xyjxe45 = 0.0 ; localB ->
p1r50emq1s = 0.0 ; localB -> ou5c44smff = 0.0 ; localB -> boz3xcsbjt = 0.0 ;
localB -> bf2wfhi4jc = 0.0 ; localB -> asphu4mscc = 0.0 ; } ( void ) memset (
( void * ) localDW , 0 , sizeof ( badsi1hmia ) ) ; localDW -> pw3wjofd4q =
0.0 ; { int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) { localDW -> ijra2dyz05 [ i
] = 0.0 ; } } localDW -> jt3tjalxnb = 0.0 ; localDW -> an15000nu4 = 0.0 ;
Propulsor_InitializeDataMapInfo ( egnxxymnym , localDW , localX , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
egnxxymnym -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( egnxxymnym ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
egnxxymnym -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } egnxxymnym ->
nonContDerivSignal [ 0 ] . pPrevVal = ( char_T * ) egnxxymnym ->
NonContDerivMemory . mr_nonContSig0 ; egnxxymnym -> nonContDerivSignal [ 0 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; egnxxymnym -> nonContDerivSignal
[ 0 ] . pCurrVal = ( char_T * ) ( & localB -> bls4tif30l ) ; ; if (
mr_nonContOutputArray [ 0 ] != ( NULL ) ) { mr_nonContOutputArray [ 0 ] [ 0 ]
. sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 0 ] [ 0 ] .
currVal = ( char_T * ) & localB -> bls4tif30l ; mr_nonContOutputArray [ 0 ] [
0 ] . next = ( NULL ) ; } } void mr_Propulsor_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_Propulsor , 45 ) ; * retVal = 1 ; } static void
mr_Propulsor_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_Propulsor_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Propulsor_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Propulsor_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Propulsor_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Propulsor_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_Propulsor_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_Propulsor_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_Propulsor_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_Propulsor_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Propulsor_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Propulsor_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Propulsor_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Propulsor_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_Propulsor_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Propulsor_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Propulsor_GetDWork ( const kqdtm1plmi2 * mdlrefDW ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce"
, } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Propulsor_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char_T *
rtdwDataFieldNames [ 24 ] = { "mdlrefDW->rtdw.mrtgw2nthg" ,
"mdlrefDW->rtdw.pw3wjofd4q" , "mdlrefDW->rtdw.ijra2dyz05" ,
"mdlrefDW->rtdw.jt3tjalxnb" , "mdlrefDW->rtdw.an15000nu4" ,
"mdlrefDW->rtdw.apvciaxirr" , "mdlrefDW->rtdw.o4noju3p5o" ,
"mdlrefDW->rtdw.ahhxqv0wya" , "mdlrefDW->rtdw.dnm13dz2ax" ,
"mdlrefDW->rtdw.k3w4qii5po" , "mdlrefDW->rtdw.cnc2uf4o4h" ,
"mdlrefDW->rtdw.jrcnye2rjj" , "mdlrefDW->rtdw.jypkwgov1i" ,
"mdlrefDW->rtdw.htitws2jba" , "mdlrefDW->rtdw.jxwdrgb2ll" ,
"mdlrefDW->rtdw.mgzfkf5p3j" , "mdlrefDW->rtdw.d4xx3vji4n" ,
"mdlrefDW->rtdw.f2lwi2ca1a" , "mdlrefDW->rtdw.it1f3ijavg" ,
"mdlrefDW->rtdw.jhwrgfx3t0" , "mdlrefDW->rtdw.ocqntevs0g" ,
"mdlrefDW->rtdw.btjdqxe4rl" , "mdlrefDW->rtdw.inionp4ncy" ,
"mdlrefDW->rtdw.ohtlwjnutg" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 24 , rtdwDataFieldNames ) ; mr_Propulsor_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . mrtgw2nthg ) ,
sizeof ( mdlrefDW -> rtdw . mrtgw2nthg ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . pw3wjofd4q ) ,
sizeof ( mdlrefDW -> rtdw . pw3wjofd4q ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 2 , ( const void * ) & ( mdlrefDW -> rtdw . ijra2dyz05 ) ,
sizeof ( mdlrefDW -> rtdw . ijra2dyz05 ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 3 , ( const void * ) & ( mdlrefDW -> rtdw . jt3tjalxnb ) ,
sizeof ( mdlrefDW -> rtdw . jt3tjalxnb ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 4 , ( const void * ) & ( mdlrefDW -> rtdw . an15000nu4 ) ,
sizeof ( mdlrefDW -> rtdw . an15000nu4 ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . apvciaxirr ) ,
sizeof ( mdlrefDW -> rtdw . apvciaxirr ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 6 , ( const void * ) & ( mdlrefDW -> rtdw . o4noju3p5o ) ,
sizeof ( mdlrefDW -> rtdw . o4noju3p5o ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 7 , ( const void * ) & ( mdlrefDW -> rtdw . ahhxqv0wya ) ,
sizeof ( mdlrefDW -> rtdw . ahhxqv0wya ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 8 , ( const void * ) & ( mdlrefDW -> rtdw . dnm13dz2ax ) ,
sizeof ( mdlrefDW -> rtdw . dnm13dz2ax ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 9 , ( const void * ) & ( mdlrefDW -> rtdw . k3w4qii5po ) ,
sizeof ( mdlrefDW -> rtdw . k3w4qii5po ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 10 , ( const void * ) & ( mdlrefDW -> rtdw . cnc2uf4o4h ) ,
sizeof ( mdlrefDW -> rtdw . cnc2uf4o4h ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 11 , ( const void * ) & ( mdlrefDW -> rtdw . jrcnye2rjj ) ,
sizeof ( mdlrefDW -> rtdw . jrcnye2rjj ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 12 , ( const void * ) & ( mdlrefDW -> rtdw . jypkwgov1i ) ,
sizeof ( mdlrefDW -> rtdw . jypkwgov1i ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 13 , ( const void * ) & ( mdlrefDW -> rtdw . htitws2jba ) ,
sizeof ( mdlrefDW -> rtdw . htitws2jba ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 14 , ( const void * ) & ( mdlrefDW -> rtdw . jxwdrgb2ll ) ,
sizeof ( mdlrefDW -> rtdw . jxwdrgb2ll ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 15 , ( const void * ) & ( mdlrefDW -> rtdw . mgzfkf5p3j ) ,
sizeof ( mdlrefDW -> rtdw . mgzfkf5p3j ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 16 , ( const void * ) & ( mdlrefDW -> rtdw . d4xx3vji4n ) ,
sizeof ( mdlrefDW -> rtdw . d4xx3vji4n ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 17 , ( const void * ) & ( mdlrefDW -> rtdw . f2lwi2ca1a ) ,
sizeof ( mdlrefDW -> rtdw . f2lwi2ca1a ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 18 , ( const void * ) & ( mdlrefDW -> rtdw . it1f3ijavg ) ,
sizeof ( mdlrefDW -> rtdw . it1f3ijavg ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 19 , ( const void * ) & ( mdlrefDW -> rtdw . jhwrgfx3t0 ) ,
sizeof ( mdlrefDW -> rtdw . jhwrgfx3t0 ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 20 , ( const void * ) & ( mdlrefDW -> rtdw . ocqntevs0g ) ,
sizeof ( mdlrefDW -> rtdw . ocqntevs0g ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 21 , ( const void * ) & ( mdlrefDW -> rtdw . btjdqxe4rl ) ,
sizeof ( mdlrefDW -> rtdw . btjdqxe4rl ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 22 , ( const void * ) & ( mdlrefDW -> rtdw . inionp4ncy ) ,
sizeof ( mdlrefDW -> rtdw . inionp4ncy ) ) ; mr_Propulsor_cacheDataAsMxArray
( rtdwData , 0 , 23 , ( const void * ) & ( mdlrefDW -> rtdw . ohtlwjnutg ) ,
sizeof ( mdlrefDW -> rtdw . ohtlwjnutg ) ) ; mxSetFieldByNumber ( ssDW , 0 ,
1 , rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void
mr_Propulsor_SetDWork ( kqdtm1plmi2 * mdlrefDW , const mxArray * ssDW ) { (
void ) ssDW ; ( void ) mdlrefDW ; mr_Propulsor_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) )
; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
mrtgw2nthg ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . mrtgw2nthg ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
pw3wjofd4q ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . pw3wjofd4q ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
ijra2dyz05 ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . ijra2dyz05 ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jt3tjalxnb ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . jt3tjalxnb ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
an15000nu4 ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . an15000nu4 ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
apvciaxirr ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . apvciaxirr ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
o4noju3p5o ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . o4noju3p5o ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
ahhxqv0wya ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . ahhxqv0wya ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
dnm13dz2ax ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . dnm13dz2ax ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
k3w4qii5po ) , rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw . k3w4qii5po ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
cnc2uf4o4h ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . cnc2uf4o4h ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jrcnye2rjj ) , rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw . jrcnye2rjj ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jypkwgov1i ) , rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw . jypkwgov1i ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
htitws2jba ) , rtdwData , 0 , 13 , sizeof ( mdlrefDW -> rtdw . htitws2jba ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jxwdrgb2ll ) , rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . jxwdrgb2ll ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
mgzfkf5p3j ) , rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw . mgzfkf5p3j ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
d4xx3vji4n ) , rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw . d4xx3vji4n ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
f2lwi2ca1a ) , rtdwData , 0 , 17 , sizeof ( mdlrefDW -> rtdw . f2lwi2ca1a ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
it1f3ijavg ) , rtdwData , 0 , 18 , sizeof ( mdlrefDW -> rtdw . it1f3ijavg ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jhwrgfx3t0 ) , rtdwData , 0 , 19 , sizeof ( mdlrefDW -> rtdw . jhwrgfx3t0 ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
ocqntevs0g ) , rtdwData , 0 , 20 , sizeof ( mdlrefDW -> rtdw . ocqntevs0g ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
btjdqxe4rl ) , rtdwData , 0 , 21 , sizeof ( mdlrefDW -> rtdw . btjdqxe4rl ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
inionp4ncy ) , rtdwData , 0 , 22 , sizeof ( mdlrefDW -> rtdw . inionp4ncy ) )
; mr_Propulsor_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
ohtlwjnutg ) , rtdwData , 0 , 23 , sizeof ( mdlrefDW -> rtdw . ohtlwjnutg ) )
; } } void mr_Propulsor_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 2795435247U , 3577963341U , 3255882608U ,
1962458027U , } ; slmrModelRefRegisterSimStateChecksum ( S , "Propulsor" , &
chksum [ 0 ] ) ; } mxArray * mr_Propulsor_GetSimStateDisallowedBlocks ( ) {
mxArray * data = mxCreateCellMatrix ( 1 , 3 ) ; mwIndex subs [ 2 ] , offset ;
{ static const char_T * blockType [ 1 ] = { "MATLABSystem" , } ; static const
char_T * blockPath [ 1 ] = { "Propulsor/Random Source2" , } ; static const
int reason [ 1 ] = { 6 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 1 ; ++ (
subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 ,
subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ]
] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [
0 ] ] ) ) ; } } return data ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
