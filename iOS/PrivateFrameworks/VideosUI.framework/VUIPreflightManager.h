//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController, VUIVideosPlayable;
@protocol TVPMediaItem;

__attribute__((visibility("hidden")))
@interface VUIPreflightManager : NSObject
{
    VUIVideosPlayable *_videosPlayable;
    NSObject<TVPMediaItem> *_mediaItem;
    unsigned long long _restrictionsCheckType;
    UIViewController *_presentingController;
}

+ (id)defaultPreflightManager;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *presentingController; // @synthesize presentingController=_presentingController;
@property(nonatomic) unsigned long long restrictionsCheckType; // @synthesize restrictionsCheckType=_restrictionsCheckType;
@property(retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) VUIVideosPlayable *videosPlayable; // @synthesize videosPlayable=_videosPlayable;
- (_Bool)_isOnWiFi;
- (void)_preflightDownloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAgeConfirmationWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldShowAgeConfirmationAlert;
- (void)_setLastAgeConfirmationPrompted:(id)arg1;
- (id)_lastAgeConfirmationPrompted;
- (void)_setLastConfirmedAge:(long long)arg1;
- (long long)_lastConfirmedAge;
- (void)_performAgeGateVerificationWithCompletion:(CDUnknownBlockType)arg1;
- (long long)_requiredAgeForPlayback;
- (_Bool)_isAllowedToPlayOrPurchase;
- (void)_showRestrictionsAlertForRatingDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performRestrictionsCheckWithCompletion:(CDUnknownBlockType)arg1;
- (id)_ratingValue;
- (_Bool)_isTrailer;
- (id)_ratingDomain;
- (void)_preflightWithOptions:(long long)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preflightWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

