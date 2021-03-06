/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "AccountStatusDataSourceDelegate.h"
#import "NSTableViewDataSource.h"

@class AccountStatusDataSource, MFSMTPAccount, NSArrayController, NSMutableArray, NSMutableDictionary, NSPanel, NSPopUpButton, NSSegmentedControl, NSTableView, NSTextField;

@interface SMTPSettings : NSObject <AccountStatusDataSourceDelegate, NSTableViewDataSource>
{
    MFSMTPAccount *_selectedDeliveryAccount;
    AccountStatusDataSource *_deliveryASDS;
    NSMutableArray *_accountsInConflict;
    NSMutableDictionary *_cachedAccountEmployment;
    NSMutableDictionary *_cachedAccountEmploymentStrings;
    BOOL _didRegisterForNotifications;
    NSMutableArray *_deliveryAccounts;
    NSArrayController *_deliveryAccountsController;
    NSPanel *_panel;
    NSTableView *_accountTable;
    NSTextField *_portField;
    NSSegmentedControl *_addRemoveAccountControl;
    NSPopUpButton *_tlsCertificatePopUp;
}

+ (id)sharedPanel;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
@property(nonatomic) NSPopUpButton *tlsCertificatePopUp; // @synthesize tlsCertificatePopUp=_tlsCertificatePopUp;
@property(nonatomic) NSSegmentedControl *addRemoveAccountControl; // @synthesize addRemoveAccountControl=_addRemoveAccountControl;
@property(nonatomic) NSTextField *portField; // @synthesize portField=_portField;
@property(nonatomic) NSTableView *accountTable; // @synthesize accountTable=_accountTable;
@property(retain, nonatomic) NSPanel *panel; // @synthesize panel=_panel;
@property(retain, nonatomic) NSArrayController *deliveryAccountsController; // @synthesize deliveryAccountsController=_deliveryAccountsController;
@property(retain) NSMutableArray *deliveryAccounts; // @synthesize deliveryAccounts=_deliveryAccounts;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)_restoreMailAccountDefaultAccounts;
- (void)_recacheAccountEmployment;
- (void)_removeInvalidAccounts;
- (id)_defaultColumnSortDescriptor;
- (BOOL)_checkForConflicts;
- (void)_accountInfoDidChange:(id)arg1;
- (BOOL)_validateAccounts;
- (void)_updateTLSCertificateForOldAccount:(id)arg1 newAccount:(id)arg2;
- (void)_updatePortFieldEnabled;
- (void)_updatePortNumberForOldAccount:(id)arg1 newAccount:(id)arg2;
- (void)_syncBindings;
- (void)dismissPanel:(id)arg1;
- (void)addRemoveAccountClicked:(id)arg1;
- (void)runSheetRelativeToWindow:(id)arg1 selectedAccount:(id)arg2 didEndDelegate:(id)arg3;
- (void)_updateEnableRemoveAccountControl;
- (void)_updateEnableAddAccountControl;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

