//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface MKBlurBackedControlProxy : NSProxy
{
    id _control;
    id _maskControl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id maskControl; // @synthesize maskControl=_maskControl;
@property(retain, nonatomic) id control; // @synthesize control=_control;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithControl:(id)arg1 maskControl:(id)arg2;

@end

