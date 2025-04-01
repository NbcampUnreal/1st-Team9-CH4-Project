// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarfistExpress/Game/GameMode/SEGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSEGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
STARFISTEXPRESS_API UClass* Z_Construct_UClass_ASEGameModeBase();
STARFISTEXPRESS_API UClass* Z_Construct_UClass_ASEGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarfistExpress();
// End Cross Module References

// Begin Class ASEGameModeBase
void ASEGameModeBase::StaticRegisterNativesASEGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASEGameModeBase);
UClass* Z_Construct_UClass_ASEGameModeBase_NoRegister()
{
	return ASEGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ASEGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/GameMode/SEGameModeBase.h" },
		{ "ModuleRelativePath", "Game/GameMode/SEGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASEGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASEGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_StarfistExpress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASEGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASEGameModeBase_Statics::ClassParams = {
	&ASEGameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASEGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASEGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASEGameModeBase()
{
	if (!Z_Registration_Info_UClass_ASEGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASEGameModeBase.OuterSingleton, Z_Construct_UClass_ASEGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASEGameModeBase.OuterSingleton;
}
template<> STARFISTEXPRESS_API UClass* StaticClass<ASEGameModeBase>()
{
	return ASEGameModeBase::StaticClass();
}
ASEGameModeBase::ASEGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASEGameModeBase);
ASEGameModeBase::~ASEGameModeBase() {}
// End Class ASEGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_SEGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASEGameModeBase, ASEGameModeBase::StaticClass, TEXT("ASEGameModeBase"), &Z_Registration_Info_UClass_ASEGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASEGameModeBase), 2149942363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_SEGameModeBase_h_2429829034(TEXT("/Script/StarfistExpress"),
	Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_SEGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_SEGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
