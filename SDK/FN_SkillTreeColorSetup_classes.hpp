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

// BlueprintGeneratedClass SkillTreeColorSetup.SkillTreeColorSetup_C
// 0x0000 (0x0028 - 0x0028)
class USkillTreeColorSetup_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xcdaa4859);
		return ptr;
	}


	void STATIC_SkillTreeBGSetup(const struct FSkillTreePageColors& Page_Color, TEnumAsByte<ESkillTreePages> Pages, class UMaterialInstanceDynamic* Mid, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
