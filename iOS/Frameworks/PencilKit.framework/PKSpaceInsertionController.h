//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, PKDrawing, PKSelectionController, PKSpaceInsertionView, PKStroke, PKStrokeSelection, UIImageView, UIPanGestureRecognizer, UIView;

@interface PKSpaceInsertionController : NSObject
{
    NSMutableOrderedSet *_strokesBelow;
    NSMutableOrderedSet *_strokesAbove;
    UIView *_tapToDismissView;
    PKSpaceInsertionView *_topInsertionView;
    PKSpaceInsertionView *_bottomInsertionView;
    struct CGPoint _beginDragLocation;
    struct CGPoint _initialViewLocation;
    UIPanGestureRecognizer *_dragTopLollipopGR;
    UIPanGestureRecognizer *_dragBottomLollipopGR;
    PKStrokeSelection *_bottomStrokeSelection;
    PKStrokeSelection *_topStrokeSelection;
    UIImageView *_topImageView;
    UIImageView *_bottomImageView;
    _Bool _topHandleRemovesWhitespace;
    _Bool _isCurrentlyAddingSpace;
    _Bool _didMoveStrokes;
    PKStroke *_lassoStroke;
    PKDrawing *_drawing;
    PKSelectionController *_selectionController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool didMoveStrokes; // @synthesize didMoveStrokes=_didMoveStrokes;
@property(readonly, nonatomic) __weak PKSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) PKStroke *lassoStroke; // @synthesize lassoStroke=_lassoStroke;
@property(nonatomic) _Bool isCurrentlyAddingSpace; // @synthesize isCurrentlyAddingSpace=_isCurrentlyAddingSpace;
- (double)offsetInStrokeSpaceFromViewOffset:(double)arg1 inDrawing:(id)arg2;
- (id)_visibleStrokesOnPage:(id)arg1;
- (void)_blitStrokesToViewForSpaceInsertionType:(unsigned long long)arg1;
- (void)initTopAndBottomSelectionIfNecessary;
- (void)_temporarilyShiftStrokesWithOffset:(double)arg1 spaceInsertionType:(unsigned long long)arg2;
- (void)_makeSpaceWithOffset:(double)arg1 spaceInsertionType:(unsigned long long)arg2;
- (void)_sortStrokesAboveOrBelow;
- (void)_didEndCreatingSpace;
- (void)projectPath:(struct CGPath *)arg1 toEndOfFrame:(struct CGRect)arg2;
- (void)_addSpacingViewsWithFrame:(struct CGRect)arg1;
- (void)didBeginCreatingSpaceWithLassoStroke:(id)arg1 drawing:(id)arg2;
- (void)_layoutViewsIfNecessary;
- (void)dismissSpacingResizeHandles;
- (void)commitSpacingResize;
- (void)_dragLollipop:(id)arg1;
- (double)_initalBufferBetweenLollipops;
- (void)didScroll:(struct CGPoint)arg1;
- (id)initWithSelectionController:(id)arg1;

@end

