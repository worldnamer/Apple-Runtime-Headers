//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol NSSliderTickMarksDelegate;

__attribute__((visibility("hidden")))
@interface NSSliderTickMarks : NSView
{
    CDStruct_c9beae75 _drawingState;
    id <NSSliderTickMarksDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property CDStruct_c9beae75 drawingState;
- (BOOL)isFlipped;
@property __weak id <NSSliderTickMarksDelegate> delegate;

@end

