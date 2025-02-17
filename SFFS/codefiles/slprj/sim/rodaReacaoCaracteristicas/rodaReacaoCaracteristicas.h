#ifndef rodaReacaoCaracteristicas_h_
#define rodaReacaoCaracteristicas_h_
#ifndef rodaReacaoCaracteristicas_COMMON_INCLUDES_
#define rodaReacaoCaracteristicas_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#endif
#include "rodaReacaoCaracteristicas_types.h"
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real_T p2lt2scmoe ; real_T jksrdzd5gm ; real_T lnjqpkej1x ;
real_T d0t02wpg3a ; real_T ecfp1p0uth ; } j4c4z5iltj ; typedef struct {
int8_T m5ugsmaxfg ; int8_T m35ietcpnq ; int8_T eyc5oac1ta ; } jl0ssgue0g ;
typedef struct { real_T i0badr502f ; real_T nve0xpld5q ; real_T c22pgfareg ;
real_T hloxtuzpld ; } dacvrdqnkd ; typedef struct { real_T i0badr502f ;
real_T nve0xpld5q ; real_T c22pgfareg ; real_T hloxtuzpld ; } fdpbkfvbjo ;
typedef struct { boolean_T i0badr502f ; boolean_T nve0xpld5q ; boolean_T
c22pgfareg ; boolean_T hloxtuzpld ; } mp4kendnp5 ; struct al2vmacaoq4_ {
real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T
P_19 ; } ; struct aomefuyc44 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
real_T mr_nonContSig0 [ 1 ] ; } NonContDerivMemory ; ssNonContDerivSigInfo
nonContDerivSignal [ 1 ] ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
4 ] ; int32_T * vardimsAddress [ 4 ] ; RTWLoggingFcnPtr loggingPtrs [ 4 ] ;
sysRanDType * systemRan [ 4 ] ; int_T systemTid [ 4 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; time_T tStart ; } Timing ; } ;
typedef struct { j4c4z5iltj rtb ; jl0ssgue0g rtdw ; iaetpnbwgc rtm ; }
eaaovtek212 ; extern real_T rtP_B ; extern real_T rtP_Iw ; extern real_T
rtP_Ixx ; extern real_T rtP_Iyy ; extern real_T rtP_Izz ; extern real_T
rtP_Km ; extern real_T rtP_Kv ; extern real_T rtP_Rm ; extern real_T
rtP_RodKi ; extern real_T rtP_RotMax ; extern real_T rtP_Tmax ; extern real_T
rtP_TpulseRod ; extern real_T rtP_limCorrente ; extern real_T rtP_limVolt ;
extern void c430lexmmh ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , iaetpnbwgc * const fhvr4fppzo , j4c4z5iltj
* localB , jl0ssgue0g * localDW , dacvrdqnkd * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_rodaReacaoCaracteristicas_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) ; extern mxArray *
mr_rodaReacaoCaracteristicas_GetDWork ( const eaaovtek212 * mdlrefDW ) ;
extern void mr_rodaReacaoCaracteristicas_SetDWork ( eaaovtek212 * mdlrefDW ,
const mxArray * ssDW ) ; extern void
mr_rodaReacaoCaracteristicas_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_rodaReacaoCaracteristicas_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
rodaReacaoCaracteristicas_GetCAPIStaticMap ( void ) ; extern void mr3j1o0jrs
( dacvrdqnkd * localX ) ; extern void biwmeiw20u ( dacvrdqnkd * localX ) ;
extern void o5ea2kxzhq ( iaetpnbwgc * const fhvr4fppzo , jl0ssgue0g * localDW
, mp4kendnp5 * localXdis ) ; extern void pdbps1tivb ( real_T * mispgguh4z ,
j4c4z5iltj * localB , jl0ssgue0g * localDW , fdpbkfvbjo * localXdot ) ;
extern void bh421im5yn ( iaetpnbwgc * const fhvr4fppzo , jl0ssgue0g * localDW
, mp4kendnp5 * localXdis ) ; extern void jjvved0e4i ( iaetpnbwgc * const
fhvr4fppzo ) ; extern void rodaReacaoCaracteristicas ( iaetpnbwgc * const
fhvr4fppzo , const real_T * jboyr2i3j4 , real_T * mispgguh4z , j4c4z5iltj *
localB , jl0ssgue0g * localDW , dacvrdqnkd * localX , mp4kendnp5 * localXdis
) ; extern void avvafwszbq ( iaetpnbwgc * const fhvr4fppzo ) ;
#endif
