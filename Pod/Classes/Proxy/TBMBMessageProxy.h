/*
 * (C) 2007-2013 Alibaba Group Holding Limited
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *
 */
//
// Created by <a href="mailto:wentong@taobao.com">文通</a> on 12-12-8 下午12:30.
//


#import <Foundation/Foundation.h>

//代理对象
@interface TBMBMessageProxy : NSProxy
- (id)initWithClass:(Class)proxyClass andKey:(NSUInteger)key;

- (void)processInvocation:(NSInvocation *)invocation;
@end