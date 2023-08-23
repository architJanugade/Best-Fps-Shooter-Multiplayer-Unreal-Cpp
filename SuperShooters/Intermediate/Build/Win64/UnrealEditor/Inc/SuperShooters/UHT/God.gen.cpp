// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperShooters/Private/God.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGod() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SUPERSHOOTERS_API UClass* Z_Construct_UClass_AGod();
	SUPERSHOOTERS_API UClass* Z_Construct_UClass_AGod_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperShooters();
// End Cross Module References
	void AGod::StaticRegisterNativesAGod()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGod);
	UClass* Z_Construct_UClass_AGod_NoRegister()
	{
		return AGod::StaticClass();
	}
	struct Z_Construct_UClass_AGod_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperShooters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGod_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "God.h" },
		{ "ModuleRelativePath", "Private/God.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGod>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGod_Statics::ClassParams = {
		&AGod::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGod_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGod_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGod()
	{
		if (!Z_Registration_Info_UClass_AGod.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGod.OuterSingleton, Z_Construct_UClass_AGod_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGod.OuterSingleton;
	}
	template<> SUPERSHOOTERS_API UClass* StaticClass<AGod>()
	{
		return AGod::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGod);
	AGod::~AGod() {}
	struct Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_Private_God_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_Private_God_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGod, AGod::StaticClass, TEXT("AGod"), &Z_Registration_Info_UClass_AGod, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGod), 649780008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_Private_God_h_2270515648(TEXT("/Script/SuperShooters"),
		Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_Private_God_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_Private_God_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
