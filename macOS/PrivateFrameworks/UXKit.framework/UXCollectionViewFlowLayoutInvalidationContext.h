//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXCollectionViewLayoutInvalidationContext.h>

@interface UXCollectionViewFlowLayoutInvalidationContext : UXCollectionViewLayoutInvalidationContext
{
    struct {
        unsigned int invalidateDelegateMetrics:1;
        unsigned int invalidateAttributes:1;
    } _flowLayoutInvalidationFlags;
}

@property(nonatomic) BOOL invalidateFlowLayoutDelegateMetrics;
@property(nonatomic) BOOL invalidateFlowLayoutAttributes;
- (id)init;

@end

