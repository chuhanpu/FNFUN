#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass v3_PlayerCameraModeTargetingAssault.v3_PlayerCameraModeTargetingAssault_C
// 0x0000 (0x0110 - 0x0110)
class Uv3_PlayerCameraModeTargetingAssault_C : public Uv3_PlayerCameraModeRanged_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa73da1a9);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
