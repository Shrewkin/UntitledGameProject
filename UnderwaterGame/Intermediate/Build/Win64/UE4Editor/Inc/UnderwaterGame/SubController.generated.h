// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNDERWATERGAME_SubController_generated_h
#error "SubController.generated.h already included, missing '#pragma once' in SubController.h"
#endif
#define UNDERWATERGAME_SubController_generated_h

#define UnderwaterGame_Source_UnderwaterGame_SubController_h_12_SPARSE_DATA
#define UnderwaterGame_Source_UnderwaterGame_SubController_h_12_RPC_WRAPPERS
#define UnderwaterGame_Source_UnderwaterGame_SubController_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnderwaterGame_Source_UnderwaterGame_SubController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASubController(); \
	friend struct Z_Construct_UClass_ASubController_Statics; \
public: \
	DECLARE_CLASS(ASubController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnderwaterGame"), NO_API) \
	DECLARE_SERIALIZER(ASubController)


#define UnderwaterGame_Source_UnderwaterGame_SubController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASubController(); \
	friend struct Z_Construct_UClass_ASubController_Statics; \
public: \
	DECLARE_CLASS(ASubController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnderwaterGame"), NO_API) \
	DECLARE_SERIALIZER(ASubController)


#define UnderwaterGame_Source_UnderwaterGame_SubController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASubController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASubController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASubController(ASubController&&); \
	NO_API ASubController(const ASubController&); \
public:


#define UnderwaterGame_Source_UnderwaterGame_SubController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASubController(ASubController&&); \
	NO_API ASubController(const ASubController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASubController)


#define UnderwaterGame_Source_UnderwaterGame_SubController_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoomArm() { return STRUCT_OFFSET(ASubController, BoomArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ASubController, Camera); }


#define UnderwaterGame_Source_UnderwaterGame_SubController_h_9_PROLOG
#define UnderwaterGame_Source_UnderwaterGame_SubController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnderwaterGame_Source_UnderwaterGame_SubController_h_12_PRIVATE_PROPERTY_OFFSET \
	UnderwaterGame_Source_UnderwaterGame_SubController_h_12_SPARSE_DATA \
	UnderwaterGame_Source_UnderwaterGame_SubController_h_12_RPC_WRAPPERS \
	UnderwaterGame_Source_UnderwaterGame_SubController_h_12_INCLASS \
	UnderwaterGame_Source_UnderwaterGame_SubController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnderwaterGame_Source_UnderwaterGame_SubController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnderwaterGame_Source_UnderwaterGame_SubController_h_12_PRIVATE_PROPERTY_OFFSET \
	UnderwaterGame_Source_UnderwaterGame_SubController_h_12_SPARSE_DATA \
	UnderwaterGame_Source_UnderwaterGame_SubController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnderwaterGame_Source_UnderwaterGame_SubController_h_12_INCLASS_NO_PURE_DECLS \
	UnderwaterGame_Source_UnderwaterGame_SubController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNDERWATERGAME_API UClass* StaticClass<class ASubController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnderwaterGame_Source_UnderwaterGame_SubController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
