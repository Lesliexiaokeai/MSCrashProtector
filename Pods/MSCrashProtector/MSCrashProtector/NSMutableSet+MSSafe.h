//
//  NSMutableSet+MSSafe.h
//  
//
//  Created by J on 2013/2/27.
//  Copyright © 2013年 J. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableSet(MSSafe)

// 排除nil
- (void)addObjectSafe:(id)object;

- (void)removeObjectSafe:(id)object;
@end
