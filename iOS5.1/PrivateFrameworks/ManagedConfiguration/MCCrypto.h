/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MCCrypto : NSObject
{
}

+ (struct __SecCertificate *)copyCertificateRefFromPKCS1Data:(id)arg1;
+ (struct __SecCertificate *)copyCertificateRefFromPEMData:(id)arg1;
+ (BOOL)isValidPKCS12Data:(id)arg1;
+ (id)_decryptionFailedError;
+ (id)objectFromEncryptedData:(id)arg1 outCertificate:(struct __SecCertificate **)arg2 outError:(id *)arg3;

@end

