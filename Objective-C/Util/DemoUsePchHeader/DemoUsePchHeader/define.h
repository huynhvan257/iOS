//
//  define.h
//  DemoUsePchHeader
//
//  Created by VanHT on 2/12/16.
//  Copyright © 2016 VanHT. All rights reserved.
//

#ifndef define_h
#define define_h

#if DEBUG
#define NSLog(s, ...)    NSLog((@"\nFunction :%s \nLine :%d \nLogs :\n" s), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define NSLog(s, ...)
#endif

#endif /* define_h */
