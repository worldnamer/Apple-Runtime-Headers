//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCInspector.h>

@class NSButton, NSMatrix, NSPopUpButton, NSTabView, NSTextField, QCTableView;

__attribute__((visibility("hidden")))
@interface QCSplitterUI : QCInspector
{
    NSPopUpButton *classMenu;
    NSTextField *minField;
    NSTextField *maxField;
    NSTabView *propertiesView;
    NSMatrix *indexRadioMatrix;
    NSTabView *indexPropertiesView;
    QCTableView *tableView;
    NSButton *removeButton;
    NSButton *addButton;
    NSTextField *maxIndices;
    NSTextField *minIndices;
}

+ (id)viewNibName;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setupViewForPatch:(id)arg1;
- (void)_updateUI:(id)arg1;
- (void)_setupUI:(id)arg1;

@end

