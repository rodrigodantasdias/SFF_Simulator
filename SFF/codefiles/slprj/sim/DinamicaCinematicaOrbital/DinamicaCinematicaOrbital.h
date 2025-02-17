#ifndef DinamicaCinematicaOrbital_h_
#define DinamicaCinematicaOrbital_h_
#ifndef DinamicaCinematicaOrbital_COMMON_INCLUDES_
#define DinamicaCinematicaOrbital_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "DinamicaCinematicaOrbital_types.h"
#include <string.h>
#include "rtGetNaN.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <stddef.h>
#include "zero_crossing_types.h"
typedef struct { real_T orqhcxd3rc ; real_T jr4y40vd2o ; real_T bzerlh0yzj ;
real_T c2iupr0jlx ; real_T l2s1ycq251 ; real_T pjlu0cu41m ; real_T aab50r2fiw
; real_T mwt2jewul3 ; real_T l0c13a0fin ; real_T gsqcu5n5i5 ; real_T
lzlkjx0viw ; real_T dxwl0uvra5 ; real_T d3gwc2yjdn ; real_T examipxezd ;
real_T bmczrqrh2o ; real_T g4tkuwej40 ; real_T mp5qm0moqq ; real_T bgiwb1ftd4
; real_T h5jnpoyg24 ; real_T oerzxsui2p ; real_T d3m211gq4l ; real_T
gfq0z4wnz1 ; real_T kjy3mi420t ; real_T ewi45tmprq ; real_T i54ohznwps ;
real_T p40dmzeew2 ; real_T m3kmq4x4xf ; real_T doz4cen3rf ; real_T f0shfln4tw
; real_T kfpfxvzzl2 ; real_T p0zuvgg0kd ; real_T dnd1abzfkr ; real_T
lwxepuesun ; real_T imdub41r43 ; real_T muorhg0tha ; real_T achogvbf2x ;
real_T ffvugxnrmk ; real_T aiovwljhme ; real_T cmflpre2ht ; } h1dz0q0gf2 ;
typedef struct { real_T lfjiab3rx0 ; real_T amkx5itglp ; int_T gaqihpfgvh ;
int_T eeb05vtv1t ; int_T oe31xkoymz ; int_T e4an5sv5r2 ; int_T bof552yuuq ;
int_T f0vx1utodn ; int_T cucihappq5 ; int_T jqogfe4qpa ; int_T gythfnrlpj ;
int_T hullq5n03m ; int_T iwrz5goxlr ; int_T jjbquufnup ; int_T lnstazd0oc ;
int_T cofdlphuyb ; int_T gdxl020oo3 ; int_T ed45uvn34h ; int_T ibqx0tnxj5 ;
int_T g4u5vzuzqr ; int8_T f0m5ymxxjr ; int8_T clhrm0hulb ; int8_T k2mpnxum4b
; int8_T gdluyylqio ; int8_T caph4ieys1 ; int8_T cs5jgwctpw ; int8_T
hqs052cxrs ; int8_T ihsebl21i0 ; int8_T j1xdkh5ug2 ; } p1yqgfuya1 ; typedef
struct { real_T m2ckqb4qdo ; real_T cjolpg5ogt ; real_T p432rqp4kj ; real_T
pxxhuzxdhx ; real_T cwrlfd5taf ; real_T doj5adsbev ; real_T njak3lbjwg ;
real_T f5d1n2ym24 ; real_T geuo1q43mm ; real_T dpw155co0h ; real_T pekfmaxvjy
; real_T ntlqdkmwfj ; real_T fhbckfju34 ; real_T dx03sczucd ; real_T
ljdhe12bh3 ; real_T lks1v1umh4 ; real_T dgdb31szew ; real_T poae3lai5p ; }
luimruxjly ; typedef struct { real_T m2ckqb4qdo ; real_T cjolpg5ogt ; real_T
p432rqp4kj ; real_T pxxhuzxdhx ; real_T cwrlfd5taf ; real_T doj5adsbev ;
real_T njak3lbjwg ; real_T f5d1n2ym24 ; real_T geuo1q43mm ; real_T dpw155co0h
; real_T pekfmaxvjy ; real_T ntlqdkmwfj ; real_T fhbckfju34 ; real_T
dx03sczucd ; real_T ljdhe12bh3 ; real_T lks1v1umh4 ; real_T dgdb31szew ;
real_T poae3lai5p ; } aygzkytbqu ; typedef struct { boolean_T m2ckqb4qdo ;
boolean_T cjolpg5ogt ; boolean_T p432rqp4kj ; boolean_T pxxhuzxdhx ;
boolean_T cwrlfd5taf ; boolean_T doj5adsbev ; boolean_T njak3lbjwg ;
boolean_T f5d1n2ym24 ; boolean_T geuo1q43mm ; boolean_T dpw155co0h ;
boolean_T pekfmaxvjy ; boolean_T ntlqdkmwfj ; boolean_T fhbckfju34 ;
boolean_T dx03sczucd ; boolean_T ljdhe12bh3 ; boolean_T lks1v1umh4 ;
boolean_T dgdb31szew ; boolean_T poae3lai5p ; } npno0gt4jm ; typedef struct {
real_T ctbv00ydjx ; real_T b2qvlwceet ; real_T dlyae20nrk ; real_T moiei0ng4b
; real_T ae1gqj2uhl ; } himcgsuj1h ; typedef struct { ZCSigState ngtuby0bjh ;
ZCSigState aytb40yu5a ; ZCSigState dqxpaagpk1 ; ZCSigState p15omtqpq4 ;
ZCSigState e0mlha2jo0 ; } lzvps2jo2x ; struct ocg4r1mb5yw_ { real_T P_32 ;
real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ; } ;
struct ecqsnbn513 { struct SimStruct_tag * _mdlRefSfcnS ; struct { real_T
mr_nonContSig0 [ 1 ] ; real_T mr_nonContSig1 [ 1 ] ; } NonContDerivMemory ;
ssNonContDerivSigInfo nonContDerivSignal [ 2 ] ; const rtTimingBridge *
timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
20 ] ; int32_T * vardimsAddress [ 20 ] ; RTWLoggingFcnPtr loggingPtrs [ 20 ]
; sysRanDType * systemRan [ 27 ] ; int_T systemTid [ 27 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 3 ] ; time_T tStart ; } Timing ; } ;
typedef struct { h1dz0q0gf2 rtb ; p1yqgfuya1 rtdw ; fqgdhjwhge rtm ;
lzvps2jo2x rtzce ; } okb1gcgf0a4 ; extern real_T rtP_Cd0 ; extern real_T
rtP_Cd1 ; extern real_T rtP_J2 ; extern real_T rtP_L0 ; extern real_T rtP_L1
; extern real_T rtP_Re ; extern real_T rtP_a0_ini ; extern real_T rtP_e0_ini
; extern real_T rtP_f0_ini ; extern real_T rtP_i0_ini ; extern real_T rtP_m0
; extern real_T rtP_m1 ; extern real_T rtP_mi ; extern real_T rtP_ohm0_ini ;
extern real_T rtP_omega0_ini ; extern real_T rtP_omega_E ; extern real_T
rtP_pcoRad ; extern real_T rtP_t_man ; extern real_T rtP_x0_dot_i ; extern
real_T rtP_x0_dot_ini ; extern real_T rtP_x0_i ; extern real_T rtP_x0_ini ;
extern real_T rtP_y0_dot_i ; extern real_T rtP_y0_dot_ini ; extern real_T
rtP_y0_i ; extern real_T rtP_y0_ini ; extern real_T rtP_z0_dot_i ; extern
real_T rtP_z0_dot_ini ; extern real_T rtP_z0_i ; extern real_T rtP_z0_ini ;
extern boolean_T rtP_J2_dist ; extern boolean_T rtP_drag ; extern void
cclmzcapyf ( real_T * m5uepniu01 , real_T * p4fbia00jk , SimStruct *
_mdlRefSfcnS , ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray ,
int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , fqgdhjwhge *
const ev2oqvq0xx , h1dz0q0gf2 * localB , p1yqgfuya1 * localDW , luimruxjly *
localX , lzvps2jo2x * localZCE , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_DinamicaCinematicaOrbital_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) ; extern mxArray *
mr_DinamicaCinematicaOrbital_GetDWork ( const okb1gcgf0a4 * mdlrefDW ) ;
extern void mr_DinamicaCinematicaOrbital_SetDWork ( okb1gcgf0a4 * mdlrefDW ,
const mxArray * ssDW ) ; extern void
mr_DinamicaCinematicaOrbital_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_DinamicaCinematicaOrbital_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
DinamicaCinematicaOrbital_GetCAPIStaticMap ( void ) ; extern void axbn2ts3ae
( fqgdhjwhge * const ev2oqvq0xx , real_T * lcfpe54frx , real_T * be3q2smovi ,
real_T * otiofmbm4k , real_T * j0cfgt43jq , real_T * fwmagcczlm , real_T *
hrflowfgj1 , real_T * nac5nrmb11 , real_T * bnbpi3m5zy , h1dz0q0gf2 * localB
, p1yqgfuya1 * localDW , luimruxjly * localX ) ; extern void mtaykns3n2 (
fqgdhjwhge * const ev2oqvq0xx , real_T * nac5nrmb11 , p1yqgfuya1 * localDW ,
luimruxjly * localX ) ; extern void hqfpbwngdg ( fqgdhjwhge * const
ev2oqvq0xx , real_T * nac5nrmb11 , h1dz0q0gf2 * localB , p1yqgfuya1 * localDW
, npno0gt4jm * localXdis ) ; extern void hzdvvsrkxw ( h1dz0q0gf2 * localB ,
p1yqgfuya1 * localDW , aygzkytbqu * localXdot ) ; extern void n0jusqxqm2 (
fqgdhjwhge * const ev2oqvq0xx , h1dz0q0gf2 * localB , p1yqgfuya1 * localDW )
; extern void DinamicaCinematicaOrbital ( fqgdhjwhge * const ev2oqvq0xx ,
const real_T * adk01p22fm , const real_T * dz0bciprj0 , const real_T *
lo0ui3luhn , const boolean_T * k1ocaxd5ig , real_T * lcfpe54frx , real_T *
be3q2smovi , real_T * otiofmbm4k , real_T * j0cfgt43jq , real_T * fwmagcczlm
, real_T * hrflowfgj1 , real_T * mio42ppuex , real_T * m5uepniu01 , real_T *
nac5nrmb11 , real_T * p4fbia00jk , real_T * ksygknmexr , real_T * bnbpi3m5zy
, real_T * dyqrydwlzv , real_T fgvekl5jd2 [ 9 ] , real_T fwkyynfl3z [ 3 ] ,
real_T * hf3otuiqp0 , real_T * e1uobkrlsq , real_T * dzncmuxjjw , h1dz0q0gf2
* localB , p1yqgfuya1 * localDW , luimruxjly * localX , lzvps2jo2x * localZCE
, npno0gt4jm * localXdis ) ; extern void DinamicaCinematicaOrbitalTID2 (
real_T * nac5nrmb11 , h1dz0q0gf2 * localB ) ; extern void f1esxkgit3 (
fqgdhjwhge * const ev2oqvq0xx ) ;
#endif
