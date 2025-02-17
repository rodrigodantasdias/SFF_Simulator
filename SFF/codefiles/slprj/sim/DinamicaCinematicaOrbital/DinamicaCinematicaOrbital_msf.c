#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME DinamicaCinematicaOrbital_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#include "mwstringutil.h"
#define rt_logging_h
#include "DinamicaCinematicaOrbital_types.h"
#include "DinamicaCinematicaOrbital.h"
#include "DinamicaCinematicaOrbital_private.h"
real_T rtP_Cd0 ; real_T rtP_Cd1 ; real_T rtP_J2 ; real_T rtP_L0 ; real_T
rtP_L1 ; real_T rtP_Re ; real_T rtP_a0_ini ; real_T rtP_e0_ini ; real_T
rtP_f0_ini ; real_T rtP_i0_ini ; real_T rtP_m0 ; real_T rtP_m1 ; real_T
rtP_mi ; real_T rtP_ohm0_ini ; real_T rtP_omega0_ini ; real_T rtP_omega_E ;
real_T rtP_pcoRad ; real_T rtP_t_man ; real_T rtP_x0_dot_i ; real_T
rtP_x0_dot_ini ; real_T rtP_x0_i ; real_T rtP_x0_ini ; real_T rtP_y0_dot_i ;
real_T rtP_y0_dot_ini ; real_T rtP_y0_i ; real_T rtP_y0_ini ; real_T
rtP_z0_dot_i ; real_T rtP_z0_dot_ini ; real_T rtP_z0_i ; real_T rtP_z0_ini ;
boolean_T rtP_J2_dist ; boolean_T rtP_drag ; const char *
rt_GetMatSignalLoggingFileName ( void ) { return NULL ; } const char *
rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void *
rt_GetOSigstreamManager ( void ) { return NULL ; } void * rt_slioCatalogue (
void ) { return NULL ; } void * rtwGetPointerFromUniquePtr ( void * uniquePtr
) { return NULL ; } void * CreateDiagnosticAsVoidPtr ( const char * id , int
nargs , ... ) { void * voidPtrDiagnostic = NULL ; va_list args ; va_start (
args , nargs ) ; slmrCreateDiagnostic ( id , nargs , args , &
voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ; } void
rt_ssSet_slErrMsg ( void * S , void * diag ) { SimStruct * simStrcut = (
SimStruct * ) S ; if ( ! _ssIsErrorStatusAslErrMsg ( simStrcut ) ) {
_ssSet_slLocalErrMsg ( simStrcut , diag ) ; } else { _ssDiscardDiagnostic (
simStrcut , diag ) ; } } void rt_ssReportDiagnosticAsWarning ( void * S ,
void * diag ) { _ssReportDiagnosticAsWarning ( ( SimStruct * ) S , diag ) ; }
void rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) {
_ssReportDiagnosticAsInfo ( ( SimStruct * ) S , diag ) ; } const char *
rt_CreateFullPathToTop ( const char * toppath , const char * subpath ) { char
* fullpath = NULL ; slmrCreateFullPathToTop ( toppath , subpath , & fullpath
) ; return fullpath ; } boolean_T slIsRapidAcceleratorSimulating ( void ) {
return false ; } void rt_RAccelReplaceFromFilename ( const char * blockpath ,
char * fileName ) { ( void ) blockpath ; ( void ) fileName ; } void
rt_RAccelReplaceToFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void * slsa_malloc ( size_t s ) {
return malloc ( s ) ; } void slsa_free ( void * ptr ) { free ( ptr ) ; } void
slsaCacheDWorkPointerForSimTargetOP ( void * ss , void * * ptr ) { ( void )
ss ; ( void ) ptr ; } void slsaCacheDWorkDataForSimTargetOP ( void * ss ,
void * ptr , unsigned int sizeInBytes ) { ( void ) ss ; ( void ) ptr ; ( void
) sizeInBytes ; } void slsaSaveRawMemoryForSimTargetOP ( void * ss , const
char * key , void * * ptr , unsigned int sizeInBytes , void * ( *
customOPSaveFcn ) ( void * dworkPtr , unsigned int * sizeInBytes ) , void ( *
customOPRestoreFcn ) ( void * dworkPtr , const void * data , unsigned int
sizeInBytes ) ) { ( void ) ss ; ( void ) key ; ( void ) ptr ; ( void )
sizeInBytes ; ( void ) customOPSaveFcn ; ( void ) customOPRestoreFcn ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) { real_T * GlobalPrm_0 = (
real_T * ) NULL ; real_T * GlobalPrm_1 = ( real_T * ) NULL ; real_T *
GlobalPrm_2 = ( real_T * ) NULL ; real_T * GlobalPrm_3 = ( real_T * ) NULL ;
real_T * GlobalPrm_4 = ( real_T * ) NULL ; real_T * GlobalPrm_5 = ( real_T *
) NULL ; real_T * GlobalPrm_6 = ( real_T * ) NULL ; real_T * GlobalPrm_7 = (
real_T * ) NULL ; real_T * GlobalPrm_8 = ( real_T * ) NULL ; real_T *
GlobalPrm_9 = ( real_T * ) NULL ; real_T * GlobalPrm_10 = ( real_T * ) NULL ;
real_T * GlobalPrm_11 = ( real_T * ) NULL ; real_T * GlobalPrm_12 = ( real_T
* ) NULL ; real_T * GlobalPrm_13 = ( real_T * ) NULL ; real_T * GlobalPrm_14
= ( real_T * ) NULL ; real_T * GlobalPrm_15 = ( real_T * ) NULL ; real_T *
GlobalPrm_16 = ( real_T * ) NULL ; real_T * GlobalPrm_17 = ( real_T * ) NULL
; real_T * GlobalPrm_18 = ( real_T * ) NULL ; real_T * GlobalPrm_19 = (
real_T * ) NULL ; real_T * GlobalPrm_20 = ( real_T * ) NULL ; real_T *
GlobalPrm_21 = ( real_T * ) NULL ; real_T * GlobalPrm_22 = ( real_T * ) NULL
; real_T * GlobalPrm_23 = ( real_T * ) NULL ; real_T * GlobalPrm_24 = (
real_T * ) NULL ; real_T * GlobalPrm_25 = ( real_T * ) NULL ; real_T *
GlobalPrm_26 = ( real_T * ) NULL ; real_T * GlobalPrm_27 = ( real_T * ) NULL
; real_T * GlobalPrm_28 = ( real_T * ) NULL ; real_T * GlobalPrm_29 = (
real_T * ) NULL ; boolean_T * GlobalPrm_30 = ( boolean_T * ) NULL ; boolean_T
* GlobalPrm_31 = ( boolean_T * ) NULL ; if ( ! ssGetModelRefGlobalParamData (
S , 0 , ( void * * ) ( & GlobalPrm_0 ) ) ) return ; if ( GlobalPrm_0 != NULL
) { ( void ) memcpy ( & ( rtP_Cd0 ) , GlobalPrm_0 , sizeof ( real_T ) ) ; }
if ( ! ssGetModelRefGlobalParamData ( S , 1 , ( void * * ) ( & GlobalPrm_1 )
) ) return ; if ( GlobalPrm_1 != NULL ) { ( void ) memcpy ( & ( rtP_Cd1 ) ,
GlobalPrm_1 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S
, 2 , ( void * * ) ( & GlobalPrm_2 ) ) ) return ; if ( GlobalPrm_2 != NULL )
{ ( void ) memcpy ( & ( rtP_J2 ) , GlobalPrm_2 , sizeof ( real_T ) ) ; } if (
! ssGetModelRefGlobalParamData ( S , 3 , ( void * * ) ( & GlobalPrm_3 ) ) )
return ; if ( GlobalPrm_3 != NULL ) { ( void ) memcpy ( & ( rtP_L0 ) ,
GlobalPrm_3 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S
, 4 , ( void * * ) ( & GlobalPrm_4 ) ) ) return ; if ( GlobalPrm_4 != NULL )
{ ( void ) memcpy ( & ( rtP_L1 ) , GlobalPrm_4 , sizeof ( real_T ) ) ; } if (
! ssGetModelRefGlobalParamData ( S , 5 , ( void * * ) ( & GlobalPrm_5 ) ) )
return ; if ( GlobalPrm_5 != NULL ) { ( void ) memcpy ( & ( rtP_Re ) ,
GlobalPrm_5 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S
, 6 , ( void * * ) ( & GlobalPrm_6 ) ) ) return ; if ( GlobalPrm_6 != NULL )
{ ( void ) memcpy ( & ( rtP_a0_ini ) , GlobalPrm_6 , sizeof ( real_T ) ) ; }
if ( ! ssGetModelRefGlobalParamData ( S , 7 , ( void * * ) ( & GlobalPrm_7 )
) ) return ; if ( GlobalPrm_7 != NULL ) { ( void ) memcpy ( & ( rtP_e0_ini )
, GlobalPrm_7 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData (
S , 8 , ( void * * ) ( & GlobalPrm_8 ) ) ) return ; if ( GlobalPrm_8 != NULL
) { ( void ) memcpy ( & ( rtP_f0_ini ) , GlobalPrm_8 , sizeof ( real_T ) ) ;
} if ( ! ssGetModelRefGlobalParamData ( S , 9 , ( void * * ) ( & GlobalPrm_9
) ) ) return ; if ( GlobalPrm_9 != NULL ) { ( void ) memcpy ( & ( rtP_i0_ini
) , GlobalPrm_9 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData
( S , 10 , ( void * * ) ( & GlobalPrm_10 ) ) ) return ; if ( GlobalPrm_10 !=
NULL ) { ( void ) memcpy ( & ( rtP_m0 ) , GlobalPrm_10 , sizeof ( real_T ) )
; } if ( ! ssGetModelRefGlobalParamData ( S , 11 , ( void * * ) ( &
GlobalPrm_11 ) ) ) return ; if ( GlobalPrm_11 != NULL ) { ( void ) memcpy ( &
( rtP_m1 ) , GlobalPrm_11 , sizeof ( real_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 12 , ( void * * ) ( & GlobalPrm_12 ) ) )
return ; if ( GlobalPrm_12 != NULL ) { ( void ) memcpy ( & ( rtP_mi ) ,
GlobalPrm_12 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData (
S , 13 , ( void * * ) ( & GlobalPrm_13 ) ) ) return ; if ( GlobalPrm_13 !=
NULL ) { ( void ) memcpy ( & ( rtP_ohm0_ini ) , GlobalPrm_13 , sizeof (
real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S , 14 , ( void * * ) (
& GlobalPrm_14 ) ) ) return ; if ( GlobalPrm_14 != NULL ) { ( void ) memcpy (
& ( rtP_omega0_ini ) , GlobalPrm_14 , sizeof ( real_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 15 , ( void * * ) ( & GlobalPrm_15 ) ) )
return ; if ( GlobalPrm_15 != NULL ) { ( void ) memcpy ( & ( rtP_omega_E ) ,
GlobalPrm_15 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData (
S , 16 , ( void * * ) ( & GlobalPrm_16 ) ) ) return ; if ( GlobalPrm_16 !=
NULL ) { ( void ) memcpy ( & ( rtP_pcoRad ) , GlobalPrm_16 , sizeof ( real_T
) ) ; } if ( ! ssGetModelRefGlobalParamData ( S , 17 , ( void * * ) ( &
GlobalPrm_17 ) ) ) return ; if ( GlobalPrm_17 != NULL ) { ( void ) memcpy ( &
( rtP_t_man ) , GlobalPrm_17 , sizeof ( real_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 18 , ( void * * ) ( & GlobalPrm_18 ) ) )
return ; if ( GlobalPrm_18 != NULL ) { ( void ) memcpy ( & ( rtP_x0_dot_i ) ,
GlobalPrm_18 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData (
S , 19 , ( void * * ) ( & GlobalPrm_19 ) ) ) return ; if ( GlobalPrm_19 !=
NULL ) { ( void ) memcpy ( & ( rtP_x0_dot_ini ) , GlobalPrm_19 , sizeof (
real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S , 20 , ( void * * ) (
& GlobalPrm_20 ) ) ) return ; if ( GlobalPrm_20 != NULL ) { ( void ) memcpy (
& ( rtP_x0_i ) , GlobalPrm_20 , sizeof ( real_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 21 , ( void * * ) ( & GlobalPrm_21 ) ) )
return ; if ( GlobalPrm_21 != NULL ) { ( void ) memcpy ( & ( rtP_x0_ini ) ,
GlobalPrm_21 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData (
S , 22 , ( void * * ) ( & GlobalPrm_22 ) ) ) return ; if ( GlobalPrm_22 !=
NULL ) { ( void ) memcpy ( & ( rtP_y0_dot_i ) , GlobalPrm_22 , sizeof (
real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S , 23 , ( void * * ) (
& GlobalPrm_23 ) ) ) return ; if ( GlobalPrm_23 != NULL ) { ( void ) memcpy (
& ( rtP_y0_dot_ini ) , GlobalPrm_23 , sizeof ( real_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 24 , ( void * * ) ( & GlobalPrm_24 ) ) )
return ; if ( GlobalPrm_24 != NULL ) { ( void ) memcpy ( & ( rtP_y0_i ) ,
GlobalPrm_24 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData (
S , 25 , ( void * * ) ( & GlobalPrm_25 ) ) ) return ; if ( GlobalPrm_25 !=
NULL ) { ( void ) memcpy ( & ( rtP_y0_ini ) , GlobalPrm_25 , sizeof ( real_T
) ) ; } if ( ! ssGetModelRefGlobalParamData ( S , 26 , ( void * * ) ( &
GlobalPrm_26 ) ) ) return ; if ( GlobalPrm_26 != NULL ) { ( void ) memcpy ( &
( rtP_z0_dot_i ) , GlobalPrm_26 , sizeof ( real_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 27 , ( void * * ) ( & GlobalPrm_27 ) ) )
return ; if ( GlobalPrm_27 != NULL ) { ( void ) memcpy ( & ( rtP_z0_dot_ini )
, GlobalPrm_27 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData
( S , 28 , ( void * * ) ( & GlobalPrm_28 ) ) ) return ; if ( GlobalPrm_28 !=
NULL ) { ( void ) memcpy ( & ( rtP_z0_i ) , GlobalPrm_28 , sizeof ( real_T )
) ; } if ( ! ssGetModelRefGlobalParamData ( S , 29 , ( void * * ) ( &
GlobalPrm_29 ) ) ) return ; if ( GlobalPrm_29 != NULL ) { ( void ) memcpy ( &
( rtP_z0_ini ) , GlobalPrm_29 , sizeof ( real_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 30 , ( void * * ) ( & GlobalPrm_30 ) ) )
return ; if ( GlobalPrm_30 != NULL ) { ( void ) memcpy ( & ( rtP_J2_dist ) ,
GlobalPrm_30 , sizeof ( boolean_T ) ) ; } if ( ! ssGetModelRefGlobalParamData
( S , 31 , ( void * * ) ( & GlobalPrm_31 ) ) ) return ; if ( GlobalPrm_31 !=
NULL ) { ( void ) memcpy ( & ( rtP_drag ) , GlobalPrm_31 , sizeof ( boolean_T
) ) ; } }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { okb1gcgf0a4 * dw = (
okb1gcgf0a4 * ) ssGetDWork ( S , 0 ) ; real_T * o_o_B_26_1 = ( real_T * )
ssGetOutputPortSignal ( S , 0 ) ; real_T * o_o_B_26_2 = ( real_T * )
ssGetOutputPortSignal ( S , 1 ) ; real_T * o_o_B_26_3 = ( real_T * )
ssGetOutputPortSignal ( S , 2 ) ; real_T * o_o_B_26_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_o_B_26_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_o_B_26_6 = ( real_T * )
ssGetOutputPortSignal ( S , 5 ) ; real_T * o_o_o_o_o_B_26_18 = ( real_T * )
ssGetOutputPortSignal ( S , 8 ) ; real_T * o_o_B_26_11 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; luimruxjly * localX = ( luimruxjly * )
ssGetContStates ( S ) ; axbn2ts3ae ( & ( dw -> rtm ) , o_o_B_26_1 ,
o_o_B_26_2 , o_o_B_26_3 , o_o_B_26_4 , o_o_B_26_5 , o_o_B_26_6 ,
o_o_o_o_o_B_26_18 , o_o_B_26_11 , & ( dw -> rtb ) , & ( dw -> rtdw ) , localX
) ; } static void mdlReset ( SimStruct * S ) { okb1gcgf0a4 * dw = (
okb1gcgf0a4 * ) ssGetDWork ( S , 0 ) ; real_T * o_o_o_o_o_B_26_18 = ( real_T
* ) ssGetOutputPortSignal ( S , 8 ) ; luimruxjly * localX = ( luimruxjly * )
ssGetContStates ( S ) ; mtaykns3n2 ( & ( dw -> rtm ) , o_o_o_o_o_B_26_18 , &
( dw -> rtdw ) , localX ) ; } static void mdlPeriodicOutputUpdate ( SimStruct
* S , int_T tid ) { okb1gcgf0a4 * dw = ( okb1gcgf0a4 * ) ssGetDWork ( S , 0 )
; real_T const * i_hgwjjeu3ie = ( real_T * ) ssGetInputPortSignal ( S , 0 ) ;
real_T const * i_opybs254pu = ( real_T * ) ssGetInputPortSignal ( S , 1 ) ;
real_T const * i_m4wvsixkpr = ( real_T * ) ssGetInputPortSignal ( S , 2 ) ;
boolean_T const * i_pw1v5nsia2 = ( boolean_T * ) ssGetInputPortSignal ( S , 3
) ; real_T * o_o_B_26_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ;
real_T * o_o_B_26_2 = ( real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T *
o_o_B_26_3 = ( real_T * ) ssGetOutputPortSignal ( S , 2 ) ; real_T *
o_o_B_26_4 = ( real_T * ) ssGetOutputPortSignal ( S , 3 ) ; real_T *
o_o_B_26_5 = ( real_T * ) ssGetOutputPortSignal ( S , 4 ) ; real_T *
o_o_B_26_6 = ( real_T * ) ssGetOutputPortSignal ( S , 5 ) ; real_T * o_B_26_7
= ( real_T * ) ssGetOutputPortSignal ( S , 6 ) ; real_T * o_B_26_8 = ( real_T
* ) ssGetOutputPortSignal ( S , 7 ) ; real_T * o_o_o_o_o_B_26_18 = ( real_T *
) ssGetOutputPortSignal ( S , 8 ) ; real_T * o_B_26_9 = ( real_T * )
ssGetOutputPortSignal ( S , 9 ) ; real_T * o_B_26_10 = ( real_T * )
ssGetOutputPortSignal ( S , 10 ) ; real_T * o_o_B_26_11 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; real_T * o_B_26_12 = ( real_T * )
ssGetOutputPortSignal ( S , 12 ) ; real_T * o_B_26_13 = ( real_T * )
ssGetOutputPortSignal ( S , 13 ) ; real_T * o_B_26_14 = ( real_T * )
ssGetOutputPortSignal ( S , 14 ) ; real_T * o_B_26_15 = ( real_T * )
ssGetOutputPortSignal ( S , 15 ) ; real_T * o_B_26_16 = ( real_T * )
ssGetOutputPortSignal ( S , 16 ) ; real_T * o_B_26_17 = ( real_T * )
ssGetOutputPortSignal ( S , 17 ) ; luimruxjly * localX = ( luimruxjly * )
ssGetContStates ( S ) ; npno0gt4jm * localXdis = ( npno0gt4jm * )
ssGetContStateDisabled ( S ) ; if ( tid == 0 ) { DinamicaCinematicaOrbital (
& ( dw -> rtm ) , i_hgwjjeu3ie , i_opybs254pu , i_m4wvsixkpr , i_pw1v5nsia2 ,
o_o_B_26_1 , o_o_B_26_2 , o_o_B_26_3 , o_o_B_26_4 , o_o_B_26_5 , o_o_B_26_6 ,
o_B_26_7 , o_B_26_8 , o_o_o_o_o_B_26_18 , o_B_26_9 , o_B_26_10 , o_o_B_26_11
, o_B_26_12 , o_B_26_13 , o_B_26_14 , o_B_26_15 , o_B_26_16 , o_B_26_17 , & (
dw -> rtb ) , & ( dw -> rtdw ) , localX , & ( dw -> rtzce ) , localXdis ) ;
n0jusqxqm2 ( & ( dw -> rtm ) , & ( dw -> rtb ) , & ( dw -> rtdw ) ) ; } }
static void mdlInitializeSizes ( SimStruct * S ) { if ( ( S -> mdlInfo ->
genericFcn != ( NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S ,
GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ; }
ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ; if (
S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo ->
genericFcn ; } ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 18
) ; ssSetNumDiscStates ( S , 0 ) ; ssSetNumPeriodicContStates ( S , 0 ) ;
ssSetSymbolicDimsSupport ( S , true ) ; slmrInitializeIOPortDataVectors ( S ,
4 , 18 ) ; if ( ! ssSetNumInputPorts ( S , 4 ) ) return ; if ( !
ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 0 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 1 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 1 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 1 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 2 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 2 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 2 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 2 , 1 ) ; ssSetInputPortOptimOpts ( S
, 2 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 2 ,
false ) ; ssSetInputPortSampleTime ( S , 2 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 2 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 3 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 3 , SS_BOOLEAN )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 3 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 3 , 1 ) ; ssSetInputPortOptimOpts ( S
, 3 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 3 ,
false ) ; ssSetInputPortSampleTime ( S , 3 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 3 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S , 18 ) ) return ; if ( !
ssSetOutputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 0 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 1 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 1 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 1 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
1 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 1 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 1 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 1 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 2 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 2 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 2 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
2 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 2 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 2 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 2 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 2 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 3 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 3 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 3 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
3 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 3 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 3 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 3 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 3 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 4 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 4 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 4 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
4 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 4 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 4 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 4 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 4 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 5 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 5 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 5 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
5 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 5 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 5 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 5 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 5 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 6 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 6 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 6 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 6 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 6 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 6 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
6 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 6 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 6 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 6 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 6 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 7 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 7 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 7 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 7 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 7 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 7 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
7 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 7 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 7 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 7 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 7 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 8 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 8 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 8 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 8 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 8 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 8 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 8 , 0 ) ; ssSetOutputPortDiscreteValuedOutput
( S , 8 , 0 ) ; ssSetOutputPortOkToMerge ( S , 8 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 8 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 8 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 9 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 9 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 9 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 9 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 9 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 9 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
9 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 9 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 9 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 9 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 9 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 10 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 10 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 10 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 10 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 10 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 10 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 10 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 10 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 10 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 10 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 10 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 11 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 11 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 11 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 11 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 11 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 11 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 11 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 11 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 11 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 11 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 11 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 12 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 12 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 12 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 12 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 12 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 12 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 12 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 12 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 12 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 12 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 12 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortMatrixDimensions ( S , 13 , 3 , 3 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 13 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 13 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 13 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 13 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 13 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 13 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 13 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 13 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 13 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 13 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortMatrixDimensions ( S , 14 , 3 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 14 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 14 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 14 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 14 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 14 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 14 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 14 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 14 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 14 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 14 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 15 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 15 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 15 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 15 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 15 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 15 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 15 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 15 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 15 , SS_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 15 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 15 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 16 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 16 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 16 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 16 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 16 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 16 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 16 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 16 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 16 , SS_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 16 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 16 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 17 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 17 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 17 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 17 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 17 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 17 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 17 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 17 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 17 , SS_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 17 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 17 , SS_NOT_REUSABLE_AND_LOCAL ) ;
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_DinamicaCinematicaOrbital_RegisterSimStateChecksum ( S ) ;
ssSetNumSampleTimes ( S , 3 ) ; ssSetParameterTuningCompliance ( S , true ) ;
ssSetNumRWork ( S , 0 ) ; ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ;
ssSetNumModes ( S , 0 ) ; { int_T zcsIdx = 0 ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; }
ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 1 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 1 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 2 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 2 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 3 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 3 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 4 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 4 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 5 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 5 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 6 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 6 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 7 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 7 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 8 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 8 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 9 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 9 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 10 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 10 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 11 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 11 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 12 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 12 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 13 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 13 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 14 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 14 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 15 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 15 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 16 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 16 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 17 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 17 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 0 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 0 ) ; ssSetInputPortIsNotDerivPort ( S , 2 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 3 , 1 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
true ) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_ALLOW_CONSTANT_PORT_SAMPLE_TIME |
SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED | SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE |
SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_DinamicaCinematicaOrbital_MdlInfoRegFcn ( S , "DinamicaCinematicaOrbital"
, & retVal ) ; if ( ! retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( okb1gcgf0a4 ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterSystemResetMethod ( S , mdlReset ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "24.1" ) ; ssSetNeedAbsoluteTime ( S ,
1 ) ; } static void mdlInitializeSampleTimes ( SimStruct * S ) {
ssSetSampleTime ( S , 0 , 0 ) ; ssSetOffsetTime ( S , 0 , 0 ) ;
ssSetSampleTime ( S , 1 , 0.01 ) ; ssSetOffsetTime ( S , 1 , 0 ) ;
ssSetSampleTime ( S , 2 , mxGetInf ( ) ) ; ssSetOffsetTime ( S , 2 , 0 ) ;
return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { okb1gcgf0a4 * dw = (
okb1gcgf0a4 * ) ssGetDWork ( S , 0 ) ; real_T * o_B_26_8 = ( real_T * )
ssGetOutputPortSignal ( S , 7 ) ; real_T * o_B_26_9 = ( real_T * )
ssGetOutputPortSignal ( S , 9 ) ; luimruxjly * localX = ( luimruxjly * )
ssGetContStates ( S ) ; real_T * o_o_o_o_o_B_26_18 = ( real_T * )
ssGetOutputPortSignal ( S , 8 ) ; npno0gt4jm * localXdis = ( npno0gt4jm * )
ssGetContStateDisabled ( S ) ; ssNonContDerivSigFeedingOutports
mr_nonContOutput7 [ 1 ] ; ssNonContDerivSigFeedingOutports mr_nonContOutput9
[ 1 ] ; ssNonContDerivSigFeedingOutports mr_nonContOutput10 [ 1 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput12 [ 1 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput14 [ 2 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput15 [ 2 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput16 [ 2 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput17 [ 2 ] ;
ssNonContDerivSigFeedingOutports * mr_nonContOutputArray [ 18 ] ; void *
sysRanPtr = ( NULL ) ; int sysTid = 0 ; ssGetContextSysRanBCPtr ( S , &
sysRanPtr ) ; ssGetContextSysTid ( S , & sysTid ) ; if ( sysTid ==
CONSTANT_TID ) { sysTid = 0 ; } mr_nonContOutputArray [ 0 ] = ( NULL ) ;
mr_nonContOutputArray [ 1 ] = ( NULL ) ; mr_nonContOutputArray [ 2 ] = ( NULL
) ; mr_nonContOutputArray [ 3 ] = ( NULL ) ; mr_nonContOutputArray [ 4 ] = (
NULL ) ; mr_nonContOutputArray [ 5 ] = ( NULL ) ; mr_nonContOutputArray [ 6 ]
= ( NULL ) ; mr_nonContOutputArray [ 7 ] = mr_nonContOutput7 ;
mr_nonContOutputArray [ 8 ] = ( NULL ) ; mr_nonContOutputArray [ 9 ] =
mr_nonContOutput9 ; mr_nonContOutputArray [ 10 ] = mr_nonContOutput10 ;
mr_nonContOutputArray [ 11 ] = ( NULL ) ; mr_nonContOutputArray [ 12 ] =
mr_nonContOutput12 ; mr_nonContOutputArray [ 13 ] = ( NULL ) ;
mr_nonContOutputArray [ 14 ] = mr_nonContOutput14 ; mr_nonContOutputArray [
15 ] = mr_nonContOutput15 ; mr_nonContOutputArray [ 16 ] = mr_nonContOutput16
; mr_nonContOutputArray [ 17 ] = mr_nonContOutput17 ; cclmzcapyf ( o_B_26_8 ,
o_B_26_9 , S , mr_nonContOutputArray , slmrGetTopTidFromMdlRefChildTid ( S ,
0 , false ) , slmrGetTopTidFromMdlRefChildTid ( S , 1 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 2 , true ) , & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) , localX , & ( dw -> rtzce ) , sysRanPtr , sysTid
, ( ( NULL ) ) , ( ( NULL ) ) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , &
( dw -> rtm . DataMapInfo . mmi ) ) ; if ( S -> mdlInfo -> genericFcn != (
NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; if ( ! ( fcn ) ( S
, GEN_FCN_REG_MODELREF_NONCONTSIGS , 7 , mr_nonContOutput7 ) ) return ; if (
! ( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 9 , mr_nonContOutput9 ) )
return ; if ( ! ( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 10 ,
mr_nonContOutput10 ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_REG_MODELREF_NONCONTSIGS , 12 , mr_nonContOutput12 ) ) return ; if (
! ( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 14 , mr_nonContOutput14 )
) return ; if ( ! ( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 15 ,
mr_nonContOutput15 ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_REG_MODELREF_NONCONTSIGS , 16 , mr_nonContOutput16 ) ) return ; if (
! ( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 17 , mr_nonContOutput17 )
) return ; } }
#define MDL_START
static void mdlStart ( SimStruct * S ) { okb1gcgf0a4 * dw = ( okb1gcgf0a4 * )
ssGetDWork ( S , 0 ) ; real_T * o_o_o_o_o_B_26_18 = ( real_T * )
ssGetOutputPortSignal ( S , 8 ) ; npno0gt4jm * localXdis = ( npno0gt4jm * )
ssGetContStateDisabled ( S ) ; mdlProcessParameters ( S ) ; hqfpbwngdg ( & (
dw -> rtm ) , o_o_o_o_o_B_26_18 , & ( dw -> rtb ) , & ( dw -> rtdw ) ,
localXdis ) ; } static void mdlOutputs ( SimStruct * S , int_T tid ) {
okb1gcgf0a4 * dw = ( okb1gcgf0a4 * ) ssGetDWork ( S , 0 ) ; real_T const *
i_hgwjjeu3ie = ( real_T * ) ssGetInputPortSignal ( S , 0 ) ; real_T const *
i_opybs254pu = ( real_T * ) ssGetInputPortSignal ( S , 1 ) ; real_T const *
i_m4wvsixkpr = ( real_T * ) ssGetInputPortSignal ( S , 2 ) ; boolean_T const
* i_pw1v5nsia2 = ( boolean_T * ) ssGetInputPortSignal ( S , 3 ) ; real_T *
o_o_B_26_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T *
o_o_B_26_2 = ( real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T *
o_o_B_26_3 = ( real_T * ) ssGetOutputPortSignal ( S , 2 ) ; real_T *
o_o_B_26_4 = ( real_T * ) ssGetOutputPortSignal ( S , 3 ) ; real_T *
o_o_B_26_5 = ( real_T * ) ssGetOutputPortSignal ( S , 4 ) ; real_T *
o_o_B_26_6 = ( real_T * ) ssGetOutputPortSignal ( S , 5 ) ; real_T * o_B_26_7
= ( real_T * ) ssGetOutputPortSignal ( S , 6 ) ; real_T * o_B_26_8 = ( real_T
* ) ssGetOutputPortSignal ( S , 7 ) ; real_T * o_o_o_o_o_B_26_18 = ( real_T *
) ssGetOutputPortSignal ( S , 8 ) ; real_T * o_B_26_9 = ( real_T * )
ssGetOutputPortSignal ( S , 9 ) ; real_T * o_B_26_10 = ( real_T * )
ssGetOutputPortSignal ( S , 10 ) ; real_T * o_o_B_26_11 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; real_T * o_B_26_12 = ( real_T * )
ssGetOutputPortSignal ( S , 12 ) ; real_T * o_B_26_13 = ( real_T * )
ssGetOutputPortSignal ( S , 13 ) ; real_T * o_B_26_14 = ( real_T * )
ssGetOutputPortSignal ( S , 14 ) ; real_T * o_B_26_15 = ( real_T * )
ssGetOutputPortSignal ( S , 15 ) ; real_T * o_B_26_16 = ( real_T * )
ssGetOutputPortSignal ( S , 16 ) ; real_T * o_B_26_17 = ( real_T * )
ssGetOutputPortSignal ( S , 17 ) ; luimruxjly * localX = ( luimruxjly * )
ssGetContStates ( S ) ; npno0gt4jm * localXdis = ( npno0gt4jm * )
ssGetContStateDisabled ( S ) ; if ( tid == PARAMETER_TUNING_TID ) {
DinamicaCinematicaOrbitalTID2 ( o_o_o_o_o_B_26_18 , & ( dw -> rtb ) ) ; } if
( tid != CONSTANT_TID && tid != PARAMETER_TUNING_TID ) { if ( ssIsSampleHit (
S , 0 , tid ) || ssIsMinorTimeStep ( S ) ) { DinamicaCinematicaOrbital ( & (
dw -> rtm ) , i_hgwjjeu3ie , i_opybs254pu , i_m4wvsixkpr , i_pw1v5nsia2 ,
o_o_B_26_1 , o_o_B_26_2 , o_o_B_26_3 , o_o_B_26_4 , o_o_B_26_5 , o_o_B_26_6 ,
o_B_26_7 , o_B_26_8 , o_o_o_o_o_B_26_18 , o_B_26_9 , o_B_26_10 , o_o_B_26_11
, o_B_26_12 , o_B_26_13 , o_B_26_14 , o_B_26_15 , o_B_26_16 , o_B_26_17 , & (
dw -> rtb ) , & ( dw -> rtdw ) , localX , & ( dw -> rtzce ) , localXdis ) ; }
} }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { okb1gcgf0a4 * dw = (
okb1gcgf0a4 * ) ssGetDWork ( S , 0 ) ; n0jusqxqm2 ( & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) ) ; return ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { okb1gcgf0a4 * dw = (
okb1gcgf0a4 * ) ssGetDWork ( S , 0 ) ; aygzkytbqu * localXdot = ( aygzkytbqu
* ) ssGetdX ( S ) ; hzdvvsrkxw ( & ( dw -> rtb ) , & ( dw -> rtdw ) ,
localXdot ) ; } static void mdlTerminate ( SimStruct * S ) { okb1gcgf0a4 * dw
= ( okb1gcgf0a4 * ) ssGetDWork ( S , 0 ) ; f1esxkgit3 ( & ( dw -> rtm ) ) ;
return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 6 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , "nonContDerivSigInfoPrevVal" , } ; mxArray * ss =
mxCreateStructMatrix ( 1 , 1 , 6 , simStateFieldNames ) ; { const luimruxjly
* localX = ( const luimruxjly * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( luimruxjly ) ; mxArray * storedX = mxCreateNumericMatrix
( 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; UINT8_T * rawData = ( UINT8_T * )
mxGetData ( storedX ) ; memcpy ( & rawData [ 0 ] , localX , numBytes ) ;
mxSetFieldByNumber ( ss , 0 , 0 , storedX ) ; } { mxArray * mdlrefDW =
mr_DinamicaCinematicaOrbital_GetDWork ( ssGetDWork ( S , 0 ) ) ;
mxSetFieldByNumber ( ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_DinamicaCinematicaOrbital_GetSimStateDisallowedBlocks ( ) ;
mxSetFieldByNumber ( ss , 0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 ,
3 , mxCreateDoubleScalar ( ( double ) ssGetTNext ( S ) ) ) ;
mxSetFieldByNumber ( ss , 0 , 4 , mxCreateDoubleScalar ( ( double )
ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { {
luimruxjly * localX = ( luimruxjly * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( luimruxjly ) ; const mxArray * storedX =
mxGetFieldByNumber ( ss , 0 , 0 ) ; const UINT8_T * rawData = ( const UINT8_T
* ) mxGetData ( storedX ) ; memcpy ( localX , & rawData [ 0 ] , numBytes ) ;
} mr_DinamicaCinematicaOrbital_SetDWork ( ssGetDWork ( S , 0 ) ,
mxGetFieldByNumber ( ss , 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar
( mxGetFieldByNumber ( ss , 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T )
mxGetScalar ( mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
