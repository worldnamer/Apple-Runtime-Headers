//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class TVMediaInfo, VUINowPlayingViewController;

@protocol VUINowPlayingViewControllerDelegate <NSObject>
- (void)nowPlayingViewControllerMenuButtonPressedToDismiss:(VUINowPlayingViewController *)arg1;

@optional
- (void)nowPlayingViewController:(VUINowPlayingViewController *)arg1 mediaInfoDidChange:(TVMediaInfo *)arg2 canPlay:(_Bool)arg3;
- (void)nowPlayingViewControllerUserDidInteract:(VUINowPlayingViewController *)arg1;
- (void)nowPlayingController:(VUINowPlayingViewController *)arg1 safeAreaDidChange:(struct UIEdgeInsets)arg2;
- (void)nowPlayingControllerDidSelectMoreInfoButton:(VUINowPlayingViewController *)arg1;
- (void)nowPlayingControllerDidSelectFromBeginningButton:(VUINowPlayingViewController *)arg1;
- (void)nowPlayingControllerDidSelectSkipIntro:(VUINowPlayingViewController *)arg1;
- (void)nowPlayingController:(VUINowPlayingViewController *)arg1 didEnableUIMode:(long long)arg2 enabled:(_Bool)arg3;
- (void)nowPlayingControllerViewDidDisappear:(VUINowPlayingViewController *)arg1;
- (void)nowPlayingControllerViewWillDisappear:(VUINowPlayingViewController *)arg1 withDisappearanceReason:(unsigned long long)arg2;
- (void)nowPlayingControllerViewDidAppear:(VUINowPlayingViewController *)arg1;
- (void)nowPlayingControllerViewWillAppear:(VUINowPlayingViewController *)arg1;
@end

