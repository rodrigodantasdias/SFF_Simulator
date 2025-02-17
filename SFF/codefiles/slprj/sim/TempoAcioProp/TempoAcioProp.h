#ifndef TempoAcioProp_h_
#define TempoAcioProp_h_
#ifndef TempoAcioProp_COMMON_INCLUDES_
#define TempoAcioProp_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "TempoAcioProp_types.h"
#include "rtGetInf.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include <stddef.h>
struct eu4pm0cwru { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { eybvr0iiw2 rtm ; } hunxlyfe3u3 ; extern void bx1fqdjqke (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , eybvr0iiw2 * const jsfqugi5ky
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_TempoAcioProp_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) ; extern mxArray * mr_TempoAcioProp_GetDWork (
const hunxlyfe3u3 * mdlrefDW ) ; extern void mr_TempoAcioProp_SetDWork (
hunxlyfe3u3 * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_TempoAcioProp_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray
* mr_TempoAcioProp_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * TempoAcioProp_GetCAPIStaticMap ( void ) ;
extern void TempoAcioProp ( const real_T bxkmkuxprz [ 3 ] , const real_T
nsmpydtgjk [ 3 ] , const real_T * nf5oiilpxm , const real_T * m2whrcxgxl ,
real_T ckd4xeq4vb [ 12 ] ) ; extern void hss3zorcta ( eybvr0iiw2 * const
jsfqugi5ky ) ;
#endif
