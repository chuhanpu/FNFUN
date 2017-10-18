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

// Function Qos.QosBeaconClient.ServerQosRequest
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 InSessionId                    (CPF_Parm, CPF_ZeroConstructor)

void AQosBeaconClient::ServerQosRequest(const struct FString& InSessionId)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xba97ba41);

	AQosBeaconClient_ServerQosRequest_Params params;
	params.InSessionId = InSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Qos.QosBeaconClient.ClientQosResponse
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// EQosResponseType               Response                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AQosBeaconClient::ClientQosResponse(EQosResponseType Response)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1d93279f);

	AQosBeaconClient_ClientQosResponse_Params params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
