//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNPickerViewController.h>

@class NSArray, NSString;
@protocol TFNDirectMessageQuickReplyOption;

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter50DirectMessageQuickReplyOptionsPickerViewController : TFNPickerViewController
{
    // Error parsing type: , name: quickReplyID
    // Error parsing type: , name: optionsDataSource
    // Error parsing type: , name: adapter
    // Error parsing type: , name: customKeyboard
}

- (void).cxx_destruct;
- (id)initWithDataSource:(id)arg1 options:(unsigned long long)arg2;
- (id)calculatedLayoutMetrics;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (long long)editingStyleForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (id)tableViewCellForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithQuickReplyID:(id)arg1 options:(id)arg2 selectedOption:(id)arg3;
@property(nonatomic, retain) id <TFNDirectMessageQuickReplyOption> selectedOption;
@property(nonatomic, readonly) NSArray *quickReplyOptions;
@property(nonatomic, readonly) NSString *quickReplyID; // @synthesize quickReplyID;

@end

