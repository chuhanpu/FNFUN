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

// BlueprintGeneratedClass GE_Outlander_LaserFocusApplied.GE_Outlander_LaserFocusApplied_C
// 0x0000 (0x0660 - 0x0660)
class UGE_Outlander_LaserFocusApplied_C : public UGameplayEffect
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfc2e9035);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
