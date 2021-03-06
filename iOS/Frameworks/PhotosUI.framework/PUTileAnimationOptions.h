//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface PUTileAnimationOptions : NSObject
{
    _Bool _shouldFadeOutSnapshotAfterCompletionGroup;
    _Bool _synchronizedWithTransition;
    long long _kind;
    double _delay;
    double _duration;
    double _springDampingRatio;
    double _springMass;
    double _springStiffness;
    long long _springNumberOfOscillations;
    CDUnknownBlockType _customViewAnimatorBlock;
    NSObject<OS_dispatch_group> *_completionGroup;
    struct PUDisplayVelocity _initialVelocity;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isSynchronizedWithTransition) _Bool synchronizedWithTransition; // @synthesize synchronizedWithTransition=_synchronizedWithTransition;
@property(nonatomic) _Bool shouldFadeOutSnapshotAfterCompletionGroup; // @synthesize shouldFadeOutSnapshotAfterCompletionGroup=_shouldFadeOutSnapshotAfterCompletionGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(copy, nonatomic) CDUnknownBlockType customViewAnimatorBlock; // @synthesize customViewAnimatorBlock=_customViewAnimatorBlock;
@property(nonatomic) struct PUDisplayVelocity initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(nonatomic) long long springNumberOfOscillations; // @synthesize springNumberOfOscillations=_springNumberOfOscillations;
@property(nonatomic) double springStiffness; // @synthesize springStiffness=_springStiffness;
@property(nonatomic) double springMass; // @synthesize springMass=_springMass;
@property(nonatomic) double springDampingRatio; // @synthesize springDampingRatio=_springDampingRatio;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) long long kind; // @synthesize kind=_kind;

@end

