//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface __NSWindowData : NSObject
{
    id window;
    long long windowNum;
    struct _flags {
        unsigned int visible:1;
        unsigned int hidesOnDeactivate:1;
        unsigned int modal:1;
        unsigned int _RESERVED:13;
    } flags;
}

@end

