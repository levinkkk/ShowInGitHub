/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "NSWindowDelegate-Protocol.h"

@class DVTBorderedView, DVTReplacementView, IDEExecutionEnvironment, IDENavigableItemCoordinator, IDENavigatorDataCell, IDENavigatorOutlineView, IDEScheme, IDESchemeAction, IDEWorkspace, NSArray, NSArrayController, NSButton, NSPopUpButton, NSSegmentedControl, NSString, NSTabView, NSTextField, NSWindow;

@interface IDERunSheetController : IDEViewController <NSWindowDelegate>
{
    NSWindow *_sheetWindow;
    NSSegmentedControl *_breakpointsButton;
    NSButton *_goButton;
    NSButton *_doneButton;
    DVTBorderedView *_masterBorderedView;
    IDENavigatorOutlineView *_runPhasesOutlineView;
    DVTBorderedView *_detailBorderedView;
    DVTReplacementView *_detailReplacementView;
    NSArrayController *_customDataStoresArrayController;
    NSTabView *_topTabView;
    NSTextField *_nameField;
    NSPopUpButton *_containerPopUp;
    NSArray *_phaseModelNavigables;
    IDENavigatorDataCell *_phaseCell;
    IDENavigatorDataCell *_subphaseCell;
    NSWindow *_workspaceWindow;
    IDEWorkspace *_workspace;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    id <DVTObservingToken> _runContextObservingToken;
    id <DVTObservingToken> _runContextClosingObservingToken;
    id <DVTObservingToken> _breakpointsActivatedObservingToken;
    id <DVTObservingToken> _buildPhaseSubtitleObservingToken;
    id <DVTObservingToken> _testPhaseSubtitleObservingToken;
    id <DVTObservingToken> _launchPhaseSubtitleObservingToken;
    id <DVTObservingToken> _archivePhaseSubtitleObservingToken;
    id <DVTObservingToken> _profilePhaseSubtitleObservingToken;
    id <DVTObservingToken> _analyzePhaseSubtitleObservingToken;
    id <DVTObservingToken> _installPhaseSubtitleObservingToken;
    id <DVTObservingToken> _customDataStoresControllerObservingToken;
    BOOL _okButtonReflectsSchemeCommand;
    int _selectedSchemeCommand;
    NSString *_selectedSchemeCommandTitle;
    id _completionBlock;
    Class _viewControllerClassForSelectedRunPhase;
    BOOL _isDetailViewContentBound;
    IDESchemeAction *_selectedRunPhase;
    BOOL _didSheetEnd;
    BOOL _runningOnManageSheet;
}

+ (void)beginSheetForWindow:(id)arg1 workspaceWindow:(id)arg2 editingIdentity:(BOOL)arg3 forSchemeCommand:(int)arg4 okButtonReflectsSchemeCommand:(BOOL)arg5 showDoneButton:(BOOL)arg6 completionHandler:(id)arg7;
+ (id)keyPathsForValuesAffectingExecutionEnvironment;
+ (id)keyPathsForValuesAffectingRunContext;
- (void)_beginSheetForWindow:(id)arg1 workspaceWindow:(id)arg2 editingIdentity:(BOOL)arg3 forSchemeCommand:(int)arg4 okButtonReflectsSchemeCommand:(BOOL)arg5 showDoneButton:(BOOL)arg6 completionHandler:(id)arg7;
- (void)_bindDetailViewContent;
- (void)_forceEditingToEnd;
- (id)_phaseCell;
- (int)_runControllerPhaseRowIndexForSchemeCommand:(int)arg1;
- (void)_setUpDetailView;
- (void)_setUpMainUI;
- (void)_setUpObservation;
- (id)_subphaseCell;
- (void)_unbindDetailViewContent;
- (void)_updatePhaseNavigables;
- (void)_updateSelectedRunPhaseRowIndex;
- (void)_updateSelectedSchemeCommand;
- (void)_updateStoreImagesInPopUp;
- (void)breakpointsButtonAction:(id)arg1;
- (void)duplicateContextAction:(id)arg1;
@property(readonly) IDEExecutionEnvironment *executionEnvironment;
@property BOOL isDetailViewContentBound; // @synthesize isDetailViewContentBound=_isDetailViewContentBound;
- (void)manageContextsAction:(id)arg1;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
@property(copy) NSArray *phaseModelNavigables; // @synthesize phaseModelNavigables=_phaseModelNavigables;
@property(readonly) IDEScheme *runContext;
@property IDESchemeAction *selectedRunPhase; // @synthesize selectedRunPhase=_selectedRunPhase;
@property int selectedSchemeCommand; // @synthesize selectedSchemeCommand=_selectedSchemeCommand;
@property(copy) NSString *selectedSchemeCommandTitle; // @synthesize selectedSchemeCommandTitle=_selectedSchemeCommandTitle;
@property(copy) Class viewControllerClassForSelectedRunPhase; // @synthesize viewControllerClassForSelectedRunPhase=_viewControllerClassForSelectedRunPhase;
@property IDEWorkspace *workspace;
@property NSWindow *workspaceWindow; // @synthesize workspaceWindow=_workspaceWindow;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)sheetDoneAction:(id)arg1;
- (void)sheetGoAction:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;
- (void)windowDidResize:(id)arg1;

@end
