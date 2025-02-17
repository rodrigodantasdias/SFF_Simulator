#include "AtuadorNaoLinear.h"
#include "rtwtypes.h"
#include "AtuadorNaoLinear_private.h"
#include <string.h>
#include "AtuadorNaoLinear_capi.h"
#include "Propulsor.h"
#include "TempoAcioProp.h"
static RegMdlInfo rtMdlInfo_AtuadorNaoLinear [ 45 ] = { { "plpfqwi2ris" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "AtuadorNaoLinear" } , {
"mpao3c2xev" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"AtuadorNaoLinear" } , { "nnphstvy4b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "AtuadorNaoLinear" } , { "ftsgicqjms" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "AtuadorNaoLinear" }
, { "kkcniqfonf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"AtuadorNaoLinear" } , { "l1jluxmby4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "AtuadorNaoLinear" } , { "d3ipjt54fk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "AtuadorNaoLinear" }
, { "j5cadauj3p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"AtuadorNaoLinear" } , { "awvqmuyac3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "AtuadorNaoLinear" } , { "lykxy0xrub" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "AtuadorNaoLinear" }
, { "gtuedwgwkq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"AtuadorNaoLinear" } , { "ncdly02k4c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "AtuadorNaoLinear" } , { "kqdghramcw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "AtuadorNaoLinear" }
, { "nah1kidpij" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"AtuadorNaoLinear" } , { "jmaojiaba1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "AtuadorNaoLinear" } , { "co1sydaxno" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "AtuadorNaoLinear" }
, { "g5ctfglpi4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"AtuadorNaoLinear" } , { "gk3v4rqjtl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "AtuadorNaoLinear" } , { "dhcqxhq1zv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "AtuadorNaoLinear" }
, { "fgyqfjxym1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"AtuadorNaoLinear" } , { "lz2xqdrygl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "AtuadorNaoLinear" } , { "dljor4p2fn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "AtuadorNaoLinear" }
, { "ij15mfgwb3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"AtuadorNaoLinear" } , { "lphz0t00qg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "AtuadorNaoLinear" } , { "AtuadorNaoLinear" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "nwdhz1tv2t" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "AtuadorNaoLinear" }
, { "jkuxe4trrud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"AtuadorNaoLinear" } , { "pjckeubqqs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "AtuadorNaoLinear" } , { "jxg1wrv0wn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "AtuadorNaoLinear" }
, { "hunxlyfe3u3" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"kqdtm1plmi2" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_AtuadorNaoLinear_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "AtuadorNaoLinear" } , {
"mr_AtuadorNaoLinear_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "AtuadorNaoLinear" } , {
"mr_AtuadorNaoLinear_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "AtuadorNaoLinear" } , {
"mr_AtuadorNaoLinear_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "AtuadorNaoLinear" } , {
"mr_AtuadorNaoLinear_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "AtuadorNaoLinear" } , {
"mr_AtuadorNaoLinear_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "AtuadorNaoLinear" } , {
"mr_AtuadorNaoLinear_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "AtuadorNaoLinear" } , {
"mr_AtuadorNaoLinear_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "AtuadorNaoLinear" } , {
"mr_AtuadorNaoLinear_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "AtuadorNaoLinear" } , {
"mr_AtuadorNaoLinear_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "AtuadorNaoLinear" } , { "mr_AtuadorNaoLinear_SetDWork"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "AtuadorNaoLinear" } , {
"mr_AtuadorNaoLinear_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "AtuadorNaoLinear" } , { "AtuadorNaoLinear.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "AtuadorNaoLinear.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "AtuadorNaoLinear" } } ;
jkuxe4trrud jkuxe4trru = { 0.0 } ; void lphz0t00qg ( jxg1wrv0wn * const
pjzki5njc0 , kqdghramcw * localDW ) { if ( ( ssGetSimMode ( pjzki5njc0 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( pjzki5njc0 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( pjzki5njc0 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( pjzki5njc0
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Detect\nIncrease" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "Detect\nIncrease" ) ; sdiLabelU
blockPath = sdiGetLabelFromChars ( "AtuadorNaoLinear/To Workspace29" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Detect\nIncrease" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_UINT8 ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 12 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( pjzki5njc0
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , pjzki5njc0 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; { sdiLabelU varName = sdiGetLabelFromChars (
"pulsos" ) ; sdiRegisterWksVariable ( hForEachParent , varName , "array2D" )
; sdiFreeLabel ( varName ) ; } sdiAsyncRepoSetBlockPathDomain (
hForEachParent ) ; isStreamoutAlreadyRegistered = true ; } localDW ->
dfw2sbes1n . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
pjzki5njc0 -> DataMapInfo . mmi . InstanceMap . fullPath ,
"d58258f3-673b-43e8-832c-d5b1e0387f75" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
localDW -> dfw2sbes1n . AQHandles , hDT , & srcInfo ) ; if ( localDW ->
dfw2sbes1n . AQHandles ) { sdiSetSignalSampleTimeString ( localDW ->
dfw2sbes1n . AQHandles , "Continuous" , 0.0 , rtmGetTFinal ( pjzki5njc0 ) ) ;
sdiSetSignalRefRate ( localDW -> dfw2sbes1n . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> dfw2sbes1n . AQHandles , rtmGetTaskTime (
pjzki5njc0 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
dfw2sbes1n . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> dfw2sbes1n . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( localDW -> dfw2sbes1n . AQHandles ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> dfw2sbes1n . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"pulsos" ) ; sdiRegisterWksVariable ( localDW -> dfw2sbes1n . AQHandles ,
varName , "array2D" ) ; sdiFreeLabel ( varName ) ; } } } } } } void
lz2xqdrygl ( kqdghramcw * localDW , j5cadauj3p * localX ) { int32_T i ; for (
i = 0 ; i < 12 ; i ++ ) { localDW -> e513volrap [ i ] = jkuxe4trru . P_6 ; }
io4yjhha3x ( & ( localDW -> eub1qolwz2 . rtdw ) , & ( localX -> mmg2yp1iy4 )
) ; io4yjhha3x ( & ( localDW -> pcqf20gb1l . rtdw ) , & ( localX ->
h0t3cvyntq ) ) ; io4yjhha3x ( & ( localDW -> mxn3uxi1fu . rtdw ) , & ( localX
-> h0kec2q1y3 ) ) ; io4yjhha3x ( & ( localDW -> gh5n4g4wxf . rtdw ) , & (
localX -> lrqazd5dsu ) ) ; io4yjhha3x ( & ( localDW -> hdxzedgkcz . rtdw ) ,
& ( localX -> ovtwzec3og ) ) ; io4yjhha3x ( & ( localDW -> iebjxiwown . rtdw
) , & ( localX -> pq2iag4suc ) ) ; io4yjhha3x ( & ( localDW -> afv4ppr3ob .
rtdw ) , & ( localX -> iaspcs5daw ) ) ; io4yjhha3x ( & ( localDW ->
d5nw4rpqoc . rtdw ) , & ( localX -> gmh5x22olk ) ) ; io4yjhha3x ( & ( localDW
-> kn2nhzkemd . rtdw ) , & ( localX -> g5usklbpz2 ) ) ; io4yjhha3x ( & (
localDW -> owzuuw44dh . rtdw ) , & ( localX -> fgl4x4jkar ) ) ; io4yjhha3x (
& ( localDW -> jxy3rr15ed . rtdw ) , & ( localX -> dfaeutoo5m ) ) ;
io4yjhha3x ( & ( localDW -> dryzhhsiwr . rtdw ) , & ( localX -> f0oqile1rb )
) ; } void fgyqfjxym1 ( kqdghramcw * localDW ) { int32_T i ; for ( i = 0 ; i
< 12 ; i ++ ) { localDW -> e513volrap [ i ] = jkuxe4trru . P_6 ; } npi5eyt2xv
( & ( localDW -> eub1qolwz2 . rtdw ) ) ; npi5eyt2xv ( & ( localDW ->
pcqf20gb1l . rtdw ) ) ; npi5eyt2xv ( & ( localDW -> mxn3uxi1fu . rtdw ) ) ;
npi5eyt2xv ( & ( localDW -> gh5n4g4wxf . rtdw ) ) ; npi5eyt2xv ( & ( localDW
-> hdxzedgkcz . rtdw ) ) ; npi5eyt2xv ( & ( localDW -> iebjxiwown . rtdw ) )
; npi5eyt2xv ( & ( localDW -> afv4ppr3ob . rtdw ) ) ; npi5eyt2xv ( & (
localDW -> d5nw4rpqoc . rtdw ) ) ; npi5eyt2xv ( & ( localDW -> kn2nhzkemd .
rtdw ) ) ; npi5eyt2xv ( & ( localDW -> owzuuw44dh . rtdw ) ) ; npi5eyt2xv ( &
( localDW -> jxy3rr15ed . rtdw ) ) ; npi5eyt2xv ( & ( localDW -> dryzhhsiwr .
rtdw ) ) ; } void ij15mfgwb3 ( kqdghramcw * localDW , l1jluxmby4 * localXdis
) { cm1sx1eabq ( & ( localDW -> eub1qolwz2 . rtm ) , & ( localDW ->
eub1qolwz2 . rtdw ) , & ( localXdis -> mmg2yp1iy4 ) ) ; cm1sx1eabq ( & (
localDW -> pcqf20gb1l . rtm ) , & ( localDW -> pcqf20gb1l . rtdw ) , & (
localXdis -> h0t3cvyntq ) ) ; cm1sx1eabq ( & ( localDW -> mxn3uxi1fu . rtm )
, & ( localDW -> mxn3uxi1fu . rtdw ) , & ( localXdis -> h0kec2q1y3 ) ) ;
cm1sx1eabq ( & ( localDW -> gh5n4g4wxf . rtm ) , & ( localDW -> gh5n4g4wxf .
rtdw ) , & ( localXdis -> lrqazd5dsu ) ) ; cm1sx1eabq ( & ( localDW ->
hdxzedgkcz . rtm ) , & ( localDW -> hdxzedgkcz . rtdw ) , & ( localXdis ->
ovtwzec3og ) ) ; cm1sx1eabq ( & ( localDW -> iebjxiwown . rtm ) , & ( localDW
-> iebjxiwown . rtdw ) , & ( localXdis -> pq2iag4suc ) ) ; cm1sx1eabq ( & (
localDW -> afv4ppr3ob . rtm ) , & ( localDW -> afv4ppr3ob . rtdw ) , & (
localXdis -> iaspcs5daw ) ) ; cm1sx1eabq ( & ( localDW -> d5nw4rpqoc . rtm )
, & ( localDW -> d5nw4rpqoc . rtdw ) , & ( localXdis -> gmh5x22olk ) ) ;
cm1sx1eabq ( & ( localDW -> kn2nhzkemd . rtm ) , & ( localDW -> kn2nhzkemd .
rtdw ) , & ( localXdis -> g5usklbpz2 ) ) ; cm1sx1eabq ( & ( localDW ->
owzuuw44dh . rtm ) , & ( localDW -> owzuuw44dh . rtdw ) , & ( localXdis ->
fgl4x4jkar ) ) ; cm1sx1eabq ( & ( localDW -> jxy3rr15ed . rtm ) , & ( localDW
-> jxy3rr15ed . rtdw ) , & ( localXdis -> dfaeutoo5m ) ) ; cm1sx1eabq ( & (
localDW -> dryzhhsiwr . rtm ) , & ( localDW -> dryzhhsiwr . rtdw ) , & (
localXdis -> f0oqile1rb ) ) ; } void AtuadorNaoLinear ( jxg1wrv0wn * const
pjzki5njc0 , const real_T gqki1bubrb [ 3 ] , const real_T manwmtzjg1 [ 3 ] ,
real_T o2q3ti05ba [ 3 ] , real_T a0gjm3jsl4 [ 3 ] , nah1kidpij * localB ,
kqdghramcw * localDW , j5cadauj3p * localX , l1jluxmby4 * localXdis ) {
uint8_T pdvdwlivla [ 12 ] ; if ( rtmIsMajorTimeStep ( pjzki5njc0 ) ) {
TempoAcioProp ( & gqki1bubrb [ 0 ] , & manwmtzjg1 [ 0 ] , & rtP_Fn , & rtP_rb
, & localB -> cxrxefy4h4 [ 0 ] ) ; } Propulsor ( & ( localDW -> eub1qolwz2 .
rtm ) , & localB -> cxrxefy4h4 [ 0 ] , & localB -> dbeduryfjp , & ( localDW
-> eub1qolwz2 . rtb ) , & ( localDW -> eub1qolwz2 . rtdw ) , & ( localX ->
mmg2yp1iy4 ) , & ( localXdis -> mmg2yp1iy4 ) ) ; Propulsor ( & ( localDW ->
pcqf20gb1l . rtm ) , & localB -> cxrxefy4h4 [ 1 ] , & localB -> f1tn41t135 ,
& ( localDW -> pcqf20gb1l . rtb ) , & ( localDW -> pcqf20gb1l . rtdw ) , & (
localX -> h0t3cvyntq ) , & ( localXdis -> h0t3cvyntq ) ) ; Propulsor ( & (
localDW -> mxn3uxi1fu . rtm ) , & localB -> cxrxefy4h4 [ 10 ] , & localB ->
mk5ybbgoqb , & ( localDW -> mxn3uxi1fu . rtb ) , & ( localDW -> mxn3uxi1fu .
rtdw ) , & ( localX -> h0kec2q1y3 ) , & ( localXdis -> h0kec2q1y3 ) ) ;
Propulsor ( & ( localDW -> gh5n4g4wxf . rtm ) , & localB -> cxrxefy4h4 [ 11 ]
, & localB -> mdpzggkogt , & ( localDW -> gh5n4g4wxf . rtb ) , & ( localDW ->
gh5n4g4wxf . rtdw ) , & ( localX -> lrqazd5dsu ) , & ( localXdis ->
lrqazd5dsu ) ) ; Propulsor ( & ( localDW -> hdxzedgkcz . rtm ) , & localB ->
cxrxefy4h4 [ 2 ] , & localB -> ka1r3fvslj , & ( localDW -> hdxzedgkcz . rtb )
, & ( localDW -> hdxzedgkcz . rtdw ) , & ( localX -> ovtwzec3og ) , & (
localXdis -> ovtwzec3og ) ) ; Propulsor ( & ( localDW -> iebjxiwown . rtm ) ,
& localB -> cxrxefy4h4 [ 3 ] , & localB -> c2ez140uf3 , & ( localDW ->
iebjxiwown . rtb ) , & ( localDW -> iebjxiwown . rtdw ) , & ( localX ->
pq2iag4suc ) , & ( localXdis -> pq2iag4suc ) ) ; Propulsor ( & ( localDW ->
afv4ppr3ob . rtm ) , & localB -> cxrxefy4h4 [ 4 ] , & localB -> na2fg0iq0m ,
& ( localDW -> afv4ppr3ob . rtb ) , & ( localDW -> afv4ppr3ob . rtdw ) , & (
localX -> iaspcs5daw ) , & ( localXdis -> iaspcs5daw ) ) ; Propulsor ( & (
localDW -> d5nw4rpqoc . rtm ) , & localB -> cxrxefy4h4 [ 5 ] , & localB ->
e3dmxd0kie , & ( localDW -> d5nw4rpqoc . rtb ) , & ( localDW -> d5nw4rpqoc .
rtdw ) , & ( localX -> gmh5x22olk ) , & ( localXdis -> gmh5x22olk ) ) ;
Propulsor ( & ( localDW -> kn2nhzkemd . rtm ) , & localB -> cxrxefy4h4 [ 6 ]
, & localB -> ohu1inok3x , & ( localDW -> kn2nhzkemd . rtb ) , & ( localDW ->
kn2nhzkemd . rtdw ) , & ( localX -> g5usklbpz2 ) , & ( localXdis ->
g5usklbpz2 ) ) ; Propulsor ( & ( localDW -> owzuuw44dh . rtm ) , & localB ->
cxrxefy4h4 [ 7 ] , & localB -> fltbw55c3z , & ( localDW -> owzuuw44dh . rtb )
, & ( localDW -> owzuuw44dh . rtdw ) , & ( localX -> fgl4x4jkar ) , & (
localXdis -> fgl4x4jkar ) ) ; Propulsor ( & ( localDW -> jxy3rr15ed . rtm ) ,
& localB -> cxrxefy4h4 [ 8 ] , & localB -> f0tpo4it2l , & ( localDW ->
jxy3rr15ed . rtb ) , & ( localDW -> jxy3rr15ed . rtdw ) , & ( localX ->
dfaeutoo5m ) , & ( localXdis -> dfaeutoo5m ) ) ; Propulsor ( & ( localDW ->
dryzhhsiwr . rtm ) , & localB -> cxrxefy4h4 [ 9 ] , & localB -> hd2ep4e31p ,
& ( localDW -> dryzhhsiwr . rtb ) , & ( localDW -> dryzhhsiwr . rtdw ) , & (
localX -> f0oqile1rb ) , & ( localXdis -> f0oqile1rb ) ) ; if (
rtmIsMajorTimeStep ( pjzki5njc0 ) ) { memcpy ( & localB -> ddz1zumgkg [ 0 ] ,
& localDW -> e513volrap [ 0 ] , 12U * sizeof ( real_T ) ) ; } pdvdwlivla [ 0
] = ( uint8_T ) ( localB -> dbeduryfjp > localB -> ddz1zumgkg [ 0 ] ) ;
pdvdwlivla [ 1 ] = ( uint8_T ) ( localB -> f1tn41t135 > localB -> ddz1zumgkg
[ 1 ] ) ; pdvdwlivla [ 2 ] = ( uint8_T ) ( localB -> ka1r3fvslj > localB ->
ddz1zumgkg [ 2 ] ) ; pdvdwlivla [ 3 ] = ( uint8_T ) ( localB -> c2ez140uf3 >
localB -> ddz1zumgkg [ 3 ] ) ; pdvdwlivla [ 4 ] = ( uint8_T ) ( localB ->
na2fg0iq0m > localB -> ddz1zumgkg [ 4 ] ) ; pdvdwlivla [ 5 ] = ( uint8_T ) (
localB -> e3dmxd0kie > localB -> ddz1zumgkg [ 5 ] ) ; pdvdwlivla [ 6 ] = (
uint8_T ) ( localB -> ohu1inok3x > localB -> ddz1zumgkg [ 6 ] ) ; pdvdwlivla
[ 7 ] = ( uint8_T ) ( localB -> fltbw55c3z > localB -> ddz1zumgkg [ 7 ] ) ;
pdvdwlivla [ 8 ] = ( uint8_T ) ( localB -> f0tpo4it2l > localB -> ddz1zumgkg
[ 8 ] ) ; pdvdwlivla [ 9 ] = ( uint8_T ) ( localB -> hd2ep4e31p > localB ->
ddz1zumgkg [ 9 ] ) ; pdvdwlivla [ 10 ] = ( uint8_T ) ( localB -> mk5ybbgoqb >
localB -> ddz1zumgkg [ 10 ] ) ; pdvdwlivla [ 11 ] = ( uint8_T ) ( localB ->
mdpzggkogt > localB -> ddz1zumgkg [ 11 ] ) ; { if ( localDW -> dfw2sbes1n .
AQHandles && ssGetLogOutput ( pjzki5njc0 -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> dfw2sbes1n . AQHandles , rtmGetTaskTime ( pjzki5njc0 , 0 ) , (
char * ) & pdvdwlivla [ 0 ] + 0 ) ; } } o2q3ti05ba [ 0 ] = ( ( localB ->
dbeduryfjp + localB -> f1tn41t135 ) - localB -> ohu1inok3x ) - localB ->
fltbw55c3z ; o2q3ti05ba [ 1 ] = ( ( - localB -> ka1r3fvslj - localB ->
c2ez140uf3 ) + localB -> f0tpo4it2l ) + localB -> hd2ep4e31p ; o2q3ti05ba [ 2
] = ( ( - localB -> na2fg0iq0m - localB -> e3dmxd0kie ) + localB ->
mk5ybbgoqb ) + localB -> mdpzggkogt ; a0gjm3jsl4 [ 0 ] = ( ( localB ->
na2fg0iq0m * rtP_rb - localB -> e3dmxd0kie * rtP_rb ) - localB -> mk5ybbgoqb
* rtP_rb ) + localB -> mdpzggkogt * rtP_rb ; a0gjm3jsl4 [ 1 ] = ( ( - localB
-> dbeduryfjp * rtP_rb + localB -> f1tn41t135 * rtP_rb ) + localB ->
ohu1inok3x * rtP_rb ) - localB -> fltbw55c3z * rtP_rb ; a0gjm3jsl4 [ 2 ] = (
( - localB -> ka1r3fvslj * rtP_rb + localB -> c2ez140uf3 * rtP_rb ) + localB
-> f0tpo4it2l * rtP_rb ) - localB -> hd2ep4e31p * rtP_rb ; } void dhcqxhq1zv
( jxg1wrv0wn * const pjzki5njc0 , nah1kidpij * localB , kqdghramcw * localDW
) { inmzgbaou4 ( & ( localDW -> eub1qolwz2 . rtm ) , & ( localDW ->
eub1qolwz2 . rtb ) , & ( localDW -> eub1qolwz2 . rtdw ) ) ; inmzgbaou4 ( & (
localDW -> pcqf20gb1l . rtm ) , & ( localDW -> pcqf20gb1l . rtb ) , & (
localDW -> pcqf20gb1l . rtdw ) ) ; inmzgbaou4 ( & ( localDW -> mxn3uxi1fu .
rtm ) , & ( localDW -> mxn3uxi1fu . rtb ) , & ( localDW -> mxn3uxi1fu . rtdw
) ) ; inmzgbaou4 ( & ( localDW -> gh5n4g4wxf . rtm ) , & ( localDW ->
gh5n4g4wxf . rtb ) , & ( localDW -> gh5n4g4wxf . rtdw ) ) ; inmzgbaou4 ( & (
localDW -> hdxzedgkcz . rtm ) , & ( localDW -> hdxzedgkcz . rtb ) , & (
localDW -> hdxzedgkcz . rtdw ) ) ; inmzgbaou4 ( & ( localDW -> iebjxiwown .
rtm ) , & ( localDW -> iebjxiwown . rtb ) , & ( localDW -> iebjxiwown . rtdw
) ) ; inmzgbaou4 ( & ( localDW -> afv4ppr3ob . rtm ) , & ( localDW ->
afv4ppr3ob . rtb ) , & ( localDW -> afv4ppr3ob . rtdw ) ) ; inmzgbaou4 ( & (
localDW -> d5nw4rpqoc . rtm ) , & ( localDW -> d5nw4rpqoc . rtb ) , & (
localDW -> d5nw4rpqoc . rtdw ) ) ; inmzgbaou4 ( & ( localDW -> kn2nhzkemd .
rtm ) , & ( localDW -> kn2nhzkemd . rtb ) , & ( localDW -> kn2nhzkemd . rtdw
) ) ; inmzgbaou4 ( & ( localDW -> owzuuw44dh . rtm ) , & ( localDW ->
owzuuw44dh . rtb ) , & ( localDW -> owzuuw44dh . rtdw ) ) ; inmzgbaou4 ( & (
localDW -> jxy3rr15ed . rtm ) , & ( localDW -> jxy3rr15ed . rtb ) , & (
localDW -> jxy3rr15ed . rtdw ) ) ; inmzgbaou4 ( & ( localDW -> dryzhhsiwr .
rtm ) , & ( localDW -> dryzhhsiwr . rtb ) , & ( localDW -> dryzhhsiwr . rtdw
) ) ; if ( rtmIsMajorTimeStep ( pjzki5njc0 ) ) { localDW -> e513volrap [ 0 ]
= localB -> dbeduryfjp ; localDW -> e513volrap [ 1 ] = localB -> f1tn41t135 ;
localDW -> e513volrap [ 2 ] = localB -> ka1r3fvslj ; localDW -> e513volrap [
3 ] = localB -> c2ez140uf3 ; localDW -> e513volrap [ 4 ] = localB ->
na2fg0iq0m ; localDW -> e513volrap [ 5 ] = localB -> e3dmxd0kie ; localDW ->
e513volrap [ 6 ] = localB -> ohu1inok3x ; localDW -> e513volrap [ 7 ] =
localB -> fltbw55c3z ; localDW -> e513volrap [ 8 ] = localB -> f0tpo4it2l ;
localDW -> e513volrap [ 9 ] = localB -> hd2ep4e31p ; localDW -> e513volrap [
10 ] = localB -> mk5ybbgoqb ; localDW -> e513volrap [ 11 ] = localB ->
mdpzggkogt ; } } void gk3v4rqjtl ( kqdghramcw * localDW , d3ipjt54fk *
localXdot ) { fxb2slckzk ( & ( localDW -> eub1qolwz2 . rtb ) , & ( localDW ->
eub1qolwz2 . rtdw ) , & ( localXdot -> mmg2yp1iy4 ) ) ; fxb2slckzk ( & (
localDW -> pcqf20gb1l . rtb ) , & ( localDW -> pcqf20gb1l . rtdw ) , & (
localXdot -> h0t3cvyntq ) ) ; fxb2slckzk ( & ( localDW -> mxn3uxi1fu . rtb )
, & ( localDW -> mxn3uxi1fu . rtdw ) , & ( localXdot -> h0kec2q1y3 ) ) ;
fxb2slckzk ( & ( localDW -> gh5n4g4wxf . rtb ) , & ( localDW -> gh5n4g4wxf .
rtdw ) , & ( localXdot -> lrqazd5dsu ) ) ; fxb2slckzk ( & ( localDW ->
hdxzedgkcz . rtb ) , & ( localDW -> hdxzedgkcz . rtdw ) , & ( localXdot ->
ovtwzec3og ) ) ; fxb2slckzk ( & ( localDW -> iebjxiwown . rtb ) , & ( localDW
-> iebjxiwown . rtdw ) , & ( localXdot -> pq2iag4suc ) ) ; fxb2slckzk ( & (
localDW -> afv4ppr3ob . rtb ) , & ( localDW -> afv4ppr3ob . rtdw ) , & (
localXdot -> iaspcs5daw ) ) ; fxb2slckzk ( & ( localDW -> d5nw4rpqoc . rtb )
, & ( localDW -> d5nw4rpqoc . rtdw ) , & ( localXdot -> gmh5x22olk ) ) ;
fxb2slckzk ( & ( localDW -> kn2nhzkemd . rtb ) , & ( localDW -> kn2nhzkemd .
rtdw ) , & ( localXdot -> g5usklbpz2 ) ) ; fxb2slckzk ( & ( localDW ->
owzuuw44dh . rtb ) , & ( localDW -> owzuuw44dh . rtdw ) , & ( localXdot ->
fgl4x4jkar ) ) ; fxb2slckzk ( & ( localDW -> jxy3rr15ed . rtb ) , & ( localDW
-> jxy3rr15ed . rtdw ) , & ( localXdot -> dfaeutoo5m ) ) ; fxb2slckzk ( & (
localDW -> dryzhhsiwr . rtb ) , & ( localDW -> dryzhhsiwr . rtdw ) , & (
localXdot -> f0oqile1rb ) ) ; } void g5ctfglpi4 ( jxg1wrv0wn * const
pjzki5njc0 , kqdghramcw * localDW ) { if ( ( ssGetSimMode ( pjzki5njc0 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( pjzki5njc0 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> dfw2sbes1n . AQHandles ) { sdiTerminateStreaming ( & localDW ->
dfw2sbes1n . AQHandles ) ; } } } void co1sydaxno ( kqdghramcw * localDW ,
jxg1wrv0wn * const pjzki5njc0 ) { hss3zorcta ( & ( localDW -> nwr4civd04 .
rtm ) ) ; bgcteftzsf ( & ( localDW -> eub1qolwz2 . rtm ) ) ; bgcteftzsf ( & (
localDW -> pcqf20gb1l . rtm ) ) ; bgcteftzsf ( & ( localDW -> mxn3uxi1fu .
rtm ) ) ; bgcteftzsf ( & ( localDW -> gh5n4g4wxf . rtm ) ) ; bgcteftzsf ( & (
localDW -> hdxzedgkcz . rtm ) ) ; bgcteftzsf ( & ( localDW -> iebjxiwown .
rtm ) ) ; bgcteftzsf ( & ( localDW -> afv4ppr3ob . rtm ) ) ; bgcteftzsf ( & (
localDW -> d5nw4rpqoc . rtm ) ) ; bgcteftzsf ( & ( localDW -> kn2nhzkemd .
rtm ) ) ; bgcteftzsf ( & ( localDW -> owzuuw44dh . rtm ) ) ; bgcteftzsf ( & (
localDW -> jxy3rr15ed . rtm ) ) ; bgcteftzsf ( & ( localDW -> dryzhhsiwr .
rtm ) ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent (
pjzki5njc0 -> _mdlRefSfcnS , "AtuadorNaoLinear" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void dljor4p2fn (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , jxg1wrv0wn *
const pjzki5njc0 , nah1kidpij * localB , kqdghramcw * localDW , j5cadauj3p *
localX , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { ssNonContDerivSigFeedingOutports *
mr_Propulsor_1_0_0nonContOutputArray [ 1 ] = { ( NULL ) } ;
ssNonContDerivSigFeedingOutports mr_Propulsor_1_0_0nonContDerivSig0 [ 1 ] ;
ssNonContDerivSigFeedingOutports * mr_Propulsor_1_1_0nonContOutputArray [ 1 ]
= { ( NULL ) } ; ssNonContDerivSigFeedingOutports
mr_Propulsor_1_1_0nonContDerivSig0 [ 1 ] ; ssNonContDerivSigFeedingOutports *
mr_Propulsor_1_2_0nonContOutputArray [ 1 ] = { ( NULL ) } ;
ssNonContDerivSigFeedingOutports mr_Propulsor_1_2_0nonContDerivSig0 [ 1 ] ;
ssNonContDerivSigFeedingOutports * mr_Propulsor_1_3_0nonContOutputArray [ 1 ]
= { ( NULL ) } ; ssNonContDerivSigFeedingOutports
mr_Propulsor_1_3_0nonContDerivSig0 [ 1 ] ; ssNonContDerivSigFeedingOutports *
mr_Propulsor_1_4_0nonContOutputArray [ 1 ] = { ( NULL ) } ;
ssNonContDerivSigFeedingOutports mr_Propulsor_1_4_0nonContDerivSig0 [ 1 ] ;
ssNonContDerivSigFeedingOutports * mr_Propulsor_1_5_0nonContOutputArray [ 1 ]
= { ( NULL ) } ; ssNonContDerivSigFeedingOutports
mr_Propulsor_1_5_0nonContDerivSig0 [ 1 ] ; ssNonContDerivSigFeedingOutports *
mr_Propulsor_1_6_0nonContOutputArray [ 1 ] = { ( NULL ) } ;
ssNonContDerivSigFeedingOutports mr_Propulsor_1_6_0nonContDerivSig0 [ 1 ] ;
ssNonContDerivSigFeedingOutports * mr_Propulsor_1_7_0nonContOutputArray [ 1 ]
= { ( NULL ) } ; ssNonContDerivSigFeedingOutports
mr_Propulsor_1_7_0nonContDerivSig0 [ 1 ] ; ssNonContDerivSigFeedingOutports *
mr_Propulsor_1_8_0nonContOutputArray [ 1 ] = { ( NULL ) } ;
ssNonContDerivSigFeedingOutports mr_Propulsor_1_8_0nonContDerivSig0 [ 1 ] ;
ssNonContDerivSigFeedingOutports * mr_Propulsor_1_9_0nonContOutputArray [ 1 ]
= { ( NULL ) } ; ssNonContDerivSigFeedingOutports
mr_Propulsor_1_9_0nonContDerivSig0 [ 1 ] ; ssNonContDerivSigFeedingOutports *
mr_Propulsor_1_10_0nonContOutputArray [ 1 ] = { ( NULL ) } ;
ssNonContDerivSigFeedingOutports mr_Propulsor_1_10_0nonContDerivSig0 [ 1 ] ;
ssNonContDerivSigFeedingOutports * mr_Propulsor_1_11_0nonContOutputArray [ 1
] = { ( NULL ) } ; ssNonContDerivSigFeedingOutports
mr_Propulsor_1_11_0nonContDerivSig0 [ 1 ] ;
mr_Propulsor_1_0_0nonContOutputArray [ 0 ] =
mr_Propulsor_1_0_0nonContDerivSig0 ; mr_Propulsor_1_1_0nonContOutputArray [ 0
] = mr_Propulsor_1_1_0nonContDerivSig0 ; mr_Propulsor_1_2_0nonContOutputArray
[ 0 ] = mr_Propulsor_1_2_0nonContDerivSig0 ;
mr_Propulsor_1_3_0nonContOutputArray [ 0 ] =
mr_Propulsor_1_3_0nonContDerivSig0 ; mr_Propulsor_1_4_0nonContOutputArray [ 0
] = mr_Propulsor_1_4_0nonContDerivSig0 ; mr_Propulsor_1_5_0nonContOutputArray
[ 0 ] = mr_Propulsor_1_5_0nonContDerivSig0 ;
mr_Propulsor_1_6_0nonContOutputArray [ 0 ] =
mr_Propulsor_1_6_0nonContDerivSig0 ; mr_Propulsor_1_7_0nonContOutputArray [ 0
] = mr_Propulsor_1_7_0nonContDerivSig0 ; mr_Propulsor_1_8_0nonContOutputArray
[ 0 ] = mr_Propulsor_1_8_0nonContDerivSig0 ;
mr_Propulsor_1_9_0nonContOutputArray [ 0 ] =
mr_Propulsor_1_9_0nonContDerivSig0 ; mr_Propulsor_1_10_0nonContOutputArray [
0 ] = mr_Propulsor_1_10_0nonContDerivSig0 ;
mr_Propulsor_1_11_0nonContOutputArray [ 0 ] =
mr_Propulsor_1_11_0nonContDerivSig0 ; ( void ) memset ( ( void * ) pjzki5njc0
, 0 , sizeof ( jxg1wrv0wn ) ) ; pjzki5njc0 -> Timing . mdlref_GlobalTID [ 0 ]
= mdlref_TID0 ; pjzki5njc0 -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ;
pjzki5njc0 -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( pjzki5njc0 ->
_mdlRefSfcnS , "AtuadorNaoLinear" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT"
) ; } { int32_T i ; for ( i = 0 ; i < 12 ; i ++ ) { localB -> cxrxefy4h4 [ i
] = 0.0 ; } for ( i = 0 ; i < 12 ; i ++ ) { localB -> ddz1zumgkg [ i ] = 0.0
; } localB -> dbeduryfjp = 0.0 ; localB -> f1tn41t135 = 0.0 ; localB ->
mk5ybbgoqb = 0.0 ; localB -> mdpzggkogt = 0.0 ; localB -> ka1r3fvslj = 0.0 ;
localB -> c2ez140uf3 = 0.0 ; localB -> na2fg0iq0m = 0.0 ; localB ->
e3dmxd0kie = 0.0 ; localB -> ohu1inok3x = 0.0 ; localB -> fltbw55c3z = 0.0 ;
localB -> f0tpo4it2l = 0.0 ; localB -> hd2ep4e31p = 0.0 ; } ( void ) memset (
( void * ) localDW , 0 , sizeof ( kqdghramcw ) ) ; { int32_T i ; for ( i = 0
; i < 12 ; i ++ ) { localDW -> e513volrap [ i ] = 0.0 ; } }
AtuadorNaoLinear_InitializeDataMapInfo ( pjzki5njc0 , localDW , sysRanPtr ,
contextTid ) ; gf4m412xvp ( _mdlRefSfcnS ,
mr_Propulsor_1_0_0nonContOutputArray , mdlref_TID0 , mdlref_TID1 , & (
localDW -> eub1qolwz2 . rtm ) , & ( localDW -> eub1qolwz2 . rtb ) , & (
localDW -> eub1qolwz2 . rtdw ) , & ( localX -> mmg2yp1iy4 ) , pjzki5njc0 ->
DataMapInfo . systemRan [ 0 ] , pjzki5njc0 -> DataMapInfo . systemTid [ 0 ] ,
& ( pjzki5njc0 -> DataMapInfo . mmi ) , "AtuadorNaoLinear/PWM/Model" , 0 , 0
) ; gf4m412xvp ( _mdlRefSfcnS , mr_Propulsor_1_1_0nonContOutputArray ,
mdlref_TID0 , mdlref_TID1 , & ( localDW -> pcqf20gb1l . rtm ) , & ( localDW
-> pcqf20gb1l . rtb ) , & ( localDW -> pcqf20gb1l . rtdw ) , & ( localX ->
h0t3cvyntq ) , pjzki5njc0 -> DataMapInfo . systemRan [ 0 ] , pjzki5njc0 ->
DataMapInfo . systemTid [ 0 ] , & ( pjzki5njc0 -> DataMapInfo . mmi ) ,
"AtuadorNaoLinear/PWM/Model1" , 1 , 1 ) ; gf4m412xvp ( _mdlRefSfcnS ,
mr_Propulsor_1_2_0nonContOutputArray , mdlref_TID0 , mdlref_TID1 , & (
localDW -> mxn3uxi1fu . rtm ) , & ( localDW -> mxn3uxi1fu . rtb ) , & (
localDW -> mxn3uxi1fu . rtdw ) , & ( localX -> h0kec2q1y3 ) , pjzki5njc0 ->
DataMapInfo . systemRan [ 0 ] , pjzki5njc0 -> DataMapInfo . systemTid [ 0 ] ,
& ( pjzki5njc0 -> DataMapInfo . mmi ) , "AtuadorNaoLinear/PWM/Model10" , 2 ,
2 ) ; gf4m412xvp ( _mdlRefSfcnS , mr_Propulsor_1_3_0nonContOutputArray ,
mdlref_TID0 , mdlref_TID1 , & ( localDW -> gh5n4g4wxf . rtm ) , & ( localDW
-> gh5n4g4wxf . rtb ) , & ( localDW -> gh5n4g4wxf . rtdw ) , & ( localX ->
lrqazd5dsu ) , pjzki5njc0 -> DataMapInfo . systemRan [ 0 ] , pjzki5njc0 ->
DataMapInfo . systemTid [ 0 ] , & ( pjzki5njc0 -> DataMapInfo . mmi ) ,
"AtuadorNaoLinear/PWM/Model11" , 3 , 3 ) ; gf4m412xvp ( _mdlRefSfcnS ,
mr_Propulsor_1_4_0nonContOutputArray , mdlref_TID0 , mdlref_TID1 , & (
localDW -> hdxzedgkcz . rtm ) , & ( localDW -> hdxzedgkcz . rtb ) , & (
localDW -> hdxzedgkcz . rtdw ) , & ( localX -> ovtwzec3og ) , pjzki5njc0 ->
DataMapInfo . systemRan [ 0 ] , pjzki5njc0 -> DataMapInfo . systemTid [ 0 ] ,
& ( pjzki5njc0 -> DataMapInfo . mmi ) , "AtuadorNaoLinear/PWM/Model2" , 4 , 4
) ; gf4m412xvp ( _mdlRefSfcnS , mr_Propulsor_1_5_0nonContOutputArray ,
mdlref_TID0 , mdlref_TID1 , & ( localDW -> iebjxiwown . rtm ) , & ( localDW
-> iebjxiwown . rtb ) , & ( localDW -> iebjxiwown . rtdw ) , & ( localX ->
pq2iag4suc ) , pjzki5njc0 -> DataMapInfo . systemRan [ 0 ] , pjzki5njc0 ->
DataMapInfo . systemTid [ 0 ] , & ( pjzki5njc0 -> DataMapInfo . mmi ) ,
"AtuadorNaoLinear/PWM/Model3" , 5 , 5 ) ; gf4m412xvp ( _mdlRefSfcnS ,
mr_Propulsor_1_6_0nonContOutputArray , mdlref_TID0 , mdlref_TID1 , & (
localDW -> afv4ppr3ob . rtm ) , & ( localDW -> afv4ppr3ob . rtb ) , & (
localDW -> afv4ppr3ob . rtdw ) , & ( localX -> iaspcs5daw ) , pjzki5njc0 ->
DataMapInfo . systemRan [ 0 ] , pjzki5njc0 -> DataMapInfo . systemTid [ 0 ] ,
& ( pjzki5njc0 -> DataMapInfo . mmi ) , "AtuadorNaoLinear/PWM/Model4" , 6 , 6
) ; gf4m412xvp ( _mdlRefSfcnS , mr_Propulsor_1_7_0nonContOutputArray ,
mdlref_TID0 , mdlref_TID1 , & ( localDW -> d5nw4rpqoc . rtm ) , & ( localDW
-> d5nw4rpqoc . rtb ) , & ( localDW -> d5nw4rpqoc . rtdw ) , & ( localX ->
gmh5x22olk ) , pjzki5njc0 -> DataMapInfo . systemRan [ 0 ] , pjzki5njc0 ->
DataMapInfo . systemTid [ 0 ] , & ( pjzki5njc0 -> DataMapInfo . mmi ) ,
"AtuadorNaoLinear/PWM/Model5" , 7 , 7 ) ; gf4m412xvp ( _mdlRefSfcnS ,
mr_Propulsor_1_8_0nonContOutputArray , mdlref_TID0 , mdlref_TID1 , & (
localDW -> kn2nhzkemd . rtm ) , & ( localDW -> kn2nhzkemd . rtb ) , & (
localDW -> kn2nhzkemd . rtdw ) , & ( localX -> g5usklbpz2 ) , pjzki5njc0 ->
DataMapInfo . systemRan [ 0 ] , pjzki5njc0 -> DataMapInfo . systemTid [ 0 ] ,
& ( pjzki5njc0 -> DataMapInfo . mmi ) , "AtuadorNaoLinear/PWM/Model6" , 8 , 8
) ; gf4m412xvp ( _mdlRefSfcnS , mr_Propulsor_1_9_0nonContOutputArray ,
mdlref_TID0 , mdlref_TID1 , & ( localDW -> owzuuw44dh . rtm ) , & ( localDW
-> owzuuw44dh . rtb ) , & ( localDW -> owzuuw44dh . rtdw ) , & ( localX ->
fgl4x4jkar ) , pjzki5njc0 -> DataMapInfo . systemRan [ 0 ] , pjzki5njc0 ->
DataMapInfo . systemTid [ 0 ] , & ( pjzki5njc0 -> DataMapInfo . mmi ) ,
"AtuadorNaoLinear/PWM/Model7" , 9 , 9 ) ; gf4m412xvp ( _mdlRefSfcnS ,
mr_Propulsor_1_10_0nonContOutputArray , mdlref_TID0 , mdlref_TID1 , & (
localDW -> jxy3rr15ed . rtm ) , & ( localDW -> jxy3rr15ed . rtb ) , & (
localDW -> jxy3rr15ed . rtdw ) , & ( localX -> dfaeutoo5m ) , pjzki5njc0 ->
DataMapInfo . systemRan [ 0 ] , pjzki5njc0 -> DataMapInfo . systemTid [ 0 ] ,
& ( pjzki5njc0 -> DataMapInfo . mmi ) , "AtuadorNaoLinear/PWM/Model8" , 10 ,
10 ) ; gf4m412xvp ( _mdlRefSfcnS , mr_Propulsor_1_11_0nonContOutputArray ,
mdlref_TID0 , mdlref_TID1 , & ( localDW -> dryzhhsiwr . rtm ) , & ( localDW
-> dryzhhsiwr . rtb ) , & ( localDW -> dryzhhsiwr . rtdw ) , & ( localX ->
f0oqile1rb ) , pjzki5njc0 -> DataMapInfo . systemRan [ 0 ] , pjzki5njc0 ->
DataMapInfo . systemTid [ 0 ] , & ( pjzki5njc0 -> DataMapInfo . mmi ) ,
"AtuadorNaoLinear/PWM/Model9" , 11 , 11 ) ; bx1fqdjqke ( _mdlRefSfcnS ,
mdlref_TID1 , & ( localDW -> nwr4civd04 . rtm ) , pjzki5njc0 -> DataMapInfo .
systemRan [ 0 ] , pjzki5njc0 -> DataMapInfo . systemTid [ 0 ] , & (
pjzki5njc0 -> DataMapInfo . mmi ) , "AtuadorNaoLinear/TempoAcioProp" , 12 , -
1 ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( pjzki5njc0 ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( pjzki5njc0 -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( pjzki5njc0 ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes = 12 * sizeof (
real_T ) ; mr_nonContOutputArray [ 0 ] [ 0 ] . currVal = ( char_T * ) &
localB -> cxrxefy4h4 [ 0 ] ; mr_nonContOutputArray [ 0 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 1 ] . sizeInBytes =
mr_Propulsor_1_11_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 0 ] [ 1 ] . currVal =
mr_Propulsor_1_11_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 0 ] [ 1 ] . next = & ( mr_nonContOutputArray [ 0 ] [
2 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 2 ] . sizeInBytes =
mr_Propulsor_1_10_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 0 ] [ 2 ] . currVal =
mr_Propulsor_1_10_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 0 ] [ 2 ] . next = & ( mr_nonContOutputArray [ 0 ] [
3 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 3 ] . sizeInBytes =
mr_Propulsor_1_9_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 0 ] [ 3 ] . currVal =
mr_Propulsor_1_9_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 0 ] [ 3 ] . next = & ( mr_nonContOutputArray [ 0 ] [
4 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 4 ] . sizeInBytes =
mr_Propulsor_1_8_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 0 ] [ 4 ] . currVal =
mr_Propulsor_1_8_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 0 ] [ 4 ] . next = & ( mr_nonContOutputArray [ 0 ] [
5 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 5 ] . sizeInBytes =
mr_Propulsor_1_7_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 0 ] [ 5 ] . currVal =
mr_Propulsor_1_7_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 0 ] [ 5 ] . next = & ( mr_nonContOutputArray [ 0 ] [
6 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 6 ] . sizeInBytes =
mr_Propulsor_1_6_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 0 ] [ 6 ] . currVal =
mr_Propulsor_1_6_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 0 ] [ 6 ] . next = & ( mr_nonContOutputArray [ 0 ] [
7 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 7 ] . sizeInBytes =
mr_Propulsor_1_5_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 0 ] [ 7 ] . currVal =
mr_Propulsor_1_5_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 0 ] [ 7 ] . next = & ( mr_nonContOutputArray [ 0 ] [
8 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 8 ] . sizeInBytes =
mr_Propulsor_1_4_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 0 ] [ 8 ] . currVal =
mr_Propulsor_1_4_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 0 ] [ 8 ] . next = & ( mr_nonContOutputArray [ 0 ] [
9 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 9 ] . sizeInBytes =
mr_Propulsor_1_3_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 0 ] [ 9 ] . currVal =
mr_Propulsor_1_3_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 0 ] [ 9 ] . next = & ( mr_nonContOutputArray [ 0 ] [
10 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 10 ] . sizeInBytes =
mr_Propulsor_1_2_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 0 ] [ 10 ] . currVal =
mr_Propulsor_1_2_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 0 ] [ 10 ] . next = & ( mr_nonContOutputArray [ 0 ] [
11 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 11 ] . sizeInBytes =
mr_Propulsor_1_1_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 0 ] [ 11 ] . currVal =
mr_Propulsor_1_1_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 0 ] [ 11 ] . next = & ( mr_nonContOutputArray [ 0 ] [
12 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 12 ] . sizeInBytes =
mr_Propulsor_1_0_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 0 ] [ 12 ] . currVal =
mr_Propulsor_1_0_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 0 ] [ 12 ] . next = ( NULL ) ; } if (
mr_nonContOutputArray [ 1 ] != ( NULL ) ) { mr_nonContOutputArray [ 1 ] [ 0 ]
. sizeInBytes = 12 * sizeof ( real_T ) ; mr_nonContOutputArray [ 1 ] [ 0 ] .
currVal = ( char_T * ) & localB -> cxrxefy4h4 [ 0 ] ; mr_nonContOutputArray [
1 ] [ 0 ] . next = & ( mr_nonContOutputArray [ 1 ] [ 1 ] ) ; } if (
mr_nonContOutputArray [ 1 ] != ( NULL ) ) { mr_nonContOutputArray [ 1 ] [ 1 ]
. sizeInBytes = mr_Propulsor_1_11_0nonContOutputArray [ 0 ] [ 0 ] .
sizeInBytes ; mr_nonContOutputArray [ 1 ] [ 1 ] . currVal =
mr_Propulsor_1_11_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 1 ] [ 1 ] . next = & ( mr_nonContOutputArray [ 1 ] [
2 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 2 ] . sizeInBytes =
mr_Propulsor_1_10_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 1 ] [ 2 ] . currVal =
mr_Propulsor_1_10_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 1 ] [ 2 ] . next = & ( mr_nonContOutputArray [ 1 ] [
3 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 3 ] . sizeInBytes =
mr_Propulsor_1_9_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 1 ] [ 3 ] . currVal =
mr_Propulsor_1_9_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 1 ] [ 3 ] . next = & ( mr_nonContOutputArray [ 1 ] [
4 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 4 ] . sizeInBytes =
mr_Propulsor_1_8_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 1 ] [ 4 ] . currVal =
mr_Propulsor_1_8_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 1 ] [ 4 ] . next = & ( mr_nonContOutputArray [ 1 ] [
5 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 5 ] . sizeInBytes =
mr_Propulsor_1_7_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 1 ] [ 5 ] . currVal =
mr_Propulsor_1_7_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 1 ] [ 5 ] . next = & ( mr_nonContOutputArray [ 1 ] [
6 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 6 ] . sizeInBytes =
mr_Propulsor_1_6_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 1 ] [ 6 ] . currVal =
mr_Propulsor_1_6_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 1 ] [ 6 ] . next = & ( mr_nonContOutputArray [ 1 ] [
7 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 7 ] . sizeInBytes =
mr_Propulsor_1_5_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 1 ] [ 7 ] . currVal =
mr_Propulsor_1_5_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 1 ] [ 7 ] . next = & ( mr_nonContOutputArray [ 1 ] [
8 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 8 ] . sizeInBytes =
mr_Propulsor_1_4_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 1 ] [ 8 ] . currVal =
mr_Propulsor_1_4_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 1 ] [ 8 ] . next = & ( mr_nonContOutputArray [ 1 ] [
9 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 9 ] . sizeInBytes =
mr_Propulsor_1_3_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 1 ] [ 9 ] . currVal =
mr_Propulsor_1_3_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 1 ] [ 9 ] . next = & ( mr_nonContOutputArray [ 1 ] [
10 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 10 ] . sizeInBytes =
mr_Propulsor_1_2_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 1 ] [ 10 ] . currVal =
mr_Propulsor_1_2_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 1 ] [ 10 ] . next = & ( mr_nonContOutputArray [ 1 ] [
11 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 11 ] . sizeInBytes =
mr_Propulsor_1_1_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 1 ] [ 11 ] . currVal =
mr_Propulsor_1_1_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 1 ] [ 11 ] . next = & ( mr_nonContOutputArray [ 1 ] [
12 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 12 ] . sizeInBytes =
mr_Propulsor_1_0_0nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes ;
mr_nonContOutputArray [ 1 ] [ 12 ] . currVal =
mr_Propulsor_1_0_0nonContOutputArray [ 0 ] [ 0 ] . currVal ;
mr_nonContOutputArray [ 1 ] [ 12 ] . next = ( NULL ) ; } } void
mr_AtuadorNaoLinear_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { mr_Propulsor_MdlInfoRegFcn ( mdlRefSfcnS ,
"Propulsor" , retVal ) ; if ( * retVal == 0 ) return ; * retVal = 0 ;
mr_TempoAcioProp_MdlInfoRegFcn ( mdlRefSfcnS , "TempoAcioProp" , retVal ) ;
if ( * retVal == 0 ) return ; * retVal = 0 ; } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_AtuadorNaoLinear ,
45 ) ; * retVal = 1 ; } static void mr_AtuadorNaoLinear_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_AtuadorNaoLinear_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_AtuadorNaoLinear_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_AtuadorNaoLinear_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_AtuadorNaoLinear_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_AtuadorNaoLinear_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_AtuadorNaoLinear_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_AtuadorNaoLinear_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_AtuadorNaoLinear_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_AtuadorNaoLinear_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_AtuadorNaoLinear_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_AtuadorNaoLinear_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_AtuadorNaoLinear_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_AtuadorNaoLinear_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_AtuadorNaoLinear_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_AtuadorNaoLinear_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_AtuadorNaoLinear_GetDWork ( const
plpfqwi2ris * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_AtuadorNaoLinear_cacheDataAsMxArray ( ssDW
, 0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb )
) ; { static const char_T * rtdwDataFieldNames [ 14 ] = {
"mdlrefDW->rtdw.nwr4civd04" , "mdlrefDW->rtdw.eub1qolwz2" ,
"mdlrefDW->rtdw.pcqf20gb1l" , "mdlrefDW->rtdw.mxn3uxi1fu" ,
"mdlrefDW->rtdw.gh5n4g4wxf" , "mdlrefDW->rtdw.hdxzedgkcz" ,
"mdlrefDW->rtdw.iebjxiwown" , "mdlrefDW->rtdw.afv4ppr3ob" ,
"mdlrefDW->rtdw.d5nw4rpqoc" , "mdlrefDW->rtdw.kn2nhzkemd" ,
"mdlrefDW->rtdw.owzuuw44dh" , "mdlrefDW->rtdw.jxy3rr15ed" ,
"mdlrefDW->rtdw.dryzhhsiwr" , "mdlrefDW->rtdw.e513volrap" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 14 , rtdwDataFieldNames ) ; {
mxArray * varData = mr_TempoAcioProp_GetDWork ( & ( mdlrefDW -> rtdw .
nwr4civd04 ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 , varData ) ; } {
mxArray * varData = mr_Propulsor_GetDWork ( & ( mdlrefDW -> rtdw . eub1qolwz2
) ) ; mxSetFieldByNumber ( rtdwData , 0 , 1 , varData ) ; } { mxArray *
varData = mr_Propulsor_GetDWork ( & ( mdlrefDW -> rtdw . pcqf20gb1l ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 2 , varData ) ; } { mxArray * varData =
mr_Propulsor_GetDWork ( & ( mdlrefDW -> rtdw . mxn3uxi1fu ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 3 , varData ) ; } { mxArray * varData =
mr_Propulsor_GetDWork ( & ( mdlrefDW -> rtdw . gh5n4g4wxf ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 4 , varData ) ; } { mxArray * varData =
mr_Propulsor_GetDWork ( & ( mdlrefDW -> rtdw . hdxzedgkcz ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 5 , varData ) ; } { mxArray * varData =
mr_Propulsor_GetDWork ( & ( mdlrefDW -> rtdw . iebjxiwown ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 6 , varData ) ; } { mxArray * varData =
mr_Propulsor_GetDWork ( & ( mdlrefDW -> rtdw . afv4ppr3ob ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 7 , varData ) ; } { mxArray * varData =
mr_Propulsor_GetDWork ( & ( mdlrefDW -> rtdw . d5nw4rpqoc ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 8 , varData ) ; } { mxArray * varData =
mr_Propulsor_GetDWork ( & ( mdlrefDW -> rtdw . kn2nhzkemd ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 9 , varData ) ; } { mxArray * varData =
mr_Propulsor_GetDWork ( & ( mdlrefDW -> rtdw . owzuuw44dh ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 10 , varData ) ; } { mxArray * varData =
mr_Propulsor_GetDWork ( & ( mdlrefDW -> rtdw . jxy3rr15ed ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 11 , varData ) ; } { mxArray * varData =
mr_Propulsor_GetDWork ( & ( mdlrefDW -> rtdw . dryzhhsiwr ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 12 , varData ) ; }
mr_AtuadorNaoLinear_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * )
& ( mdlrefDW -> rtdw . e513volrap ) , sizeof ( mdlrefDW -> rtdw . e513volrap
) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ;
return ssDW ; } void mr_AtuadorNaoLinear_SetDWork ( plpfqwi2ris * mdlrefDW ,
const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_AtuadorNaoLinear_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb )
, ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_TempoAcioProp_SetDWork ( & (
mdlrefDW -> rtdw . nwr4civd04 ) , mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ;
mr_Propulsor_SetDWork ( & ( mdlrefDW -> rtdw . eub1qolwz2 ) ,
mxGetFieldByNumber ( rtdwData , 0 , 1 ) ) ; mr_Propulsor_SetDWork ( & (
mdlrefDW -> rtdw . pcqf20gb1l ) , mxGetFieldByNumber ( rtdwData , 0 , 2 ) ) ;
mr_Propulsor_SetDWork ( & ( mdlrefDW -> rtdw . mxn3uxi1fu ) ,
mxGetFieldByNumber ( rtdwData , 0 , 3 ) ) ; mr_Propulsor_SetDWork ( & (
mdlrefDW -> rtdw . gh5n4g4wxf ) , mxGetFieldByNumber ( rtdwData , 0 , 4 ) ) ;
mr_Propulsor_SetDWork ( & ( mdlrefDW -> rtdw . hdxzedgkcz ) ,
mxGetFieldByNumber ( rtdwData , 0 , 5 ) ) ; mr_Propulsor_SetDWork ( & (
mdlrefDW -> rtdw . iebjxiwown ) , mxGetFieldByNumber ( rtdwData , 0 , 6 ) ) ;
mr_Propulsor_SetDWork ( & ( mdlrefDW -> rtdw . afv4ppr3ob ) ,
mxGetFieldByNumber ( rtdwData , 0 , 7 ) ) ; mr_Propulsor_SetDWork ( & (
mdlrefDW -> rtdw . d5nw4rpqoc ) , mxGetFieldByNumber ( rtdwData , 0 , 8 ) ) ;
mr_Propulsor_SetDWork ( & ( mdlrefDW -> rtdw . kn2nhzkemd ) ,
mxGetFieldByNumber ( rtdwData , 0 , 9 ) ) ; mr_Propulsor_SetDWork ( & (
mdlrefDW -> rtdw . owzuuw44dh ) , mxGetFieldByNumber ( rtdwData , 0 , 10 ) )
; mr_Propulsor_SetDWork ( & ( mdlrefDW -> rtdw . jxy3rr15ed ) ,
mxGetFieldByNumber ( rtdwData , 0 , 11 ) ) ; mr_Propulsor_SetDWork ( & (
mdlrefDW -> rtdw . dryzhhsiwr ) , mxGetFieldByNumber ( rtdwData , 0 , 12 ) )
; mr_AtuadorNaoLinear_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . e513volrap ) , rtdwData , 0 , 13 , sizeof ( mdlrefDW -> rtdw .
e513volrap ) ) ; } } void mr_AtuadorNaoLinear_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 1885495410U , 2469885106U ,
3153142594U , 2182681898U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"AtuadorNaoLinear" , & chksum [ 0 ] ) ; mr_Propulsor_RegisterSimStateChecksum
( S ) ; mr_TempoAcioProp_RegisterSimStateChecksum ( S ) ; } mxArray *
mr_AtuadorNaoLinear_GetSimStateDisallowedBlocks ( ) { mxArray * data = NULL ;
size_t numChildrenWithDisallowedBlocks = 0 ; size_t numBlocks = 0 ; mxArray *
disallowedBlocksInChild [ 2 ] ; disallowedBlocksInChild [ 0 ] =
mr_Propulsor_GetSimStateDisallowedBlocks ( ) ; disallowedBlocksInChild [ 1 ]
= mr_TempoAcioProp_GetSimStateDisallowedBlocks ( ) ; { size_t i ; for ( i = 0
; i < 2 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i ] ; if ( (
NULL ) != data_i ) { if ( 0 == numChildrenWithDisallowedBlocks ++ ) { data =
data_i ; } numBlocks += mxGetM ( data_i ) ; } } } if (
numChildrenWithDisallowedBlocks > 1 ) { mwIndex subs [ 2 ] , offset ; data =
mxCreateCellMatrix ( numBlocks , 3 ) ; subs [ 0 ] = 0 ; { size_t i ; for ( i
= 0 ; i < 2 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i ] ; if
( ( NULL ) != data_i ) { mwIndex subs_i [ 2 ] , offset_i ; const mwIndex
numRows_i = ( mwIndex ) mxGetM ( data_i ) ; for ( subs_i [ 0 ] = 0 ; subs_i [
0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) { mwIndex j ; for ( j = 0 ; j < 3 ;
++ j ) { mxArray * data_ij ; subs_i [ 1 ] = j ; offset_i =
mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij = mxGetCell ( data_i
, offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ; subs [ 1 ] = j ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; } mxDestroyArray ( data_i ) ; } }
} } return data ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
