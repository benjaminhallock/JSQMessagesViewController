//
//  Created by Jesse Squires
//  http://www.jessesquires.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSQMessagesViewController
//
//
//  GitHub
//  https://github.com/jessesquires/JSQMessagesViewController
//
//
//  License
//  Copyright (c) 2014 Jesse Squires
//  Released under an MIT license: http://opensource.org/licenses/MIT
//

#import <Foundation/Foundation.h>

#import "JSQMessagesBubbleSizeCalculating.h"

/**
 *  An instance of `JSQMessagesBubblesSizeCalculator` is responsible for calculating
 *  message bubble sizes for an instance of `JSQMessagesCollectionViewFlowLayout`.
 */
@interface JSQMessagesBubblesSizeCalculator : NSObject <JSQMessagesBubbleSizeCalculating>

/**
 *  Initializes and returns a bubble size calculator with the given cache and minimumBubbleWidth.
 *
 *  @param cache                 A cache object used to store layout information.
 *  @param minimumBubbleWidth    The minimum width for any given message bubble.
 *  @param usesFixedWidthBubbles Boolean indicating if you want same width bubbles in landscape & portrait
 *  @param additionalInset       Allows you to add additional pixels to chat bubble size calculations.
 *
 *  @return An initialized `JSQMessagesBubblesSizeCalculator` object if successful, `nil` otherwise.
 */
- (instancetype)initWithCache:(NSCache *)cache
		   minimumBubbleWidth:(NSUInteger)minimumBubbleWidth
		usesFixedWidthBubbles:(BOOL)usesFixedWidthBubbles
              additionalInset:(NSInteger)additionalInset NS_DESIGNATED_INITIALIZER;

@end