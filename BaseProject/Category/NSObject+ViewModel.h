//
//  NSObject+ViewModel.h
//  BaseProject
//
//  Created by junchuanshi on 16/3/1.
//  Copyright © 2016年 JunSung. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSUInteger, RequestMode) {
    RequestModeRefresh,
    RequestModeMore,
};
@interface NSObject (ViewModel)
- (void)getDataWithRequestMode:(RequestMode)requestMode completionHanle:(void(^)(NSError *error))completionHandle;
/** 用于保存当前网络请求任务 */
@property (nonatomic) NSURLSessionDataTask *dataTask;
- (void)cancelTask; //取消任务
- (void)suspendTask; //暂停任务
- (void)resumeTask; //继续任务
@end
