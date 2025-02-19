#pragma once

#include "CoreMinimal.h"

/// @brief Solver: 
class IFieldSolver {
public:
    virtual ~IField() {};

    virtual void Initialize() = 0;
    virtual void Deinitialize() = 0;

    virtual void Start() = 0;
    virtual void Reset() = 0;
    virtual void Stop() = 0;

protected:
    virtual void Solve() = 0;
};


/// @brief Field: a region of *space* where *forces* are applied, thus its *status* is changing over time
class IField {
public:

protected:
    FIntVector3 Size;
    FIntVector3 Resolution;
};