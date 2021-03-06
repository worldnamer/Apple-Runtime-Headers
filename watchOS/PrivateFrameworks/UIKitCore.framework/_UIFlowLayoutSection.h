//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, _UIFlowLayoutInfo;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutSection : NSObject
{
    _Bool _isValid;
    struct CGRect _validRect;
    struct CGRect _rectToKeepValid;
    NSMutableSet *_invalidatedIndexPaths;
    _Bool _fixedItemSize;
    _Bool _lastRowIncomplete;
    NSMutableArray *_items;
    NSMutableArray *_rows;
    float _verticalInterstice;
    float _horizontalInterstice;
    float _headerDimension;
    float _footerDimension;
    _UIFlowLayoutInfo *_layoutInfo;
    float _otherMargin;
    float _beginMargin;
    float _endMargin;
    float _actualGap;
    float _lastRowBeginMargin;
    float _lastRowEndMargin;
    float _lastRowActualGap;
    int _itemsCount;
    int _itemsByRowCount;
    int _indexOfIncompleteRow;
    struct CGSize _itemSize;
    struct _NSRange _validItemRange;
    CDStruct_2f5e8405 _rowAlignmentOptions;
    struct UIEdgeInsets _sectionMargins;
    struct CGRect _frame;
    struct CGRect _headerFrame;
    struct CGRect _footerFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange validItemRange; // @synthesize validItemRange=_validItemRange;
@property(readonly, nonatomic) int indexOfIncompleteRow; // @synthesize indexOfIncompleteRow=_indexOfIncompleteRow;
@property(readonly, nonatomic) int itemsByRowCount; // @synthesize itemsByRowCount=_itemsByRowCount;
@property(nonatomic) int itemsCount; // @synthesize itemsCount=_itemsCount;
@property(readonly, nonatomic) _Bool lastRowIncomplete; // @synthesize lastRowIncomplete=_lastRowIncomplete;
@property(readonly, nonatomic) float lastRowActualGap; // @synthesize lastRowActualGap=_lastRowActualGap;
@property(readonly, nonatomic) float lastRowEndMargin; // @synthesize lastRowEndMargin=_lastRowEndMargin;
@property(readonly, nonatomic) float lastRowBeginMargin; // @synthesize lastRowBeginMargin=_lastRowBeginMargin;
@property(readonly, nonatomic) float actualGap; // @synthesize actualGap=_actualGap;
@property(readonly, nonatomic) float endMargin; // @synthesize endMargin=_endMargin;
@property(readonly, nonatomic) float beginMargin; // @synthesize beginMargin=_beginMargin;
@property(readonly, nonatomic) float otherMargin; // @synthesize otherMargin=_otherMargin;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) _Bool fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) CDStruct_2f5e8405 rowAlignmentOptions; // @synthesize rowAlignmentOptions=_rowAlignmentOptions;
@property(nonatomic) __weak _UIFlowLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(readonly, nonatomic) float footerDimension; // @synthesize footerDimension=_footerDimension;
@property(readonly, nonatomic) float headerDimension; // @synthesize headerDimension=_headerDimension;
@property(nonatomic) struct CGRect footerFrame; // @synthesize footerFrame=_footerFrame;
@property(nonatomic) struct CGRect headerFrame; // @synthesize headerFrame=_headerFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) struct UIEdgeInsets sectionMargins; // @synthesize sectionMargins=_sectionMargins;
@property(nonatomic) float horizontalInterstice; // @synthesize horizontalInterstice=_horizontalInterstice;
@property(nonatomic) float verticalInterstice; // @synthesize verticalInterstice=_verticalInterstice;
@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (id)rowsInRect:(struct CGRect)arg1;
- (void)addInvalidatedIndexPath:(id)arg1;
- (void)setSize:(struct CGSize)arg1 forItemAtIndexPath:(id)arg2 invalidationContext:(id)arg3;
- (void)updateSize:(struct CGSize)arg1 forItemAtIndexPath:(id)arg2;
- (id)copyFromLayoutInfo:(id)arg1;
- (id)snapshot;
- (id)addRowAtEnd:(_Bool)arg1;
- (id)addItem;
- (void)setEstimatedSize:(struct CGSize)arg1 forSection:(int)arg2;
- (void)updateEstimatedSizeForSection:(int)arg1;
- (void)computeLayoutInRect:(struct CGRect)arg1 forSection:(int)arg2 invalidating:(_Bool)arg3 invalidationContext:(id)arg4;
- (void)computeLayoutValidatingForwardForIndexPath:(id)arg1;
@property(readonly, nonatomic) struct CGRect effectiveFooterFrameWithSectionMarginsApplied;
@property(readonly, nonatomic) struct CGRect effectiveHeaderFrameWithSectionMarginsApplied;
- (void)setFooterDimension:(float)arg1 forSection:(int)arg2;
- (void)setHeaderDimension:(float)arg1 forSection:(int)arg2;
- (void)logInvalidSizesForHorizontalDirection:(_Bool)arg1 warnAboutDelegateValues:(_Bool)arg2;
- (void)logInvalidSizes;
- (int)estimatedIndexOfItemAtPoint:(struct CGPoint)arg1;
- (void)computeLayout;
- (void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3;
- (void)invalidate;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *invalidatedIndexPaths;
- (id)init;

@end

