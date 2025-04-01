// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerController/SEPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFISTEXPRESS_SEPlayerController_generated_h
#error "SEPlayerController.generated.h already included, missing '#pragma once' in SEPlayerController.h"
#endif
#define STARFISTEXPRESS_SEPlayerController_generated_h

#define FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Player_PlayerController_SEPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASEPlayerController(); \
	friend struct Z_Construct_UClass_ASEPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASEPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarfistExpress"), NO_API) \
	DECLARE_SERIALIZER(ASEPlayerController)


#define FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Player_PlayerController_SEPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASEPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASEPlayerController(ASEPlayerController&&); \
	ASEPlayerController(const ASEPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASEPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASEPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASEPlayerController) \
	NO_API virtual ~ASEPlayerController();


#define FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Player_PlayerController_SEPlayerController_h_12_PROLOG
#define FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Player_PlayerController_SEPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Player_PlayerController_SEPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Player_PlayerController_SEPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFISTEXPRESS_API UClass* StaticClass<class ASEPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Player_PlayerController_SEPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
