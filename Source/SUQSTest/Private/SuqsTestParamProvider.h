﻿#pragma once

#include "CoreMinimal.h"
#include "SuqsParameterProvider.h"
#include "UObject/Object.h"
#include "SuqsTestParamProvider.generated.h"

/**
 *
 */
UCLASS()
class SUQSTEST_API USuqsTestParamProvider : public UObject, public ISuqsParameterProvider {
  GENERATED_BODY()

public:
  FText TextValue;
  int IntValue;
  int64 Int64Value;
  float FloatValue;
  ETextGender GenderValue;

  int NumberOfTimesCalled = 0;

  virtual void GetQuestParameters_Implementation(const FName& QuestID, const FName& TaskID,
                                                 USuqsNamedFormatParams* Params) override;
};