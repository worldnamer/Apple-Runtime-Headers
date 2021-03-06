//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REFeatureTransformer.h>

@class NSDate;

@interface _REChangeFeatureTransformer : REFeatureTransformer
{
    double _interval;
    NSDate *_lastChangeDate;
    unsigned long long _value;
}

+ (_Bool)supportsInvalidation;
+ (id)functionName;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)_validateWithFeatures:(id)arg1;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)_outputType;
- (unsigned long long)_featureCount;
- (long long)_bitCount;
- (void)configureWithInvocation:(id)arg1;
- (void)_updateConfigurationForInterval:(double)arg1;
- (void)dealloc;
- (id)init;

@end

