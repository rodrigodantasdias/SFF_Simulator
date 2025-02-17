#ifndef AtuadorNaoLinear_cap_host_h__
#define AtuadorNaoLinear_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "Propulsor_capi_host.h"
#include "Propulsor_capi_host.h"
#include "Propulsor_capi_host.h"
#include "Propulsor_capi_host.h"
#include "Propulsor_capi_host.h"
#include "Propulsor_capi_host.h"
#include "Propulsor_capi_host.h"
#include "Propulsor_capi_host.h"
#include "Propulsor_capi_host.h"
#include "Propulsor_capi_host.h"
#include "Propulsor_capi_host.h"
#include "Propulsor_capi_host.h"
#include "TempoAcioProp_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 13 ] ; Propulsor_host_DataMapInfo_T child0 ;
Propulsor_host_DataMapInfo_T child1 ; Propulsor_host_DataMapInfo_T child2 ;
Propulsor_host_DataMapInfo_T child3 ; Propulsor_host_DataMapInfo_T child4 ;
Propulsor_host_DataMapInfo_T child5 ; Propulsor_host_DataMapInfo_T child6 ;
Propulsor_host_DataMapInfo_T child7 ; Propulsor_host_DataMapInfo_T child8 ;
Propulsor_host_DataMapInfo_T child9 ; Propulsor_host_DataMapInfo_T child10 ;
Propulsor_host_DataMapInfo_T child11 ; TempoAcioProp_host_DataMapInfo_T
child12 ; } AtuadorNaoLinear_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void AtuadorNaoLinear_host_InitializeDataMapInfo (
AtuadorNaoLinear_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
