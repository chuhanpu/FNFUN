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

// BlueprintGeneratedClass MissionGen_LaunchTheBalloon_NoSecondary.MissionGen_LaunchTheBalloon_NoSecondary_C
// 0x0000 (0x06A8 - 0x06A8)
class UMissionGen_LaunchTheBalloon_NoSecondary_C : public U_MissionGen_PARENT_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x97eff961);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
