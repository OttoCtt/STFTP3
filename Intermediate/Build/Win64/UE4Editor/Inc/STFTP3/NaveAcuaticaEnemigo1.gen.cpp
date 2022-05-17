// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STFTP3/NaveAcuaticaEnemigo1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAcuaticaEnemigo1() {}
// Cross Module References
	STFTP3_API UClass* Z_Construct_UClass_ANaveAcuaticaEnemigo1_NoRegister();
	STFTP3_API UClass* Z_Construct_UClass_ANaveAcuaticaEnemigo1();
	STFTP3_API UClass* Z_Construct_UClass_ANaveAcuatica();
	UPackage* Z_Construct_UPackage__Script_STFTP3();
// End Cross Module References
	void ANaveAcuaticaEnemigo1::StaticRegisterNativesANaveAcuaticaEnemigo1()
	{
	}
	UClass* Z_Construct_UClass_ANaveAcuaticaEnemigo1_NoRegister()
	{
		return ANaveAcuaticaEnemigo1::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAcuaticaEnemigo1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAcuaticaEnemigo1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveAcuatica,
		(UObject* (*)())Z_Construct_UPackage__Script_STFTP3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAcuaticaEnemigo1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveAcuaticaEnemigo1.h" },
		{ "ModuleRelativePath", "NaveAcuaticaEnemigo1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAcuaticaEnemigo1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAcuaticaEnemigo1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAcuaticaEnemigo1_Statics::ClassParams = {
		&ANaveAcuaticaEnemigo1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveAcuaticaEnemigo1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAcuaticaEnemigo1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAcuaticaEnemigo1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAcuaticaEnemigo1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAcuaticaEnemigo1, 296551254);
	template<> STFTP3_API UClass* StaticClass<ANaveAcuaticaEnemigo1>()
	{
		return ANaveAcuaticaEnemigo1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAcuaticaEnemigo1(Z_Construct_UClass_ANaveAcuaticaEnemigo1, &ANaveAcuaticaEnemigo1::StaticClass, TEXT("/Script/STFTP3"), TEXT("ANaveAcuaticaEnemigo1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAcuaticaEnemigo1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
