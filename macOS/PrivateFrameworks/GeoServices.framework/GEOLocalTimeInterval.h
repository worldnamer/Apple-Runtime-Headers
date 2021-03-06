//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEOLocalTimeInterval : NSObject <NSSecureCoding>
{
    double _startTime;
    double _endTime;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)initWithLocalTimeRange:(struct GEOPDLocalTimeRange *)arg1;
- (id)init;

@end

