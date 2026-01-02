// CombatType.h

#pragma once

#include "CoreMinimal.h"
#include "CombatType.generated.h" // [중요] 파일 이름(CombatType.h)과 정확히 일치해야 합니다!

/**
 * 기존의 class ENEMYAI_CPLUS_API CombatType 부분은 지웠습니다.
 * 여기에는 UENUM과 USTRUCT만 있으면 됩니다.
 */

 // =========================================================
 // 1. Enum 정의
 // =========================================================

UENUM(BlueprintType)
enum class ECombatDamageType : uint8
{
	None        UMETA(DisplayName = "None"),
	Melee       UMETA(DisplayName = "Melee"),
	Projectile  UMETA(DisplayName = "Projectile"),
	Explosion   UMETA(DisplayName = "Explosion"),
	Environment UMETA(DisplayName = "Environment")
};

UENUM(BlueprintType)
enum class ECombatDamageResponse : uint8
{
	None        UMETA(DisplayName = "None"),
	HitReaction UMETA(DisplayName = "Hit Reaction"),
	Stagger     UMETA(DisplayName = "Stagger"),
	Stun        UMETA(DisplayName = "Stun"),
	KnockBack   UMETA(DisplayName = "Knock Back")
};

// =========================================================
// 2. Structure 정의
// =========================================================

USTRUCT(BlueprintType)
struct FCombatDamageInfo
{
	GENERATED_BODY()

	// 1. Amount (Float)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Data")
	float Amount = 0.0f;

	// 2. DamageType (Enum)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Data")
	ECombatDamageType DamageType = ECombatDamageType::None;

	// 3. DamageResponse (Enum)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Data")
	ECombatDamageResponse DamageResponse = ECombatDamageResponse::None;

	// 4. ShouldDamageInvincible (Boolean)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Data")
	bool bShouldDamageInvincible = false;

	// 5. CanBeBlocked (Boolean)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Data")
	bool bCanBeBlocked = false;

	// 6. CanBeParried (Boolean)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Data")
	bool bCanBeParried = false;

	// 7. ShouldForceInterrupt (Boolean)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Data")
	bool bShouldForceInterrupt = false;
};