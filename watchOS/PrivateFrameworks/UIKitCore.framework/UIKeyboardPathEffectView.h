//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class CADisplayLink, NSMutableArray, NSMutableIndexSet, UIKBHandwritingQuadCurvePointFIFO;

__attribute__((visibility("hidden")))
@interface UIKeyboardPathEffectView : UIView
{
    _Bool _increasedContrastEnabled;
    _Bool _done;
    UIKBHandwritingQuadCurvePointFIFO *_pointInterpolator;
    NSMutableArray *_paths;
    NSMutableIndexSet *_pointDecayQueue;
    CADisplayLink *_pointDecayDisplayLink;
    double _startTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *pointDecayDisplayLink; // @synthesize pointDecayDisplayLink=_pointDecayDisplayLink;
@property(retain, nonatomic) NSMutableIndexSet *pointDecayQueue; // @synthesize pointDecayQueue=_pointDecayQueue;
@property(nonatomic) _Bool done; // @synthesize done=_done;
@property(nonatomic) _Bool increasedContrastEnabled; // @synthesize increasedContrastEnabled=_increasedContrastEnabled;
@property(retain, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *pointInterpolator; // @synthesize pointInterpolator=_pointInterpolator;
- (void)drawRect:(struct CGRect)arg1;
- (CDStruct_818bb265)_currentThemeSettings;
- (void)accessibilityValueChanged:(id)arg1;
- (int)keyboardAppearance;
- (void)reset;
- (void)buildOut;
- (void)_clearPointInterpolators;
- (void)addPoint:(struct CGPoint)arg1 force:(float)arg2 timestamp:(double)arg3;
- (void)_addDrawingPoint:(struct CGPoint)arg1 force:(float)arg2 sentinel:(_Bool)arg3;
- (void)_displayLinkFired:(id)arg1;
- (id)_currentPath;
- (id)_pushNewPath;
- (void)didMoveToWindow;
- (int)textEffectsVisibilityLevel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

