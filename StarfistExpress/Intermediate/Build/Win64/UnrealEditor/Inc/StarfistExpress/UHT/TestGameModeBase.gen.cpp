// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarfistExpress/Game/GameMode/TestGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
STARFISTEXPRESS_API UClass* Z_Construct_UClass_ATestGameModeBase();
STARFISTEXPRESS_API UClass* Z_Construct_UClass_ATestGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarfistExpress();
// End Cross Module References

// Begin Class ATestGameModeBase
void ATestGameModeBase::StaticRegisterNativesATestGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestGameModeBase);
UClass* Z_Construct_UClass_ATestGameModeBase_NoRegister()
{
	return ATestGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ATestGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/GameMode/TestGameModeBase.h" },
		{ "ModuleRelativePath", "Game/GameMode/TestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_StarfistExpress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestGameModeBase_Statics::ClassParams = {
	&ATestGameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestGameModeBase()
{
	if (!Z_Registration_Info_UClass_ATestGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestGameModeBase.OuterSingleton, Z_Construct_UClass_ATestGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestGameModeBase.OuterSingleton;
}
template<> STARFISTEXPRESS_API UClass* StaticClass<ATestGameModeBase>()
{
	return ATestGameModeBase::StaticClass();
}
ATestGameModeBase::ATestGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestGameModeBase);
ATestGameModeBase::~ATestGameModeBase() {}
// End Class ATestGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_TestGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestGameModeBase, ATestGameModeBase::StaticClass, TEXT("ATestGameModeBase"), &Z_Registration_Info_UClass_ATestGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestGameModeBase), 447306456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_TestGameModeBase_h_310538672(TEXT("/Script/StarfistExpress"),
	Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_TestGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_TestGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
