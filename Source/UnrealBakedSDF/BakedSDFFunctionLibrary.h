// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BakedSDFFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UNREALBAKEDSDF_API UBakedSDFFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "BakedSDF")
		static void ConfigureStaticMesh(UStaticMesh* mesh);
	
};
