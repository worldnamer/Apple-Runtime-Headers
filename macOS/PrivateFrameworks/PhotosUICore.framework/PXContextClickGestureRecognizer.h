//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

@class NSEvent;

@interface PXContextClickGestureRecognizer : NSGestureRecognizer
{
    NSEvent *_recognizedEvent;
    unsigned long long _cleanupEventType;
}

- (void).cxx_destruct;
- (void)reset;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)popUpContextMenu:(id)arg1 forView:(id)arg2;

@end

