#include "EnemyFixParamComponentBase.h"

UEnemyFixParamComponentBase::UEnemyFixParamComponentBase() {
    this->mChangeCrashHighRate = 0.90f;
    this->mCrashDamageTime = 0.80f;
    this->mLaunchLMotionScale = 2.00f;
    this->mReactionSWeakCorrectionValue = 2.00f;
    this->mReactionLWeakCorrectionValue = 2.00f;
    this->mDownWeakCorrectionValue = 2.00f;
    this->mCrashWeakCorrectionValue = 1.70f;
    this->mRouteReactionSBonus = 1.50f;
    this->mRouteReactionLBonus = 2.00f;
    this->mRouteDownBonus = 1.20f;
    this->mDownCrashBonus = 2.00f;
    this->mBCChancePlayRate = 1.00f;
    this->mDetectIcon_FindSeconds = 3.00f;
    this->mSensingHeight = 800.00f;
    this->mEnableMoveHeight = 800.00f;
    this->mAIActionHeight = 500.00f;
    this->mTickPriority_RangeTop = 3000.00f;
    this->mTickPriority_RangeMiddle = 5000.00f;
    this->mTickPriority_HeightTop = 1000.00f;
    this->mTickPriority_IntervalTop = 0.10f;
    this->mTickPriority_LimitTop = 0.30f;
    this->mTickPriority_IntervalMiddle = 0.30f;
    this->mTickPriority_LimitMiddle = 0.50f;
    this->mTickPriority_IntervalBottom = 0.50f;
    this->mTickPriority_LimitBottom = 1.00f;
}

