//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKMedicalIDEditorCell.h>

#import <HealthUI/UIPickerViewDataSource-Protocol.h>
#import <HealthUI/UIPickerViewDelegate-Protocol.h>

@class NSNumber, NSString, UIPickerView;

@interface HKMedicalIDEditorWeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_picker;
    int _localWeightUnit;
    int _numberOfRowsForPicker;
    NSNumber *_kilogramValue;
}

+ (double)defaultKilogramValue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *kilogramValue; // @synthesize kilogramValue=_kilogramValue;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)commitEditing;
- (void)beginEditing;
- (void)_hidePicker;
- (void)dealloc;
- (void)_showPicker;
- (id)formattedValue;
- (void)_localeDidChange:(id)arg1;
- (void)_commonInit;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

