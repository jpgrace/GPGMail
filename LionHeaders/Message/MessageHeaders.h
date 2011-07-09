/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSData;

@interface MessageHeaders : NSObject <NSCopying, NSMutableCopying>
{
    NSData *_data;
    id _sender;
    unsigned int _preferredEncoding;
}

+ (void)initialize;
+ (BOOL)isAddressHeaderKey:(id)arg1;
+ (const char *)cstringForKey:(id)arg1;
+ (id)localizedHeaders;
+ (id)localizedHeadersFromEnglishHeaders:(id)arg1;
+ (id)englishHeadersFromLocalizedHeaders:(id)arg1;
- (id)initWithHeaderData:(id)arg1 encoding:(unsigned int)arg2;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)htmlStringShowingHeaderDetailLevel:(long long)arg1 useBold:(BOOL)arg2 useGray:(BOOL)arg3;
- (id)_htmlHeaderKey:(id)arg1 useBold:(BOOL)arg2 useGray:(BOOL)arg3;
- (id)_htmlValueWithKey:(id)arg1 value:(id)arg2 useBold:(BOOL)arg3;
- (id)attributedStringShowingHeaderDetailLevel:(long long)arg1;
- (id)headersDictionaryWithHeaderDetailLevel:(long long)arg1 forMessageType:(BOOL)arg2;
- (id)headerData;
- (unsigned int)preferredEncoding;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (id)_sender;
- (void)_resetSender;
- (id)allHeaderKeys;
- (id)_capitalizedKeyForKey:(id)arg1;
- (void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2;
- (BOOL)hasHeaderForKey:(id)arg1;
- (id)headersForKey:(id)arg1;
- (id)_headersForKey:(id)arg1;
- (id)firstHeaderForKey:(id)arg1;
- (id)_newHeaderValueForKey:(id)arg1 offset:(unsigned long long *)arg2;
- (id)addressListForKey:(id)arg1;
- (id)firstAddressForKey:(id)arg1;
- (id)_firstAddressForKey:(id)arg1 sender:(id)arg2;
- (id)_newDecodedAddressFromDataInRange:(struct _NSRange)arg1 sender:(id)arg2 consumedLength:(unsigned long long *)arg3;
- (id)isoLatin1CharsetHint;
- (id)mailVersion;
- (BOOL)messageIsFromMicrosoft;
- (id)encodedHeadersIncludingFromSpace:(BOOL)arg1;
- (void)appendHeaderData:(id)arg1 recipients:(id)arg2;
- (void)appendHeaderData:(id)arg1 recipients:(id)arg2 recipientsByHeaderKey:(id)arg3 expandABGroups:(BOOL)arg4 includeComment:(BOOL)arg5;
- (void)_appendAddressList:(id)arg1 toData:(id)arg2;

@end

