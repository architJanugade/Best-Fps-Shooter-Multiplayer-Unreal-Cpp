// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUPERSHOOTERS_SuperGod_generated_h
#error "SuperGod.generated.h already included, missing '#pragma once' in SuperGod.h"
#endif
#define SUPERSHOOTERS_SuperGod_generated_h

#define FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_SPARSE_DATA
#define FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_RPC_WRAPPERS
#define FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASuperGod(); \
	friend struct Z_Construct_UClass_ASuperGod_Statics; \
public: \
	DECLARE_CLASS(ASuperGod, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperShooters"), NO_API) \
	DECLARE_SERIALIZER(ASuperGod)


#define FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASuperGod(); \
	friend struct Z_Construct_UClass_ASuperGod_Statics; \
public: \
	DECLARE_CLASS(ASuperGod, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperShooters"), NO_API) \
	DECLARE_SERIALIZER(ASuperGod)


#define FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASuperGod(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASuperGod) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASuperGod); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASuperGod); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASuperGod(ASuperGod&&); \
	NO_API ASuperGod(const ASuperGod&); \
public:


#define FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASuperGod(ASuperGod&&); \
	NO_API ASuperGod(const ASuperGod&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASuperGod); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASuperGod); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASuperGod)


#define FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_21_PROLOG
#define FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_SPARSE_DATA \
	FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_RPC_WRAPPERS \
	FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_INCLASS \
	FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_SPARSE_DATA \
	FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_INCLASS_NO_PURE_DECLS \
	FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERSHOOTERS_API UClass* StaticClass<class ASuperGod>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h


#define FOREACH_ENUM_MOVEMENTSTATE(op) \
	op(Crouching) \
	op(Walking) \
	op(Sprinting) \
	op(Sliding) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
