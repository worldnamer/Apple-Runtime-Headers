//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface PKPassPaymentSummaryHeaderView : UIView
{
    UILabel *_titleLabel;
    UILabel *_secondaryTitleLabel;
}

+ (struct CGSize)_sizeForLabelWithText:(id)arg1 font:(id)arg2 maximumNumberOfLines:(int)arg3 width:(float)arg4;
+ (id)_titleFont;
+ (float)preferredHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color;
@property(retain, nonatomic) NSString *secondaryTitle;
@property(retain, nonatomic) NSString *primaryTitle;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

