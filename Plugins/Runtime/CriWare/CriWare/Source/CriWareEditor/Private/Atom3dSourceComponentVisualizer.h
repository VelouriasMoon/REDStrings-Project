#pragma once

#include "ComponentVisualizer.h"
#include "SceneView.h"
#include "SceneManagement.h"
#include "Algo/Transform.h"
#include "Sound/SoundAttenuation.h"

class FAtom3dSourceComponentVisualizer : public FComponentVisualizer
{
public:
	// Begin FComponentVisualizer interface
	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
	// End FComponentVisualizer interface

private:
};

/***************************************************************************
*      関数宣言
*      Prototype Functions
***************************************************************************/

/* --- end of file --- */
