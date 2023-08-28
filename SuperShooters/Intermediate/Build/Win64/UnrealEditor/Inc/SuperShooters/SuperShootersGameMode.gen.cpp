// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperShooters/SuperShootersGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperShootersGameMode() {}
// Cross Module References
	SUPERSHOOTERS_API UClass* Z_Construct_UClass_ASuperShootersGameMode_NoRegister();
	SUPERSHOOTERS_API UClass* Z_Construct_UClass_ASuperShootersGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SuperShooters();
// End Cross Module References
	void ASuperShootersGameMode::StaticRegisterNativesASuperShootersGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASuperShootersGameMode);
	UClass* Z_Construct_UClass_ASuperShootersGameMode_NoRegister()
	{
		return ASuperShootersGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASuperShootersGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperShootersGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperShooters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperShootersGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SuperShootersGameMode.h" },
		{ "ModuleRelativePath", "SuperShootersGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperShootersGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperShootersGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASuperShootersGameMode_Statics::ClassParams = {
		&ASuperShootersGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASuperShootersGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperShootersGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuperShootersGameMode()
	{
		if (!Z_Registration_Info_UClass_ASuperShootersGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASuperShootersGameMode.OuterSingleton, Z_Construct_UClass_ASuperShootersGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASuperShootersGameMode.OuterSingleton;
	}
	template<> SUPERSHOOTERS_API UClass* StaticClass<ASuperShootersGameMode>()
	{
		return ASuperShootersGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperShootersGameMode);
	struct Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_SuperShootersGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_SuperShootersGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASuperShootersGameMode, ASuperShootersGameMode::StaticClass, TEXT("ASuperShootersGameMode"), &Z_Registration_Info_UClass_ASuperShootersGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASuperShootersGameMode), 804407799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_SuperShootersGameMode_h_2651497767(TEXT("/Script/SuperShooters"),
		Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_SuperShootersGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperShooters_Source_SuperShooters_SuperShootersGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
