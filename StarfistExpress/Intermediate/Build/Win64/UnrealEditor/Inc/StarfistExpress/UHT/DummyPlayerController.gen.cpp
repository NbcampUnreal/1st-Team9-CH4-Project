// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarfistExpress/Player/PlayerController/DummyPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDummyPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
STARFISTEXPRESS_API UClass* Z_Construct_UClass_ADummyPlayerController();
STARFISTEXPRESS_API UClass* Z_Construct_UClass_ADummyPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarfistExpress();
// End Cross Module References

// Begin Class ADummyPlayerController
void ADummyPlayerController::StaticRegisterNativesADummyPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADummyPlayerController);
UClass* Z_Construct_UClass_ADummyPlayerController_NoRegister()
{
	return ADummyPlayerController::StaticClass();
}
struct Z_Construct_UClass_ADummyPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/PlayerController/DummyPlayerController.h" },
		{ "ModuleRelativePath", "Player/PlayerController/DummyPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADummyPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADummyPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_StarfistExpress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADummyPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADummyPlayerController_Statics::ClassParams = {
	&ADummyPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADummyPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADummyPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADummyPlayerController()
{
	if (!Z_Registration_Info_UClass_ADummyPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADummyPlayerController.OuterSingleton, Z_Construct_UClass_ADummyPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADummyPlayerController.OuterSingleton;
}
template<> STARFISTEXPRESS_API UClass* StaticClass<ADummyPlayerController>()
{
	return ADummyPlayerController::StaticClass();
}
ADummyPlayerController::ADummyPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADummyPlayerController);
ADummyPlayerController::~ADummyPlayerController() {}
// End Class ADummyPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Player_PlayerController_DummyPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADummyPlayerController, ADummyPlayerController::StaticClass, TEXT("ADummyPlayerController"), &Z_Registration_Info_UClass_ADummyPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADummyPlayerController), 3207352750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Player_PlayerController_DummyPlayerController_h_611699539(TEXT("/Script/StarfistExpress"),
	Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Player_PlayerController_DummyPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Player_PlayerController_DummyPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
