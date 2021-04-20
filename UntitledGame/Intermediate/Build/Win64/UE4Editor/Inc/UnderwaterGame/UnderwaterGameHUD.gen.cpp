// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnderwaterGame/UnderwaterGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnderwaterGameHUD() {}
// Cross Module References
	UNDERWATERGAME_API UClass* Z_Construct_UClass_AUnderwaterGameHUD_NoRegister();
	UNDERWATERGAME_API UClass* Z_Construct_UClass_AUnderwaterGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UnderwaterGame();
// End Cross Module References
	void AUnderwaterGameHUD::StaticRegisterNativesAUnderwaterGameHUD()
	{
	}
	UClass* Z_Construct_UClass_AUnderwaterGameHUD_NoRegister()
	{
		return AUnderwaterGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUnderwaterGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnderwaterGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UnderwaterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnderwaterGameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UnderwaterGameHUD.h" },
		{ "ModuleRelativePath", "UnderwaterGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnderwaterGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnderwaterGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnderwaterGameHUD_Statics::ClassParams = {
		&AUnderwaterGameHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnderwaterGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnderwaterGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnderwaterGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnderwaterGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnderwaterGameHUD, 2313804775);
	template<> UNDERWATERGAME_API UClass* StaticClass<AUnderwaterGameHUD>()
	{
		return AUnderwaterGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnderwaterGameHUD(Z_Construct_UClass_AUnderwaterGameHUD, &AUnderwaterGameHUD::StaticClass, TEXT("/Script/UnderwaterGame"), TEXT("AUnderwaterGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnderwaterGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
