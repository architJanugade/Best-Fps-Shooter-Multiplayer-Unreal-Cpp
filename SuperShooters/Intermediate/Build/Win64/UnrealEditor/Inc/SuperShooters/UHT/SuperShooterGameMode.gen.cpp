// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperShooters/Public/SuperShooterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperShooterGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SUPERSHOOTERS_API UClass* Z_Construct_UClass_ASuperShooterGameMode();
	SUPERSHOOTERS_API UClass* Z_Construct_UClass_ASuperShooterGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperShooters();
// End Cross Module References
	void ASuperShooterGameMode::StaticRegisterNativesASuperShooterGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASuperShooterGameMode);
	UClass* Z_Construct_UClass_ASuperShooterGameMode_NoRegister()
	{
		return ASuperShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASuperShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperShooters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SuperShooterGameMode.h" },
		{ "ModuleRelativePath", "Public/SuperShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperShooterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASuperShooterGameMode_Statics::ClassParams = {
		&ASuperShooterGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASuperShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuperShooterGameMode()
	{
		if (!Z_Registration_Info_UClass_ASuperShooterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASuperShooterGameMode.OuterSingleton, Z_Construct_UClass_ASuperShooterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASuperShooterGameMode.OuterSingleton;
	}
	template<> SUPERSHOOTERS_API UClass* StaticClass<ASuperShooterGameMode>()
	{
		return ASuperShooterGameMode::StaticClass();
	}
	ASuperShooterGameMode::ASuperShooterGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperShooterGameMode);
	ASuperShooterGameMode::~ASuperShooterGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_Public_SuperShooterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_Public_SuperShooterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASuperShooterGameMode, ASuperShooterGameMode::StaticClass, TEXT("ASuperShooterGameMode"), &Z_Registration_Info_UClass_ASuperShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASuperShooterGameMode), 3571361444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_Public_SuperShooterGameMode_h_2768289498(TEXT("/Script/SuperShooters"),
		Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_Public_SuperShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_Public_SuperShooterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
