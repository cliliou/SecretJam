// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SJam/SJamGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSJamGameMode() {}
// Cross Module References
	SJAM_API UClass* Z_Construct_UClass_ASJamGameMode_NoRegister();
	SJAM_API UClass* Z_Construct_UClass_ASJamGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SJam();
// End Cross Module References
	void ASJamGameMode::StaticRegisterNativesASJamGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASJamGameMode);
	UClass* Z_Construct_UClass_ASJamGameMode_NoRegister()
	{
		return ASJamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASJamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASJamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SJam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJamGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SJamGameMode.h" },
		{ "ModuleRelativePath", "SJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASJamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASJamGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASJamGameMode_Statics::ClassParams = {
		&ASJamGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASJamGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASJamGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASJamGameMode()
	{
		if (!Z_Registration_Info_UClass_ASJamGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASJamGameMode.OuterSingleton, Z_Construct_UClass_ASJamGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASJamGameMode.OuterSingleton;
	}
	template<> SJAM_API UClass* StaticClass<ASJamGameMode>()
	{
		return ASJamGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASJamGameMode);
	struct Z_CompiledInDeferFile_FID_SJam_Source_SJam_SJamGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SJam_Source_SJam_SJamGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASJamGameMode, ASJamGameMode::StaticClass, TEXT("ASJamGameMode"), &Z_Registration_Info_UClass_ASJamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASJamGameMode), 1023748343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SJam_Source_SJam_SJamGameMode_h_2561895121(TEXT("/Script/SJam"),
		Z_CompiledInDeferFile_FID_SJam_Source_SJam_SJamGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SJam_Source_SJam_SJamGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
