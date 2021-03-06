//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKEditableCollectionViewCell.h>

@interface CKTranscriptCell : CKEditableCollectionViewCell
{
    _Bool _wantsDrawerLayout;
    BOOL _orientation;
    float _drawerPercentRevealed;
    float _associatedItemOffset;
}

+ (Class)_contentViewClass;
@property(nonatomic) float associatedItemOffset; // @synthesize associatedItemOffset=_associatedItemOffset;
@property(nonatomic) float drawerPercentRevealed; // @synthesize drawerPercentRevealed=_drawerPercentRevealed;
@property(nonatomic) BOOL orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool wantsDrawerLayout; // @synthesize wantsDrawerLayout=_wantsDrawerLayout;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)performReveal:(CDUnknownBlockType)arg1;
- (void)performHide:(CDUnknownBlockType)arg1;
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performRemoval:(CDUnknownBlockType)arg1;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (void)layoutSubviewsForContents;
- (id)multiplyFilterKeyPath;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForChatItem:(id)arg1;

@end

