// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TP_VehicleAdv.h"
#include "TP_VehicleAdvGameMode.h"
#include "TP_VehicleAdvPawn.h"
#include "TP_VehicleAdvHud.h"

ATP_VehicleAdvGameMode::ATP_VehicleAdvGameMode()
{
	DefaultPawnClass = ATP_VehicleAdvPawn::StaticClass();
	HUDClass = ATP_VehicleAdvHud::StaticClass();
}
