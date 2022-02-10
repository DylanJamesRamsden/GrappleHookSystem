// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GrappleHookSystem/Public/Game/GrappleHookSystemGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappleHookSystemGameMode() {}
// Cross Module References
	GRAPPLEHOOKSYSTEM_API UClass* Z_Construct_UClass_AGrappleHookSystemGameMode_NoRegister();
	GRAPPLEHOOKSYSTEM_API UClass* Z_Construct_UClass_AGrappleHookSystemGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GrappleHookSystem();
// End Cross Module References
	void AGrappleHookSystemGameMode::StaticRegisterNativesAGrappleHookSystemGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGrappleHookSystemGameMode_NoRegister()
	{
		return AGrappleHookSystemGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGrappleHookSystemGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrappleHookSystemGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GrappleHookSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "Game/GrappleHookSystemGameMode.h" },
		{ "ModuleRelativePath", "Public/Game/GrappleHookSystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrappleHookSystemGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappleHookSystemGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrappleHookSystemGameMode_Statics::ClassParams = {
		&AGrappleHookSystemGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrappleHookSystemGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrappleHookSystemGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrappleHookSystemGameMode, 3133588551);
	template<> GRAPPLEHOOKSYSTEM_API UClass* StaticClass<AGrappleHookSystemGameMode>()
	{
		return AGrappleHookSystemGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrappleHookSystemGameMode(Z_Construct_UClass_AGrappleHookSystemGameMode, &AGrappleHookSystemGameMode::StaticClass, TEXT("/Script/GrappleHookSystem"), TEXT("AGrappleHookSystemGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrappleHookSystemGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
