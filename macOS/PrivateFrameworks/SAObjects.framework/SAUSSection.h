//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAUIAppPunchOut;

@interface SAUSSection : SADomainObject
{
}

+ (id)sectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)section;
@property(copy, nonatomic) NSString *sectionTitle;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(copy, nonatomic) NSArray *genericResults;
@property(copy, nonatomic) NSArray *cardResults;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

