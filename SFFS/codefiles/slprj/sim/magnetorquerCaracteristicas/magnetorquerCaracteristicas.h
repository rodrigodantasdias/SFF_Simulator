#ifndef magnetorquerCaracteristicas_h_
#define magnetorquerCaracteristicas_h_
#ifndef magnetorquerCaracteristicas_COMMON_INCLUDES_
#define magnetorquerCaracteristicas_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#endif
#include "magnetorquerCaracteristicas_types.h"
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real_T pzmsl3g0xe ; real_T palc2qme1c ; real_T kuwgd3guea ;
} knlxdqzha3 ; typedef struct { real_T otxc30ujlv [ 10 ] ; int8_T fs3dsh3w5g
; int8_T pzwzs1nmt5 ; int8_T la5fsxv1hk ; boolean_T i1tixxcmjx ; } lfb3qpjdoq
; typedef struct { real_T bwh55fyyay ; } pcl5pvi4hn ; typedef struct { real_T
bwh55fyyay ; } elachqatwo ; typedef struct { boolean_T bwh55fyyay ; }
dojuiak3rm ; struct psjb02rbeph_ { real_T P_2 ; } ; struct oh02qsfq5k {
struct SimStruct_tag * _mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 1 ] ;
} NonContDerivMemory ; ssNonContDerivSigInfo nonContDerivSignal [ 1 ] ;
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 2 ] ; int32_T * vardimsAddress [ 2
] ; RTWLoggingFcnPtr loggingPtrs [ 2 ] ; sysRanDType * systemRan [ 4 ] ;
int_T systemTid [ 4 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; time_T tStart ; } Timing ; } ; typedef struct { knlxdqzha3 rtb ; lfb3qpjdoq
rtdw ; kd0us3tuxx rtm ; } entaxp45pma ; extern real_T rtP_TpulseTorq ; extern
real_T rtP_sat_torquerod ; extern void n2x5puuvrd ( SimStruct * _mdlRefSfcnS
, ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , kd0us3tuxx * const nyf0u4k1q4 , knlxdqzha3
* localB , lfb3qpjdoq * localDW , pcl5pvi4hn * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_magnetorquerCaracteristicas_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_magnetorquerCaracteristicas_GetDWork ( const entaxp45pma * mdlrefDW ) ;
extern void mr_magnetorquerCaracteristicas_SetDWork ( entaxp45pma * mdlrefDW
, const mxArray * ssDW ) ; extern void
mr_magnetorquerCaracteristicas_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_magnetorquerCaracteristicas_GetSimStateDisallowedBlocks (
) ; extern const rtwCAPI_ModelMappingStaticInfo *
magnetorquerCaracteristicas_GetCAPIStaticMap ( void ) ; extern void
fxs2dixnjs ( lfb3qpjdoq * localDW , pcl5pvi4hn * localX ) ; extern void
gpidghel0r ( lfb3qpjdoq * localDW ) ; extern void f3upvb2lgk ( kd0us3tuxx *
const nyf0u4k1q4 , lfb3qpjdoq * localDW , dojuiak3rm * localXdis ) ; extern
void lwhnm3fa1l ( knlxdqzha3 * localB , lfb3qpjdoq * localDW , elachqatwo *
localXdot ) ; extern void ocf4ffprop ( kd0us3tuxx * const nyf0u4k1q4 ,
knlxdqzha3 * localB , lfb3qpjdoq * localDW ) ; extern void
magnetorquerCaracteristicas ( kd0us3tuxx * const nyf0u4k1q4 , const real_T *
ebsmjwgzwm , real_T * lxk51vn15i , knlxdqzha3 * localB , lfb3qpjdoq * localDW
, pcl5pvi4hn * localX , dojuiak3rm * localXdis ) ; extern void bgaq4fu3pp (
kd0us3tuxx * const nyf0u4k1q4 ) ;
#endif
