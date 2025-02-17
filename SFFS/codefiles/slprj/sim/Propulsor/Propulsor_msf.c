#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME Propulsor_msf
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
#include "Propulsor_types.h"
#include "Propulsor.h"
#include "Propulsor_private.h"
real_T rtP_Fn ; real_T rtP_Tpulse ; real_T rtP_mib ; real_T rtP_peak_prop ;
real_T rtP_tc ; const char * rt_GetMatSignalLoggingFileName ( void ) { return
NULL ; } const char * rt_GetMatSigLogSelectorFileName ( void ) { return NULL
; } void * rt_GetOSigstreamManager ( void ) { return NULL ; } void *
rt_slioCatalogue ( void ) { return NULL ; } void * rtwGetPointerFromUniquePtr
( void * uniquePtr ) { return NULL ; } void * CreateDiagnosticAsVoidPtr (
const char * id , int nargs , ... ) { void * voidPtrDiagnostic = NULL ;
va_list args ; va_start ( args , nargs ) ; slmrCreateDiagnostic ( id , nargs
, args , & voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ;
} void rt_ssSet_slErrMsg ( void * S , void * diag ) { SimStruct * simStrcut =
( SimStruct * ) S ; if ( ! _ssIsErrorStatusAslErrMsg ( simStrcut ) ) {
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
real_T * GlobalPrm_4 = ( real_T * ) NULL ; if ( !
ssGetModelRefGlobalParamData ( S , 0 , ( void * * ) ( & GlobalPrm_0 ) ) )
return ; if ( GlobalPrm_0 != NULL ) { ( void ) memcpy ( & ( rtP_Fn ) ,
GlobalPrm_0 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S
, 1 , ( void * * ) ( & GlobalPrm_1 ) ) ) return ; if ( GlobalPrm_1 != NULL )
{ ( void ) memcpy ( & ( rtP_Tpulse ) , GlobalPrm_1 , sizeof ( real_T ) ) ; }
if ( ! ssGetModelRefGlobalParamData ( S , 2 , ( void * * ) ( & GlobalPrm_2 )
) ) return ; if ( GlobalPrm_2 != NULL ) { ( void ) memcpy ( & ( rtP_mib ) ,
GlobalPrm_2 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S
, 3 , ( void * * ) ( & GlobalPrm_3 ) ) ) return ; if ( GlobalPrm_3 != NULL )
{ ( void ) memcpy ( & ( rtP_peak_prop ) , GlobalPrm_3 , sizeof ( real_T ) ) ;
} if ( ! ssGetModelRefGlobalParamData ( S , 4 , ( void * * ) ( & GlobalPrm_4
) ) ) return ; if ( GlobalPrm_4 != NULL ) { ( void ) memcpy ( & ( rtP_tc ) ,
GlobalPrm_4 , sizeof ( real_T ) ) ; } }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { kqdtm1plmi2 * dw = (
kqdtm1plmi2 * ) ssGetDWork ( S , 0 ) ; jo4unm3m5g * localX = ( jo4unm3m5g * )
ssGetContStates ( S ) ; io4yjhha3x ( & ( dw -> rtdw ) , localX ) ; } static
void mdlReset ( SimStruct * S ) { kqdtm1plmi2 * dw = ( kqdtm1plmi2 * )
ssGetDWork ( S , 0 ) ; npi5eyt2xv ( & ( dw -> rtdw ) ) ; } static void
mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid ) { kqdtm1plmi2 * dw = (
kqdtm1plmi2 * ) ssGetDWork ( S , 0 ) ; real_T const * i_j2mzqwepmv = ( real_T
* ) ssGetInputPortSignal ( S , 0 ) ; real_T * o_B_5_1 = ( real_T * )
ssGetOutputPortSignal ( S , 0 ) ; jo4unm3m5g * localX = ( jo4unm3m5g * )
ssGetContStates ( S ) ; ajyahdeuyo * localXdis = ( ajyahdeuyo * )
ssGetContStateDisabled ( S ) ; if ( tid == 0 ) { Propulsor ( & ( dw -> rtm )
, i_j2mzqwepmv , o_B_5_1 , & ( dw -> rtb ) , & ( dw -> rtdw ) , localX ,
localXdis ) ; inmzgbaou4 ( & ( dw -> rtm ) , & ( dw -> rtb ) , & ( dw -> rtdw
) ) ; } } static void mdlInitializeSizes ( SimStruct * S ) { if ( ( S ->
mdlInfo -> genericFcn != ( NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S
, GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ;
} ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ; if
( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo
-> genericFcn ; } ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S ,
1 ) ; ssSetNumDiscStates ( S , 0 ) ; ssSetNumPeriodicContStates ( S , 0 ) ;
ssSetSymbolicDimsSupport ( S , true ) ; slmrInitializeIOPortDataVectors ( S ,
1 , 1 ) ; if ( ! ssSetNumInputPorts ( S , 1 ) ) return ; if ( !
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
( S , 0 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S , 1 ) ) return ; if ( !
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
ssSetOutputPortOkToMerge ( S , 0 , SS_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_Propulsor_RegisterSimStateChecksum ( S ) ; ssSetNumSampleTimes ( S , 2 ) ;
ssSetParameterTuningCompliance ( S , true ) ; ssSetNumRWork ( S , 0 ) ;
ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 ) ;
{ int_T zcsIdx = 0 ; } ssSetOutputPortIsNonContinuous ( S , 0 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
true ) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED | SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE |
SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ; mr_Propulsor_MdlInfoRegFcn
( S , "Propulsor" , & retVal ) ; if ( ! retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( kqdtm1plmi2 ) ) )
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
ssSetSampleTime ( S , 1 , 0.01 ) ; ssSetOffsetTime ( S , 1 , 0 ) ; return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { kqdtm1plmi2 * dw = (
kqdtm1plmi2 * ) ssGetDWork ( S , 0 ) ; jo4unm3m5g * localX = ( jo4unm3m5g * )
ssGetContStates ( S ) ; ajyahdeuyo * localXdis = ( ajyahdeuyo * )
ssGetContStateDisabled ( S ) ; ssNonContDerivSigFeedingOutports
mr_nonContOutput0 [ 1 ] ; ssNonContDerivSigFeedingOutports *
mr_nonContOutputArray [ 1 ] ; void * sysRanPtr = ( NULL ) ; int sysTid = 0 ;
ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ; ssGetContextSysTid ( S , &
sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid = 0 ; }
mr_nonContOutputArray [ 0 ] = mr_nonContOutput0 ; gf4m412xvp ( S ,
mr_nonContOutputArray , slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 1 , false ) , & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) , localX , sysRanPtr , sysTid , ( ( NULL ) ) , (
( NULL ) ) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( dw -> rtm .
DataMapInfo . mmi ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) {
_GenericFcn fcn = S -> mdlInfo -> genericFcn ; if ( ! ( fcn ) ( S ,
GEN_FCN_REG_MODELREF_NONCONTSIGS , 0 , mr_nonContOutput0 ) ) return ; } }
#define MDL_START
static void mdlStart ( SimStruct * S ) { kqdtm1plmi2 * dw = ( kqdtm1plmi2 * )
ssGetDWork ( S , 0 ) ; ajyahdeuyo * localXdis = ( ajyahdeuyo * )
ssGetContStateDisabled ( S ) ; mdlProcessParameters ( S ) ; cm1sx1eabq ( & (
dw -> rtm ) , & ( dw -> rtdw ) , localXdis ) ; } static void mdlOutputs (
SimStruct * S , int_T tid ) { kqdtm1plmi2 * dw = ( kqdtm1plmi2 * ) ssGetDWork
( S , 0 ) ; real_T const * i_j2mzqwepmv = ( real_T * ) ssGetInputPortSignal (
S , 0 ) ; real_T * o_B_5_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ;
jo4unm3m5g * localX = ( jo4unm3m5g * ) ssGetContStates ( S ) ; ajyahdeuyo *
localXdis = ( ajyahdeuyo * ) ssGetContStateDisabled ( S ) ; if ( tid !=
CONSTANT_TID && tid != PARAMETER_TUNING_TID ) { Propulsor ( & ( dw -> rtm ) ,
i_j2mzqwepmv , o_B_5_1 , & ( dw -> rtb ) , & ( dw -> rtdw ) , localX ,
localXdis ) ; } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { kqdtm1plmi2 * dw = (
kqdtm1plmi2 * ) ssGetDWork ( S , 0 ) ; inmzgbaou4 ( & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) ) ; return ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { kqdtm1plmi2 * dw = (
kqdtm1plmi2 * ) ssGetDWork ( S , 0 ) ; dcmsala1mj * localXdot = ( dcmsala1mj
* ) ssGetdX ( S ) ; fxb2slckzk ( & ( dw -> rtb ) , & ( dw -> rtdw ) ,
localXdot ) ; } static void mdlTerminate ( SimStruct * S ) { kqdtm1plmi2 * dw
= ( kqdtm1plmi2 * ) ssGetDWork ( S , 0 ) ; bgcteftzsf ( & ( dw -> rtm ) ) ;
return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 6 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , "nonContDerivSigInfoPrevVal" , } ; mxArray * ss =
mxCreateStructMatrix ( 1 , 1 , 6 , simStateFieldNames ) ; { const jo4unm3m5g
* localX = ( const jo4unm3m5g * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( jo4unm3m5g ) ; mxArray * storedX = mxCreateNumericMatrix
( 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; UINT8_T * rawData = ( UINT8_T * )
mxGetData ( storedX ) ; memcpy ( & rawData [ 0 ] , localX , numBytes ) ;
mxSetFieldByNumber ( ss , 0 , 0 , storedX ) ; } { mxArray * mdlrefDW =
mr_Propulsor_GetDWork ( ssGetDWork ( S , 0 ) ) ; mxSetFieldByNumber ( ss , 0
, 1 , mdlrefDW ) ; } { mxArray * data =
mr_Propulsor_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss , 0 ,
2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar ( (
double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { {
jo4unm3m5g * localX = ( jo4unm3m5g * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( jo4unm3m5g ) ; const mxArray * storedX =
mxGetFieldByNumber ( ss , 0 , 0 ) ; const UINT8_T * rawData = ( const UINT8_T
* ) mxGetData ( storedX ) ; memcpy ( localX , & rawData [ 0 ] , numBytes ) ;
} mr_Propulsor_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber ( ss , 0
, 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber ( ss ,
0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar ( mxGetFieldByNumber
( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
