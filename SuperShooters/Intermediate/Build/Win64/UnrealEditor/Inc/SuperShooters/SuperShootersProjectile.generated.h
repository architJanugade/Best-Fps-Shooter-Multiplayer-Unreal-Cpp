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
struct FHitResult;
#ifdef SUPERSHOOTERS_SuperShootersProjectile_generated_h
#error "SuperShootersProjectile.generated.h already included, missing '#pragma once' in SuperShootersProjectile.h"
#endif
#define SUPERSHOOTERS_SuperShootersProjectile_generated_h

#define FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_SPARSE_DATA
#define FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASuperShootersProjectile(); \
	friend struct Z_Construct_UClass_ASuperShootersProjectile_Statics; \
public: \
	DECLARE_CLASS(ASuperShootersProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperShooters"), NO_API) \
	DECLARE_SERIALIZER(ASuperShootersProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASuperShootersProjectile(); \
	friend struct Z_Construct_UClass_ASuperShootersProjectile_Statics; \
public: \
	DECLARE_CLASS(ASuperShootersProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperShooters"), NO_API) \
	DECLARE_SERIALIZER(ASuperShootersProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASuperShootersProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASuperShootersProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASuperShootersProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASuperShootersProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASuperShootersProjectile(ASuperShootersProjectile&&); \
	NO_API ASuperShootersProjectile(const ASuperShootersProjectile&); \
public:


#define FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASuperShootersProjectile(ASuperShootersProjectile&&); \
	NO_API ASuperShootersProjectile(const ASuperShootersProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASuperShootersProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASuperShootersProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASuperShootersProjectile)


#define FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_12_PROLOG
#define FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_SPARSE_DATA \
	FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_RPC_WRAPPERS \
	FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_INCLASS \
	FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_SPARSE_DATA \
	FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERSHOOTERS_API UClass* StaticClass<class ASuperShootersProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperShooters_Source_SuperShooters_SuperShootersProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
