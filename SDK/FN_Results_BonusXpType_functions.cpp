// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Results_BonusXpType.Results_BonusXpType_C.setInformation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InXPAmount                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   PlayerName                     (CPF_Parm)
// struct FName                   InType                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_BonusXpType_C::setInformation(int InXPAmount, const struct FText& PlayerName, const struct FName& InType)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa4cf649d);

	UResults_BonusXpType_C_setInformation_Params params;
	params.InXPAmount = InXPAmount;
	params.PlayerName = PlayerName;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BonusXpType.Results_BonusXpType_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UResults_BonusXpType_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb8d807ce);

	UResults_BonusXpType_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BonusXpType.Results_BonusXpType_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_BonusXpType_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb7c40055);

	UResults_BonusXpType_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BonusXpType.Results_BonusXpType_C.ExecuteUbergraph_Results_BonusXpType
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_BonusXpType_C::ExecuteUbergraph_Results_BonusXpType(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9e785b03);

	UResults_BonusXpType_C_ExecuteUbergraph_Results_BonusXpType_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
