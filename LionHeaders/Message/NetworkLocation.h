/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class NSMutableDictionary;

@interface NetworkLocation : NSObject
{
    NSMutableDictionary *_accountDefaults;
    NSMutableDictionary *_domainsBySubnet;
}

- (id)init;
- (id)initWithDomains:(id)arg1 IPAddresses:(id)arg2;
- (id)initWithArchive:(id)arg1;
- (void)dealloc;
- (id)archive;
- (void)addDomains:(id)arg1 IPAddresses:(id)arg2;
- (id)domains;
- (id)subnets;
- (BOOL)isForIPAddress:(id)arg1;
- (BOOL)isForDomain:(id)arg1;
- (id)deliveryAccountForAccount:(id)arg1;
- (void)setAccount:(id)arg1 deliveryAccount:(id)arg2;
- (id)bestDeliveryAccountForAccount:(id)arg1 ignoreLockedDelivery:(BOOL)arg2;
- (void)_postChanged;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLocation:(id)arg1;

@end

