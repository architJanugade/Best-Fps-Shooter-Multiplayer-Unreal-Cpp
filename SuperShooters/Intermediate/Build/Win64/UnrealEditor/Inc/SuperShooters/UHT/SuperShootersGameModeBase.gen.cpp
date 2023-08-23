// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperShooters/SuperShootersGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperShootersGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SUPERSHOOTERS_API UClass* Z_Construct_UClass_ASuperShootersGameModeBase();
	SUPERSHOOTERS_API UClass* Z_Construct_UClass_ASuperShootersGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperShooters();
// End Cross Module References
	void ASuperShootersGameModeBase::StaticRegisterNativesASuperShootersGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASuperShootersGameModeBase);
	UClass* Z_Construct_UClass_ASuperShootersGameModeBase_NoRegister()
	{
		return ASuperShootersGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASuperShootersGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperShootersGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperShooters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperShootersGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SuperShootersGameModeBase.h" },
		{ "ModuleRelativePath", "SuperShootersGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperShootersGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperShootersGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASuperShootersGameModeBase_Statics::ClassParams = {
		&ASuperShootersGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASuperShootersGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperShootersGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuperShootersGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASuperShootersGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASuperShootersGameModeBase.OuterSingleton, Z_Construct_UClass_ASuperShootersGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASuperShootersGameModeBase.OuterSingleton;
	}
	template<> SUPERSHOOTERS_API UClass* StaticClass<ASuperShootersGameModeBase>()
	{
		return ASuperShootersGameModeBase::StaticClass();
	}
	ASuperShootersGameModeBase::ASuperShootersGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperShootersGameModeBase);
	ASuperShootersGameModeBase::~ASuperShootersGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_SuperShootersGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_SuperShootersGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASuperShootersGameModeBase, ASuperShootersGameModeBase::StaticClass, TEXT("ASuperShootersGameModeBase"), &Z_Registration_Info_UClass_ASuperShootersGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASuperShootersGameModeBase), 1566939493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_SuperShootersGameModeBase_h_1111487459(TEXT("/Script/SuperShooters"),
		Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_SuperShootersGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_janug_Files_Github_UnrealEngine_Projects_Best_Fps_Shooter_Multiplayer_Unreal_Cpp_SuperShooters_Source_SuperShooters_SuperShootersGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
