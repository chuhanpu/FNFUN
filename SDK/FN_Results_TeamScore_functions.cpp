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

// Function Results_TeamScore.Results_TeamScore_C.Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamScore_C::Focus()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc1fcbce9);

	UResults_TeamScore_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.InitializeDelays
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamScore_C::InitializeDelays()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3d41bdc1);

	UResults_TeamScore_C_InitializeDelays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.SkipToFinalState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamScore_C::SkipToFinalState()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc53a0a9a);

	UResults_TeamScore_C_SkipToFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      ScoreReport                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UResults_TeamTotalScore_C* TeamTotalScore                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeamScore_C::Initialize(class UFortUIScoreReport* ScoreReport, class UResults_TeamTotalScore_C* TeamTotalScore)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x464a9111);

	UResults_TeamScore_C_Initialize_Params params;
	params.ScoreReport = ScoreReport;
	params.TeamTotalScore = TeamTotalScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.Intro Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamScore_C::Intro_Sequence()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd311c776);

	UResults_TeamScore_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.Count Total Score Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamScore_C::Count_Total_Score_Sequence()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x66bf0c37);

	UResults_TeamScore_C_Count_Total_Score_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.Count Team Scores Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamScore_C::Count_Team_Scores_Sequence()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb9ae681f);

	UResults_TeamScore_C_Count_Team_Scores_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_TeamScore_C::BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbd5069ad);

	UResults_TeamScore_C_BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_TeamScore_C::BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc71837e4);

	UResults_TeamScore_C_BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.Skip To End  Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamScore_C::Skip_To_End__Sequence()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x90605395);

	UResults_TeamScore_C_Skip_To_End__Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.On Count Score Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamScore_C::On_Count_Score_Finished()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe8005e93);

	UResults_TeamScore_C_On_Count_Score_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_TeamScore_C::BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5b71a01a);

	UResults_TeamScore_C_BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.Skip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamScore_C::Skip()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9b43d366);

	UResults_TeamScore_C_Skip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeamScore_C::BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdd683b0c);

	UResults_TeamScore_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_TeamScore_C::BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb11e2280);

	UResults_TeamScore_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.ExecuteUbergraph_Results_TeamScore
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeamScore_C::ExecuteUbergraph_Results_TeamScore(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7809cb11);

	UResults_TeamScore_C_ExecuteUbergraph_Results_TeamScore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamScore.Results_TeamScore_C.Finished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamScore_C::Finished__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe112f62c);

	UResults_TeamScore_C_Finished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
