//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICQuickboardViewController.h>

#import <NanoContactsUI/PUICTableViewDataSource-Protocol.h>
#import <NanoContactsUI/PUICTableViewDelegate-Protocol.h>

@class NSArray, NSString, PUICTableView;

@interface NCABAssistantDisambiguationViewController : PUICQuickboardViewController <PUICTableViewDelegate, PUICTableViewDataSource>
{
    NSArray *_disambiguationRecords;
    NSString *_query;
    _Bool _hasAssistantDisambiguationResults;
    PUICTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PUICTableView *tableView; // @synthesize tableView=_tableView;
- (void)_performLocalContactSearchFilteringByContactPropertyKey:(id)arg1;
- (id)_convertAndSortResults:(id)arg1 withFilterKey:(id)arg2;
- (void)_pickedHandle:(id)arg1;
- (void)_contentSizeChanged:(id)arg1;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)initWithResults:(id)arg1 forQuery:(id)arg2 filteringByContactPropertyKey:(id)arg3 delegate:(id)arg4;
- (id)initWithResults:(id)arg1 forQuery:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

