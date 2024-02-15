// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingCourt/Target.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTarget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TESTINGCOURT_API UClass* Z_Construct_UClass_ATarget();
	TESTINGCOURT_API UClass* Z_Construct_UClass_ATarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestingCourt();
// End Cross Module References
	void ATarget::StaticRegisterNativesATarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATarget);
	UClass* Z_Construct_UClass_ATarget_NoRegister()
	{
		return ATarget::StaticClass();
	}
	struct Z_Construct_UClass_ATarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingCourt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Target.h" },
		{ "ModuleRelativePath", "Target.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATarget_Statics::ClassParams = {
		&ATarget::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams), Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATarget()
	{
		if (!Z_Registration_Info_UClass_ATarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATarget.OuterSingleton, Z_Construct_UClass_ATarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATarget.OuterSingleton;
	}
	template<> TESTINGCOURT_API UClass* StaticClass<ATarget>()
	{
		return ATarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATarget);
	ATarget::~ATarget() {}
	struct Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_Target_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_Target_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATarget, ATarget::StaticClass, TEXT("ATarget"), &Z_Registration_Info_UClass_ATarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATarget), 2186581867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_Target_h_2868490013(TEXT("/Script/TestingCourt"),
		Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_Target_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_Target_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
