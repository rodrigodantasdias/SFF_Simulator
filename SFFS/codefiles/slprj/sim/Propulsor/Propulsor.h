#ifndef Propulsor_h_
#define Propulsor_h_
#ifndef Propulsor_COMMON_INCLUDES_
#define Propulsor_COMMON_INCLUDES_
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
#include "Propulsor_types.h"
#include <string.h>
#include "rtGetNaN.h"
#include "rtw_modelmap_simtarget.h"
#include <stddef.h>
typedef struct { real_T gutio4nps3 ; real_T bls4tif30l ; real_T ef0xyjxe45 ;
real_T p1r50emq1s ; real_T ou5c44smff ; real_T boz3xcsbjt ; real_T bf2wfhi4jc
; real_T asphu4mscc ; } djo0io2ayt ; typedef struct { fqblr2yw1g mrtgw2nthg ;
real_T pw3wjofd4q ; real_T ijra2dyz05 [ 10 ] ; real_T jt3tjalxnb ; real_T
an15000nu4 ; uint32_T apvciaxirr ; uint32_T o4noju3p5o ; uint32_T ahhxqv0wya
; uint32_T dnm13dz2ax [ 2 ] ; uint32_T k3w4qii5po [ 625 ] ; uint32_T
cnc2uf4o4h ; uint32_T jrcnye2rjj [ 2 ] ; int8_T jypkwgov1i ; int8_T
htitws2jba ; int8_T jxwdrgb2ll ; boolean_T mgzfkf5p3j ; boolean_T d4xx3vji4n
; boolean_T f2lwi2ca1a ; boolean_T it1f3ijavg ; boolean_T jhwrgfx3t0 ;
boolean_T ocqntevs0g ; boolean_T btjdqxe4rl ; boolean_T inionp4ncy ;
boolean_T ohtlwjnutg ; } badsi1hmia ; typedef struct { real_T fbmh4qw3zl ; }
jo4unm3m5g ; typedef struct { real_T fbmh4qw3zl ; } dcmsala1mj ; typedef
struct { boolean_T fbmh4qw3zl ; } ajyahdeuyo ; struct jpocpupbvwg_ { real_T
P_5 ; real_T P_6 ; real_T P_7 ; } ; struct iksdokfgp1 { struct SimStruct_tag
* _mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 1 ] ; } NonContDerivMemory
; ssNonContDerivSigInfo nonContDerivSignal [ 1 ] ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 4 ] ; int32_T * vardimsAddress [ 4
] ; RTWLoggingFcnPtr loggingPtrs [ 4 ] ; sysRanDType * systemRan [ 6 ] ;
int_T systemTid [ 6 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; time_T tStart ; } Timing ; } ; typedef struct { djo0io2ayt rtb ; badsi1hmia
rtdw ; idm52sgviy rtm ; } kqdtm1plmi2 ; extern real_T rtP_Fn ; extern real_T
rtP_Tpulse ; extern real_T rtP_mib ; extern real_T rtP_peak_prop ; extern
real_T rtP_tc ; extern void gf4m412xvp ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , idm52sgviy * const egnxxymnym , djo0io2ayt
* localB , badsi1hmia * localDW , jo4unm3m5g * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_Propulsor_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_Propulsor_GetDWork ( const kqdtm1plmi2
* mdlrefDW ) ; extern void mr_Propulsor_SetDWork ( kqdtm1plmi2 * mdlrefDW ,
const mxArray * ssDW ) ; extern void mr_Propulsor_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray * mr_Propulsor_GetSimStateDisallowedBlocks (
) ; extern const rtwCAPI_ModelMappingStaticInfo * Propulsor_GetCAPIStaticMap
( void ) ; extern void io4yjhha3x ( badsi1hmia * localDW , jo4unm3m5g *
localX ) ; extern void npi5eyt2xv ( badsi1hmia * localDW ) ; extern void
cm1sx1eabq ( idm52sgviy * const egnxxymnym , badsi1hmia * localDW ,
ajyahdeuyo * localXdis ) ; extern void fxb2slckzk ( djo0io2ayt * localB ,
badsi1hmia * localDW , dcmsala1mj * localXdot ) ; extern void inmzgbaou4 (
idm52sgviy * const egnxxymnym , djo0io2ayt * localB , badsi1hmia * localDW )
; extern void Propulsor ( idm52sgviy * const egnxxymnym , const real_T *
ifrc3wggig , real_T * gwwwd5ymuk , djo0io2ayt * localB , badsi1hmia * localDW
, jo4unm3m5g * localX , ajyahdeuyo * localXdis ) ; extern void bgcteftzsf (
idm52sgviy * const egnxxymnym ) ;
#endif
