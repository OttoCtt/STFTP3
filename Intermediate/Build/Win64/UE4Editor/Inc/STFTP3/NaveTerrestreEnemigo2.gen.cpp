// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STFTP3/NaveTerrestreEnemigo2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveTerrestreEnemigo2() {}
// Cross Module References
	STFTP3_API UClass* Z_Construct_UClass_ANaveTerrestreEnemigo2_NoRegister();
	STFTP3_API UClass* Z_Construct_UClass_ANaveTerrestreEnemigo2();
	STFTP3_API UClass* Z_Construct_UClass_ANaveTerrestre();
	UPackage* Z_Construct_UPackage__Script_STFTP3();
// End Cross Module References
	void ANaveTerrestreEnemigo2::StaticRegisterNativesANaveTerrestreEnemigo2()
	{
	}
	UClass* Z_Construct_UClass_ANaveTerrestreEnemigo2_NoRegister()
	{
		return ANaveTerrestreEnemigo2::StaticClass();
	}
	struct Z_Construct_UClass_ANaveTerrestreEnemigo2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveTerrestreEnemigo2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveTerrestre,
		(UObject* (*)())Z_Construct_UPackage__Script_STFTP3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveTerrestreEnemigo2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveTerrestreEnemigo2.h" },
		{ "ModuleRelativePath", "NaveTerrestreEnemigo2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveTerrestreEnemigo2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveTerrestreEnemigo2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveTerrestreEnemigo2_Statics::ClassParams = {
		&ANaveTerrestreEnemigo2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveTerrestreEnemigo2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveTerrestreEnemigo2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveTerrestreEnemigo2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveTerrestreEnemigo2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveTerrestreEnemigo2, 4031563520);
	template<> STFTP3_API UClass* StaticClass<ANaveTerrestreEnemigo2>()
	{
		return ANaveTerrestreEnemigo2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveTerrestreEnemigo2(Z_Construct_UClass_ANaveTerrestreEnemigo2, &ANaveTerrestreEnemigo2::StaticClass, TEXT("/Script/STFTP3"), TEXT("ANaveTerrestreEnemigo2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveTerrestreEnemigo2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
