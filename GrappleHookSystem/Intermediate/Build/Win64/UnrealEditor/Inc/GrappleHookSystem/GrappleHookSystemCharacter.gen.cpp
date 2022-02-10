// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GrappleHookSystem/Public/Player/GrappleHookSystemCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappleHookSystemCharacter() {}
// Cross Module References
	GRAPPLEHOOKSYSTEM_API UClass* Z_Construct_UClass_AGrappleHookSystemCharacter_NoRegister();
	GRAPPLEHOOKSYSTEM_API UClass* Z_Construct_UClass_AGrappleHookSystemCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GrappleHookSystem();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GRAPPLEHOOKSYSTEM_API UClass* Z_Construct_UClass_AGrappleHookSystemProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void AGrappleHookSystemCharacter::StaticRegisterNativesAGrappleHookSystemCharacter()
	{
	}
	UClass* Z_Construct_UClass_AGrappleHookSystemCharacter_NoRegister()
	{
		return AGrappleHookSystemCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGrappleHookSystemCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VR_Gun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GrappleHookSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/GrappleHookSystemCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: 1st person view (seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FP_Gun = { "FP_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FP_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FP_MuzzleLocation = { "FP_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_VR_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_VR_Gun = { "VR_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_VR_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on VR gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_VR_MuzzleLocation = { "VR_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_R_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GrappleHookSystemCharacter" },
		{ "Comment", "/** Motion controller (right hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Motion controller (right hand)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_R_MotionController = { "R_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_R_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_L_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GrappleHookSystemCharacter" },
		{ "Comment", "/** Motion controller (left hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Motion controller (left hand)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_L_MotionController = { "L_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_L_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Projectile class to spawn */" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, ProjectileClass), Z_Construct_UClass_AGrappleHookSystemProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHookSystemCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Whether to use motion controller location for aiming. */" },
		{ "ModuleRelativePath", "Public/Player/GrappleHookSystemCharacter.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((AGrappleHookSystemCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_bUsingMotionControllers = { "bUsingMotionControllers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AGrappleHookSystemCharacter), &Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FP_Gun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_VR_Gun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_VR_MuzzleLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_R_MotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_L_MotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_BaseLookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_GunOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_FireAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::NewProp_bUsingMotionControllers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappleHookSystemCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::ClassParams = {
		&AGrappleHookSystemCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrappleHookSystemCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrappleHookSystemCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrappleHookSystemCharacter, 1415562421);
	template<> GRAPPLEHOOKSYSTEM_API UClass* StaticClass<AGrappleHookSystemCharacter>()
	{
		return AGrappleHookSystemCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrappleHookSystemCharacter(Z_Construct_UClass_AGrappleHookSystemCharacter, &AGrappleHookSystemCharacter::StaticClass, TEXT("/Script/GrappleHookSystem"), TEXT("AGrappleHookSystemCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrappleHookSystemCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
