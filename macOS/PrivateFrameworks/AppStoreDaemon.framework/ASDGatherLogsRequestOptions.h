//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface ASDGatherLogsRequestOptions : NSObject <NSCopying>
{
    BOOL _verbose;
    NSString *_fileName;
    NSArray *_urlFilters;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *urlFilters; // @synthesize urlFilters=_urlFilters;
@property(nonatomic) BOOL verbose; // @synthesize verbose=_verbose;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

