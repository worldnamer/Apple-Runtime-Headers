//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBJetsamBandProviding-Protocol.h>

@class NSString;
@protocol RBEntitlementManaging;

@interface RBJetsamBandProvider : NSObject <RBJetsamBandProviding>
{
    id <RBEntitlementManaging> _entitlementManager;
}

- (void).cxx_destruct;
- (int)_foregroundJetsamPriorityForProcess:(id)arg1 state:(id)arg2;
- (int)_backgroundJetsamPriorityForProcess:(id)arg1 state:(id)arg2;
- (int)_inactiveJetsamPriorityForProcess:(id)arg1 state:(id)arg2;
- (int)defaultPriorityForProcess:(id)arg1 inBand:(unsigned char)arg2;
- (int)jetsamPriorityForProcess:(id)arg1 withState:(id)arg2;
- (id)initWithEntitlementManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

