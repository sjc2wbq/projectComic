//
//  NSObject+AFNetworking.h
//  BaseProject
//
//  Created by junchuanshi on 16/3/1.
//  Copyright © 2016年 JunSung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking.h>

#define kCompetionHandlerBlock (void(^)(id model, NSError *error))completionHandler;
//定义了一个block类型
typedef void(^CompetionHandlerBlock)(id model, NSError *error);
@interface NSObject (AFNetworking)

+ (id)GET:(NSString *)path parameters:(id)parameters progress:(void(^)(NSProgress *downloadProgress))downloadProgress completionHandler:(void(^)(id responseObj, NSError *error))completionHandler;

+ (id)POST:(NSString *)path parameters:(id)parameters progress:(void(^)(NSProgress *downloadProgress))downloadProgress completionHandler:(void(^)(id responseObj, NSError *error))completionHandler;
@end
