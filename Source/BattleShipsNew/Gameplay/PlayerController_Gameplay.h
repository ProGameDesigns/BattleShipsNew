// @Maxpro 2018

#pragma once

#include "CoreMinimal.h"
#include "BattleShipMasterPlayerController.h"
#include "PlayerController_Gameplay.generated.h"

/**
 * 
 */
UCLASS()
class BATTLESHIPSNEW_API APlayerController_Gameplay : public ABattleShipMasterPlayerController
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;
	
public:
	
	// TODO: What else do I need for this class?

	/** Cleans up any resources necessary to return to main menu.  Does not modify GameInstance state. */
	virtual void HandleReturnToMainMenu();

	/** Ends and/or destroys game session */
	void CleanupSessionOnReturnToMenu();

	/** Returns a pointer to the game hud. May return NULL. */
	FORCEINLINE class ABattleShipsNewHUD* GetPlayerHUD() const;

};
