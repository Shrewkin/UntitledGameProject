// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnderwaterGame/UnderwaterGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnderwaterGameGameMode() {}
// Cross Module References
	UNDERWATERGAME_API UClass* Z_Construct_UClass_AUnderwaterGameGameMode_NoRegister();
	UNDERWATERGAME_API UClass* Z_Construct_UClass_AUnderwaterGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnderwaterGame();
// End Cross Module References
	void AUnderwaterGameGameMode::StaticRegisterNativesAUnderwaterGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnderwaterGameGameMode_NoRegister()
	{
		return AUnderwaterGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnderwaterGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnderwaterGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnderwaterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnderwaterGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnderwaterGameGameMode.h" },
		{ "ModuleRelativePath", "UnderwaterGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnderwaterGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnderwaterGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnderwaterGameGameMode_Statics::ClassParams = {
		&AUnderwaterGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnderwaterGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnderwaterGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnderwaterGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnderwaterGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnderwaterGameGameMode, 3896353876);
	template<> UNDERWATERGAME_API UClass* StaticClass<AUnderwaterGameGameMode>()
	{
		return AUnderwaterGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnderwaterGameGameMode(Z_Construct_UClass_AUnderwaterGameGameMode, &AUnderwaterGameGameMode::StaticClass, TEXT("/Script/UnderwaterGame"), TEXT("AUnderwaterGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnderwaterGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
