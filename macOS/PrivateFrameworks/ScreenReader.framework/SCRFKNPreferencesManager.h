//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCRFKNPreferencesManager : NSObject
{
    NSMutableDictionary *_hotKeyInitialSettings;
    NSArray *_hotKeys;
    long long _initialKeyboardMode;
    BOOL _isOptimizationEnabled;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (BOOL)isOptimizedKeyboardNavigationEnabled;
- (void)setIsOptimizedKeyboardNavigationEnabled:(BOOL)arg1;
- (void)_removeKeysFromPreferences;
- (BOOL)_isSymbolicHotKeyEnabled:(unsigned int)arg1;
- (void)_restoreKeyboardMode;
- (void)_enableFullKeyboardAccess;
- (id)init;

@end

