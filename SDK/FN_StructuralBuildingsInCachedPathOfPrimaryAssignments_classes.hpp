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

// BlueprintGeneratedClass StructuralBuildingsInCachedPathOfPrimaryAssignments.StructuralBuildingsInCachedPathOfPrimaryAssignments_C
// 0x0000 (0x00D0 - 0x00D0)
class UStructuralBuildingsInCachedPathOfPrimaryAssignments_C : public UFortAIGoalProvider_EnvQuery
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7c5023dd);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
