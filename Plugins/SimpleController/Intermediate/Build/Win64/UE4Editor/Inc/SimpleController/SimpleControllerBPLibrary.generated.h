// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSimpleControllerDevice;
struct FSimpleControllerForceFeedbackEffect;
enum class ESimpleControllerButtons : uint8;
enum class ESimpleControllerForceFeedbackEffectConditionType : uint8;
enum class ESimpleControllerForceFeedbackDirectionType : uint8;
enum class ESimpleControllerForceFeedbackEffectPeriodicType : uint8;
enum class ESimpleControllerDirectionalPad : uint8;
class USimpleControllerBPLibrary;
enum class ESimpleControllerDirectoryType : uint8;
#ifdef SIMPLECONTROLLER_SimpleControllerBPLibrary_generated_h
#error "SimpleControllerBPLibrary.generated.h already included, missing '#pragma once' in SimpleControllerBPLibrary.h"
#endif
#define SIMPLECONTROLLER_SimpleControllerBPLibrary_generated_h

#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_26_DELEGATE \
struct SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms \
{ \
	FString DeviceID; \
	int32 axisID; \
	float AxisValue; \
	int32 deviceIndex; \
	FSimpleControllerDevice device; \
}; \
static inline void FaxisMovedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& axisMovedEventDelegate, const FString& DeviceID, int32 axisID, float AxisValue, int32 deviceIndex, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms Parms; \
	Parms.DeviceID=DeviceID; \
	Parms.axisID=axisID; \
	Parms.AxisValue=AxisValue; \
	Parms.deviceIndex=deviceIndex; \
	Parms.device=device; \
	axisMovedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_DELEGATE \
struct SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms \
{ \
	FString DeviceID; \
	int32 ballID; \
	float xRel; \
	int32 yRel; \
	FSimpleControllerDevice device; \
}; \
static inline void FballMovedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ballMovedEventDelegate, const FString& DeviceID, int32 ballID, float xRel, int32 yRel, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms Parms; \
	Parms.DeviceID=DeviceID; \
	Parms.ballID=ballID; \
	Parms.xRel=xRel; \
	Parms.yRel=yRel; \
	Parms.device=device; \
	ballMovedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_24_DELEGATE \
struct SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms \
{ \
	FString DeviceID; \
	int32 buttonID; \
	int32 deviceIndex; \
	FSimpleControllerDevice device; \
}; \
static inline void FbuttonDownEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& buttonDownEventDelegate, const FString& DeviceID, int32 buttonID, int32 deviceIndex, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms Parms; \
	Parms.DeviceID=DeviceID; \
	Parms.buttonID=buttonID; \
	Parms.deviceIndex=deviceIndex; \
	Parms.device=device; \
	buttonDownEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_23_DELEGATE \
struct SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms \
{ \
	FString DeviceID; \
	int32 buttonID; \
	int32 deviceIndex; \
	FSimpleControllerDevice device; \
}; \
static inline void FbuttonUpEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& buttonUpEventDelegate, const FString& DeviceID, int32 buttonID, int32 deviceIndex, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms Parms; \
	Parms.DeviceID=DeviceID; \
	Parms.buttonID=buttonID; \
	Parms.deviceIndex=deviceIndex; \
	Parms.device=device; \
	buttonUpEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_22_DELEGATE \
struct SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms \
{ \
	FSimpleControllerDevice device; \
}; \
static inline void FdeviceAttachedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& deviceAttachedEventDelegate, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms Parms; \
	Parms.device=device; \
	deviceAttachedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_21_DELEGATE \
struct SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms \
{ \
	FSimpleControllerDevice device; \
}; \
static inline void FdeviceDetachedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& deviceDetachedEventDelegate, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms Parms; \
	Parms.device=device; \
	deviceDetachedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_20_DELEGATE \
struct SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms \
{ \
	FString DeviceID; \
	int32 directionalPadValue; \
	int32 deviceIndex; \
	FSimpleControllerDevice device; \
}; \
static inline void FdirectionalPadEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& directionalPadEventDelegate, const FString& DeviceID, int32 directionalPadValue, int32 deviceIndex, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms Parms; \
	Parms.DeviceID=DeviceID; \
	Parms.directionalPadValue=directionalPadValue; \
	Parms.deviceIndex=deviceIndex; \
	Parms.device=device; \
	directionalPadEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_SPARSE_DATA
#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execaxisMovedEventDelegate); \
	DECLARE_FUNCTION(execballMovedEventDelegate); \
	DECLARE_FUNCTION(execbreakDeviceForceFeedbackInfo); \
	DECLARE_FUNCTION(execbreakDeviceInfo); \
	DECLARE_FUNCTION(execbreakForceFeedbackEffect); \
	DECLARE_FUNCTION(execbuttonDownEventDelegate); \
	DECLARE_FUNCTION(execbuttonIDToButton); \
	DECLARE_FUNCTION(execbuttonUpEventDelegate); \
	DECLARE_FUNCTION(execchangeAxisMapping); \
	DECLARE_FUNCTION(execchangeButtonMapping); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectCondition); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectConstant); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectPeriodic); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectRamp); \
	DECLARE_FUNCTION(execdestroyForceFeedbackEffect); \
	DECLARE_FUNCTION(execdeviceAttachedEventDelegate); \
	DECLARE_FUNCTION(execdeviceDetachedEventDelegate); \
	DECLARE_FUNCTION(execdirectinalPadValueToDirection); \
	DECLARE_FUNCTION(execdirectionalPadEventDelegate); \
	DECLARE_FUNCTION(execfindControllerByDeviceID); \
	DECLARE_FUNCTION(execfindControllerByDeviceIndex); \
	DECLARE_FUNCTION(execgetConnectedControllers); \
	DECLARE_FUNCTION(execgetSimpleControllerTarget); \
	DECLARE_FUNCTION(execinitController); \
	DECLARE_FUNCTION(execinvertAxis); \
	DECLARE_FUNCTION(execloadMapping); \
	DECLARE_FUNCTION(execOnButtonDownEvent); \
	DECLARE_FUNCTION(execOnButtonUpEvent); \
	DECLARE_FUNCTION(execresetAllAxisInverting); \
	DECLARE_FUNCTION(execresetAllAxisToDefaultMapping); \
	DECLARE_FUNCTION(execresetAllButtonsToDefaultMapping); \
	DECLARE_FUNCTION(execresetAxisInverting); \
	DECLARE_FUNCTION(execresetAxisToDefaultMapping); \
	DECLARE_FUNCTION(execresetButtonToDefaultMapping); \
	DECLARE_FUNCTION(execrumble); \
	DECLARE_FUNCTION(execsaveMapping); \
	DECLARE_FUNCTION(execsimpleRumble); \
	DECLARE_FUNCTION(execstopController); \
	DECLARE_FUNCTION(execuploadAndRunForceFeedbackEffect);


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execaxisMovedEventDelegate); \
	DECLARE_FUNCTION(execballMovedEventDelegate); \
	DECLARE_FUNCTION(execbreakDeviceForceFeedbackInfo); \
	DECLARE_FUNCTION(execbreakDeviceInfo); \
	DECLARE_FUNCTION(execbreakForceFeedbackEffect); \
	DECLARE_FUNCTION(execbuttonDownEventDelegate); \
	DECLARE_FUNCTION(execbuttonIDToButton); \
	DECLARE_FUNCTION(execbuttonUpEventDelegate); \
	DECLARE_FUNCTION(execchangeAxisMapping); \
	DECLARE_FUNCTION(execchangeButtonMapping); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectCondition); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectConstant); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectPeriodic); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectRamp); \
	DECLARE_FUNCTION(execdestroyForceFeedbackEffect); \
	DECLARE_FUNCTION(execdeviceAttachedEventDelegate); \
	DECLARE_FUNCTION(execdeviceDetachedEventDelegate); \
	DECLARE_FUNCTION(execdirectinalPadValueToDirection); \
	DECLARE_FUNCTION(execdirectionalPadEventDelegate); \
	DECLARE_FUNCTION(execfindControllerByDeviceID); \
	DECLARE_FUNCTION(execfindControllerByDeviceIndex); \
	DECLARE_FUNCTION(execgetConnectedControllers); \
	DECLARE_FUNCTION(execgetSimpleControllerTarget); \
	DECLARE_FUNCTION(execinitController); \
	DECLARE_FUNCTION(execinvertAxis); \
	DECLARE_FUNCTION(execloadMapping); \
	DECLARE_FUNCTION(execOnButtonDownEvent); \
	DECLARE_FUNCTION(execOnButtonUpEvent); \
	DECLARE_FUNCTION(execresetAllAxisInverting); \
	DECLARE_FUNCTION(execresetAllAxisToDefaultMapping); \
	DECLARE_FUNCTION(execresetAllButtonsToDefaultMapping); \
	DECLARE_FUNCTION(execresetAxisInverting); \
	DECLARE_FUNCTION(execresetAxisToDefaultMapping); \
	DECLARE_FUNCTION(execresetButtonToDefaultMapping); \
	DECLARE_FUNCTION(execrumble); \
	DECLARE_FUNCTION(execsaveMapping); \
	DECLARE_FUNCTION(execsimpleRumble); \
	DECLARE_FUNCTION(execstopController); \
	DECLARE_FUNCTION(execuploadAndRunForceFeedbackEffect);


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleControllerBPLibrary(); \
	friend struct Z_Construct_UClass_USimpleControllerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USimpleControllerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleController"), NO_API) \
	DECLARE_SERIALIZER(USimpleControllerBPLibrary)


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleControllerBPLibrary(); \
	friend struct Z_Construct_UClass_USimpleControllerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USimpleControllerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleController"), NO_API) \
	DECLARE_SERIALIZER(USimpleControllerBPLibrary)


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleControllerBPLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleControllerBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleControllerBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleControllerBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleControllerBPLibrary(USimpleControllerBPLibrary&&); \
	NO_API USimpleControllerBPLibrary(const USimpleControllerBPLibrary&); \
public:


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleControllerBPLibrary(USimpleControllerBPLibrary&&); \
	NO_API USimpleControllerBPLibrary(const USimpleControllerBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleControllerBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleControllerBPLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USimpleControllerBPLibrary)


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_PROLOG
#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_SPARSE_DATA \
	REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_RPC_WRAPPERS \
	REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_INCLASS \
	REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_SPARSE_DATA \
	REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECONTROLLER_API UClass* StaticClass<class USimpleControllerBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
