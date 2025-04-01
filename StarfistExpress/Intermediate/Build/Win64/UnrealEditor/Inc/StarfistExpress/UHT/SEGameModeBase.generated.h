// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/GameMode/SEGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFISTEXPRESS_SEGameModeBase_generated_h
#error "SEGameModeBase.generated.h already included, missing '#pragma once' in SEGameModeBase.h"
#endif
#define STARFISTEXPRESS_SEGameModeBase_generated_h

#define FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_SEGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASEGameModeBase(); \
	friend struct Z_Construct_UClass_ASEGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASEGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarfistExpress"), NO_API) \
	DECLARE_SERIALIZER(ASEGameModeBase)


#define FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_SEGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASEGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASEGameModeBase(ASEGameModeBase&&); \
	ASEGameModeBase(const ASEGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASEGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASEGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASEGameModeBase) \
	NO_API virtual ~ASEGameModeBase();


#define FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_SEGameModeBase_h_12_PROLOG
#define FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_SEGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_SEGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_SEGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFISTEXPRESS_API UClass* StaticClass<class ASEGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seung_Documents_GitHub_StartfistExpress_StarfistExpress_Source_StarfistExpress_Game_GameMode_SEGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
