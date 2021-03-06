//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSystemGestureRecognizerDelegate-Protocol.h>
#import <SpringBoard/SBTouchTemplateGestureRecognizerDelegate-Protocol.h>

@class CSCoverSheetDismissGestureSettings, NSString, UIGestureRecognizer, UIPanGestureRecognizer, UIViewController;
@protocol SBCoverSheetSystemGestureDelegatePositionProviding;

@interface SBCoverSheetSystemGesturesDelegate : NSObject <SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate>
{
    int _syntheticAppearState;
    id <SBCoverSheetSystemGestureDelegatePositionProviding> _positionProvider;
    UIPanGestureRecognizer *_presentGestureRecognizer;
    UIViewController *_viewController;
    UIGestureRecognizer *_dismissGestureRecognizer;
    UIGestureRecognizer *_dismissAddendumGestureRecognizer;
    UIGestureRecognizer *_preemptingGestureRecognizer;
    CSCoverSheetDismissGestureSettings *_dismissGestureSettings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSCoverSheetDismissGestureSettings *dismissGestureSettings; // @synthesize dismissGestureSettings=_dismissGestureSettings;
@property(nonatomic) __weak UIGestureRecognizer *preemptingGestureRecognizer; // @synthesize preemptingGestureRecognizer=_preemptingGestureRecognizer;
@property(nonatomic) __weak UIGestureRecognizer *dismissAddendumGestureRecognizer; // @synthesize dismissAddendumGestureRecognizer=_dismissAddendumGestureRecognizer;
@property(nonatomic) __weak UIGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) int syntheticAppearState; // @synthesize syntheticAppearState=_syntheticAppearState;
@property(retain, nonatomic) UIPanGestureRecognizer *presentGestureRecognizer; // @synthesize presentGestureRecognizer=_presentGestureRecognizer;
@property(nonatomic) __weak id <SBCoverSheetSystemGestureDelegatePositionProviding> positionProvider; // @synthesize positionProvider=_positionProvider;
- (_Bool)isAnyGestureActivelyRecognized;
- (_Bool)_isGestureActivelyRecognized:(id)arg1;
- (_Bool)_canPresentGestureBegin;
- (_Bool)_canDismissGestureBegin;
- (_Bool)_isGestureAllowedByTransientOverlaysOrTopmostApp;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)setPresentGestureFailureRequirements:(id)arg1;
- (_Bool)_areAnyGesturesRecognizedInSet:(id)arg1;
- (id)dismissGestures;
- (_Bool)isDismissGestureActive;
- (id)presentGestures;
- (_Bool)isPresentGestureActive;
- (id)initWithViewController:(id)arg1 dismissGestureRecognizer:(id)arg2 dismissAddendumGestureRecognizer:(id)arg3 dismissalPreemptingGestureRecognizer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

