//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBPrivacyLinkController.h>

@class OBPrivacyLinkView;

__attribute__((visibility("hidden")))
@interface OBPrivacyLinkController_tvOS : OBPrivacyLinkController
{
    OBPrivacyLinkView *_linkView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OBPrivacyLinkView *linkView; // @synthesize linkView=_linkView;
- (void)setLinkEnabled:(_Bool)arg1;
- (void)loadView;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)initWithPrivacyBundle:(id)arg1;

@end

