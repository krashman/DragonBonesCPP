//
// Created by liangshuochen on 09/06/2017.
//

#include "ConstraintData.h"

DRAGONBONES_NAMESPACE_BEGIN

void ConstraintData::_onClear()
{
    order = 0;
    target = nullptr;
    bone = nullptr;
    root = nullptr;
}

void IKConstraintData::_onClear()
{
    ConstraintData::_onClear();

    bendPositive = false;
    scaleEnabled = false;
    weight = 1.0f;
}

DRAGONBONES_NAMESPACE_END