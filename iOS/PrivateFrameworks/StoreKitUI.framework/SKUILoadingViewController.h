//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, SKUIClientContext, SKUIColorScheme, SKUILoadingView, UIColor;

@interface SKUILoadingViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    NSString *_loadingText;
    UIColor *_backgroundColor;
    SKUIColorScheme *_spinnerColorScheme;
    SKUILoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SKUIColorScheme *spinnerColorScheme; // @synthesize spinnerColorScheme=_spinnerColorScheme;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)viewDidLayoutSubviews;
- (void)_initializeLoadingView;
- (void)viewDidLoad;
- (id)initWithClientContext:(id)arg1;

@end

