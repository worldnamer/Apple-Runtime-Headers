//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNRequest.h>

@interface VNBurstAnalysisResultsRequest : VNRequest
{
}

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (Class)configurationClass;
@property(nonatomic) _Bool includeAllImageStats;
@property(nonatomic) _Bool includeAllImageIdentifiers;
@property(nonatomic) _Bool includeClusters;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end

