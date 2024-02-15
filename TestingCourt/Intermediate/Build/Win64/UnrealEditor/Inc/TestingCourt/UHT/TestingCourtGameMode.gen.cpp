// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingCourt/TestingCourtGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingCourtGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TESTINGCOURT_API UClass* Z_Construct_UClass_ATestingCourtGameMode();
	TESTINGCOURT_API UClass* Z_Construct_UClass_ATestingCourtGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestingCourt();
// End Cross Module References
	void ATestingCourtGameMode::StaticRegisterNativesATestingCourtGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestingCourtGameMode);
	UClass* Z_Construct_UClass_ATestingCourtGameMode_NoRegister()
	{
		return ATestingCourtGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestingCourtGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestingCourtGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingCourt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestingCourtGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingCourtGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestingCourtGameMode.h" },
		{ "ModuleRelativePath", "TestingCourtGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestingCourtGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestingCourtGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestingCourtGameMode_Statics::ClassParams = {
		&ATestingCourtGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestingCourtGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestingCourtGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATestingCourtGameMode()
	{
		if (!Z_Registration_Info_UClass_ATestingCourtGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestingCourtGameMode.OuterSingleton, Z_Construct_UClass_ATestingCourtGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestingCourtGameMode.OuterSingleton;
	}
	template<> TESTINGCOURT_API UClass* StaticClass<ATestingCourtGameMode>()
	{
		return ATestingCourtGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestingCourtGameMode);
	ATestingCourtGameMode::~ATestingCourtGameMode() {}
	struct Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_TestingCourtGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_TestingCourtGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestingCourtGameMode, ATestingCourtGameMode::StaticClass, TEXT("ATestingCourtGameMode"), &Z_Registration_Info_UClass_ATestingCourtGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestingCourtGameMode), 1859470912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_TestingCourtGameMode_h_3591312359(TEXT("/Script/TestingCourt"),
		Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_TestingCourtGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingCourt_Source_TestingCourt_TestingCourtGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
