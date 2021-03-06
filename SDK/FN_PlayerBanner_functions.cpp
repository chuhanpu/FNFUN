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

// Function PlayerBanner.PlayerBanner_C.ClearBannerState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerBanner_C::ClearBannerState()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x67db4ad);

	UPlayerBanner_C_ClearBannerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.OnBannerIconLoaded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 LoadedObject                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::OnBannerIconLoaded(class UObject* LoadedObject)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3a3a6cb0);

	UPlayerBanner_C_OnBannerIconLoaded_Params params;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.GetBannerMID
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* BannerMID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::GetBannerMID(class UMaterialInstanceDynamic** BannerMID)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x73657dd1);

	UPlayerBanner_C_GetBannerMID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BannerMID != nullptr)
		*BannerMID = params.BannerMID;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerOwner
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        OwnerId                        (CPF_Parm)

void UPlayerBanner_C::SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfd6b4f4a);

	UPlayerBanner_C_SetBannerOwner_Params params;
	params.OwnerId = OwnerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerColorId
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InBannerColorId                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::SetBannerColorId(const struct FName& InBannerColorId)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x48dbb885);

	UPlayerBanner_C_SetBannerColorId_Params params;
	params.InBannerColorId = InBannerColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerIconId
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InBannerIconId                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::SetBannerIconId(const struct FName& InBannerIconId)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x56616bf5);

	UPlayerBanner_C_SetBannerIconId_Params params;
	params.InBannerIconId = InBannerIconId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerImage
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortHomeBaseInfo       Image_info                     (CPF_Parm)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa9b37f90);

	UPlayerBanner_C_SetBannerImage_Params params;
	params.Image_info = Image_info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PlayerBanner.PlayerBanner_C.OnTeamMemberStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm)

void UPlayerBanner_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xff8d267e);

	UPlayerBanner_C_OnTeamMemberStateChanged_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2c64985b);

	UPlayerBanner_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::ExecuteUbergraph_PlayerBanner(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x82e9d894);

	UPlayerBanner_C_ExecuteUbergraph_PlayerBanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
