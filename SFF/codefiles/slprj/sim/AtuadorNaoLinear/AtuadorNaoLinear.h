#ifndef AtuadorNaoLinear_h_
#define AtuadorNaoLinear_h_
#ifndef AtuadorNaoLinear_COMMON_INCLUDES_
#define AtuadorNaoLinear_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "AtuadorNaoLinear_types.h"
#include "TempoAcioProp.h"
#include "Propulsor.h"
#include <stddef.h>
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
typedef struct { real_T cxrxefy4h4 [ 12 ] ; real_T ddz1zumgkg [ 12 ] ; real_T
dbeduryfjp ; real_T f1tn41t135 ; real_T mk5ybbgoqb ; real_T mdpzggkogt ;
real_T ka1r3fvslj ; real_T c2ez140uf3 ; real_T na2fg0iq0m ; real_T e3dmxd0kie
; real_T ohu1inok3x ; real_T fltbw55c3z ; real_T f0tpo4it2l ; real_T
hd2ep4e31p ; } nah1kidpij ; typedef struct { real_T e513volrap [ 12 ] ;
struct { void * AQHandles ; } dfw2sbes1n ; hunxlyfe3u3 nwr4civd04 ;
kqdtm1plmi2 eub1qolwz2 ; kqdtm1plmi2 pcqf20gb1l ; kqdtm1plmi2 mxn3uxi1fu ;
kqdtm1plmi2 gh5n4g4wxf ; kqdtm1plmi2 hdxzedgkcz ; kqdtm1plmi2 iebjxiwown ;
kqdtm1plmi2 afv4ppr3ob ; kqdtm1plmi2 d5nw4rpqoc ; kqdtm1plmi2 kn2nhzkemd ;
kqdtm1plmi2 owzuuw44dh ; kqdtm1plmi2 jxy3rr15ed ; kqdtm1plmi2 dryzhhsiwr ; }
kqdghramcw ; typedef struct { jo4unm3m5g mmg2yp1iy4 ; jo4unm3m5g h0t3cvyntq ;
jo4unm3m5g h0kec2q1y3 ; jo4unm3m5g lrqazd5dsu ; jo4unm3m5g ovtwzec3og ;
jo4unm3m5g pq2iag4suc ; jo4unm3m5g iaspcs5daw ; jo4unm3m5g gmh5x22olk ;
jo4unm3m5g g5usklbpz2 ; jo4unm3m5g fgl4x4jkar ; jo4unm3m5g dfaeutoo5m ;
jo4unm3m5g f0oqile1rb ; } j5cadauj3p ; typedef struct { dcmsala1mj mmg2yp1iy4
; dcmsala1mj h0t3cvyntq ; dcmsala1mj h0kec2q1y3 ; dcmsala1mj lrqazd5dsu ;
dcmsala1mj ovtwzec3og ; dcmsala1mj pq2iag4suc ; dcmsala1mj iaspcs5daw ;
dcmsala1mj gmh5x22olk ; dcmsala1mj g5usklbpz2 ; dcmsala1mj fgl4x4jkar ;
dcmsala1mj dfaeutoo5m ; dcmsala1mj f0oqile1rb ; } d3ipjt54fk ; typedef struct
{ ajyahdeuyo mmg2yp1iy4 ; ajyahdeuyo h0t3cvyntq ; ajyahdeuyo h0kec2q1y3 ;
ajyahdeuyo lrqazd5dsu ; ajyahdeuyo ovtwzec3og ; ajyahdeuyo pq2iag4suc ;
ajyahdeuyo iaspcs5daw ; ajyahdeuyo gmh5x22olk ; ajyahdeuyo g5usklbpz2 ;
ajyahdeuyo fgl4x4jkar ; ajyahdeuyo dfaeutoo5m ; ajyahdeuyo f0oqile1rb ; }
l1jluxmby4 ; struct jkuxe4trrud_ { real_T P_6 ; } ; struct pjckeubqqs {
struct SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
1 ] ; int32_T * vardimsAddress [ 1 ] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ;
rtwCAPI_ModelMappingInfo * childMMI [ 13 ] ; sysRanDType * systemRan [ 4 ] ;
int_T systemTid [ 4 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; time_T tStart ; } Timing ; } ; typedef struct { nah1kidpij rtb ; kqdghramcw
rtdw ; jxg1wrv0wn rtm ; } plpfqwi2ris ; extern real_T rtP_Fn ; extern real_T
rtP_Tpulse ; extern real_T rtP_mib ; extern real_T rtP_peak_prop ; extern
real_T rtP_rb ; extern real_T rtP_tc ; extern void dljor4p2fn ( SimStruct *
_mdlRefSfcnS , ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray ,
int_T mdlref_TID0 , int_T mdlref_TID1 , jxg1wrv0wn * const pjzki5njc0 ,
nah1kidpij * localB , kqdghramcw * localDW , j5cadauj3p * localX , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_AtuadorNaoLinear_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_AtuadorNaoLinear_GetDWork
( const plpfqwi2ris * mdlrefDW ) ; extern void mr_AtuadorNaoLinear_SetDWork (
plpfqwi2ris * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_AtuadorNaoLinear_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_AtuadorNaoLinear_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * AtuadorNaoLinear_GetCAPIStaticMap ( void ) ;
extern void lphz0t00qg ( jxg1wrv0wn * const pjzki5njc0 , kqdghramcw * localDW
) ; extern void lz2xqdrygl ( kqdghramcw * localDW , j5cadauj3p * localX ) ;
extern void fgyqfjxym1 ( kqdghramcw * localDW ) ; extern void g5ctfglpi4 (
jxg1wrv0wn * const pjzki5njc0 , kqdghramcw * localDW ) ; extern void
ij15mfgwb3 ( kqdghramcw * localDW , l1jluxmby4 * localXdis ) ; extern void
gk3v4rqjtl ( kqdghramcw * localDW , d3ipjt54fk * localXdot ) ; extern void
dhcqxhq1zv ( jxg1wrv0wn * const pjzki5njc0 , nah1kidpij * localB , kqdghramcw
* localDW ) ; extern void AtuadorNaoLinear ( jxg1wrv0wn * const pjzki5njc0 ,
const real_T gqki1bubrb [ 3 ] , const real_T manwmtzjg1 [ 3 ] , real_T
o2q3ti05ba [ 3 ] , real_T a0gjm3jsl4 [ 3 ] , nah1kidpij * localB , kqdghramcw
* localDW , j5cadauj3p * localX , l1jluxmby4 * localXdis ) ; extern void
co1sydaxno ( kqdghramcw * localDW , jxg1wrv0wn * const pjzki5njc0 ) ;
#endif
