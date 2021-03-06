//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

@class NTKDateComplicationLabel;

@interface NTKUtilityDateComplicationView : NTKUtilityComplicationView
{
    NTKDateComplicationLabel *_label;
    unsigned long long _dateStyle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long dateStyle; // @synthesize dateStyle=_dateStyle;
- (id)foregroundColor;
- (void)setForegroundColor:(id)arg1;
- (id)accentColor;
- (void)setAccentColor:(id)arg1;
- (void)_invalidateLabelSize;
- (double)_widthThatFits;
- (void)setFont:(id)arg1;
- (void)setDateComplicationText:(id)arg1 withDayRange:(struct _NSRange)arg2 forDateStyle:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

