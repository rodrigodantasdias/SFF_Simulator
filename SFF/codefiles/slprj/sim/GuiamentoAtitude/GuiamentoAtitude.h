#ifndef GuiamentoAtitude_h_
#define GuiamentoAtitude_h_
#ifndef GuiamentoAtitude_COMMON_INCLUDES_
#define GuiamentoAtitude_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "GuiamentoAtitude_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
struct ghbcvejhpsz_ { real_T P_1 ; } ; struct puki4i2khe { struct
SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 3 ] ; int_T systemTid [ 3 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 1 ] ; } Timing ; } ; typedef struct { czus43m2u0 rtm ; }
ljgbgmm0igs ; extern real_T rtP_Re ; extern void i3xwcayboo ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , czus43m2u0 * const g3kp0yjyvk , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_GuiamentoAtitude_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_GuiamentoAtitude_GetDWork
( const ljgbgmm0igs * mdlrefDW ) ; extern void mr_GuiamentoAtitude_SetDWork (
ljgbgmm0igs * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_GuiamentoAtitude_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_GuiamentoAtitude_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * GuiamentoAtitude_GetCAPIStaticMap ( void ) ;
extern void mxbe4jbwo5 ( real_T * ptmhoidr3i ) ; extern void dmf4dhpwtc (
real_T * ptmhoidr3i ) ; extern void ndn1cpexdm ( real_T * ptmhoidr3i ) ;
extern void GuiamentoAtitude ( const real_T iml32izsgx [ 9 ] , const real_T *
okt1znrs3o , const real_T * pts32kjaxp , const real_T * cdlhzhavyd , const
real_T * crtnqnokdt , const real_T nh3pwphn31 [ 3 ] , real_T * mvog0ntr2d ,
real_T * egr3c4maaa , real_T * ptmhoidr3i ) ; extern void absjvhvs1i (
czus43m2u0 * const g3kp0yjyvk ) ;
#endif
