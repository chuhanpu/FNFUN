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

// BlueprintGeneratedClass MissionGen_TheOutpost_PvE_02.MissionGen_TheOutpost_PvE_02_C
// 0x0000 (0x06A8 - 0x06A8)
class UMissionGen_TheOutpost_PvE_02_C : public UMissionGen_TheOutpost_PARENT_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x31b97ebb);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
