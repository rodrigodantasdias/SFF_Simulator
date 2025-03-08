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
typedef struct { real_T etz5jvvdvx ; } msxjw54xyk ; typedef struct {
eyuh5lmif5 khdlnzzcpl ; uint32_T jwkog5tsy0 ; uint32_T c2uwwswwrz ; uint32_T
ldulomjtq2 ; uint32_T gakqowpeu0 [ 2 ] ; uint32_T b33jgqukxo [ 625 ] ;
uint32_T lova5natot ; uint32_T lpjepc432n [ 2 ] ; boolean_T agdmtiie2i ;
boolean_T fcl0i4s23y ; boolean_T gacsk4ue1c ; boolean_T hai52o34ao ;
boolean_T j1ajf5oks5 ; boolean_T n0ya0gspe2 ; boolean_T c5axmpduuz ;
boolean_T owudl4s4vs ; } khk1scvm25 ; typedef struct { real_T aw1p0aoahi [ 4
] ; real_T cnptw5zkjt [ 3 ] ; real_T aae2zgo4tm [ 3 ] ; real_T bgzfxadhjc [ 3
] ; real_T pxyrv4obcm ; real_T oztino51gc [ 9 ] ; real_T irqqacjbdh [ 3 ] ;
real_T jw1g4aa0iu [ 4 ] ; real32_T lq03oho0f4 ; msxjw54xyk ooql4bod4mpe3 ;
msxjw54xyk ooql4bod4mpe ; msxjw54xyk ooql4bod4mp ; } krigp330xt ; typedef
struct { real_T ej2or4wkc4 [ 9 ] ; int32_T e11rk5ntpu ; int_T igh2jm43a3 ;
int_T ktu3yynb2h ; int8_T mnhgxgkor0 ; int8_T la0x4crr0r ; int8_T csrasjj5cf
; khk1scvm25 ooql4bod4mpe3 ; khk1scvm25 ooql4bod4mpe ; khk1scvm25 ooql4bod4mp
; } ggv1uslzom ; typedef struct { real_T dg5bug3ja3 [ 3 ] ; real_T fqwmftubxu
[ 4 ] ; } mcofgvk0eq ; typedef struct { real_T dg5bug3ja3 [ 3 ] ; real_T
fqwmftubxu [ 4 ] ; } puo43s1gwm ; typedef struct { boolean_T dg5bug3ja3 [ 3 ]
; boolean_T fqwmftubxu [ 4 ] ; } kgn2b3e1e5 ; struct nhtodygfx5_ { real_T P_0
; real_T P_1 ; } ; struct hxlpb0imdfh_ { real_T P_4 ; real_T P_5 ; real_T P_6
; real_T P_7 ; real_T P_8 ; real_T P_9 [ 9 ] ; real_T P_10 [ 3 ] ; boolean_T
P_11 ; nhtodygfx5 ooql4bod4mpe3 ; nhtodygfx5 ooql4bod4mpe ; nhtodygfx5
ooql4bod4mp ; } ; struct l2ujah55jg { struct SimStruct_tag * _mdlRefSfcnS ;
struct { real_T mr_nonContSig0 [ 3 ] ; } NonContDerivMemory ;
ssNonContDerivSigInfo nonContDerivSignal [ 1 ] ; const rtTimingBridge *
timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
2 ] ; int32_T * vardimsAddress [ 2 ] ; RTWLoggingFcnPtr loggingPtrs [ 2 ] ;
sysRanDType * systemRan [ 10 ] ; int_T systemTid [ 10 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 3 ] ; time_T tStart ; } Timing ; } ;
typedef struct { krigp330xt rtb ; ggv1uslzom rtdw ; adbbpxjmjx rtm ; }
iqjk2gahmfr ; extern real_T rtP_giro ; extern real_T rtP_phi_i ; extern
real_T rtP_psi_i ; extern real_T rtP_theta_i ; extern void h5q2grtpc0 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , adbbpxjmjx * const bwldjdcyog , krigp330xt * localB ,
ggv1uslzom * localDW , mcofgvk0eq * localX , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
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
mzdzfjacw2 ( adbbpxjmjx * const bwldjdcyog , krigp330xt * localB , ggv1uslzom
* localDW , mcofgvk0eq * localX ) ; extern void hmf3dz3lsy ( adbbpxjmjx *
const bwldjdcyog , ggv1uslzom * localDW , mcofgvk0eq * localX ) ; extern void
iax1yymlbh ( krigp330xt * localB , ggv1uslzom * localDW ) ; extern void
aor4xhnafp ( krigp330xt * localB , puo43s1gwm * localXdot ) ; extern void
k11bgqmkqe ( adbbpxjmjx * const bwldjdcyog , ggv1uslzom * localDW ) ; extern
void DinamicaCinematicaControleAtitude ( adbbpxjmjx * const bwldjdcyog ,
const real_T on2ibsjoos [ 3 ] , const real_T lkylav03iq [ 3 ] , const real_T
gmh2shhhu1 [ 3 ] , real_T gxeo5z4vjr [ 4 ] , real_T jbatu2thoe [ 9 ] , real_T
amddzjakg1 [ 3 ] , krigp330xt * localB , ggv1uslzom * localDW , mcofgvk0eq *
localX ) ; extern void DinamicaCinematicaControleAtitudeTID2 ( krigp330xt *
localB ) ; extern void ahuawvdebl ( adbbpxjmjx * const bwldjdcyog ) ;
#endif
