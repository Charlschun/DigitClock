//
//  MOGAISendHeartBeatEvent.h
//  DigitClock
//
//  Created by edudev on 2014. 3. 27..
//  Copyright (c) 2014년 minsOne. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MOGAISendEvent.h"

@interface MOGAISendHeartBeatEvent : MOGAISendEvent

+ (void)sendEvent;

@end
