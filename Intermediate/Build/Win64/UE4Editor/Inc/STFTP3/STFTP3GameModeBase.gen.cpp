// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STFTP3/STFTP3GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTFTP3GameModeBase() {}
// Cross Module References
	STFTP3_API UClass* Z_Construct_UClass_ASTFTP3GameModeBase_NoRegister();
	STFTP3_API UClass* Z_Construct_UClass_ASTFTP3GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_STFTP3();
// End Cross Module References
	void ASTFTP3GameModeBase::StaticRegisterNativesASTFTP3GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASTFTP3GameModeBase_NoRegister()
	{
		return ASTFTP3GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASTFTP3GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTFTP3GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_STFTP3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTFTP3GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "STFTP3GameModeBase.h" },
		{ "ModuleRelativePath", "STFTP3GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTFTP3GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTFTP3GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTFTP3GameModeBase_Statics::ClassParams = {
		&ASTFTP3GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASTFTP3GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTFTP3GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTFTP3GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTFTP3GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTFTP3GameModeBase, 97687777);
	template<> STFTP3_API UClass* StaticClass<ASTFTP3GameModeBase>()
	{
		return ASTFTP3GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTFTP3GameModeBase(Z_Construct_UClass_ASTFTP3GameModeBase, &ASTFTP3GameModeBase::StaticClass, TEXT("/Script/STFTP3"), TEXT("ASTFTP3GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTFTP3GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
