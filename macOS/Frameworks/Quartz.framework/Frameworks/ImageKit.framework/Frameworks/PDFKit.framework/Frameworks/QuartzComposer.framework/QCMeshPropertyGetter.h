//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCPatch.h>

@class QCIndexPort, QCMeshPort, QCStructurePort;

__attribute__((visibility("hidden")))
@interface QCMeshPropertyGetter : QCPatch
{
    QCMeshPort *inputMesh;
    QCIndexPort *_inputProperty;
    QCStructurePort *outputValue;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (void)_forwardRenderingFlag;
- (BOOL)setState:(id)arg1;
- (id)state;
- (id)initWithIdentifier:(id)arg1;

@end

