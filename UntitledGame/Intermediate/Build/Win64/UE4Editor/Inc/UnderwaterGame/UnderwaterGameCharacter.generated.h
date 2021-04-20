// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNDERWATERGAME_UnderwaterGameCharacter_generated_h
#error "UnderwaterGameCharacter.generated.h already included, missing '#pragma once' in UnderwaterGameCharacter.h"
#endif
#define UNDERWATERGAME_UnderwaterGameCharacter_generated_h

#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_SPARSE_DATA
#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_RPC_WRAPPERS
#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnderwaterGameCharacter(); \
	friend struct Z_Construct_UClass_AUnderwaterGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AUnderwaterGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnderwaterGame"), NO_API) \
	DECLARE_SERIALIZER(AUnderwaterGameCharacter)


#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAUnderwaterGameCharacter(); \
	friend struct Z_Construct_UClass_AUnderwaterGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AUnderwaterGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnderwaterGame"), NO_API) \
	DECLARE_SERIALIZER(AUnderwaterGameCharacter)


#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnderwaterGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnderwaterGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnderwaterGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnderwaterGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnderwaterGameCharacter(AUnderwaterGameCharacter&&); \
	NO_API AUnderwaterGameCharacter(const AUnderwaterGameCharacter&); \
public:


#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnderwaterGameCharacter(AUnderwaterGameCharacter&&); \
	NO_API AUnderwaterGameCharacter(const AUnderwaterGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnderwaterGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnderwaterGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnderwaterGameCharacter)


#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AUnderwaterGameCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AUnderwaterGameCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AUnderwaterGameCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AUnderwaterGameCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AUnderwaterGameCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AUnderwaterGameCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AUnderwaterGameCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AUnderwaterGameCharacter, L_MotionController); }


#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_17_PROLOG
#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_SPARSE_DATA \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_RPC_WRAPPERS \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_INCLASS \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_SPARSE_DATA \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_INCLASS_NO_PURE_DECLS \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNDERWATERGAME_API UClass* StaticClass<class AUnderwaterGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnderwaterGame_Source_UnderwaterGame_UnderwaterGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
