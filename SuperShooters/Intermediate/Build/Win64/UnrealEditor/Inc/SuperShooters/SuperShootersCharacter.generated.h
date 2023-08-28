// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUPERSHOOTERS_SuperShootersCharacter_generated_h
#error "SuperShootersCharacter.generated.h already included, missing '#pragma once' in SuperShootersCharacter.h"
#endif
#define SUPERSHOOTERS_SuperShootersCharacter_generated_h

#define FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_SPARSE_DATA
#define FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_RPC_WRAPPERS
#define FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASuperShootersCharacter(); \
	friend struct Z_Construct_UClass_ASuperShootersCharacter_Statics; \
public: \
	DECLARE_CLASS(ASuperShootersCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperShooters"), NO_API) \
	DECLARE_SERIALIZER(ASuperShootersCharacter)


#define FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASuperShootersCharacter(); \
	friend struct Z_Construct_UClass_ASuperShootersCharacter_Statics; \
public: \
	DECLARE_CLASS(ASuperShootersCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperShooters"), NO_API) \
	DECLARE_SERIALIZER(ASuperShootersCharacter)


#define FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASuperShootersCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASuperShootersCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASuperShootersCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASuperShootersCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASuperShootersCharacter(ASuperShootersCharacter&&); \
	NO_API ASuperShootersCharacter(const ASuperShootersCharacter&); \
public:


#define FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASuperShootersCharacter(ASuperShootersCharacter&&); \
	NO_API ASuperShootersCharacter(const ASuperShootersCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASuperShootersCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASuperShootersCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASuperShootersCharacter)


#define FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_20_PROLOG
#define FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_SPARSE_DATA \
	FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_RPC_WRAPPERS \
	FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_INCLASS \
	FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_SPARSE_DATA \
	FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERSHOOTERS_API UClass* StaticClass<class ASuperShootersCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperShooters_Source_SuperShooters_SuperShootersCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
