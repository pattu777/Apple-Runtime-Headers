//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsIndirectComputeCommand.h>

__attribute__((visibility("hidden")))
@interface MTLGPUDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand
{
    unsigned int _commandIndex;
}

- (void)concurrentDispatchThreadgroups:(CDStruct_32a7f38a)arg1 threadsPerThreadgroup:(CDStruct_32a7f38a)arg2;
- (void)concurrentDispatchThreads:(CDStruct_32a7f38a)arg1 threadsPerThreadgroup:(CDStruct_32a7f38a)arg2;
- (void)setKernelBuffer:(id)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)onDispatch;
- (id)initWithIndirectComputeCommand:(id)arg1 commandIndex:(unsigned int)arg2 indirectCommandBuffer:(id)arg3;

@end

