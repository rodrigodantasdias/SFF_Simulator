#ifndef TempoAcioProp_cap_host_h__
#define TempoAcioProp_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
TempoAcioProp_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void TempoAcioProp_host_InitializeDataMapInfo (
TempoAcioProp_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
