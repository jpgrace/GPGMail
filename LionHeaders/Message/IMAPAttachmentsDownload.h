/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/IMAPCompoundDownload.h>

@interface IMAPAttachmentsDownload : IMAPCompoundDownload
{
    id <IMAPObject> _message;
}

- (void)dealloc;
- (id)initWithLibraryMessage:(id)arg1;
- (id)createCopy;
- (void)saveCompletedDownloads;
@property(retain) id <IMAPObject> message; // @synthesize message=_message;

@end

