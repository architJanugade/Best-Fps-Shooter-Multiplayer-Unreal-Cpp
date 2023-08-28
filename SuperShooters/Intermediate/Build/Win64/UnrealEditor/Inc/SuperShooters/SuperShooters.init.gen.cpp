// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperShooters_init() {}
	SUPERSHOOTERS_API UFunction* Z_Construct_UDelegateFunction_SuperShooters_OnPickUp__DelegateSignature();
	SUPERSHOOTERS_API UFunction* Z_Construct_UDelegateFunction_SuperShooters_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SuperShooters;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SuperShooters()
	{
		if (!Z_Registration_Info_UPackage__Script_SuperShooters.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SuperShooters_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SuperShooters_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SuperShooters",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEEB7D604,
				0x0444C724,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SuperShooters.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SuperShooters.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SuperShooters(Z_Construct_UPackage__Script_SuperShooters, TEXT("/Script/SuperShooters"), Z_Registration_Info_UPackage__Script_SuperShooters, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEEB7D604, 0x0444C724));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
