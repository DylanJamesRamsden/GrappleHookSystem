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
#ifdef GRAPPLEHOOKSYSTEM_GrappleHookSystemProjectile_generated_h
#error "GrappleHookSystemProjectile.generated.h already included, missing '#pragma once' in GrappleHookSystemProjectile.h"
#endif
#define GRAPPLEHOOKSYSTEM_GrappleHookSystemProjectile_generated_h

#define GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_SPARSE_DATA
#define GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrappleHookSystemProjectile(); \
	friend struct Z_Construct_UClass_AGrappleHookSystemProjectile_Statics; \
public: \
	DECLARE_CLASS(AGrappleHookSystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GrappleHookSystem"), NO_API) \
	DECLARE_SERIALIZER(AGrappleHookSystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGrappleHookSystemProjectile(); \
	friend struct Z_Construct_UClass_AGrappleHookSystemProjectile_Statics; \
public: \
	DECLARE_CLASS(AGrappleHookSystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GrappleHookSystem"), NO_API) \
	DECLARE_SERIALIZER(AGrappleHookSystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrappleHookSystemProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrappleHookSystemProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrappleHookSystemProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrappleHookSystemProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrappleHookSystemProjectile(AGrappleHookSystemProjectile&&); \
	NO_API AGrappleHookSystemProjectile(const AGrappleHookSystemProjectile&); \
public:


#define GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrappleHookSystemProjectile(AGrappleHookSystemProjectile&&); \
	NO_API AGrappleHookSystemProjectile(const AGrappleHookSystemProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrappleHookSystemProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrappleHookSystemProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrappleHookSystemProjectile)


#define GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGrappleHookSystemProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGrappleHookSystemProjectile, ProjectileMovement); }


#define GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_12_PROLOG
#define GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_SPARSE_DATA \
	GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_RPC_WRAPPERS \
	GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_INCLASS \
	GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_SPARSE_DATA \
	GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_INCLASS_NO_PURE_DECLS \
	GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAPPLEHOOKSYSTEM_API UClass* StaticClass<class AGrappleHookSystemProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GrappleHookSystem_Source_GrappleHookSystem_Public_Gameplay_GrappleHookSystemProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
