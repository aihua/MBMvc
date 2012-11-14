//
// Created by <a href="mailto:wentong@taobao.com">文通</a> on 12-11-13 下午1:47.
//


#import <Foundation/Foundation.h>
#import "TBMBNotification.h"


@interface TBMBDefaultNotification : NSObject <TBMBNotification>

@property(nonatomic, copy, readonly) NSString *name;
@property(nonatomic, assign) NSUInteger key;
@property(nonatomic, strong) id body;
@property(nonatomic, assign) NSUInteger retryCount;
@property(nonatomic, strong) NSDictionary *userInfo;
@property(nonatomic, strong) id <TBMBNotification> lastNotification;

- (id)initWithName:(NSString *)name;

+ (id)objectWithName:(NSString *)name;

- (id)initWithName:(NSString *)name body:(id)body;

+ (id)objectWithName:(NSString *)name body:(id)body;


- (id)initWithName:(NSString *)name key:(NSUInteger)key;

+ (id)objectWithName:(NSString *)name key:(NSUInteger)key;

- (id)initWithName:(NSString *)name key:(NSUInteger)key body:(id)body;

+ (id)objectWithName:(NSString *)name key:(NSUInteger)key body:(id)body;


@end