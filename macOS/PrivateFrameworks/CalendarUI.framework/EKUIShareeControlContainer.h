//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <CalendarUI/NSAccessibilityButton-Protocol.h>

@class EKUIGadget, NSString;

@interface EKUIShareeControlContainer : NSView <NSAccessibilityButton>
{
    BOOL _shouldDrawSeparator;
    EKUIGadget *_gadget;
}

- (void).cxx_destruct;
@property BOOL shouldDrawSeparator; // @synthesize shouldDrawSeparator=_shouldDrawSeparator;
@property __weak EKUIGadget *gadget; // @synthesize gadget=_gadget;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)keyUp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

