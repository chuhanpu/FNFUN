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

// Function PerksList.PerksList_C.ResetVariables
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerksList_C::ResetVariables()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe4c55e3b);

	UPerksList_C_ResetVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.OnGeneratePerkTier
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortUIPerkTier*        FortPerkTier                   (CPF_Parm)
// class UFortPerkTierWidget_NUI** PerkTierWidget                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerksList_C::OnGeneratePerkTier(struct FFortUIPerkTier* FortPerkTier, class UFortPerkTierWidget_NUI** PerkTierWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x92c6178d);

	UPerksList_C_OnGeneratePerkTier_Params params;
	params.FortPerkTier = FortPerkTier;
	params.PerkTierWidget = PerkTierWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.OnGeneratePerk
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortUIPerk*            FortPerk                       (CPF_Parm)
// class UFortPerkWidget_NUI**    PerkWidget                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerksList_C::OnGeneratePerk(struct FFortUIPerk* FortPerk, class UFortPerkWidget_NUI** PerkWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x61c420cd);

	UPerksList_C_OnGeneratePerk_Params params;
	params.FortPerk = FortPerk;
	params.PerkWidget = PerkWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPerksList_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x33cab7a6);

	UPerksList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.OnHeroChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPerksList_C::OnHeroChanged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb143d99c);

	UPerksList_C_OnHeroChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.OnStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPerksList_C::OnStateChanged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7e300af1);

	UPerksList_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.ExecuteUbergraph_PerksList
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerksList_C::ExecuteUbergraph_PerksList(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6df63642);

	UPerksList_C_ExecuteUbergraph_PerksList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
