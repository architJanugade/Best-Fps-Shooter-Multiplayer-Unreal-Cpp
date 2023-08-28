// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperShooters/Public/SuperGod.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperGod() {}
// Cross Module References
	SUPERSHOOTERS_API UEnum* Z_Construct_UEnum_SuperShooters_MovementState();
	UPackage* Z_Construct_UPackage__Script_SuperShooters();
	SUPERSHOOTERS_API UClass* Z_Construct_UClass_ASuperGod_NoRegister();
	SUPERSHOOTERS_API UClass* Z_Construct_UClass_ASuperGod();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_MovementState;
	static UEnum* MovementState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_MovementState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_MovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SuperShooters_MovementState, Z_Construct_UPackage__Script_SuperShooters(), TEXT("MovementState"));
		}
		return Z_Registration_Info_UEnum_MovementState.OuterSingleton;
	}
	template<> SUPERSHOOTERS_API UEnum* StaticEnum<MovementState>()
	{
		return MovementState_StaticEnum();
	}
	struct Z_Construct_UEnum_SuperShooters_MovementState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SuperShooters_MovementState_Statics::Enumerators[] = {
		{ "Crouching", (int64)Crouching },
		{ "Walking", (int64)Walking },
		{ "Sprinting", (int64)Sprinting },
		{ "Sliding", (int64)Sliding },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SuperShooters_MovementState_Statics::Enum_MetaDataParams[] = {
		{ "Crouching.DisplayName", "Crouching" },
		{ "Crouching.Name", "Crouching" },
		{ "ModuleRelativePath", "Public/SuperGod.h" },
		{ "Sliding.DisplayName", "Sliding" },
		{ "Sliding.Name", "Sliding" },
		{ "Sprinting.DisplayName", "Sprinting" },
		{ "Sprinting.Name", "Sprinting" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "Walking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SuperShooters_MovementState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SuperShooters,
		nullptr,
		"MovementState",
		"MovementState",
		Z_Construct_UEnum_SuperShooters_MovementState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SuperShooters_MovementState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SuperShooters_MovementState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SuperShooters_MovementState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SuperShooters_MovementState()
	{
		if (!Z_Registration_Info_UEnum_MovementState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_MovementState.InnerSingleton, Z_Construct_UEnum_SuperShooters_MovementState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_MovementState.InnerSingleton;
	}
	void ASuperGod::StaticRegisterNativesASuperGod()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASuperGod);
	UClass* Z_Construct_UClass_ASuperGod_NoRegister()
	{
		return ASuperGod::StaticClass();
	}
	struct Z_Construct_UClass_ASuperGod_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isCrouching_MetaData[];
#endif
		static void NewProp_isCrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isCrouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crouchposition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Crouchposition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forwardVelocityTreshhold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_forwardVelocityTreshhold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isSliding_MetaData[];
#endif
		static void NewProp_isSliding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slideDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_slideDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlidingSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlidingSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentMovementState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_currentMovementState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperGod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperShooters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperGod_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SuperGod.h" },
		{ "ModuleRelativePath", "Public/SuperGod.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperGod_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SuperGod.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperGod_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASuperGod, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASuperGod_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperGod_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperGod_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SuperGod.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperGod_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASuperGod, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASuperGod_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperGod_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperGod_Statics::NewProp_isCrouching_MetaData[] = {
		{ "Category", "SuperGod" },
		{ "ModuleRelativePath", "Public/SuperGod.h" },
	};
#endif
	void Z_Construct_UClass_ASuperGod_Statics::NewProp_isCrouching_SetBit(void* Obj)
	{
		((ASuperGod*)Obj)->isCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASuperGod_Statics::NewProp_isCrouching = { "isCrouching", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASuperGod), &Z_Construct_UClass_ASuperGod_Statics::NewProp_isCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASuperGod_Statics::NewProp_isCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperGod_Statics::NewProp_isCrouching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperGod_Statics::NewProp_Crouchposition_MetaData[] = {
		{ "Category", "SuperGod" },
		{ "ModuleRelativePath", "Public/SuperGod.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASuperGod_Statics::NewProp_Crouchposition = { "Crouchposition", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASuperGod, Crouchposition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASuperGod_Statics::NewProp_Crouchposition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperGod_Statics::NewProp_Crouchposition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperGod_Statics::NewProp_forwardVelocityTreshhold_MetaData[] = {
		{ "Category", "SuperGod" },
		{ "ModuleRelativePath", "Public/SuperGod.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASuperGod_Statics::NewProp_forwardVelocityTreshhold = { "forwardVelocityTreshhold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASuperGod, forwardVelocityTreshhold), METADATA_PARAMS(Z_Construct_UClass_ASuperGod_Statics::NewProp_forwardVelocityTreshhold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperGod_Statics::NewProp_forwardVelocityTreshhold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperGod_Statics::NewProp_isSliding_MetaData[] = {
		{ "Category", "SuperGod" },
		{ "ModuleRelativePath", "Public/SuperGod.h" },
	};
#endif
	void Z_Construct_UClass_ASuperGod_Statics::NewProp_isSliding_SetBit(void* Obj)
	{
		((ASuperGod*)Obj)->isSliding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASuperGod_Statics::NewProp_isSliding = { "isSliding", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASuperGod), &Z_Construct_UClass_ASuperGod_Statics::NewProp_isSliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASuperGod_Statics::NewProp_isSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperGod_Statics::NewProp_isSliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperGod_Statics::NewProp_slideDistance_MetaData[] = {
		{ "Category", "SuperGod" },
		{ "ModuleRelativePath", "Public/SuperGod.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASuperGod_Statics::NewProp_slideDistance = { "slideDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASuperGod, slideDistance), METADATA_PARAMS(Z_Construct_UClass_ASuperGod_Statics::NewProp_slideDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperGod_Statics::NewProp_slideDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperGod_Statics::NewProp_SlidingSpeedMultiplier_MetaData[] = {
		{ "Category", "SuperGod" },
		{ "Comment", "// A value between 0 and 1 that will reduce the sliding speed. Lower values will make the slide stop more quickly.\n" },
		{ "ModuleRelativePath", "Public/SuperGod.h" },
		{ "ToolTip", "A value between 0 and 1 that will reduce the sliding speed. Lower values will make the slide stop more quickly." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASuperGod_Statics::NewProp_SlidingSpeedMultiplier = { "SlidingSpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASuperGod, SlidingSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_ASuperGod_Statics::NewProp_SlidingSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperGod_Statics::NewProp_SlidingSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperGod_Statics::NewProp_currentMovementState_MetaData[] = {
		{ "Category", "SuperGod" },
		{ "ModuleRelativePath", "Public/SuperGod.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASuperGod_Statics::NewProp_currentMovementState = { "currentMovementState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASuperGod, currentMovementState), Z_Construct_UEnum_SuperShooters_MovementState, METADATA_PARAMS(Z_Construct_UClass_ASuperGod_Statics::NewProp_currentMovementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperGod_Statics::NewProp_currentMovementState_MetaData)) }; // 1018402077
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASuperGod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperGod_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperGod_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperGod_Statics::NewProp_isCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperGod_Statics::NewProp_Crouchposition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperGod_Statics::NewProp_forwardVelocityTreshhold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperGod_Statics::NewProp_isSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperGod_Statics::NewProp_slideDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperGod_Statics::NewProp_SlidingSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperGod_Statics::NewProp_currentMovementState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperGod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperGod>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASuperGod_Statics::ClassParams = {
		&ASuperGod::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASuperGod_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASuperGod_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASuperGod_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperGod_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuperGod()
	{
		if (!Z_Registration_Info_UClass_ASuperGod.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASuperGod.OuterSingleton, Z_Construct_UClass_ASuperGod_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASuperGod.OuterSingleton;
	}
	template<> SUPERSHOOTERS_API UClass* StaticClass<ASuperGod>()
	{
		return ASuperGod::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperGod);
	struct Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_Statics::EnumInfo[] = {
		{ MovementState_StaticEnum, TEXT("MovementState"), &Z_Registration_Info_UEnum_MovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1018402077U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASuperGod, ASuperGod::StaticClass, TEXT("ASuperGod"), &Z_Registration_Info_UClass_ASuperGod, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASuperGod), 399812022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_2673784610(TEXT("/Script/SuperShooters"),
		Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_Public_SuperGod_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
