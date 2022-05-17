// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STFTP3/NaveTerrestreEnemigo1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveTerrestreEnemigo1() {}
// Cross Module References
	STFTP3_API UClass* Z_Construct_UClass_ANaveTerrestreEnemigo1_NoRegister();
	STFTP3_API UClass* Z_Construct_UClass_ANaveTerrestreEnemigo1();
	STFTP3_API UClass* Z_Construct_UClass_ANaveTerrestre();
	UPackage* Z_Construct_UPackage__Script_STFTP3();
// End Cross Module References
	void ANaveTerrestreEnemigo1::StaticRegisterNativesANaveTerrestreEnemigo1()
	{
	}
	UClass* Z_Construct_UClass_ANaveTerrestreEnemigo1_NoRegister()
	{
		return ANaveTerrestreEnemigo1::StaticClass();
	}
	struct Z_Construct_UClass_ANaveTerrestreEnemigo1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveTerrestreEnemigo1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveTerrestre,
		(UObject* (*)())Z_Construct_UPackage__Script_STFTP3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveTerrestreEnemigo1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveTerrestreEnemigo1.h" },
		{ "ModuleRelativePath", "NaveTerrestreEnemigo1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveTerrestreEnemigo1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveTerrestreEnemigo1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveTerrestreEnemigo1_Statics::ClassParams = {
		&ANaveTerrestreEnemigo1::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveTerrestreEnemigo1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveTerrestreEnemigo1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveTerrestreEnemigo1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveTerrestreEnemigo1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveTerrestreEnemigo1, 1760655440);
	template<> STFTP3_API UClass* StaticClass<ANaveTerrestreEnemigo1>()
	{
		return ANaveTerrestreEnemigo1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveTerrestreEnemigo1(Z_Construct_UClass_ANaveTerrestreEnemigo1, &ANaveTerrestreEnemigo1::StaticClass, TEXT("/Script/STFTP3"), TEXT("ANaveTerrestreEnemigo1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveTerrestreEnemigo1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
