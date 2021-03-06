//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFCondition.h>

@class HMCharacteristic;

@interface HFCharacteristicCondition : HFCondition
{
    HMCharacteristic *_characteristic;
    unsigned long long _operatorType;
    id _value;
}

+ (id)_valuePredicateInCompoundPredicate:(id)arg1;
+ (id)_characteristicPredicateInCompoundPredicate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (id)initWithCharacteristic:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
- (id)initWithPredicate:(id)arg1;

@end

