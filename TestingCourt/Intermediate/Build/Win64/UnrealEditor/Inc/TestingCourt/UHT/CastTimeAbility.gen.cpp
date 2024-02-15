// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingCourt/CastTimeAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCastTimeAbility() {}
// Cross Module References
	TESTINGCOURT_API UClass* Z_Construct_UClass_AAbility();
	TESTINGCOURT_API UClass* Z_Construct_UClass_ACastTimeAbility();
	TESTINGCOURT_API UClass* Z_Construct_UClass_ACastTimeAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestingCourt();
// End Cross Module References
	void ACastTimeAbility::StaticRegisterNativesACastTimeAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACastTimeAbility);
	UClass* Z_Construct_UClass_ACastTimeAbility_NoRegister()
	{
		return ACastTimeAbility::StaticClass();
	}
	struct Z_Construct_UClass_ACastTimeAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACastTimeAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingCourt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACastTimeAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastTimeAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CastTimeAbility.h" },
		{ "ModuleRelativePath", "CastTimeAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastTimeAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastTimeAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACastTimeAbility_Statics::ClassParams = {
		&ACastTimeAbility::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACastTimeAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_ACastTimeAbility_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACastTimeAbility()
	{
		if (!Z_Registration_Info_UClass_ACastTimeAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACastTimeAbility.OuterSingleton, Z_Construct_UClass_ACastTimeAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACastTimeAbility.OuterSingleton;
	}
	template<> TESTINGCOURT_API UClass* StaticClass<ACastTimeAbility>()
	{
		return ACastTimeAbility::StaticClass();
	}
	ACastTimeAbility::ACastTimeAbility() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastTimeAbility);
	ACastTimeAbility::~ACastTimeAbility() {}
	struct Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_CastTimeAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_CastTimeAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACastTimeAbility, ACastTimeAbility::StaticClass, TEXT("ACastTimeAbility"), &Z_Registration_Info_UClass_ACastTimeAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACastTimeAbility), 2862790078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_CastTimeAbility_h_3698416907(TEXT("/Script/TestingCourt"),
		Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_CastTimeAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_CastTimeAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
