//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABAddressBookSaveOptionsSanitizer : NSObject
{
}

+ (id)descriptionOfSaveOptions:(unsigned long long)arg1;
+ (BOOL)clientHasEntitlement:(id)arg1;
+ (BOOL)isClientAllowedToBypassRestrictions;
+ (unsigned long long)saveOptionsBySanitzingIgnoresGuardianRestrictionsInOptions:(unsigned long long)arg1;
+ (unsigned long long)saveOptionsBySanitizingClientRequestedSaveOptions:(unsigned long long)arg1;
+ (id)log;

@end

