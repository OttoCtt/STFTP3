// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STFTP3/NaveAereaEnemigo1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAereaEnemigo1() {}
// Cross Module References
	STFTP3_API UClass* Z_Construct_UClass_ANaveAereaEnemigo1_NoRegister();
	STFTP3_API UClass* Z_Construct_UClass_ANaveAereaEnemigo1();
	STFTP3_API UClass* Z_Construct_UClass_ANaveAerea();
	UPackage* Z_Construct_UPackage__Script_STFTP3();
// End Cross Module References
	void ANaveAereaEnemigo1::StaticRegisterNativesANaveAereaEnemigo1()
	{
	}
	UClass* Z_Construct_UClass_ANaveAereaEnemigo1_NoRegister()
	{
		return ANaveAereaEnemigo1::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAereaEnemigo1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAereaEnemigo1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveAerea,
		(UObject* (*)())Z_Construct_UPackage__Script_STFTP3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAereaEnemigo1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveAereaEnemigo1.h" },
		{ "ModuleRelativePath", "NaveAereaEnemigo1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAereaEnemigo1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAereaEnemigo1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAereaEnemigo1_Statics::ClassParams = {
		&ANaveAereaEnemigo1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveAereaEnemigo1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAereaEnemigo1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAereaEnemigo1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAereaEnemigo1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAereaEnemigo1, 4273502977);
	template<> STFTP3_API UClass* StaticClass<ANaveAereaEnemigo1>()
	{
		return ANaveAereaEnemigo1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAereaEnemigo1(Z_Construct_UClass_ANaveAereaEnemigo1, &ANaveAereaEnemigo1::StaticClass, TEXT("/Script/STFTP3"), TEXT("ANaveAereaEnemigo1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAereaEnemigo1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
