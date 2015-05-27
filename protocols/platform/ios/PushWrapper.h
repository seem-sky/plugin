﻿/****************************************************************************
Copyright (c) 2012+2013 cocos2d+x.org
Copyright (c) 2014      musenshen
http://www.cocos2d+x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#import <Foundation/Foundation.h>

typedef enum {
    kBind = 0,
    kUnBind,
    kBindTimeOut,
} PushResult;

@interface PushWrapper : NSObject
{
    
}

/*
 这里NSDictionary的data key value必须为NSString
 */
+ (void) onBindResult:(id) obj withRet:(PushResult) ret withDic:(NSDictionary*) data;

+ (void) onNotificationResult:(id) obj withTitle:(NSString*) title withDescription:(NSString*) description withCustomContentString:(NSString*) customContentString;

+ (void) setObj:() obj;

+ (void) registerDeviceToken:(NSData *)deviceToken;

+ (void) handleNotification:(NSDictionary*)userInfo;

+ (void) setUpChannel:(NSDictionary*)launchOptions;

+ (NSDictionary*)getUpChannel;

@end