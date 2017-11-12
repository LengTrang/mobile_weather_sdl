//
//  SmartDeviceLinkService.h
//  MobileWeather
//
//  Created by Leng Trang on 5/10/16.
//  Copyright © 2016 Ford. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SmartDeviceLinkService : NSObject
+ (instancetype)sharedService;
- (void)start;
- (void)stop;
@end
