//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngineUI/REUISiriActionsPerformer.h>

#import <RelevanceEngineUI/REUISiriShortcutApplicationViewModel-Protocol.h>
#import <RelevanceEngineUI/WFLActionUserInterface-Protocol.h>
#import <RelevanceEngineUI/WFLWorkflowControllerDelegate-Protocol.h>

@class INIntent, NSString, REUIIntentActionConfirmContent, UIImage;

@interface REUIIntentActionPerformer : REUISiriActionsPerformer <REUISiriShortcutApplicationViewModel, WFLWorkflowControllerDelegate, WFLActionUserInterface>
{
    REUIIntentActionConfirmContent *_confirmContent;
    CDUnknownBlockType _proceedHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType proceedHandler; // @synthesize proceedHandler=_proceedHandler;
- (void)handleIntentAction:(id)arg1 requiresUserConfirmation:(_Bool)arg2 requiresUserAuthentication:(_Bool)arg3 withIntentResponse:(id)arg4 proceedHandler:(CDUnknownBlockType)arg5;
- (void)logDebugInformation:(id)arg1;
- (void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2;
- (void)workflowControllerDidStop:(id)arg1 withError:(id)arg2;
- (id)workflowController:(id)arg1 userInterfaceForRunningAction:(id)arg2;
- (void)_submitMetricsWithError:(id)arg1;
- (void)_workflowDidFinishWithError:(id)arg1;
- (void)_handleDismissAnimation:(unsigned int)arg1;
- (void)_workflowDidFinishWithResponse:(id)arg1;
- (void)_cancelWorkflow;
- (void)_beginWorkflowWithIntentProperties:(id)arg1;
- (void)_reset;
- (void)tryToOpenUserActivity:(id)arg1 applicationIdentifier:(id)arg2;
- (id)_userActivityFromIntent:(id)arg1 intentResponse:(id)arg2;
- (void)setState:(unsigned int)arg1 withContentViewModel:(id)arg2;
- (void)_prepareWithIntentProperties:(id)arg1;
- (id)_performingObject;
- (void)performDonatedAction;
@property(readonly, copy, nonatomic) INIntent *intent;
@property(readonly, nonatomic) UIImage *re_shortcut_confirmationBackgroundImage;
@property(readonly, nonatomic) NSString *re_shortcut_applicationNameString;
@property(readonly, nonatomic) UIImage *re_shortcut_applicationIconImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

