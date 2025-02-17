#include "TempoAcioProp.h"
#include "rtwtypes.h"
#include "TempoAcioProp_types.h"
#include "mwmathutil.h"
#include <string.h>
#include <emmintrin.h>
#include <stdlib.h>
#include <stddef.h>
#include "TempoAcioProp_capi.h"
#include "TempoAcioProp_private.h"
static RegMdlInfo rtMdlInfo_TempoAcioProp [ 45 ] = { { "hunxlyfe3u3" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"pxoxlrruy2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"TempoAcioProp" } , { "a4q5vn41o4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "TempoAcioProp" } , { "db0q4vq0yv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"klb5jlzllc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"TempoAcioProp" } , { "fxwqenm30g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "TempoAcioProp" } , { "anffgxejl5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"cplusdflhy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"TempoAcioProp" } , { "fhamh3xcbg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "TempoAcioProp" } , { "po0dtgqcg0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"e0zdfijwxh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"TempoAcioProp" } , { "pu01oqzras" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "TempoAcioProp" } , { "nqgmybsq0n" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"elbcw3r0hv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"TempoAcioProp" } , { "ehrnwzgqdf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "TempoAcioProp" } , { "hss3zorcta" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"c5oea2ovm4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"TempoAcioProp" } , { "na2hctccsr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "TempoAcioProp" } , { "imlouds02s" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"bx1fqdjqke" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"TempoAcioProp" } , { "ob3caoeqpn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "TempoAcioProp" } , { "ek0t04ceox" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"TempoAcioProp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , {
"fzz0yevc1x" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"TempoAcioProp" } , { "eu4pm0cwru" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "TempoAcioProp" } , { "eybvr0iiw2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"mr_TempoAcioProp_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "TempoAcioProp" } , {
"mr_TempoAcioProp_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"mr_TempoAcioProp_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"mr_TempoAcioProp_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"mr_TempoAcioProp_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"mr_TempoAcioProp_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "TempoAcioProp" } , {
"mr_TempoAcioProp_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "TempoAcioProp" } , {
"mr_TempoAcioProp_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "TempoAcioProp" } , { "mr_TempoAcioProp_cacheDataAsMxArray"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"mr_TempoAcioProp_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "TempoAcioProp" } , { "mr_TempoAcioProp_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"mr_TempoAcioProp_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void *
) "TempoAcioProp" } , { "bgg4bqzvkv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "TempoAcioProp" } , { "niw5ihly3e" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"ifhbcdgc3z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"TempoAcioProp" } , { "axgvowmerb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "TempoAcioProp" } , { "n5ghxm5fxo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "TempoAcioProp" } , {
"TempoAcioProp.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"TempoAcioProp.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"TempoAcioProp" } } ; static void lenvvqy3rm ( bgg4bqzvkv * * pEmxArray ,
int32_T numDimensions ) ; static void plvmqlc3s3 ( bgg4bqzvkv * emxArray ,
int32_T oldNumel ) ; static void hdk3brofhu ( n5ghxm5fxo * * pEmxArray ,
int32_T numDimensions ) ; static void mzacrwqtei ( n5ghxm5fxo * emxArray ,
int32_T oldNumel ) ; static boolean_T etrchao2f0 ( const n5ghxm5fxo * x ) ;
static void igx2uomfyg ( bgg4bqzvkv * * pEmxArray ) ; static void jgovj1yvlg
( n5ghxm5fxo * * pEmxArray ) ; static void ebnp2fg23w ( const bgg4bqzvkv * x
, real_T * ex , int32_T * idx ) ; static void g4m5ifdfri ( real_T A [ 72 ] ,
real_T b [ 6 ] ) ; static void n1jfebt5n1 ( ifhbcdgc3z * * pEmxArray ,
int32_T numDimensions ) ; static void kipgyfyohp ( ifhbcdgc3z * emxArray ,
int32_T oldNumel ) ; static void k55bzqg4sg ( const n5ghxm5fxo * x ,
ifhbcdgc3z * y ) ; static void pnbtie14ur ( ifhbcdgc3z * * pEmxArray ) ;
static void msivsuhbgf ( niw5ihly3e * * pEmxArray , int32_T numDimensions ) ;
static void p3v3mquu5v ( niw5ihly3e * emxArray , int32_T oldNumel ) ; static
void ebsotqylg1 ( axgvowmerb * * pEmxArray , int32_T numDimensions ) ; static
void etx3rkwczi ( axgvowmerb * * pEmxArray ) ; static void czeztwxmat (
niw5ihly3e * * pEmxArray ) ; static void l0511dbym4 ( axgvowmerb * emxArray ,
int32_T oldNumel ) ; static void hf3joj1gmh ( const real_T A [ 72 ] , const
real_T b [ 6 ] , bgg4bqzvkv * tab , bgg4bqzvkv * sol ) ; static void
lenvvqy3rm ( bgg4bqzvkv * * pEmxArray , int32_T numDimensions ) { bgg4bqzvkv
* emxArray ; int32_T i ; * pEmxArray = ( bgg4bqzvkv * ) malloc ( sizeof (
bgg4bqzvkv ) ) ; emxArray = * pEmxArray ; emxArray -> data = ( real_T * )
NULL ; emxArray -> numDimensions = numDimensions ; emxArray -> size = (
int32_T * ) malloc ( sizeof ( int32_T ) * ( uint32_T ) numDimensions ) ;
emxArray -> allocatedSize = 0 ; emxArray -> canFreeData = true ; for ( i = 0
; i < numDimensions ; i ++ ) { emxArray -> size [ i ] = 0 ; } } static void
plvmqlc3s3 ( bgg4bqzvkv * emxArray , int32_T oldNumel ) { int32_T i ; int32_T
newNumel ; void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel =
1 ; for ( i = 0 ; i < emxArray -> numDimensions ; i ++ ) { newNumel *=
emxArray -> size [ i ] ; } if ( newNumel > emxArray -> allocatedSize ) { i =
emxArray -> allocatedSize ; if ( i < 16 ) { i = 16 ; } while ( i < newNumel )
{ if ( i > 1073741823 ) { i = MAX_int32_T ; } else { i <<= 1 ; } } newData =
malloc ( ( uint32_T ) i * sizeof ( real_T ) ) ; if ( emxArray -> data != NULL
) { memcpy ( newData , emxArray -> data , sizeof ( real_T ) * ( uint32_T )
oldNumel ) ; if ( emxArray -> canFreeData ) { free ( emxArray -> data ) ; } }
emxArray -> data = ( real_T * ) newData ; emxArray -> allocatedSize = i ;
emxArray -> canFreeData = true ; } } static void hdk3brofhu ( n5ghxm5fxo * *
pEmxArray , int32_T numDimensions ) { n5ghxm5fxo * emxArray ; int32_T i ; *
pEmxArray = ( n5ghxm5fxo * ) malloc ( sizeof ( n5ghxm5fxo ) ) ; emxArray = *
pEmxArray ; emxArray -> data = ( boolean_T * ) NULL ; emxArray ->
numDimensions = numDimensions ; emxArray -> size = ( int32_T * ) malloc (
sizeof ( int32_T ) * ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize
= 0 ; emxArray -> canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++
) { emxArray -> size [ i ] = 0 ; } } static void mzacrwqtei ( n5ghxm5fxo *
emxArray , int32_T oldNumel ) { int32_T i ; int32_T newNumel ; void * newData
; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i <
emxArray -> numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; }
if ( newNumel > emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ;
if ( i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i
= MAX_int32_T ; } else { i <<= 1 ; } } newData = malloc ( ( uint32_T ) i *
sizeof ( boolean_T ) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData ,
emxArray -> data , sizeof ( boolean_T ) * ( uint32_T ) oldNumel ) ; if (
emxArray -> canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data
= ( boolean_T * ) newData ; emxArray -> allocatedSize = i ; emxArray ->
canFreeData = true ; } } static boolean_T etrchao2f0 ( const n5ghxm5fxo * x )
{ int32_T ix ; boolean_T exitg1 ; boolean_T y ; y = false ; ix = 1 ; exitg1 =
false ; while ( ( ! exitg1 ) && ( ix <= x -> size [ 1 ] ) ) { if ( x -> data
[ ix - 1 ] ) { y = true ; exitg1 = true ; } else { ix ++ ; } } return y ; }
static void igx2uomfyg ( bgg4bqzvkv * * pEmxArray ) { if ( * pEmxArray != (
bgg4bqzvkv * ) NULL ) { if ( ( ( * pEmxArray ) -> data != ( real_T * ) NULL )
&& ( * pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data ) ; }
free ( ( * pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = (
bgg4bqzvkv * ) NULL ; } } static void jgovj1yvlg ( n5ghxm5fxo * * pEmxArray )
{ if ( * pEmxArray != ( n5ghxm5fxo * ) NULL ) { if ( ( ( * pEmxArray ) ->
data != ( boolean_T * ) NULL ) && ( * pEmxArray ) -> canFreeData ) { free ( (
* pEmxArray ) -> data ) ; } free ( ( * pEmxArray ) -> size ) ; free ( *
pEmxArray ) ; * pEmxArray = ( n5ghxm5fxo * ) NULL ; } } static void
ebnp2fg23w ( const bgg4bqzvkv * x , real_T * ex , int32_T * idx ) { real_T
x_p ; int32_T b_idx ; int32_T k ; int32_T last_tmp ; boolean_T exitg1 ;
last_tmp = x -> size [ 1 ] ; if ( x -> size [ 1 ] <= 2 ) { if ( x -> size [ 1
] == 1 ) { * ex = x -> data [ 0 ] ; * idx = 1 ; } else { * ex = x -> data [ x
-> size [ 1 ] - 1 ] ; if ( ( x -> data [ 0 ] > * ex ) || (
muDoubleScalarIsNaN ( x -> data [ 0 ] ) && ( ! muDoubleScalarIsNaN ( * ex ) )
) ) { * idx = x -> size [ 1 ] ; } else { * ex = x -> data [ 0 ] ; * idx = 1 ;
} } } else { if ( ! muDoubleScalarIsNaN ( x -> data [ 0 ] ) ) { b_idx = 1 ; }
else { b_idx = 0 ; k = 2 ; exitg1 = false ; while ( ( ! exitg1 ) && ( k <=
last_tmp ) ) { if ( ! muDoubleScalarIsNaN ( x -> data [ k - 1 ] ) ) { b_idx =
k ; exitg1 = true ; } else { k ++ ; } } } if ( b_idx == 0 ) { * ex = x ->
data [ 0 ] ; * idx = 1 ; } else { * ex = x -> data [ b_idx - 1 ] ; * idx =
b_idx ; for ( k = b_idx + 1 ; k <= last_tmp ; k ++ ) { x_p = x -> data [ k -
1 ] ; if ( * ex > x_p ) { * ex = x_p ; * idx = k ; } } } } } static void
g4m5ifdfri ( real_T A [ 72 ] , real_T b [ 6 ] ) { bgg4bqzvkv * b_tab_contents
; bgg4bqzvkv * b_tab_contents_e ; n5ghxm5fxo * b_tab_contents_p ; n5ghxm5fxo
* x ; real_T tab [ 133 ] ; real_T tab_p [ 108 ] ; real_T tmp_e [ 2 ] ; real_T
min_found ; real_T tmp ; int32_T exitg1 ; int32_T i ; int32_T k ; int32_T
pivot_row ; int32_T tab_tmp ; int8_T b_I [ 36 ] ; int8_T tmp_p [ 2 ] ;
boolean_T exitg2 ; boolean_T y ; for ( i = 0 ; i < 133 ; i ++ ) { tab [ i ] =
0.0 ; } for ( i = 0 ; i < 12 ; i ++ ) { for ( k = 0 ; k < 6 ; k ++ ) { tab [
k + 7 * i ] = A [ 6 * i + k ] ; } } for ( i = 0 ; i < 6 ; i ++ ) { tab [ 7 *
( i + 12 ) + 6 ] = 1.0 ; tab [ i + 126 ] = b [ i ] ; } for ( i = 0 ; i < 36 ;
i ++ ) { b_I [ i ] = 0 ; } for ( k = 0 ; k < 6 ; k ++ ) { b_I [ k + 6 * k ] =
1 ; } for ( i = 0 ; i < 6 ; i ++ ) { for ( k = 0 ; k < 6 ; k ++ ) { tab [ k +
7 * ( i + 12 ) ] = b_I [ 6 * i + k ] ; } } for ( k = 0 ; k < 6 ; k ++ ) { for
( i = 0 ; i < 19 ; i ++ ) { tab_tmp = 7 * i + 6 ; tab [ tab_tmp ] -= tab [ 7
* i + k ] ; } } lenvvqy3rm ( & b_tab_contents , 2 ) ; i = b_tab_contents ->
size [ 0 ] * b_tab_contents -> size [ 1 ] ; b_tab_contents -> size [ 0 ] = 7
; b_tab_contents -> size [ 1 ] = 19 ; plvmqlc3s3 ( b_tab_contents , i ) ; for
( i = 0 ; i < 133 ; i ++ ) { b_tab_contents -> data [ i ] = 0.0 ; } for ( i =
0 ; i < 18 ; i ++ ) { for ( k = 0 ; k < 6 ; k ++ ) { tab_p [ k + 6 * i ] =
tab [ 7 * i + k ] ; } } tmp_p [ 0 ] = 6 ; for ( i = 0 ; i < 18 ; i ++ ) { for
( k = 0 ; k < 6 ; k ++ ) { b_tab_contents -> data [ k + b_tab_contents ->
size [ 0 ] * i ] = tab_p [ tmp_p [ 0 ] * i + k ] ; } b_tab_contents -> data [
6 + b_tab_contents -> size [ 0 ] * i ] = tab [ 7 * i + 6 ] ; } for ( i = 0 ;
i < 6 ; i ++ ) { b_tab_contents -> data [ i + b_tab_contents -> size [ 0 ] *
18 ] = tab [ i + 126 ] ; } hdk3brofhu ( & x , 1 ) ; hdk3brofhu ( &
b_tab_contents_p , 2 ) ; lenvvqy3rm ( & b_tab_contents_e , 2 ) ; do { exitg1
= 0 ; i = b_tab_contents_p -> size [ 0 ] * b_tab_contents_p -> size [ 1 ] ;
b_tab_contents_p -> size [ 0 ] = 1 ; b_tab_contents_p -> size [ 1 ] = 18 ;
mzacrwqtei ( b_tab_contents_p , i ) ; for ( i = 0 ; i < 18 ; i ++ ) {
b_tab_contents_p -> data [ i ] = ( b_tab_contents -> data [ b_tab_contents ->
size [ 0 ] * i + 6 ] < 0.0 ) ; } if ( etrchao2f0 ( b_tab_contents_p ) ) { i =
b_tab_contents_e -> size [ 0 ] * b_tab_contents_e -> size [ 1 ] ;
b_tab_contents_e -> size [ 0 ] = 1 ; b_tab_contents_e -> size [ 1 ] = 18 ;
plvmqlc3s3 ( b_tab_contents_e , i ) ; for ( i = 0 ; i < 18 ; i ++ ) {
b_tab_contents_e -> data [ i ] = b_tab_contents -> data [ b_tab_contents ->
size [ 0 ] * i + 6 ] ; } ebnp2fg23w ( b_tab_contents_e , & min_found , & k )
; i = x -> size [ 0 ] ; x -> size [ 0 ] = 6 ; mzacrwqtei ( x , i ) ; for ( i
= 0 ; i < 6 ; i ++ ) { x -> data [ i ] = ( b_tab_contents -> data [ ( k - 1 )
* b_tab_contents -> size [ 0 ] + i ] <= 0.0 ) ; } y = true ; tab_tmp = 1 ;
exitg2 = false ; while ( ( ! exitg2 ) && ( tab_tmp <= 6 ) ) { if ( ! x ->
data [ tab_tmp - 1 ] ) { y = false ; exitg2 = true ; } else { tab_tmp ++ ; }
} if ( ! y ) { pivot_row = - 1 ; min_found = ( rtInf ) ; for ( tab_tmp = 0 ;
tab_tmp < 6 ; tab_tmp ++ ) { tmp = b_tab_contents -> data [ ( k - 1 ) *
b_tab_contents -> size [ 0 ] + tab_tmp ] ; if ( tmp > 0.0 ) { tmp =
b_tab_contents -> data [ b_tab_contents -> size [ 0 ] * 18 + tab_tmp ] / tmp
; if ( tmp < min_found ) { min_found = tmp ; pivot_row = tab_tmp ; } } }
min_found = b_tab_contents -> data [ ( k - 1 ) * b_tab_contents -> size [ 0 ]
+ pivot_row ] ; for ( i = 0 ; i < 19 ; i ++ ) { b_tab_contents -> data [
pivot_row + b_tab_contents -> size [ 0 ] * i ] /= min_found ; } for ( tab_tmp
= 0 ; tab_tmp < 7 ; tab_tmp ++ ) { if ( tab_tmp != pivot_row ) { min_found =
b_tab_contents -> data [ ( k - 1 ) * b_tab_contents -> size [ 0 ] + tab_tmp ]
; min_found = muDoubleScalarSign ( min_found ) * muDoubleScalarAbs (
min_found ) ; i = b_tab_contents_e -> size [ 0 ] * b_tab_contents_e -> size [
1 ] ; b_tab_contents_e -> size [ 0 ] = 1 ; b_tab_contents_e -> size [ 1 ] =
19 ; plvmqlc3s3 ( b_tab_contents_e , i ) ; for ( i = 0 ; i <= 16 ; i += 2 ) {
_mm_storeu_pd ( & tmp_e [ 0 ] , _mm_sub_pd ( _mm_set_pd ( b_tab_contents ->
data [ tab_tmp + b_tab_contents -> size [ 0 ] * ( i + 1 ) ] , b_tab_contents
-> data [ tab_tmp + b_tab_contents -> size [ 0 ] * i ] ) , _mm_mul_pd (
_mm_set1_pd ( min_found ) , _mm_set_pd ( b_tab_contents -> data [ pivot_row +
b_tab_contents -> size [ 0 ] * ( i + 1 ) ] , b_tab_contents -> data [
pivot_row + b_tab_contents -> size [ 0 ] * i ] ) ) ) ) ; b_tab_contents_e ->
data [ i ] = tmp_e [ 0 ] ; b_tab_contents_e -> data [ i + 1 ] = tmp_e [ 1 ] ;
} for ( i = 18 ; i < 19 ; i ++ ) { b_tab_contents_e -> data [ i ] =
b_tab_contents -> data [ b_tab_contents -> size [ 0 ] * i + tab_tmp ] -
b_tab_contents -> data [ b_tab_contents -> size [ 0 ] * i + pivot_row ] *
min_found ; } for ( i = 0 ; i < 19 ; i ++ ) { b_tab_contents -> data [
tab_tmp + b_tab_contents -> size [ 0 ] * i ] = b_tab_contents_e -> data [ i ]
; } } } } } else { exitg1 = 1 ; } } while ( exitg1 == 0 ) ; igx2uomfyg ( &
b_tab_contents_e ) ; jgovj1yvlg ( & b_tab_contents_p ) ; jgovj1yvlg ( & x ) ;
for ( i = 0 ; i < 12 ; i ++ ) { for ( k = 0 ; k < 6 ; k ++ ) { A [ k + 6 * i
] = b_tab_contents -> data [ b_tab_contents -> size [ 0 ] * i + k ] ; } } for
( i = 0 ; i < 6 ; i ++ ) { b [ i ] = b_tab_contents -> data [ b_tab_contents
-> size [ 0 ] * 18 + i ] ; } igx2uomfyg ( & b_tab_contents ) ; } static void
n1jfebt5n1 ( ifhbcdgc3z * * pEmxArray , int32_T numDimensions ) { ifhbcdgc3z
* emxArray ; int32_T i ; * pEmxArray = ( ifhbcdgc3z * ) malloc ( sizeof (
ifhbcdgc3z ) ) ; emxArray = * pEmxArray ; emxArray -> data = ( int32_T * )
NULL ; emxArray -> numDimensions = numDimensions ; emxArray -> size = (
int32_T * ) malloc ( sizeof ( int32_T ) * ( uint32_T ) numDimensions ) ;
emxArray -> allocatedSize = 0 ; emxArray -> canFreeData = true ; for ( i = 0
; i < numDimensions ; i ++ ) { emxArray -> size [ i ] = 0 ; } } static void
kipgyfyohp ( ifhbcdgc3z * emxArray , int32_T oldNumel ) { int32_T i ; int32_T
newNumel ; void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel =
1 ; for ( i = 0 ; i < emxArray -> numDimensions ; i ++ ) { newNumel *=
emxArray -> size [ i ] ; } if ( newNumel > emxArray -> allocatedSize ) { i =
emxArray -> allocatedSize ; if ( i < 16 ) { i = 16 ; } while ( i < newNumel )
{ if ( i > 1073741823 ) { i = MAX_int32_T ; } else { i <<= 1 ; } } newData =
malloc ( ( uint32_T ) i * sizeof ( int32_T ) ) ; if ( emxArray -> data !=
NULL ) { memcpy ( newData , emxArray -> data , sizeof ( int32_T ) * (
uint32_T ) oldNumel ) ; if ( emxArray -> canFreeData ) { free ( emxArray ->
data ) ; } } emxArray -> data = ( int32_T * ) newData ; emxArray ->
allocatedSize = i ; emxArray -> canFreeData = true ; } } static void
k55bzqg4sg ( const n5ghxm5fxo * x , ifhbcdgc3z * y ) { int32_T i ; int32_T k
; int32_T npages_tmp ; int32_T vlen ; int32_T xpageoffset ; vlen = x -> size
[ 0 ] ; if ( ( x -> size [ 0 ] == 0 ) || ( x -> size [ 1 ] == 0 ) ) { i = y
-> size [ 0 ] * y -> size [ 1 ] ; y -> size [ 0 ] = 1 ; vlen = x -> size [ 1
] ; y -> size [ 1 ] = x -> size [ 1 ] ; kipgyfyohp ( y , i ) ; if ( vlen - 1
>= 0 ) { memset ( & y -> data [ 0 ] , 0 , ( uint32_T ) vlen * sizeof (
int32_T ) ) ; } } else { npages_tmp = x -> size [ 1 ] ; i = y -> size [ 0 ] *
y -> size [ 1 ] ; y -> size [ 0 ] = 1 ; y -> size [ 1 ] = x -> size [ 1 ] ;
kipgyfyohp ( y , i ) ; for ( i = 0 ; i < npages_tmp ; i ++ ) { xpageoffset =
i * x -> size [ 0 ] ; y -> data [ i ] = x -> data [ xpageoffset ] ; for ( k =
2 ; k <= vlen ; k ++ ) { y -> data [ i ] += x -> data [ ( xpageoffset + k ) -
1 ] ; } } } } static void pnbtie14ur ( ifhbcdgc3z * * pEmxArray ) { if ( *
pEmxArray != ( ifhbcdgc3z * ) NULL ) { if ( ( ( * pEmxArray ) -> data != (
int32_T * ) NULL ) && ( * pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray
) -> data ) ; } free ( ( * pEmxArray ) -> size ) ; free ( * pEmxArray ) ; *
pEmxArray = ( ifhbcdgc3z * ) NULL ; } } static void msivsuhbgf ( niw5ihly3e *
* pEmxArray , int32_T numDimensions ) { niw5ihly3e * emxArray ; int32_T i ; *
pEmxArray = ( niw5ihly3e * ) malloc ( sizeof ( niw5ihly3e ) ) ; emxArray = *
pEmxArray ; emxArray -> data = ( uint32_T * ) NULL ; emxArray ->
numDimensions = numDimensions ; emxArray -> size = ( int32_T * ) malloc (
sizeof ( int32_T ) * ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize
= 0 ; emxArray -> canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++
) { emxArray -> size [ i ] = 0 ; } } static void p3v3mquu5v ( niw5ihly3e *
emxArray , int32_T oldNumel ) { int32_T i ; int32_T newNumel ; void * newData
; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i <
emxArray -> numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; }
if ( newNumel > emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ;
if ( i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i
= MAX_int32_T ; } else { i <<= 1 ; } } newData = malloc ( ( uint32_T ) i *
sizeof ( uint32_T ) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData ,
emxArray -> data , sizeof ( uint32_T ) * ( uint32_T ) oldNumel ) ; if (
emxArray -> canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data
= ( uint32_T * ) newData ; emxArray -> allocatedSize = i ; emxArray ->
canFreeData = true ; } } static void ebsotqylg1 ( axgvowmerb * * pEmxArray ,
int32_T numDimensions ) { axgvowmerb * emxArray ; int32_T i ; * pEmxArray = (
axgvowmerb * ) malloc ( sizeof ( axgvowmerb ) ) ; emxArray = * pEmxArray ;
emxArray -> data = ( int8_T * ) NULL ; emxArray -> numDimensions =
numDimensions ; emxArray -> size = ( int32_T * ) malloc ( sizeof ( int32_T )
* ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize = 0 ; emxArray ->
canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray ->
size [ i ] = 0 ; } } static void etx3rkwczi ( axgvowmerb * * pEmxArray ) { if
( * pEmxArray != ( axgvowmerb * ) NULL ) { if ( ( ( * pEmxArray ) -> data !=
( int8_T * ) NULL ) && ( * pEmxArray ) -> canFreeData ) { free ( ( *
pEmxArray ) -> data ) ; } free ( ( * pEmxArray ) -> size ) ; free ( *
pEmxArray ) ; * pEmxArray = ( axgvowmerb * ) NULL ; } } static void
czeztwxmat ( niw5ihly3e * * pEmxArray ) { if ( * pEmxArray != ( niw5ihly3e *
) NULL ) { if ( ( ( * pEmxArray ) -> data != ( uint32_T * ) NULL ) && ( *
pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data ) ; } free ( (
* pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = ( niw5ihly3e *
) NULL ; } } static void l0511dbym4 ( axgvowmerb * emxArray , int32_T
oldNumel ) { int32_T i ; int32_T newNumel ; void * newData ; if ( oldNumel <
0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray ->
numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; } if ( newNumel
> emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ; if ( i < 16 )
{ i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i = MAX_int32_T
; } else { i <<= 1 ; } } newData = malloc ( ( uint32_T ) i * sizeof ( int8_T
) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData , emxArray -> data ,
sizeof ( int8_T ) * ( uint32_T ) oldNumel ) ; if ( emxArray -> canFreeData )
{ free ( emxArray -> data ) ; } } emxArray -> data = ( int8_T * ) newData ;
emxArray -> allocatedSize = i ; emxArray -> canFreeData = true ; } } static
void hf3joj1gmh ( const real_T A [ 72 ] , const real_T b [ 6 ] , bgg4bqzvkv *
tab , bgg4bqzvkv * sol ) { axgvowmerb * b_ii ; bgg4bqzvkv * tab_i ;
ifhbcdgc3z * ii ; ifhbcdgc3z * tmp_e ; n5ghxm5fxo * b_x ; n5ghxm5fxo * tab_e
; n5ghxm5fxo * tab_p ; niw5ihly3e * q ; real_T b_A [ 72 ] ; real_T b_b [ 6 ]
; real_T tmp_i [ 2 ] ; real_T min_found ; real_T tmp ; int32_T b_idx ;
int32_T exitg1 ; int32_T i ; int32_T idx ; int32_T nx ; int8_T tmp_p [ 2 ] ;
boolean_T exitg2 ; boolean_T y ; memcpy ( & b_A [ 0 ] , & A [ 0 ] , 72U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) { b_b [ i ] = b [ i ] ; }
g4m5ifdfri ( b_A , b_b ) ; i = tab -> size [ 0 ] * tab -> size [ 1 ] ; tab ->
size [ 0 ] = 7 ; tab -> size [ 1 ] = 13 ; plvmqlc3s3 ( tab , i ) ; for ( i =
0 ; i < 91 ; i ++ ) { tab -> data [ i ] = 0.0 ; } tmp_p [ 0 ] = 6 ; for ( i =
0 ; i < 12 ; i ++ ) { for ( idx = 0 ; idx < 6 ; idx ++ ) { tab -> data [ idx
+ tab -> size [ 0 ] * i ] = b_A [ tmp_p [ 0 ] * i + idx ] ; } tab -> data [ 6
+ tab -> size [ 0 ] * i ] = 1.0 ; } for ( i = 0 ; i < 6 ; i ++ ) { tab ->
data [ i + tab -> size [ 0 ] * 12 ] = b_b [ i ] ; } hdk3brofhu ( & b_x , 1 )
; hdk3brofhu ( & tab_e , 2 ) ; lenvvqy3rm ( & tab_i , 2 ) ; do { exitg1 = 0 ;
i = tab_e -> size [ 0 ] * tab_e -> size [ 1 ] ; tab_e -> size [ 0 ] = 1 ;
tab_e -> size [ 1 ] = 12 ; mzacrwqtei ( tab_e , i ) ; for ( i = 0 ; i < 12 ;
i ++ ) { tab_e -> data [ i ] = ( tab -> data [ tab -> size [ 0 ] * i + 6 ] <
0.0 ) ; } if ( etrchao2f0 ( tab_e ) ) { i = tab_i -> size [ 0 ] * tab_i ->
size [ 1 ] ; tab_i -> size [ 0 ] = 1 ; tab_i -> size [ 1 ] = 12 ; plvmqlc3s3
( tab_i , i ) ; for ( i = 0 ; i < 12 ; i ++ ) { tab_i -> data [ i ] = tab ->
data [ tab -> size [ 0 ] * i + 6 ] ; } ebnp2fg23w ( tab_i , & min_found , &
nx ) ; i = b_x -> size [ 0 ] ; b_x -> size [ 0 ] = 6 ; mzacrwqtei ( b_x , i )
; for ( i = 0 ; i < 6 ; i ++ ) { b_x -> data [ i ] = ( tab -> data [ ( nx - 1
) * tab -> size [ 0 ] + i ] <= 0.0 ) ; } y = true ; idx = 1 ; exitg2 = false
; while ( ( ! exitg2 ) && ( idx <= 6 ) ) { if ( ! b_x -> data [ idx - 1 ] ) {
y = false ; exitg2 = true ; } else { idx ++ ; } } if ( ! y ) { idx = - 1 ;
min_found = ( rtInf ) ; for ( b_idx = 0 ; b_idx < 6 ; b_idx ++ ) { tmp = tab
-> data [ ( nx - 1 ) * tab -> size [ 0 ] + b_idx ] ; if ( tmp > 0.0 ) { tmp =
tab -> data [ tab -> size [ 0 ] * 12 + b_idx ] / tmp ; if ( tmp < min_found )
{ min_found = tmp ; idx = b_idx ; } } } min_found = tab -> data [ ( nx - 1 )
* tab -> size [ 0 ] + idx ] ; for ( i = 0 ; i < 13 ; i ++ ) { tab -> data [
idx + tab -> size [ 0 ] * i ] /= min_found ; } for ( b_idx = 0 ; b_idx < 7 ;
b_idx ++ ) { if ( b_idx != idx ) { min_found = tab -> data [ ( nx - 1 ) * tab
-> size [ 0 ] + b_idx ] ; min_found = muDoubleScalarSign ( min_found ) *
muDoubleScalarAbs ( min_found ) ; i = tab_i -> size [ 0 ] * tab_i -> size [ 1
] ; tab_i -> size [ 0 ] = 1 ; tab_i -> size [ 1 ] = 13 ; plvmqlc3s3 ( tab_i ,
i ) ; for ( i = 0 ; i <= 10 ; i += 2 ) { _mm_storeu_pd ( & tmp_i [ 0 ] ,
_mm_sub_pd ( _mm_set_pd ( tab -> data [ b_idx + tab -> size [ 0 ] * ( i + 1 )
] , tab -> data [ b_idx + tab -> size [ 0 ] * i ] ) , _mm_mul_pd (
_mm_set1_pd ( min_found ) , _mm_set_pd ( tab -> data [ idx + tab -> size [ 0
] * ( i + 1 ) ] , tab -> data [ idx + tab -> size [ 0 ] * i ] ) ) ) ) ; tab_i
-> data [ i ] = tmp_i [ 0 ] ; tab_i -> data [ i + 1 ] = tmp_i [ 1 ] ; } for (
i = 12 ; i < 13 ; i ++ ) { tab_i -> data [ i ] = tab -> data [ tab -> size [
0 ] * i + b_idx ] - tab -> data [ tab -> size [ 0 ] * i + idx ] * min_found ;
} for ( i = 0 ; i < 13 ; i ++ ) { tab -> data [ b_idx + tab -> size [ 0 ] * i
] = tab_i -> data [ i ] ; } } } } } else { exitg1 = 1 ; } } while ( exitg1 ==
0 ) ; igx2uomfyg ( & tab_i ) ; hdk3brofhu ( & tab_p , 2 ) ; i = tab_p -> size
[ 0 ] * tab_p -> size [ 1 ] ; tab_p -> size [ 0 ] = 6 ; tab_p -> size [ 1 ] =
12 ; mzacrwqtei ( tab_p , i ) ; for ( i = 0 ; i < 12 ; i ++ ) { for ( idx = 0
; idx < 6 ; idx ++ ) { tab_p -> data [ idx + tab_p -> size [ 0 ] * i ] = (
tab -> data [ tab -> size [ 0 ] * i + idx ] != 0.0 ) ; } } n1jfebt5n1 ( &
tmp_e , 2 ) ; k55bzqg4sg ( tab_p , tmp_e ) ; jgovj1yvlg ( & tab_p ) ; i =
tab_e -> size [ 0 ] * tab_e -> size [ 1 ] ; tab_e -> size [ 0 ] = 1 ; nx =
tmp_e -> size [ 1 ] ; tab_e -> size [ 1 ] = tmp_e -> size [ 1 ] ; mzacrwqtei
( tab_e , i ) ; for ( i = 0 ; i < nx ; i ++ ) { tab_e -> data [ i ] = ( tmp_e
-> data [ i ] == 1 ) ; } idx = 0 ; n1jfebt5n1 ( & ii , 2 ) ; i = ii -> size [
0 ] * ii -> size [ 1 ] ; ii -> size [ 0 ] = 1 ; ii -> size [ 1 ] = tmp_e ->
size [ 1 ] ; pnbtie14ur ( & tmp_e ) ; kipgyfyohp ( ii , i ) ; b_idx = 0 ;
exitg2 = false ; while ( ( ! exitg2 ) && ( b_idx <= nx - 1 ) ) { if ( tab_e
-> data [ b_idx ] ) { idx ++ ; ii -> data [ idx - 1 ] = b_idx + 1 ; if ( idx
>= nx ) { exitg2 = true ; } else { b_idx ++ ; } } else { b_idx ++ ; } } if (
tab_e -> size [ 1 ] == 1 ) { if ( idx == 0 ) { ii -> size [ 0 ] = 1 ; ii ->
size [ 1 ] = 0 ; } } else if ( idx < 1 ) { ii -> size [ 1 ] = 0 ; } else { i
= ii -> size [ 0 ] * ii -> size [ 1 ] ; ii -> size [ 1 ] = idx ; kipgyfyohp (
ii , i ) ; } jgovj1yvlg ( & tab_e ) ; msivsuhbgf ( & q , 2 ) ; i = q -> size
[ 0 ] * q -> size [ 1 ] ; q -> size [ 0 ] = 1 ; nx = ii -> size [ 1 ] ; q ->
size [ 1 ] = ii -> size [ 1 ] ; p3v3mquu5v ( q , i ) ; for ( i = 0 ; i < nx ;
i ++ ) { q -> data [ i ] = ( uint32_T ) ii -> data [ i ] ; } pnbtie14ur ( &
ii ) ; i = sol -> size [ 0 ] ; sol -> size [ 0 ] = 12 ; plvmqlc3s3 ( sol , i
) ; for ( i = 0 ; i < 12 ; i ++ ) { sol -> data [ i ] = 0.0 ; } ebsotqylg1 (
& b_ii , 1 ) ; for ( idx = 0 ; idx < nx ; idx ++ ) { b_idx = ( int32_T ) q ->
data [ idx ] ; i = b_x -> size [ 0 ] ; b_x -> size [ 0 ] = 6 ; mzacrwqtei (
b_x , i ) ; for ( i = 0 ; i < 6 ; i ++ ) { b_x -> data [ i ] = ( tab -> data
[ ( b_idx - 1 ) * tab -> size [ 0 ] + i ] == 1.0 ) ; } b_idx = 0 ; i = b_ii
-> size [ 0 ] ; b_ii -> size [ 0 ] = 6 ; l0511dbym4 ( b_ii , i ) ; i = 0 ;
exitg2 = false ; while ( ( ! exitg2 ) && ( i <= 5 ) ) { if ( b_x -> data [ i
] ) { b_idx ++ ; b_ii -> data [ b_idx - 1 ] = ( int8_T ) ( i + 1 ) ; if (
b_idx >= 6 ) { exitg2 = true ; } else { i ++ ; } } else { i ++ ; } } if (
b_idx < 1 ) { b_idx = 0 ; } i = b_ii -> size [ 0 ] ; b_ii -> size [ 0 ] =
b_idx ; l0511dbym4 ( b_ii , i ) ; if ( b_idx == 0 ) { sol -> data [ ( int32_T
) q -> data [ idx ] - 1 ] = 0.0 ; } else { sol -> data [ ( int32_T ) q ->
data [ idx ] - 1 ] = tab -> data [ ( tab -> size [ 0 ] * 12 + b_ii -> data [
0 ] ) - 1 ] ; } } jgovj1yvlg ( & b_x ) ; etx3rkwczi ( & b_ii ) ; czeztwxmat (
& q ) ; } void TempoAcioProp ( const real_T bxkmkuxprz [ 3 ] , const real_T
nsmpydtgjk [ 3 ] , const real_T * nf5oiilpxm , const real_T * m2whrcxgxl ,
real_T ckd4xeq4vb [ 12 ] ) { bgg4bqzvkv * a__1 ; bgg4bqzvkv * x ; real_T
nf5oiilpxm_p [ 72 ] ; real_T bxkmkuxprz_p [ 6 ] ; real_T Tn ; real_T t10 ;
real_T t11 ; real_T t12 ; real_T t2 ; real_T t3 ; real_T t4 ; real_T t5 ;
real_T t6 ; real_T t7 ; real_T t8 ; real_T t9 ; Tn = * nf5oiilpxm * *
m2whrcxgxl ; nf5oiilpxm_p [ 0 ] = * nf5oiilpxm ; nf5oiilpxm_p [ 6 ] = *
nf5oiilpxm ; nf5oiilpxm_p [ 12 ] = 0.0 ; nf5oiilpxm_p [ 18 ] = 0.0 ;
nf5oiilpxm_p [ 24 ] = 0.0 ; nf5oiilpxm_p [ 30 ] = 0.0 ; nf5oiilpxm_p [ 36 ] =
- * nf5oiilpxm ; nf5oiilpxm_p [ 42 ] = - * nf5oiilpxm ; nf5oiilpxm_p [ 48 ] =
0.0 ; nf5oiilpxm_p [ 54 ] = 0.0 ; nf5oiilpxm_p [ 60 ] = 0.0 ; nf5oiilpxm_p [
66 ] = 0.0 ; nf5oiilpxm_p [ 1 ] = 0.0 ; nf5oiilpxm_p [ 7 ] = 0.0 ;
nf5oiilpxm_p [ 13 ] = - * nf5oiilpxm ; nf5oiilpxm_p [ 19 ] = - * nf5oiilpxm ;
nf5oiilpxm_p [ 25 ] = 0.0 ; nf5oiilpxm_p [ 31 ] = 0.0 ; nf5oiilpxm_p [ 37 ] =
0.0 ; nf5oiilpxm_p [ 43 ] = 0.0 ; nf5oiilpxm_p [ 49 ] = * nf5oiilpxm ;
nf5oiilpxm_p [ 55 ] = * nf5oiilpxm ; nf5oiilpxm_p [ 61 ] = 0.0 ; nf5oiilpxm_p
[ 67 ] = 0.0 ; nf5oiilpxm_p [ 2 ] = 0.0 ; nf5oiilpxm_p [ 8 ] = 0.0 ;
nf5oiilpxm_p [ 14 ] = 0.0 ; nf5oiilpxm_p [ 20 ] = 0.0 ; nf5oiilpxm_p [ 26 ] =
- * nf5oiilpxm ; nf5oiilpxm_p [ 32 ] = - * nf5oiilpxm ; nf5oiilpxm_p [ 38 ] =
0.0 ; nf5oiilpxm_p [ 44 ] = 0.0 ; nf5oiilpxm_p [ 50 ] = 0.0 ; nf5oiilpxm_p [
56 ] = 0.0 ; nf5oiilpxm_p [ 62 ] = * nf5oiilpxm ; nf5oiilpxm_p [ 68 ] = *
nf5oiilpxm ; nf5oiilpxm_p [ 3 ] = 0.0 ; nf5oiilpxm_p [ 9 ] = 0.0 ;
nf5oiilpxm_p [ 15 ] = 0.0 ; nf5oiilpxm_p [ 21 ] = 0.0 ; nf5oiilpxm_p [ 27 ] =
Tn ; nf5oiilpxm_p [ 33 ] = - Tn ; nf5oiilpxm_p [ 39 ] = 0.0 ; nf5oiilpxm_p [
45 ] = 0.0 ; nf5oiilpxm_p [ 51 ] = 0.0 ; nf5oiilpxm_p [ 57 ] = 0.0 ;
nf5oiilpxm_p [ 63 ] = - Tn ; nf5oiilpxm_p [ 69 ] = Tn ; nf5oiilpxm_p [ 4 ] =
- Tn ; nf5oiilpxm_p [ 10 ] = Tn ; nf5oiilpxm_p [ 16 ] = 0.0 ; nf5oiilpxm_p [
22 ] = 0.0 ; nf5oiilpxm_p [ 28 ] = 0.0 ; nf5oiilpxm_p [ 34 ] = 0.0 ;
nf5oiilpxm_p [ 40 ] = Tn ; nf5oiilpxm_p [ 46 ] = - Tn ; nf5oiilpxm_p [ 52 ] =
0.0 ; nf5oiilpxm_p [ 58 ] = 0.0 ; nf5oiilpxm_p [ 64 ] = 0.0 ; nf5oiilpxm_p [
70 ] = 0.0 ; nf5oiilpxm_p [ 5 ] = 0.0 ; nf5oiilpxm_p [ 11 ] = 0.0 ;
nf5oiilpxm_p [ 17 ] = - Tn ; nf5oiilpxm_p [ 23 ] = Tn ; nf5oiilpxm_p [ 29 ] =
0.0 ; nf5oiilpxm_p [ 35 ] = 0.0 ; nf5oiilpxm_p [ 41 ] = 0.0 ; nf5oiilpxm_p [
47 ] = 0.0 ; nf5oiilpxm_p [ 53 ] = Tn ; nf5oiilpxm_p [ 59 ] = - Tn ;
nf5oiilpxm_p [ 65 ] = 0.0 ; nf5oiilpxm_p [ 71 ] = 0.0 ; bxkmkuxprz_p [ 0 ] =
bxkmkuxprz [ 0 ] ; bxkmkuxprz_p [ 1 ] = bxkmkuxprz [ 1 ] ; bxkmkuxprz_p [ 2 ]
= bxkmkuxprz [ 2 ] ; bxkmkuxprz_p [ 3 ] = nsmpydtgjk [ 0 ] ; bxkmkuxprz_p [ 4
] = nsmpydtgjk [ 1 ] ; bxkmkuxprz_p [ 5 ] = nsmpydtgjk [ 2 ] ; lenvvqy3rm ( &
a__1 , 2 ) ; lenvvqy3rm ( & x , 1 ) ; hf3joj1gmh ( nf5oiilpxm_p ,
bxkmkuxprz_p , a__1 , x ) ; igx2uomfyg ( & a__1 ) ; Tn = x -> data [ 0 ] ; t2
= x -> data [ 1 ] ; t3 = x -> data [ 2 ] ; t4 = x -> data [ 3 ] ; t5 = x ->
data [ 4 ] ; t6 = x -> data [ 5 ] ; t7 = x -> data [ 6 ] ; t8 = x -> data [ 7
] ; t9 = x -> data [ 8 ] ; t10 = x -> data [ 9 ] ; t11 = x -> data [ 10 ] ;
t12 = x -> data [ 11 ] ; if ( x -> data [ 0 ] < 0.0 ) { t7 =
muDoubleScalarAbs ( x -> data [ 0 ] ) ; Tn = 0.0 ; } if ( x -> data [ 1 ] <
0.0 ) { t8 = muDoubleScalarAbs ( x -> data [ 1 ] ) ; t2 = 0.0 ; } if ( x ->
data [ 2 ] < 0.0 ) { t9 = muDoubleScalarAbs ( x -> data [ 2 ] ) ; t3 = 0.0 ;
} if ( x -> data [ 3 ] < 0.0 ) { t10 = muDoubleScalarAbs ( x -> data [ 3 ] )
; t4 = 0.0 ; } if ( x -> data [ 4 ] < 0.0 ) { t11 = muDoubleScalarAbs ( x ->
data [ 4 ] ) ; t5 = 0.0 ; } if ( x -> data [ 5 ] < 0.0 ) { t12 =
muDoubleScalarAbs ( x -> data [ 5 ] ) ; t6 = 0.0 ; } igx2uomfyg ( & x ) ; if
( t7 < 0.0 ) { Tn = muDoubleScalarAbs ( t7 ) ; t7 = 0.0 ; } if ( t8 < 0.0 ) {
t2 = muDoubleScalarAbs ( t8 ) ; t8 = 0.0 ; } if ( t9 < 0.0 ) { t3 =
muDoubleScalarAbs ( t9 ) ; t9 = 0.0 ; } if ( t10 < 0.0 ) { t4 =
muDoubleScalarAbs ( t10 ) ; t10 = 0.0 ; } if ( t11 < 0.0 ) { t5 =
muDoubleScalarAbs ( t11 ) ; t11 = 0.0 ; } if ( t12 < 0.0 ) { t6 =
muDoubleScalarAbs ( t12 ) ; t12 = 0.0 ; } ckd4xeq4vb [ 0 ] = Tn ; ckd4xeq4vb
[ 1 ] = t2 ; ckd4xeq4vb [ 2 ] = t3 ; ckd4xeq4vb [ 3 ] = t4 ; ckd4xeq4vb [ 4 ]
= t5 ; ckd4xeq4vb [ 5 ] = t6 ; ckd4xeq4vb [ 6 ] = t7 ; ckd4xeq4vb [ 7 ] = t8
; ckd4xeq4vb [ 8 ] = t9 ; ckd4xeq4vb [ 9 ] = t10 ; ckd4xeq4vb [ 10 ] = t11 ;
ckd4xeq4vb [ 11 ] = t12 ; } void hss3zorcta ( eybvr0iiw2 * const jsfqugi5ky )
{ if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent (
jsfqugi5ky -> _mdlRefSfcnS , "TempoAcioProp" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void bx1fqdjqke (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , eybvr0iiw2 * const jsfqugi5ky
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
( void ) memset ( ( void * ) jsfqugi5ky , 0 , sizeof ( eybvr0iiw2 ) ) ;
jsfqugi5ky -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; jsfqugi5ky ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( jsfqugi5ky -> _mdlRefSfcnS , "TempoAcioProp" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
TempoAcioProp_InitializeDataMapInfo ( jsfqugi5ky , sysRanPtr , contextTid ) ;
if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( jsfqugi5ky ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( jsfqugi5ky -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( jsfqugi5ky ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_TempoAcioProp_MdlInfoRegFcn
( SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal
= 0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_TempoAcioProp , 45 ) ; * retVal = 1 ; } static void
mr_TempoAcioProp_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) ; static void
mr_TempoAcioProp_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_TempoAcioProp_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_TempoAcioProp_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_TempoAcioProp_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void mr_TempoAcioProp_cacheBitFieldToMxArray
( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) {
mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T )
bitVal ) ) ; } static uint_T mr_TempoAcioProp_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static
uint_T mr_TempoAcioProp_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_TempoAcioProp_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_TempoAcioProp_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_TempoAcioProp_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_TempoAcioProp_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_TempoAcioProp_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_TempoAcioProp_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_TempoAcioProp_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_TempoAcioProp_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_TempoAcioProp_GetDWork ( const
hunxlyfe3u3 * mdlrefDW ) { ( void ) mdlrefDW ; return ( NULL ) ; } void
mr_TempoAcioProp_SetDWork ( hunxlyfe3u3 * mdlrefDW , const mxArray * ssDW ) {
( void ) ssDW ; ( void ) mdlrefDW ; } void
mr_TempoAcioProp_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 791917686U , 2630427935U , 4022688519U , 720152253U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "TempoAcioProp" , & chksum [ 0 ] )
; } mxArray * mr_TempoAcioProp_GetSimStateDisallowedBlocks ( ) { return (
NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
