//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSCopying-Protocol.h>

@class NSString;

@interface XCUIApplicationSpecifier : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    NSString *_path;
}

+ (id)specifierWithBundleIdentifier:(id)arg1 path:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1 path:(id)arg2;

@end

