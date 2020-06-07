﻿// Header generated by RemObjects Elements for Cocoa 

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#import <objc/NSObject.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Realm/Realm.h>

@class __iOSApp_Core_APIUrls;
@protocol __iOSApp_Core_IServiceEventReceiver;
@class __iOSApp_Core_AppCordinatorBase;
@class __iOSApp_Core_RemainderQuotient;
@class __iOSApp_Core_ServiceBase;
@class __iOSApp_Core_Storage_Data_DataObject;
@class __iOSApp_Core_Storage_Data_NamedObject;
@class __iOSApp_Core_Storage_StorageBase;
@class __iOSApp_Core_Storage_StorageException;

@protocol __iOSApp_Core_IServiceEventReceiver
@optional
- (void)OnError:(NSException * _Null_unspecified)e;
@end

@interface __iOSApp_Core_APIUrls: NSObject

{
  NSString * _Null_unspecified domain;
};

- (id _Null_unspecified)init;
- (id _Null_unspecified)initWithUrl:(NSString * _Null_unspecified)url;

@end

@interface __iOSApp_Core_AppCordinatorBase: NSObject

{
  id<UIApplicationDelegate> _Nonnull _appDelegate;
};

- (instancetype _Null_unspecified)initWithAppDelegate:(id<UIApplicationDelegate> _Nonnull)appDelegate;

@end

@interface __iOSApp_Core_RemainderQuotient: NSObject

+ (__iOSApp_Core_RemainderQuotient * _Null_unspecified)getRemainderQuotient:(int32_t)number :(int32_t)divideBy;

@property (assign) int32_t Remainder;
@property (assign) int32_t Quotient;

@end

@interface __iOSApp_Core_ServiceBase: NSObject

- (instancetype _Null_unspecified)initWithStorage:(__iOSApp_Core_Storage_StorageBase * _Null_unspecified)someStorage;
- (__iOSApp_Core_Storage_StorageBase * _Null_unspecified)Storage;
- (int32_t)offset;
- (BOOL)offline;

@property (readonly,assign) BOOL InProgress;

@end

@interface __iOSApp_Core_Storage_Data_DataObject: RLMObject


@property (assign) BOOL Modified;
@property (assign) BOOL Deleted;

@end

@interface __iOSApp_Core_Storage_Data_NamedObject: __iOSApp_Core_Storage_Data_DataObject

+ (NSString * _Null_unspecified)primaryKey;

@property (strong) NSString *Name;

@end

@interface __iOSApp_Core_Storage_StorageBase: NSObject

- (void)launch:(RLMMigration * _Null_unspecified)migration :(uint64_t)oldSchemaVersion;
- (void)launch;
- (uint64_t)schemaVersion;

@end

#define __iOSApp_Core_Storage_StorageBase_newItemStartPoint -10

@interface __iOSApp_Core_Storage_StorageException: NSException
@end

