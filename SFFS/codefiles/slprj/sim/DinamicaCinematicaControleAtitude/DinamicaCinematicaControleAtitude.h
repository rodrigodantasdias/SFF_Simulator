#ifndef DinamicaCinematicaControleAtitude_h_
#define DinamicaCinematicaControleAtitude_h_
#ifndef DinamicaCinematicaControleAtitude_COMMON_INCLUDES_
#define DinamicaCinematicaControleAtitude_COMMON_INCLUDES_
#include <time.h>
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "DinamicaCinematicaControleAtitude_types.h"
#include <string.h>
#include "rtGetNaN.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <stddef.h>
typedef struct { real_T mj0ujmgfet ; } msxjw54xyk ; typedef struct {
eyuh5lmif5 khdlnzzcpl ; uint32_T jwkog5tsy0 ; uint32_T c2uwwswwrz ; uint32_T
ldulomjtq2 ; uint32_T gakqowpeu0 [ 2 ] ; uint32_T b33jgqukxo [ 625 ] ;
uint32_T lova5natot ; uint32_T lpjepc432n [ 2 ] ; boolean_T agdmtiie2i ;
boolean_T fcl0i4s23y ; boolean_T gacsk4ue1c ; boolean_T hai52o34ao ;
boolean_T j1ajf5oks5 ; boolean_T n0ya0gspe2 ; boolean_T c5axmpduuz ;
boolean_T owudl4s4vs ; } khk1scvm25 ; typedef struct { real_T ltkajj1mjg [ 4
] ; } dkiri2qfb1 ; typedef struct { real_T c24dzzwlyl [ 3 ] ; } hvhocr1oej ;
typedef struct { real_T ero1miasr4 ; real_T e4g0nzteww ; } hnfbd4wuxy ;
typedef struct { real_T blscwmfsvb [ 4 ] ; } c10ke4cztz ; typedef struct {
real_T bqh3hwxql2 ; real_T azayekhfxa ; real_T a1jzfad3ms ; } n1gje2l2hr ;
typedef struct { real_T lxjg2z5q2c [ 4 ] ; real_T jr4zmexox4 [ 3 ] ; real_T
cszncpmvci [ 3 ] ; real_T hyjzesjocr [ 3 ] ; real_T ft2nbfkikv [ 3 ] ; real_T
k52m1veuga [ 3 ] ; real_T ornog1obfa [ 3 ] ; real_T jmgrp1mrt4 ; real_T
hr2sumbgiu [ 9 ] ; real_T nmibjcxc54 [ 3 ] ; real_T nompa3kihq ; real_T
j2kzggir10 ; real_T bgkyxsdvdl ; real_T n5f0l2auvo [ 4 ] ; real32_T
gju2jushmb ; c10ke4cztz bhvuqojuuu ; n1gje2l2hr fx2nuruivr ; n1gje2l2hr
npjcs5alhb ; hvhocr1oej lirnvinajn ; hnfbd4wuxy mxnao5kmff ; c10ke4cztz
izlagwepzz ; hnfbd4wuxy gbpqe3rvno ; hvhocr1oej mkv2sapdig ; dkiri2qfb1
eg0bhasvec ; dkiri2qfb1 dwa1xmsvyz ; msxjw54xyk ooql4bod4mpe3 ; msxjw54xyk
ooql4bod4mpe ; msxjw54xyk ooql4bod4mp ; } krigp330xt ; typedef struct {
real_T ej2or4wkc4 [ 9 ] ; int32_T e11rk5ntpu ; int_T igh2jm43a3 ; int_T
ktu3yynb2h ; int_T croxq4ddmz ; int_T ewjkqc5m4t ; int_T ns5jkvdtzb ; int_T
mm5emcznqw ; int8_T mnhgxgkor0 ; int8_T la0x4crr0r ; int8_T csrasjj5cf ;
khk1scvm25 ooql4bod4mpe3 ; khk1scvm25 ooql4bod4mpe ; khk1scvm25 ooql4bod4mp ;
} ggv1uslzom ; typedef struct { real_T dg5bug3ja3 [ 3 ] ; real_T fqwmftubxu [
4 ] ; real_T j4xd5u3n0w [ 4 ] ; real_T bztxdjvraq [ 4 ] ; real_T k02tgfg05z [
3 ] ; real_T drrg20ihu3 [ 3 ] ; } mcofgvk0eq ; typedef struct { real_T
dg5bug3ja3 [ 3 ] ; real_T fqwmftubxu [ 4 ] ; real_T j4xd5u3n0w [ 4 ] ; real_T
bztxdjvraq [ 4 ] ; real_T k02tgfg05z [ 3 ] ; real_T drrg20ihu3 [ 3 ] ; }
puo43s1gwm ; typedef struct { boolean_T dg5bug3ja3 [ 3 ] ; boolean_T
fqwmftubxu [ 4 ] ; boolean_T j4xd5u3n0w [ 4 ] ; boolean_T bztxdjvraq [ 4 ] ;
boolean_T k02tgfg05z [ 3 ] ; boolean_T drrg20ihu3 [ 3 ] ; } kgn2b3e1e5 ;
struct nhtodygfx5_ { real_T P_0 ; real_T P_1 ; } ; struct hxlpb0imdfh_ {
real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T
P_14 ; real_T P_15 ; real_T P_16 [ 3 ] ; real_T P_17 ; real_T P_18 [ 3 ] ;
real_T P_19 ; real_T P_20 [ 9 ] ; real_T P_21 [ 3 ] ; real_T P_22 ; real_T
P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 [ 9 ] ; real_T P_27 ; real_T
P_28 ; real_T P_29 ; real_T P_30 [ 9 ] ; real_T P_31 [ 3 ] ; real_T P_32 [ 3
] ; boolean_T P_33 ; nhtodygfx5 ooql4bod4mpe3 ; nhtodygfx5 ooql4bod4mpe ;
nhtodygfx5 ooql4bod4mp ; } ; struct l2ujah55jg { struct SimStruct_tag *
_mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 3 ] ; } NonContDerivMemory ;
ssNonContDerivSigInfo nonContDerivSignal [ 1 ] ; const rtTimingBridge *
timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
6 ] ; int32_T * vardimsAddress [ 6 ] ; RTWLoggingFcnPtr loggingPtrs [ 6 ] ;
sysRanDType * systemRan [ 23 ] ; int_T systemTid [ 23 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 3 ] ; time_T tStart ; } Timing ; } ;
typedef struct { krigp330xt rtb ; ggv1uslzom rtdw ; adbbpxjmjx rtm ; }
iqjk2gahmfr ; extern real_T rtP_a0_ini ; extern real_T rtP_e0_ini ; extern
real_T rtP_f0_ini ; extern real_T rtP_giro ; extern real_T rtP_mi ; extern
real_T rtP_omega0_ini ; extern real_T rtP_phi_i ; extern real_T rtP_psi_i ;
extern real_T rtP_theta_i ; extern void h5q2grtpc0 ( SimStruct * _mdlRefSfcnS
, int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , adbbpxjmjx *
const bwldjdcyog , krigp330xt * localB , ggv1uslzom * localDW , mcofgvk0eq *
localX , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) ; extern void
mr_DinamicaCinematicaControleAtitude_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS
, char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_DinamicaCinematicaControleAtitude_GetDWork ( const iqjk2gahmfr * mdlrefDW
) ; extern void mr_DinamicaCinematicaControleAtitude_SetDWork ( iqjk2gahmfr *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_DinamicaCinematicaControleAtitude_RegisterSimStateChecksum ( SimStruct * S
) ; extern mxArray *
mr_DinamicaCinematicaControleAtitude_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo *
DinamicaCinematicaControleAtitude_GetCAPIStaticMap ( void ) ; extern void
jdi3khs4aj ( khk1scvm25 * localDW ) ; extern void aug3s2wk5x ( khk1scvm25 *
localDW , nhtodygfx5 * localP ) ; extern void ooql4bod4m ( msxjw54xyk *
localB , khk1scvm25 * localDW , nhtodygfx5 * localP ) ; extern void
mndjv2ito4 ( real_T bwg2p0tcjg , real_T alnps30tur , real_T nun1m5k2vd ,
dkiri2qfb1 * localB ) ; extern void ddppposstn ( real_T ba42rap3cu , real_T
iuse5mub1h , real_T fpi4ecw211 , hvhocr1oej * localB ) ; extern void
flgjh1pqcu ( real_T ajssbwt1yw , real_T fixw3vobv2 , real_T gtmnx33jwy ,
real_T fblndnjeef , hnfbd4wuxy * localB ) ; extern void jgf4prl1s0 ( const
real_T dk0d2ir1dn [ 3 ] , const real_T gl444nho0c [ 4 ] , c10ke4cztz * localB
) ; extern void ps33gdejv3 ( const real_T ni2fbfshx4 [ 4 ] , n1gje2l2hr *
localB ) ; extern void mzdzfjacw2 ( adbbpxjmjx * const bwldjdcyog ,
krigp330xt * localB , ggv1uslzom * localDW , mcofgvk0eq * localX ) ; extern
void hmf3dz3lsy ( adbbpxjmjx * const bwldjdcyog , ggv1uslzom * localDW ,
mcofgvk0eq * localX ) ; extern void iax1yymlbh ( krigp330xt * localB ,
ggv1uslzom * localDW ) ; extern void aor4xhnafp ( krigp330xt * localB ,
puo43s1gwm * localXdot ) ; extern void jwdnpptmjt ( adbbpxjmjx * const
bwldjdcyog , ggv1uslzom * localDW ) ; extern void k11bgqmkqe ( adbbpxjmjx *
const bwldjdcyog , ggv1uslzom * localDW ) ; extern void
DinamicaCinematicaControleAtitude ( adbbpxjmjx * const bwldjdcyog , const
real_T on2ibsjoos [ 3 ] , const real_T lkylav03iq [ 3 ] , const real_T
gmh2shhhu1 [ 3 ] , real_T gxeo5z4vjr [ 4 ] , real_T jbatu2thoe [ 9 ] , real_T
amddzjakg1 [ 3 ] , krigp330xt * localB , ggv1uslzom * localDW , mcofgvk0eq *
localX ) ; extern void DinamicaCinematicaControleAtitudeTID2 ( krigp330xt *
localB ) ; extern void ahuawvdebl ( adbbpxjmjx * const bwldjdcyog ) ;
#endif
