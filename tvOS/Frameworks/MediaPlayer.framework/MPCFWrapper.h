//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPCFWrapper : NSObject
{
    _Bool _nullRef;
    const void *_refValue;
}

@property(nonatomic, getter=isNullRef) _Bool nullRef; // @synthesize nullRef=_nullRef;
@property(readonly, nonatomic) const void *refValue; // @synthesize refValue=_refValue;
- (id)description;
- (void)dealloc;
- (id)initWithCFType:(void *)arg1;

@end

