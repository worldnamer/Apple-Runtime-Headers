//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCSCN_EventHandler.h>

__attribute__((visibility("hidden")))
@interface QCSCN_CameraControlEventHandler : QCSCN_EventHandler
{
    id _dReserved;
}

- (BOOL)mouseUp:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (void)_computeStickyAxisIfNeeded:(struct CGPoint)arg1;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)rotateWithEvent:(id)arg1;
- (BOOL)magnifyWithEvent:(id)arg1;
- (BOOL)scrollWheel:(id)arg1;
- (float)_scrollWheelMultiplier;
- (void)updateCameraTargetIfNeeded;
- (void)_translateTo:(struct CGPoint)arg1;
- (void)_rotateWithDrag:(struct CGPoint)arg1 mode:(int)arg2 stickyAxis:(int)arg3;
- (void)_beginTranslateAtLocation:(struct CGPoint)arg1;
- (struct _SCNVector3)frontVector;
- (struct C3DSphere)viewedObjectSphere;
- (void)_startBrowsingIfNeeded:(struct CGPoint)arg1;
- (void)endDragging;
- (void)_didDragTo:(struct CGPoint)arg1;
- (void)endDraggingWithVelocity:(struct CGPoint)arg1;
- (BOOL)wantsRedraw;
- (void)viewWillDraw;
- (void)_onInertiaTimer;
- (void)_stopInertiaIfNeeded;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (void)zoomBy:(float)arg1;
- (void)zoomBy:(float)arg1 animate:(BOOL)arg2;
- (void)rotateOf:(double)arg1;
- (BOOL)isViewingAnObject;
- (float)_translationCoef;
- (void)_switchToFreeViewCamera;
- (BOOL)_freeCameraActivated;
- (void)_resetFreeViewCamera;
@property struct _SCNVector3 cameraTarget;
@property BOOL automaticCameraTarget;
@property struct _SCNVector3 gimbalLockVector;
@property BOOL gimbalLockMode;
@property double friction;
@property BOOL enableInertia;
- (void)dealloc;
- (id)init;

@end

