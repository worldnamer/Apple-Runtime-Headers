//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCollectionLayoutSize;

@interface _NSCollectionPreferredSize : NSObject
{
    struct CGSize _originalSize;
    struct CGSize _fittingSize;
    struct CGSize _preferredSize;
    NSCollectionLayoutSize *_layoutSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, nonatomic) NSCollectionLayoutSize *layoutSize; // @synthesize layoutSize=_layoutSize;
@property(readonly, nonatomic) struct CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property(readonly, nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
- (id)description;
- (id)initWithOriginalSize:(struct CGSize)arg1 fittingSize:(struct CGSize)arg2 layoutSize:(id)arg3;

@end

