//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CIMLog : NSObject
{
}

+ (unsigned long long)logLevel;
+ (BOOL)enabled;
+ (void)logWithFunction:(const char *)arg1 domain:(id)arg2 level:(unsigned long long)arg3 format:(id)arg4;

@end

