// Fill out your copyright notice in the Description page of Project Settings.


#include "BakedSDFFunctionLibrary.h"

void UBakedSDFFunctionLibrary::ConfigureStaticMesh(UStaticMesh* mesh)
{
	if (IsValid(mesh))
	{
		mesh->GetSourceModel(0).BuildSettings.bUseFullPrecisionUVs = true;
		mesh->PostEditChange();
	}
}
