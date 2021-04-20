// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UNDERWATERGAME_UnderwaterGameProjectile_generated_h
#error "UnderwaterGameProjectile.generated.h already included, missing '#pragma once' in UnderwaterGameProjectile.h"
#endif
#define UNDERWATERGAME_UnderwaterGameProjectile_generated_h

#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_SPARSE_DATA
#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnderwaterGameProjectile(); \
	friend struct Z_Construct_UClass_AUnderwaterGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnderwaterGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnderwaterGame"), NO_API) \
	DECLARE_SERIALIZER(AUnderwaterGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUnderwaterGameProjectile(); \
	friend struct Z_Construct_UClass_AUnderwaterGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnderwaterGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnderwaterGame"), NO_API) \
	DECLARE_SERIALIZER(AUnderwaterGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnderwaterGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnderwaterGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnderwaterGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnderwaterGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnderwaterGameProjectile(AUnderwaterGameProjectile&&); \
	NO_API AUnderwaterGameProjectile(const AUnderwaterGameProjectile&); \
public:


#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnderwaterGameProjectile(AUnderwaterGameProjectile&&); \
	NO_API AUnderwaterGameProjectile(const AUnderwaterGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnderwaterGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnderwaterGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnderwaterGameProjectile)


#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUnderwaterGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUnderwaterGameProjectile, ProjectileMovement); }


#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_12_PROLOG
#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_SPARSE_DATA \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_RPC_WRAPPERS \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_INCLASS \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_SPARSE_DATA \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNDERWATERGAME_API UClass* StaticClass<class AUnderwaterGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnderwaterGame_Source_UnderwaterGame_UnderwaterGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
