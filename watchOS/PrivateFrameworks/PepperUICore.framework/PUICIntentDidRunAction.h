//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSString;

@interface PUICIntentDidRunAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (unsigned int)PUICActionType;
@property(readonly, copy, nonatomic) NSString *userString;
- (id)initWithUserString:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;

@end

