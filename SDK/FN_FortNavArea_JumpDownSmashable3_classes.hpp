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

// BlueprintGeneratedClass FortNavArea_JumpDownSmashable3.FortNavArea_JumpDownSmashable3_C
// 0x0000 (0x0050 - 0x0050)
class UFortNavArea_JumpDownSmashable3_C : public UFortNavArea_SmashableJump
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc485ff7);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
