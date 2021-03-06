//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/FI_TListTextField.h>

@class NSObject;
@protocol TListNameFieldDelegate;

__attribute__((visibility("hidden")))
@interface FI_TListNameField : FI_TListTextField
{
    struct TNSWeakPtr<NSObject<TListNameFieldDelegate>, void> _weakLNFDelegate;
    _Bool _becomingFirstResponder;
    _Bool _shouldEdit;
    double _maxWidthAvailable;
}

+ (Class)cellClass;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double maxWidthAvailable; // @synthesize maxWidthAvailable=_maxWidthAvailable;
@property(nonatomic) _Bool shouldEdit; // @synthesize shouldEdit=_shouldEdit;
@property(nonatomic) _Bool becomingFirstResponder; // @synthesize becomingFirstResponder=_becomingFirstResponder;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isLTRLocalization;
- (struct CGRect)editorViewMaxFrame;
- (void)updateTextColor;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
@property(nonatomic) __weak NSObject<TListNameFieldDelegate> *lnfDelegate; // @dynamic lnfDelegate;
- (void)initCommon;

@end

