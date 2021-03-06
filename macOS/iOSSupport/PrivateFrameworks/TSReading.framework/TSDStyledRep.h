//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDRep.h>

#import <TSReading/TSDTilingLayerDelegate-Protocol.h>

@class CALayer, NSString, TSDMutableReflection, TSDReflection, TSDShadow;

@interface TSDStyledRep : TSDRep <TSDTilingLayerDelegate>
{
    CALayer *mShadowLayer;
    CALayer *mReflectionLayer;
    struct CGPoint mOriginalReflectionLayerPositionInScaledCanvas;
    BOOL mIsUpdatingReflectionOpacity;
    TSDMutableReflection *mDynamicReflection;
    BOOL mIsUpdatingShadow;
    TSDShadow *mDynamicShadow;
    struct {
        unsigned int shadowInvalid:1;
    } mFlags;
}

@property(readonly, nonatomic) CALayer *reflectionLayer; // @synthesize reflectionLayer=mReflectionLayer;
@property(readonly, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=mShadowLayer;
- (id)pathSourceForSelectionHighlightBehavior;
- (BOOL)shouldShowSelectionHighlight;
- (BOOL)shouldHideSelectionHighlightDueToRectangularPath;
- (id)additionalLayersUnderLayer;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffectsForAlphaOnly:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffectsOrChildren:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawReflectionInContext:(struct CGContext *)arg1 drawChildren:(BOOL)arg2;
- (void)drawReflectionInContext:(struct CGContext *)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)drawShadowInContext:(struct CGContext *)arg1 withChildren:(BOOL)arg2 withDrawableOpacity:(BOOL)arg3;
- (void)drawReflectionIntoReflectionFrameInContext:(struct CGContext *)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 drawChildren:(BOOL)arg4;
- (void)p_drawReflectionIntoReflectionFrameInContext:(struct CGContext *)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)drawGradientWithAlphaOverReflection:(struct CGContext *)arg1 applyingOpacity:(BOOL)arg2 reflectionSize:(struct CGSize)arg3;
- (struct CGImage *)p_newReflectionImageWithSize:(struct CGSize)arg1 applyOpacity:(BOOL)arg2 viewScale:(double)arg3 withBlock:(CDUnknownBlockType)arg4;
- (struct CGImage *)newShadowImageWithSize:(struct CGSize)arg1 unflipped:(BOOL)arg2 withChildren:(BOOL)arg3;
- (struct CGImage *)newShadowImageWithSize:(struct CGSize)arg1 shadow:(id)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1;
- (void)positionShadowLayer:(id)arg1 forShadow:(id)arg2 withNaturalBounds:(struct CGRect)arg3;
- (void)invalidateShadowLayer;
- (void)didUpdateEffectLayersForLayer:(id)arg1;
- (struct CGRect)reflectionLayerFrame;
- (struct CGRect)reflectionLayerFrameInRoot;
- (BOOL)isInvisible;
- (void)willUpdateEffectLayersForLayer:(id)arg1;
- (void)disposeReflectionLayer;
- (void)createReflectionLayer;
- (BOOL)shouldShowShadow;
- (BOOL)shouldShowReflection;
@property(readonly, nonatomic) TSDShadow *shadow;
@property(readonly, nonatomic) TSDReflection *reflection;
- (struct CGRect)p_rectWithEffectsAppliedToRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (struct CGRect)rectWithEffectsAppliedToRect:(struct CGRect)arg1;
@property(readonly, nonatomic) double opacity;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)p_drawReflectionInContext:(struct CGContext *)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct CGRect)p_clipRectInRootForTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)clipRect;
- (struct CGRect)clipRectWithoutEffects;
- (void)viewScaleDidChange;
- (void)setNeedsDisplay;
- (id)styledLayout;
- (id)styledInfo;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

