// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatType.h"
#include "DamageableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDamageableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ENEMYAI_CPLUS_API IDamageableInterface
{
	GENERATED_BODY()

	//실제 인터페이스 클래스
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")//C++ 함수를 블루프린트와 호환되게
	//BlueprintNativeEvent: C++에도 기본 기능이 있고, 블루프린트에서도 덮어쓸(Override) 수 있음
	//BlueprintCallable :블루프린트 그래프에서 이 함수를 노드로 불러낼 수 있음 [이게 없으면 함수를 만들어도 블루프린트에서 검색이 안 됩니다. (호출 불가능)]
	//Category = "Combat" :검색할 때 'Combat' 카테고리 안에 넣음 (단순 정리용)
	float GetCurrentHealth();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
	float GetMaxHealth();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
	float Heal(float Amount);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
	bool TakeCombatDamage(const FCombatDamageInfo& DamageInfo, AActor* DamageCauser);


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
	bool IsDead();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
	bool IsAttacking();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
	bool ReserveAttackToken(int32 Amount);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
	void ReturnAttackToken(int32 Amount);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
	int32 GetTeamNumber();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
	void SetIsInterruptible(bool Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
	void SetIsInvincible(bool Value);

};
