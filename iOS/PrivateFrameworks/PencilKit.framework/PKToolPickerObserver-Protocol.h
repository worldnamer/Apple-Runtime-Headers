//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKToolPicker;

@protocol PKToolPickerObserver <NSObject>

@optional
- (void)toolPickerFramesObscuredDidChange:(PKToolPicker *)arg1;
- (void)toolPickerVisibilityDidChange:(PKToolPicker *)arg1;
- (void)toolPickerIsRulerActiveDidChange:(PKToolPicker *)arg1;
- (void)toolPickerSelectedToolDidChange:(PKToolPicker *)arg1;
@end

