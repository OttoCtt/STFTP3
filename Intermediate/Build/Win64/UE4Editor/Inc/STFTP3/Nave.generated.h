// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STFTP3_Nave_generated_h
#error "Nave.generated.h already included, missing '#pragma once' in Nave.h"
#endif
#define STFTP3_Nave_generated_h

#define STFTP3_Source_STFTP3_Nave_h_14_SPARSE_DATA
#define STFTP3_Source_STFTP3_Nave_h_14_RPC_WRAPPERS
#define STFTP3_Source_STFTP3_Nave_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define STFTP3_Source_STFTP3_Nave_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANave(); \
	friend struct Z_Construct_UClass_ANave_Statics; \
public: \
	DECLARE_CLASS(ANave, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STFTP3"), NO_API) \
	DECLARE_SERIALIZER(ANave)


#define STFTP3_Source_STFTP3_Nave_h_14_INCLASS \
private: \
	static void StaticRegisterNativesANave(); \
	friend struct Z_Construct_UClass_ANave_Statics; \
public: \
	DECLARE_CLASS(ANave, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STFTP3"), NO_API) \
	DECLARE_SERIALIZER(ANave)


#define STFTP3_Source_STFTP3_Nave_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANave(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANave(ANave&&); \
	NO_API ANave(const ANave&); \
public:


#define STFTP3_Source_STFTP3_Nave_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANave(ANave&&); \
	NO_API ANave(const ANave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANave); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANave)


#define STFTP3_Source_STFTP3_Nave_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(ANave, ShipMeshComponent); }


#define STFTP3_Source_STFTP3_Nave_h_11_PROLOG
#define STFTP3_Source_STFTP3_Nave_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STFTP3_Source_STFTP3_Nave_h_14_PRIVATE_PROPERTY_OFFSET \
	STFTP3_Source_STFTP3_Nave_h_14_SPARSE_DATA \
	STFTP3_Source_STFTP3_Nave_h_14_RPC_WRAPPERS \
	STFTP3_Source_STFTP3_Nave_h_14_INCLASS \
	STFTP3_Source_STFTP3_Nave_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STFTP3_Source_STFTP3_Nave_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STFTP3_Source_STFTP3_Nave_h_14_PRIVATE_PROPERTY_OFFSET \
	STFTP3_Source_STFTP3_Nave_h_14_SPARSE_DATA \
	STFTP3_Source_STFTP3_Nave_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	STFTP3_Source_STFTP3_Nave_h_14_INCLASS_NO_PURE_DECLS \
	STFTP3_Source_STFTP3_Nave_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STFTP3_API UClass* StaticClass<class ANave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STFTP3_Source_STFTP3_Nave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
