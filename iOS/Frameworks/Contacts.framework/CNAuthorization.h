//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNAuthorization : NSObject
{
}

+ (long long)authorizationStatusForEntityType:(long long)arg1;
+ (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)requestAccessForEntityType:(long long)arg1 timeout:(double)arg2 error:(id *)arg3;
+ (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
+ (_Bool)requestAccessForEntityType:(long long)arg1;
+ (_Bool)isAccessRestrictedForEntityType:(long long)arg1;

@end

