// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingCourt/Ability.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbility() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TESTINGCOURT_API UClass* Z_Construct_UClass_AAbility();
	TESTINGCOURT_API UClass* Z_Construct_UClass_AAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestingCourt();
// End Cross Module References
	void AAbility::StaticRegisterNativesAAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAbility);
	UClass* Z_Construct_UClass_AAbility_NoRegister()
	{
		return AAbility::StaticClass();
	}
	struct Z_Construct_UClass_AAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingCourt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ability.h" },
		{ "ModuleRelativePath", "Ability.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAbility_Statics::ClassParams = {
		&AAbility::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_AAbility_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAbility()
	{
		if (!Z_Registration_Info_UClass_AAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAbility.OuterSingleton, Z_Construct_UClass_AAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAbility.OuterSingleton;
	}
	template<> TESTINGCOURT_API UClass* StaticClass<AAbility>()
	{
		return AAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbility);
	AAbility::~AAbility() {}
	struct Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_Ability_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_Ability_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAbility, AAbility::StaticClass, TEXT("AAbility"), &Z_Registration_Info_UClass_AAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAbility), 2166516036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_Ability_h_3365554728(TEXT("/Script/TestingCourt"),
		Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_Ability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_Ability_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
