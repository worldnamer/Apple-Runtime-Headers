//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUISimulatedMetricChain.h>

@class IBUIMetricRepresentation;

@interface IBUISimulatedNavigationControllerMetricChain : IBUISimulatedMetricChain
{
    _Bool _navigationBarHidden;
    _Bool _toolbarHidden;
    IBUIMetricRepresentation *_navigationBar;
    IBUIMetricRepresentation *_toolbar;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IBUIMetricRepresentation *toolbar; // @synthesize toolbar=_toolbar;
@property(readonly, nonatomic) IBUIMetricRepresentation *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) _Bool toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
@property(readonly, nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
- (id)singleLinkPrettyDescription;
- (id)copyWithPrecedingMetric:(id)arg1;
- (_Bool)isEqualToMetricChain:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithNavigationBarHidden:(_Bool)arg1 toolbarHidden:(_Bool)arg2 navigationBar:(id)arg3 toolbar:(id)arg4 precedingMetric:(id)arg5;
- (id)createWindowForViewController:(id)arg1 initialSize:(id)arg2 inContext:(id)arg3;

@end

