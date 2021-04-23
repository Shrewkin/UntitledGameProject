// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnderwaterGame/UnderwaterGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnderwaterGameGameModeBase() {}
// Cross Module References
	UNDERWATERGAME_API UClass* Z_Construct_UClass_AUnderwaterGameGameModeBase_NoRegister();
	UNDERWATERGAME_API UClass* Z_Construct_UClass_AUnderwaterGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnderwaterGame();
// End Cross Module References
	void AUnderwaterGameGameModeBase::StaticRegisterNativesAUnderwaterGameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnderwaterGameGameModeBase_NoRegister()
	{
		return AUnderwaterGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnderwaterGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnderwaterGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnderwaterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnderwaterGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnderwaterGameGameModeBase.h" },
		{ "ModuleRelativePath", "UnderwaterGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnderwaterGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnderwaterGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnderwaterGameGameModeBase_Statics::ClassParams = {
		&AUnderwaterGameGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnderwaterGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnderwaterGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnderwaterGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnderwaterGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnderwaterGameGameModeBase, 3405414494);
	template<> UNDERWATERGAME_API UClass* StaticClass<AUnderwaterGameGameModeBase>()
	{
		return AUnderwaterGameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnderwaterGameGameModeBase(Z_Construct_UClass_AUnderwaterGameGameModeBase, &AUnderwaterGameGameModeBase::StaticClass, TEXT("/Script/UnderwaterGame"), TEXT("AUnderwaterGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnderwaterGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
