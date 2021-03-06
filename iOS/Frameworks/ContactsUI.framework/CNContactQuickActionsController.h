//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactActionsControllerDelegate-Protocol.h>
#import <ContactsUI/CNUIUserActionListConsumer-Protocol.h>

@class CNContact, CNContactActionsController, CNContactQuickActionsDisambiguationMenuPresentation, NSArray, NSDictionary, NSString, UIViewController;
@protocol CNCancelable, CNContactQuickActionViewContainer, CNContactQuickActionsControllerDelegate, CNSchedulerProvider, CNUINavigationListStyle, CNUIUserActionContext, CNUIUserActionListDataSource;

@interface CNContactQuickActionsController : NSObject <CNUIUserActionListConsumer, CNContactActionsControllerDelegate>
{
    id <CNContactQuickActionViewContainer> _contactQuickActionViewContainer;
    id <CNContactQuickActionsControllerDelegate> _delegate;
    NSArray *_actionTypes;
    CNContact *_contact;
    id <CNUIUserActionListDataSource> _userActionListDataSource;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNCancelable> _actionDisoveryToken;
    NSDictionary *_actionListModelsByActionType;
    id <CNUIUserActionContext> _userActionContext;
    CNContactActionsController *_disambiguationMenuController;
    UIViewController *_disambiguationMenuViewController;
    CNContactQuickActionsDisambiguationMenuPresentation *_disambiguationMenuPresentation;
    id <CNUINavigationListStyle> _navigationListStyle;
}

+ (id)descriptorForRequiredKeys;
+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) id <CNUINavigationListStyle> navigationListStyle; // @synthesize navigationListStyle=_navigationListStyle;
@property(readonly, nonatomic) CNContactQuickActionsDisambiguationMenuPresentation *disambiguationMenuPresentation; // @synthesize disambiguationMenuPresentation=_disambiguationMenuPresentation;
@property(retain, nonatomic) UIViewController *disambiguationMenuViewController; // @synthesize disambiguationMenuViewController=_disambiguationMenuViewController;
@property(retain, nonatomic) CNContactActionsController *disambiguationMenuController; // @synthesize disambiguationMenuController=_disambiguationMenuController;
@property(readonly, nonatomic) id <CNUIUserActionContext> userActionContext; // @synthesize userActionContext=_userActionContext;
@property(retain, nonatomic) NSDictionary *actionListModelsByActionType; // @synthesize actionListModelsByActionType=_actionListModelsByActionType;
@property(retain, nonatomic) id <CNCancelable> actionDisoveryToken; // @synthesize actionDisoveryToken=_actionDisoveryToken;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNUIUserActionListDataSource> userActionListDataSource; // @synthesize userActionListDataSource=_userActionListDataSource;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) NSArray *actionTypes; // @synthesize actionTypes=_actionTypes;
@property(nonatomic) __weak id <CNContactQuickActionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <CNContactQuickActionViewContainer> contactQuickActionViewContainer; // @synthesize contactQuickActionViewContainer=_contactQuickActionViewContainer;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (void)disambiguationViewControllerDismissedExternally:(id)arg1;
- (void)tearDownDisambiguationMenu;
- (void)setupDisambiguationMenuForActionType:(id)arg1;
- (void)showDisambiguationMenuForActionType:(id)arg1;
- (void)executeLongPressBehaviorForActionType:(id)arg1;
- (void)performAction:(id)arg1;
- (void)executeTapBehaviorForActionType:(id)arg1;
- (id)defaultTitleForActionType:(id)arg1;
- (void)reportStoredModel:(id)arg1 forActionType:(id)arg2 toQuickActionContainer:(id)arg3;
- (void)reportStoredModelsToQuickActionContainer;
- (void)storeDiscoveredModels:(id)arg1;
- (void)processDiscoveredModels:(id)arg1;
- (id)allModelsObservable;
- (void)discoverActions;
- (void)cleanUpAfterLatestActionDiscovery;
- (void)dealloc;
- (id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2 disambiguationMenuPresentation:(id)arg3 userActionListDataSource:(id)arg4 schedulerProvider:(id)arg5 userActionContext:(id)arg6;
- (id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2 disambiguationMenuPresentation:(id)arg3;
- (id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

