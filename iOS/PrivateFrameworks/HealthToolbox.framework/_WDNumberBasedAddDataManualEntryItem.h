//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthToolbox/WDAddDataManualEntryItem.h>

#import <HealthToolbox/WDManualDataEntryTableViewCellDelegate-Protocol.h>

@class NSNumberFormatter, WDManualDataEntryTableViewCell;

__attribute__((visibility("hidden")))
@interface _WDNumberBasedAddDataManualEntryItem : WDAddDataManualEntryItem <WDManualDataEntryTableViewCellDelegate>
{
    WDManualDataEntryTableViewCell *_tableViewCell;
    unsigned long long _manualEntryType;
    NSNumberFormatter *_numberFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) unsigned long long manualEntryType; // @synthesize manualEntryType=_manualEntryType;
- (void)setTitle:(id)arg1;
- (void)manualDataEntryTableViewCell:(id)arg1 valueDidChangeToValue:(id)arg2;
- (void)beginEditing;
- (void)setValue:(id)arg1;
- (id)generateValue;
- (id)tableViewCells;

@end

